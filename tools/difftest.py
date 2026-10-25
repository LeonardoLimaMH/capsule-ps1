#!/usr/bin/env python3
"""Teste diferencial: função original x função compilada do nosso C.

Executa a mesma função em dois emuladores MIPS R3000 (Unicorn) a partir de
estados iniciais idênticos e aleatórios:
  A) binário original;
  B) binário original + nosso C compilado em área livre (0x80180000), com a
     entrada da função original desviada (j) para a versão em C.
Todos os demais endereços ficam iguais, então registradores e a RAM inteira
podem ser comparados após o retorno.

Funções do jogo chamadas pela função testada executam de verdade. Funções do
SDK PsyQ (dependentes de hardware: GPU, CD, SPU...) e vetores da BIOS viram
stubs instrumentados: cada chamada é registrada (nome + a0..a3) e retorna um
valor determinístico. O log de chamadas de A e B também é comparado.

Resultado por tentativa: idêntica, divergente, ou inconclusiva (ambos os lados
travaram/estouraram do mesmo modo). Inconclusivas nunca contam como aprovação.
Instruções GTE (COP2) não são emuladas: o caso é "não suportado".

Uso (dentro do container):
  difftest.py <alvo> <função> [--src arquivo.c] [--trials 200] [--seed 1]
Saída: 0 = equivalente; 1 = divergência; 2 = inconclusivo/não suportado.
"""
import argparse
import os
import pathlib
import random
import re
import subprocess
import sys
import tempfile
import time

from unicorn import (Uc, UcError, UC_ARCH_MIPS, UC_MODE_MIPS32, UC_MODE_LITTLE_ENDIAN,
                     UC_HOOK_INTR, UC_HOOK_CODE, UC_HOOK_MEM_WRITE, UC_HOOK_MEM_READ)
from unicorn.mips_const import *

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import arity  # noqa: E402
import g0fill  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent
RAM_SIZE = 0x200000
CAND_BASE = 0x80180000          # área livre usada para o código candidato
STACK_TOP = 0x801FFF00
SENTINEL = 0x80000400           # endereço de retorno falso
MAX_INSNS = 2_000_000
MIN_CONCLUSIVE = 0.25           # fração mínima de tentativas conclusivas
ABI_MAX_TRIALS = 3000           # --abi: sorteios no máximo (passa de 1000 só se já houver execuções idênticas)
ABI_MAX_SECONDS = 240           # --abi: tempo máximo de sorteios por função
ABI_MIN_SAME = 50               # --abi: execuções completas idênticas exigidas (e nenhuma divergente)

TARGETS = {
    "yuugi": ("disc/YUUGI.EXE", 0x800, 0x80010000, "build/yuugi.elf"),
    "slpm": ("disc/SLPM_860.96", 0x800, 0x80110000, "build/slpm.elf"),
    "chess": ("disc/MASTER/PSF/CHESS.BIN", 0, 0x80097800, "build/chess.elf"),
    "raise": ("disc/MASTER/PSF/RAISE.BIN", 0, 0x80097800, "build/raise.elf"),
    "etc": ("disc/MASTER/PSF/ETC.BIN", 0, 0x80097800, "build/etc.elf"),
}
GP = {"slpm": 0x80133474}
CPP_FLAGS = ("-Iinclude -undef -Wall -lang-c -nostdinc -D__GNUC__=2 -D__OPTIMIZE__ -Dmips "
             "-D__mips__ -D__mips -Dpsx -D__psx__ -D__psx -D_PSYQ -D_MIPSEL -D_LANGUAGE_C "
             "-DLANGUAGE_C -DPERMUTER -DDIFFTEST")
MASPSX = ("python3 /opt/maspsx/maspsx.py --aspsx-version=2.79 --expand-div --use-comm-section --dont-force-G0 "
          "--run-assembler --gnu-as-path mips-linux-gnu-as -EL -Iinclude -march=r3000 "
          "-mtune=r3000 -no-pad-sections -O1 -G8")
REGS = [UC_MIPS_REG_V0, UC_MIPS_REG_V1, UC_MIPS_REG_S0, UC_MIPS_REG_S1, UC_MIPS_REG_S2,
        UC_MIPS_REG_S3, UC_MIPS_REG_S4, UC_MIPS_REG_S5, UC_MIPS_REG_S6, UC_MIPS_REG_S7,
        UC_MIPS_REG_FP, UC_MIPS_REG_SP, UC_MIPS_REG_GP]
REG_NAMES = ["v0", "v1", "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7", "fp", "sp", "gp"]
JR_RA_NOP = (0x03E00008).to_bytes(4, "little") + bytes(4)


class Unsupported(Exception):
    pass


def sh(cmd):
    r = subprocess.run("set -o pipefail; " + cmd, shell=True, executable="/bin/bash", cwd=ROOT,
                       capture_output=True, text=True)  # erro do cc1 não fica mascarado pelo pipe
    if r.returncode:
        sys.exit(f"falhou: {cmd}\n{r.stderr}")
    return r.stdout


def file_compiler(src):
    """Compilador do arquivo, como no build (config/compilers.txt; padrão GCC 2.7.2)."""
    key = pathlib.Path(src).as_posix()
    cfg = ROOT / "config" / "compilers.txt"
    if cfg.exists():
        for l in cfg.read_text(encoding="utf-8").splitlines():
            p = l.split("#")[0].split()
            if len(p) == 2 and p[0] == key:
                return p[1]
    return "2.7.2-psx"


def build_candidate(target, src, func, force_g0=False):
    """Compila o .c (sem os INCLUDE_ASM) e liga em CAND_BASE contra os símbolos originais.

    force_g0 (modo --abi): globais sempre por endereço absoluto. O comportamento é o
    mesmo; evita que um global declarado com tamanho vire acesso $gp fora do alcance.
    """
    tmp = pathlib.Path(tempfile.mkdtemp())
    obj, elf, binf, lds = tmp / "c.o", tmp / "c.elf", tmp / "c.bin", tmp / "c.ld"
    g0 = force_g0 or g0fill.enabled(src)
    back = g0fill.backend(obj) if g0 else f"{MASPSX} -o {obj}"
    sh(f"mips-linux-gnu-cpp {CPP_FLAGS} {src} | /opt/gcc-{file_compiler(src)}/cc1 -O2 "
       f"{'-G0' if g0 else '-G8'} {'-fno-builtin' if force_g0 else ''} -quiet -mcpu=3000 -fgnu-linker -mgas "
       f"-msoft-float -gcoff | {back}")  # --abi: memcpy etc. chamados de verdade, como no original
    # renomeia as funções definidas no objeto (X -> X__cand) para não colidirem com
    # os símbolos do binário original; referências internas acompanham o rename
    defined = [l.split()[2] for l in sh(f"mips-linux-gnu-nm {obj}").splitlines()
               if len(l.split()) == 3 and l.split()[1] in "Tt" and not re.match(r"\$?\.?L\d|L[0-9A-F]{8}$", l.split()[2])]
    if func not in defined:
        sys.exit(f"{func} não está em C em {src}")
    ren = " ".join(f"--redefine-sym {s}={s}__cand" for s in defined)
    sh(f"mips-linux-gnu-objcopy {ren} {obj}")
    # endereços com extensão de sinal: o ld (host 64-bit) estende os símbolos ELF32-MIPS
    lds.write_text(f"""SECTIONS {{
    . = 0xFFFFFFFF{CAND_BASE:08X};
    .text : {{ *(.text) }}
    .rodata : {{ *(.rodata*) }}
    .data : {{ *(.data) *(.sdata) }}
    .bss : {{ *(.sbss) *(.bss) *(COMMON) }}
    /DISCARD/ : {{ *(*) }}
}}
""")
    sh(f"mips-linux-gnu-ld -EL -nostdlib --allow-multiple-definition "
       f"--just-symbols={TARGETS[target][3]} -T {lds} -e {func}__cand -o {elf} {obj}")
    sh(f"mips-linux-gnu-objcopy -O binary {elf} {binf}")
    addr = int(sh(f"mips-linux-gnu-nm {elf} | grep ' {func}__cand$'").split()[0], 16) & 0xFFFFFFFF
    return binf.read_bytes(), addr


def elf_symbols(target):
    out = {}
    for l in sh(f"mips-linux-gnu-nm {TARGETS[target][3]}").splitlines():
        p = l.split()
        if len(p) == 3:
            out[p[2]] = int(p[0], 16)
    return out


def stub_addrs(target):
    """Funções do SDK a substituir por stubs: as do alvo e, em overlays, as do principal."""
    files = [f"config/symbols.{target}.psyq.txt"]
    if target in ("chess", "raise", "etc"):
        files.append("config/symbols.yuugi.psyq.txt")
    stubs = {}
    for f in files:
        for l in (ROOT / f).read_text(encoding="utf-8").splitlines():
            m = re.match(r"(\w+) = (0x[0-9A-Fa-f]+);", l)
            if m:
                stubs[int(m.group(2), 16)] = m.group(1)
    return stubs


def game_func_addrs(target):
    """Funções do jogo (para --isolate): nomes do assembly completo, endereços do ELF;
    em overlays, também as do executável principal."""
    out = {}
    for t in [target] + (["yuugi"] if target in ("chess", "raise", "etc") else []):
        names = {p.stem for p in (ROOT / ".cache" / "fullasm" / t).rglob("*.s")}
        for l in sh(f"mips-linux-gnu-nm {TARGETS[t][3]}").splitlines():
            q = l.split()
            if len(q) == 3 and q[1] in "Tt" and q[2] in names:
                out[int(q[0], 16)] = q[2]
    return out


def read_cstr(uc, v):
    """Bytes da string C apontada por v (texto imprimível terminado em NUL), ou None."""
    if not 0x80000000 <= v < 0x80000000 + RAM_SIZE:
        return None
    data = bytes(uc.mem_read(v & 0x1FFFFFFF, min(256, 0x80000000 + RAM_SIZE - v)))
    end = data.find(0)
    if end <= 0 or any(not (0x20 <= c < 0x7F or c in (9, 10, 13)) for c in data[:end]):
        return None
    return data[:end]


def same_calls(a, b, cand_lo, cand_hi, relaxed, alias=(None, None)):
    """Chamadas iguais. relaxed (--abi): só os argumentos que a função chamada lê contam
    (tools/arity.py; o resto é lixo nos registradores), e um ponteiro diferente também
    vale se o do C aponta para a área do próprio candidato (string literal copiada) e as
    duas strings são iguais. alias: (endereço da função no candidato, no original): a
    função que passa o próprio endereço (callback de si mesma) é a mesma dos dois lados."""
    (ca, sa), (cb, sb) = a, b
    if ca == cb:
        return True, None
    for k, (x, y) in enumerate(zip(ca, cb)):
        if x == y:
            continue
        if not relaxed or x[0] != y[0] or len(x) != len(y):
            return False, k
        if x[0].startswith("BIOS") or x[0] == "syscall":
            idx = range(len(x) - 1)
        else:
            idx = list(range(arity.arity(x[0]))) + list(range(4, len(x) - 1))
        for i in idx:
            u, w = x[1 + i], y[1 + i]
            if u != w and (w, u) != alias and not (cand_lo <= w < cand_hi and sa[k][i] is not None
                                                   and sa[k][i] == sb[k][i]):
                return False, k
    if len(ca) != len(cb):
        return False, min(len(ca), len(cb))
    return True, None


def func_size(func):
    s = arity.asm_files().get(func)
    m = s and re.search(r"nonmatching\s+\S+,\s*(0x[0-9A-Fa-f]+)", s.read_text(encoding="utf-8", errors="ignore"))
    return int(m.group(1), 16) if m else 8


def run(entry, regs, ram, stubs, extra, game_names=frozenset(), guard=()):
    mu = Uc(UC_ARCH_MIPS, UC_MODE_MIPS32 | UC_MODE_LITTLE_ENDIAN)
    mu.mem_map(0x00000000, RAM_SIZE)           # kseg0 0x80000000 -> físico 0
    mu.mem_map(0x1F800000, 0x2000)             # scratchpad + registradores de I/O
    mu.mem_write(0, ram)
    for addr, data in extra:
        mu.mem_write(addr & 0x1FFFFFFF, data)
    for r, v in regs.items():
        mu.reg_write(r, v)
    mu.reg_write(UC_MIPS_REG_RA, SENTINEL)
    calls = []
    strings = []  # conteúdo de cada argumento que aponte para uma string (ver same_calls)
    state = {"err": None}

    def on_stub(uc, addr, size, user):
        name = stubs.get(addr) or {0xA0: "BIOS_A0", 0xB0: "BIOS_B0", 0xC0: "BIOS_C0"}.get(addr & 0x1FFFFFFF)
        if name is None:
            return
        args = tuple(uc.reg_read(r) for r in (UC_MIPS_REG_A0, UC_MIPS_REG_A1, UC_MIPS_REG_A2,
                                               UC_MIPS_REG_A3))
        if name.startswith("BIOS"):
            args = (uc.reg_read(UC_MIPS_REG_T1),) + args
        elif name in game_names:
            sp = uc.reg_read(UC_MIPS_REG_SP)
            k = arity.stack_args(name)
            if k and 0x80000000 <= sp < 0x80000000 + RAM_SIZE - 0x10 - 4 * k:
                raw = bytes(uc.mem_read((sp + 0x10) & 0x1FFFFFFF, 4 * k))
                args += tuple(int.from_bytes(raw[i:i + 4], "little") for i in range(0, 4 * k, 4))
        calls.append((name,) + args)
        strings.append(tuple(read_cstr(uc, v) for v in args))
        if game_names:
            # --isolate: retorno que serve de inteiro e de ponteiro (alinhado, dentro da RAM)
            uc.reg_write(UC_MIPS_REG_V0, 0x80120000 + len(calls) * 0x40)
        else:
            uc.reg_write(UC_MIPS_REG_V0, (len(calls) * 0x9E3779B1) & 0xFFFF)  # retorno determinístico

    def on_intr(uc, intno, user):
        pc = uc.reg_read(UC_MIPS_REG_PC)
        if intno == 17:  # syscall (Enter/ExitCriticalSection...): registra e segue
            calls.append(("syscall", uc.reg_read(UC_MIPS_REG_A0)))
            uc.reg_write(UC_MIPS_REG_PC, pc + 4)
            return
        state["err"] = state["err"] or f"exceção {intno} em {pc:#x}"
        uc.emu_stop()

    for addr in list(stubs) + [0x800000A0, 0x800000B0, 0x800000C0]:
        mu.mem_write(addr & 0x1FFFFFFF, JR_RA_NOP)
        mu.hook_add(UC_HOOK_CODE, on_stub, begin=addr, end=addr)
    mu.hook_add(UC_HOOK_INTR, on_intr)

    def on_code_write(uc, access, addr, size, value, user):
        # a função escreve sobre o código testado (o original ou o candidato): cada lado
        # modificaria um código diferente, então a execução não diz nada
        state["err"] = state["err"] or f"escrita no código da função em {addr:#x}"
        uc.emu_stop()

    for lo, hi in guard:
        # ganchos de memória recebem o endereço físico (kseg0 sem o 0x80000000)
        mu.hook_add(UC_HOOK_MEM_WRITE, on_code_write, begin=lo & 0x1FFFFFFF, end=(hi - 1) & 0x1FFFFFFF)

    def on_code_read(uc, access, addr, size, value, user):
        # leitura (como dado) do trecho do original, que no lado do C virou o desvio
        state["err"] = state["err"] or f"leitura do código da função em {addr:#x}"
        uc.emu_stop()

    if guard:
        mu.hook_add(UC_HOOK_MEM_READ, on_code_read, begin=guard[0][0] & 0x1FFFFFFF, end=(guard[0][1] - 1) & 0x1FFFFFFF)
    try:
        mu.emu_start(entry, SENTINEL, count=MAX_INSNS)
    except UcError as e:
        pc = mu.reg_read(UC_MIPS_REG_PC)
        p = pc & 0x1FFFFFFF
        word = int.from_bytes(mu.mem_read(p, 4), "little") if p < RAM_SIZE else 0
        if (word >> 26) == 0x12:
            raise Unsupported(f"instrução GTE em {pc:#x}")
        return None, f"{e} em {pc:#x}"
    if state["err"]:
        return None, state["err"]
    if mu.reg_read(UC_MIPS_REG_PC) != SENTINEL:
        return None, f"limite de {MAX_INSNS} instruções"
    return ([mu.reg_read(r) for r in REGS], bytes(mu.mem_read(0, RAM_SIZE)), (calls, strings)), None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("func")
    ap.add_argument("--src")
    ap.add_argument("--trials", type=int, default=200)
    ap.add_argument("--seed", type=int, default=1)
    ap.add_argument("--abi", action="store_true",
                    help="equivalência funcional: ignora v1 (temporário, só usado em retorno de 64 bits)")
    ap.add_argument("--isolate", action="store_true",
                    help="com --abi: funções do jogo chamadas também viram stubs (argumentos de "
                         "registrador e de pilha comparados)")
    ap.add_argument("--check-v1", action="store_true",
                    help="com --abi: compara também v1 (algum chamador lê a metade alta de um "
                         "retorno de 64 bits, tools/retuse.py)")
    ap.add_argument("--ignore-v0", action="store_true",
                    help="nenhum chamador lê o retorno (tools/retuse.py): v0 não é comparado")
    a = ap.parse_args()
    path, hdr, base, _ = TARGETS[a.target]
    if a.src:
        src = a.src
    else:
        src = next(str(p.relative_to(ROOT)) for p in sorted((ROOT / "src" / a.target).rglob("*.c"))
                   if re.search(rf"^\S.*\b{a.func}\s*\([^;]*$", p.read_text(encoding="utf-8"), re.M))
    image = (ROOT / path).read_bytes()[hdr:]
    main_image = None
    if a.target in ("chess", "raise", "etc"):
        mpath, mhdr = TARGETS["yuugi"][0], TARGETS["yuugi"][1]
        main_image = (ROOT / mpath).read_bytes()[mhdr:]
    cand, cand_entry = build_candidate(a.target, src, a.func, force_g0=a.abi)
    entry = elf_symbols(a.target)[a.func] & 0xFFFFFFFF
    stubs = stub_addrs(a.target)
    game_names = frozenset()
    if a.isolate:
        # a função testada em isolamento: as funções do jogo que ela chama são o mesmo
        # código original dos dois lados; viram stubs que registram os argumentos
        games = game_func_addrs(a.target)
        stubs = {**games, **stubs}
        game_names = frozenset(games.values())
    if entry in stubs:
        del stubs[entry]  # testando uma função do próprio SDK
    guard = ((entry, entry + func_size(a.func)), (CAND_BASE, CAND_BASE + len(cand)))
    jump = ((0x02 << 26) | ((cand_entry >> 2) & 0x3FFFFFF)).to_bytes(4, "little") + bytes(4)
    rng = random.Random(a.seed)
    same = inconclusive = unsupported = 0
    reasons = {}

    def norm(m):
        # ignora a área do candidato, o desvio e a pilha abaixo de sp (morta após o retorno)
        m = bytearray(m)
        c = CAND_BASE & 0x1FFFFFFF
        m[c:c + len(cand)] = bytes(len(cand))
        e = entry & 0x1FFFFFFF
        m[e:e + 8] = bytes(8)
        s = STACK_TOP & 0x1FFFFFFF
        m[s - 0x10000:s] = bytes(0x10000)
        return bytes(m)

    # --abi: estados em que os dois lados travam não contam; continua sorteando (até
    # ABI_MAX_TRIALS) até juntar a.trials execuções completas idênticas
    limit = ABI_MAX_TRIALS if a.abi else a.trials
    started = time.monotonic()
    done = 0
    for t in range(limit):
        if a.abi and same >= a.trials:
            break
        if a.abi and t >= 1000 and same < 10:
            break  # quase tudo inconclusivo: mais sorteios não vão ajudar
        if a.abi and time.monotonic() - started > ABI_MAX_SECONDS:
            break  # laços longos no limite de instruções: decide com o que já tem
        done += 1
        if t % 2:
            ram = bytearray(RAM_SIZE)   # metade das tentativas com RAM zerada
        else:
            ram = bytearray(rng.getrandbits(8) for _ in range(0x1000)) * (RAM_SIZE // 0x1000)
        if main_image is not None:
            # overlay: o executável principal fica na memória, como no jogo (as funções
            # comuns que o overlay chama existem de verdade)
            moff = TARGETS["yuugi"][2] & 0x1FFFFFFF
            ram[moff:moff + len(main_image)] = main_image
        off = base & 0x1FFFFFFF
        ram[off:off + len(image)] = image
        s = SENTINEL & 0x1FFFFFFF
        ram[s:s + 8] = (0x1000FFFF).to_bytes(4, "little") + bytes(4)

        def arg():
            k = rng.random()
            if k < 0.3:
                return rng.randrange(0, 16)
            if k < 0.7:  # ponteiro para dentro da RAM (área de dados/heap)
                return 0x80000000 | (rng.randrange(0x100000, 0x170000) & ~3)
            return rng.getrandbits(32)
        regs = {r: arg() for r in (UC_MIPS_REG_A0, UC_MIPS_REG_A1, UC_MIPS_REG_A2, UC_MIPS_REG_A3)}
        for r in REGS[2:11]:
            regs[r] = rng.getrandbits(32)
        regs[UC_MIPS_REG_SP] = STACK_TOP
        regs[UC_MIPS_REG_GP] = GP.get(a.target, 0x80078B6C)
        try:
            # o candidato fica na memória dos dois lados: uma leitura por ponteiro sorteado
            # que caia ali lê o mesmo conteúdo
            ra, ea = run(entry, regs, bytes(ram), stubs, [(CAND_BASE, cand)], game_names, guard)
            rb, eb = run(entry, regs, bytes(ram), stubs, [(CAND_BASE, cand), (entry, jump)], game_names, guard)
        except Unsupported:
            unsupported += 1
            continue
        if ea and eb:
            inconclusive += 1
            reasons[ea] = reasons.get(ea, 0) + 1
            continue
        if a.abi and (ea or eb) and "limite de" in (ea or eb):
            # um lado só estourou o limite de instruções (laço longo: o C pode gastar
            # menos instruções por volta); não diz nada sobre o resultado
            inconclusive += 1
            reasons["limite de instruções de um lado"] = reasons.get("limite de instruções de um lado", 0) + 1
            continue
        if ea or eb:
            print(f"[DIVERGENTE] tentativa {t}: original={ea or 'ok'} | C={eb or 'ok'}")
            sys.exit(1)
        (rega, mema, calla), (regb, memb, callb) = ra, rb
        if os.environ.get("DT_DEBUG"):
            print([(n, hex(x), hex(y)) for n, x, y in zip(REG_NAMES, rega, regb) if x != y], {k: hex(v) for k, v in regs.items()})
        bad = [n for n, x, y in zip(REG_NAMES, rega, regb)
               if x != y and not (a.abi and n == "v1" and not a.check_v1) and not (a.ignore_v0 and n == "v0")]
        ok, k = same_calls(calla, callb, CAND_BASE, CAND_BASE + len(cand), a.abi, (cand_entry, entry))
        if not ok:
            calla, callb = calla[0], callb[0]
            fmt = lambda c: f"{c[0]}({', '.join(hex(v) for v in c[1:])})" if c else "-"
            print(f"[DIVERGENTE] tentativa {t}: chamada #{k}: original={fmt(calla[k] if k < len(calla) else None)}"
                  f" | C={fmt(callb[k] if k < len(callb) else None)}")
            sys.exit(1)
        ma, mb = norm(mema), norm(memb)
        if bad or ma != mb:
            diff = [i for i in range(RAM_SIZE) if ma[i] != mb[i]][:8]
            print(f"[DIVERGENTE] tentativa {t}: registradores {bad}; RAM difere em "
                  f"{[hex(0x80000000 | i) for i in diff]}")
            sys.exit(1)
        same += 1
    conclusive = done - unsupported
    if unsupported == done:
        print(f"[NÃO SUPORTADO] {a.target}:{a.func} (usa GTE)")
        sys.exit(2)
    if (same < ABI_MIN_SAME) if a.abi else (same < MIN_CONCLUSIVE * conclusive or same == 0):
        print(f"[INCONCLUSIVO] {a.target}:{a.func} — {same} idênticas, {inconclusive} inconclusivas: "
              f"{sorted(reasons.items(), key=lambda x: -x[1])[:3]}")
        sys.exit(2)
    print(f"[EQUIVALENTE] {a.target}:{a.func} — {same} tentativas idênticas"
          + (f", {inconclusive} inconclusivas" if inconclusive else "")
          + (f", {unsupported} não suportadas" if unsupported else ""))


if __name__ == "__main__":
    main()
