#!/usr/bin/env python3
"""Decompilação automática assistida (rodar no container: ./run.sh).

Para cada função ainda em INCLUDE_ASM (da menor para a maior):
  1. gera um rascunho com o m2c;
  2. converte o rascunho em C compilável (tipos desconhecidos -> s32,
     declarações em escopo de bloco, globais fora da área $gp declarados como
     arrays incompletos para que o acesso seja absoluto, como no original);
  3. compila com o pipeline original e compara byte a byte (tools/match.py);
  4. tenta algumas variações (com/sem protótipos, tipos sem sinal);
  5. guarda o C que casou em .cache/auto/<alvo>/<função>.c.

Com --apply, os resultados guardados substituem os INCLUDE_ASM correspondentes
em src/. O build completo (SHA-1) deve ser verificado em seguida (make).

Uso:
  autodecomp.py <alvo> [--max-size 0x200] [--limit N] [--jobs 8]
  autodecomp.py <alvo> --apply
"""
import argparse
import concurrent.futures as cf
import json
import pathlib
import re
import subprocess
import sys
import tempfile

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import match  # noqa: E402
from handwritten import load as load_handwritten  # noqa: E402
import typeinfer  # noqa: E402
import ghidra2c  # noqa: E402
import g0fill  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent
CACHE = ROOT / ".cache" / "auto"
GP = {"slpm": 0x80133474}
INCLUDE = re.compile(r'INCLUDE_ASM\(\s*"([^"]+)"\s*,\s*(\w+)\s*\);')
SYM_RE = re.compile(r"\b(D_[0-9A-F]{8}|jtbl_[0-9A-F]{8}|__bss_start|__bss_end|g_\w+)\b")


_ASM_INDEX = {}


def _index(base):
    """Índice nome -> caminho dos .s de um diretório (uma varredura por diretório)."""
    if base not in _ASM_INDEX:
        _ASM_INDEX[base] = {p.stem: p for p in base.rglob("*.s")} if base.exists() else {}
    return _ASM_INDEX[base]


def asm_path(target, func):
    """Assembly da função: asm/ (pendentes) ou .cache/fullasm (todas, ver full_asm.py)."""
    for base in (ROOT / "asm" / target / "nonmatchings", ROOT / ".cache" / "fullasm" / target / "nonmatchings"):
        hit = _index(base).get(func)
        if hit:
            return hit
    return None


def func_size(path):
    m = re.search(r"nonmatching\s+\S+,\s*(0x[0-9A-Fa-f]+)", path.read_text(encoding="utf-8"))
    return int(m.group(1), 16) if m else 0


def clean_asm(src, dst):
    lines = []
    for l in src.read_text(encoding="utf-8").splitlines():
        s = l.strip()
        if s.startswith(("nonmatching", "endlabel", "enddlabel", ".size")):
            continue
        lines.append(l)
    dst.write_text("\n".join(lines) + "\n", encoding="utf-8")


def rodata_files(target):
    return sorted((ROOT / "asm" / target / "data").glob("*.rodata.s"))


def run_m2c(target, func, asm, extra_flags=()):
    tmp = pathlib.Path(tempfile.mkdtemp())
    f = tmp / f"{func}.s"
    clean_asm(asm, f)
    files = [str(f)]
    text = asm.read_text(encoding="utf-8")
    if "jtbl_" in text or "D_" in text:
        for r in rodata_files(target):
            rc = tmp / r.name
            clean_asm(r, rc)
            files.append(str(rc))
    cmd = ["python3", "/opt/m2c/m2c.py", "--target", "mips-gcc-c", "--globals", "used",
           "--valid-syntax", "-f", func, *extra_flags, *files]
    r = subprocess.run(cmd, capture_output=True, text=True, timeout=120)
    if r.returncode or "Decompilation failure" in r.stdout:
        return None
    return r.stdout


def gp_symbols(asm_text):
    return set(re.findall(r"%gp_rel\((\w+)\)", asm_text))


def to_c(draft, func, asm_text, variant):
    """Converte a saída do m2c num arquivo C compilável e autocontido."""
    gp_syms = gp_symbols(asm_text)
    lines = draft.splitlines()
    decls, body, in_func = [], [], False
    for l in lines:
        if not in_func and re.match(rf"^[\w\s\*\?]+\b{func}\s*\(", l) and not l.rstrip().endswith(";"):
            in_func = True
        (body if in_func else decls).append(l)
    if not body:
        return None
    body_text = "\n".join(body)
    out_decls = []
    for d in decls:
        d = d.strip()
        if not d or d.startswith(("/*", "//", "#", "*")) or d == "}" or d.startswith("typedef"):
            if d.startswith("typedef"):
                return None
            continue
        if not d.endswith(";"):
            continue
        d = d.replace("static ", "")
        m = re.match(r"^(?:extern\s+)?(.+?)\s*\b(D_[0-9A-F]{8}|\w+)\s*(\[[^\]]*\])?\s*;$", d)
        if m and "(" not in d:
            typ, name, arr = m.group(1), m.group(2), m.group(3)
            typ = typ.replace("?", "s32").strip()
            if typ.startswith("struct") or typ.startswith("union"):
                typ = "s32"  # tipos compostos desconhecidos: tratar como palavra
            if name in gp_syms or arr:
                out_decls.append(f"extern {typ} {name}{arr or ''};")
            else:
                # fora da área $gp: tipo incompleto força acesso %hi/%lo
                out_decls.append(f"extern {typ} {name}[];")
                # numa passada só: &D (endereço) -> D (o vetor já é o endereço); D (valor)
                # -> (*D). Em duas passadas a segunda reescrevia o resultado da primeira e
                # o endereço virava o conteúdo (M2C_FIELD(&D, ...), f(&D) etc.)
                body_text = re.sub(rf"(&?)(?<![\w]){name}\b(?!\s*\[)",
                                   lambda m: name if m.group(1) else f"(*{name})", body_text)
            continue
        if "(" in d:
            d = d.replace("?", "s32")
            fm = re.search(r"\b(\w+)\s*\(", d)
            if fm and fm.group(1) == func:
                continue  # a própria função
            if fm and fm.group(1) in PROTOS and variant.get("protos") and not variant.get("unproto"):
                out_decls.append(PROTOS[fm.group(1)])  # assinatura exata (função já casada)
                continue
            if variant.get("unproto"):
                d = re.sub(r"\((.*)\);$", "();", d)
            out_decls.append(d if d.startswith("extern") else d)
    # funções usadas como valor (ponteiro de função passado/guardado) antes de qualquer
    # chamada: sem declaração o cc1 dá erro ("undeclared"); a declaração implícita de
    # C89 (int f()) é a mesma que o compilador assumiria numa chamada
    declared = " ".join(out_decls)
    for name in sorted(set(re.findall(r"(?<![\w.])&?(func_[0-9A-F]{8})\b(?!\s*\()", body_text))):
        if name != func and not re.search(rf"\b{name}\s*\(", declared):
            out_decls.append(f"extern int {name}();")
    if not variant.get("ghidra"):  # no Ghidra, "?" é operador ternário, não tipo desconhecido
        body_text = body_text.replace("?", "s32")
    if variant.get("unsigned"):
        body_text = body_text.replace("s32 temp", "u32 temp")
    # injeta as declarações no início do corpo da função
    i = body_text.index("{") + 1
    inner = "\n".join(f"    {d}" for d in out_decls)
    c_func = body_text[:i] + ("\n" + inner if inner else "") + body_text[i:]
    return c_func


PROTOS = {}  # nome -> protótipo exato das funções já em C (typeinfer.known_prototypes)
HANDWRITTEN = {}  # alvo -> funções escritas em assembly no original (tools/handwritten.py)
HEADER = '#include "common.h"\n\n'
# compiladores tentados, em ordem: o código do jogo é majoritariamente GCC 2.7.2;
# parte (sobretudo bibliotecas) foi compilada com GCC 2.8.1
COMPILERS = ["2.7.2-psx", "2.8.1-psx"]


# Heurísticas do pipeline, cada uma ligável/desligável para medição na bancada
# fixa (tools/bench.py). Só entram em DEFAULT_HEURISTICS depois de mostrarem
# ganho sem regressões (ver docs/PROCESS.md).
ALL_HEURISTICS = {
    "protos": "protótipos exatos das funções já casadas para as funções chamadas",
    "ptypes": "tipos de parâmetros inferidos da normalização na entrada (sll/sra, andi)",
    "unproto": "variante com declarações sem protótipo",
    "unsigned": "variante com temporários sem sinal",
    "noandor": "variante do m2c sem fusão de && / ||",
    "gcc281": "tentar também o GCC 2.8.1",
    "ghidra": "variante com o pseudo-C do Ghidra (.cache/ghidra/c, gerado por tools/ghidra.py bench)",
    "g0fill": "perfil das bibliotecas PsyQ (-G0 + aspsx_fill) com globais escalares, em funções sem $gp",
}
# Decisão pela ablação de 2026-10-21 (docs/BENCH.md): só "gcc281" afeta casamentos
# (sem ela, 5 controles deixam de casar). "noandor" e "unsigned" não casaram nada mas
# deixam alguns rascunhos mais próximos: ficam no conjunto de rascunho (wip/permuter).
# "protos", "ptypes" e "unproto": nenhum efeito medido; disponíveis, desligadas.
# 2026-10-22: "ghidra" +6 pendentes casadas (3 -> 9/180), 0 controles perdidos, 65 mais próximas.
# 2026-10-22: "g0fill" +3 (9 -> 12/180), 0 perdidas (perfil das bibliotecas PsyQ).
DEFAULT_HEURISTICS = frozenset({"gcc281", "ghidra", "g0fill"})
DRAFT_HEURISTICS = frozenset({"gcc281", "ghidra", "g0fill", "noandor", "unsigned"})
ROW = re.compile(r"^(>>|  ) [0-9A-F]{8}  (.{40}) \| (.*)$")
LOADS = {"lh", "lhu", "lb", "lbu", "lw"}


def classify(o, c):
    """Categoria de uma linha divergente (original x compilado)."""
    oo, cc = o.split(), c.split()
    if not oo or not cc or oo[0] == "-" or cc[0] == "-":
        return "tamanho"
    if oo[0] != cc[0]:
        pair = {oo[0], cc[0]}
        if len(pair & LOADS) == 2:
            return "tipo de load (sinal/largura)"
        if pair & {"sll", "sra", "srl", "andi"}:
            return "extensão/truncamento"
        if pair & {"slt", "sltu", "sltiu", "slti"}:
            return "comparação com/sem sinal"
        return "ordem/instrução diferente"
    if oo[1:] != cc[1:]:
        return "registradores"
    return "outro"


def scalarize(c):
    """Globais declarados como vetor incompleto (`extern T D_x[];`, usados como `*D_x`)
    viram escalares: com -G0 o acesso fica `lui/lw %lo` como nas bibliotecas PsyQ."""
    names = re.findall(r"extern\s+[\w\s\*]+?\b(D_\w+)\[\];", c)
    c = re.sub(r"(extern\s+[\w\s\*]+?\b)(D_\w+)\[\];", r"\1\2;", c)
    for n in names:
        c = c.replace(f"(*{n})", n)
        c = re.sub(rf"\b{n}\[0\]", n, c)
    return c


def _attempt(target, func, c, gcc):
    """Compila e compara uma tentativa; devolve registro com métricas."""
    tmp = pathlib.Path(tempfile.mkdtemp()) / f"{func}.c"
    tmp.write_text(HEADER + c + "\n", encoding="utf-8")
    base, _, prof = gcc.partition("+")
    r = subprocess.run(["python3", "tools/match.py", target, func, str(tmp), "-q", "--gcc", base]
                       + (["--g0fill"] if prof == "g0fill" else []),
                       cwd=ROOT, capture_output=True, text=True, timeout=120)
    if r.returncode == 0:
        return {"compiles": True, "match": True, "n": 0, "same_len": True, "gcc": gcc}
    m = re.search(r"\((\d+) instruções, (\d+) vs (\d+)\)", r.stdout)
    if not m:
        return {"compiles": False, "match": False, "gcc": gcc}
    first = next((ROW.match(l) for l in r.stdout.splitlines() if l.startswith(">>")), None)
    return {"compiles": True, "match": False, "n": int(m.group(1)), "gcc": gcc,
            "same_len": m.group(2) == m.group(3),
            "cat": classify(first.group(2).strip(), first.group(3).strip()) if first else "?",
            "first": (first.group(2).strip() + " | " + first.group(3).strip()) if first else ""}


def evaluate(target, func, heur=DEFAULT_HEURISTICS):
    """Roda o pipeline numa função. Devolve (c_casado|None, gcc|None, registro).

    O registro descreve a melhor tentativa (menos instruções diferentes) e o
    motivo final: MATCH, não casou, não compila, m2c falhou, usa GTE...
    """
    asm = asm_path(target, func)
    if asm is None:
        return None, None, {"reason": "sem asm"}
    asm_text = asm.read_text(encoding="utf-8")
    if re.search(r"\b(rtps|rtpt|nclip|mvmva|avsz3|avsz4|ncds|nccs|mfc2|mtc2|cfc2|ctc2|lwc2|swc2)\b", asm_text):
        return None, None, {"reason": "usa GTE"}
    if "/* handwritten" in asm_text.lower() or func in HANDWRITTEN.get(target, {}):
        return None, None, {"reason": "assembly original"}
    ptypes = typeinfer.infer_params(asm_text) if "ptypes" in heur else [None] * 4
    variants = ([{"ptypes": ptypes}] if any(ptypes) else []) + [{}]
    if "unproto" in heur:
        variants.append({"unproto": True})
    if "unsigned" in heur:
        variants.append({"unsigned": True})
    for v in variants:
        v["protos"] = "protos" in heur
    flags_sets = [()] + ([("--no-andor",)] if "noandor" in heur else [])
    compilers = COMPILERS if "gcc281" in heur else COMPILERS[:1]
    if "g0fill" in heur and target in ("yuugi", "slpm") and "$gp" not in asm_text:
        compilers = compilers + [g + "+g0fill" for g in compilers]
    best, reason = None, "m2c falhou"
    gdraft = None
    if "ghidra" in heur:
        gdraft = ghidra2c.draft(target, func, run_m2c(target, func, asm), asm_text)
    for flags in flags_sets + ([("ghidra",)] if gdraft else []):
        draft = gdraft if flags == ("ghidra",) else run_m2c(target, func, asm, flags)
        if draft is None:
            continue
        for v in ([{"ghidra": True}] if flags == ("ghidra",) else variants):
            c = to_c(draft, func, asm_text, v)
            if c is not None and v.get("ghidra"):
                c = ghidra2c.TYPES + c
            if c is not None and v.get("ptypes"):
                c = typeinfer.apply_param_types(c, func, v["ptypes"])
            if c is None:
                reason = "tipo composto"
                continue
            for gcc in compilers:
                cc = scalarize(c) if gcc.endswith("+g0fill") else c
                rec = _attempt(target, func, cc, gcc)
                rec["variant"] = ",".join(k for k, x in v.items() if x and k != "protos") or "base"
                if rec["match"]:
                    rec["reason"] = "MATCH"
                    return cc, gcc, rec
                if not rec["compiles"]:
                    reason = "não compila" if reason != "não casou" else reason
                    break  # não compila: inútil tentar outro compilador
                reason = "não casou"
                if best is None or rec["n"] < best["n"]:
                    rec["c"] = cc  # C da melhor tentativa (ponto de partida para permuter/wip)
                    best = rec
    rec = dict(best or {})
    rec["reason"] = reason
    return None, None, rec


BEST = ROOT / ".cache" / "best"  # melhor tentativa por função (reusada por permute_batch.py)


def save_best(target, func, rec):
    d = BEST / target
    d.mkdir(parents=True, exist_ok=True)
    keep = {k: rec.get(k) for k in ("n", "same_len", "gcc", "c", "reason", "variant")}
    (d / f"{func}.json").write_text(json.dumps(keep, ensure_ascii=False), encoding="utf-8")


def load_best(target, func):
    p = BEST / target / f"{func}.json"
    return json.loads(p.read_text(encoding="utf-8")) if p.exists() else None


def try_function(target, func):
    c, gcc, rec = evaluate(target, func)
    if not c:
        save_best(target, func, rec)
    return func, ((c, gcc) if c else None), ("MATCH " + gcc if c else rec["reason"])


def pending_functions(target):
    out = []
    for c in sorted((ROOT / "src" / target).rglob("*.c")):
        for folder, func in INCLUDE.findall(c.read_text(encoding="utf-8")):
            out.append((c, func))
    return out


def file_compiler(path):
    """Compilador de um .c, conforme config/compilers.txt (padrão: GCC 2.7.2)."""
    cfg = ROOT / "config" / "compilers.txt"
    if cfg.exists():
        for l in cfg.read_text(encoding="utf-8").splitlines():
            p = l.split("#")[0].split()
            if len(p) == 2 and (ROOT / p[0]).resolve() == path.resolve():
                return p[1]
    return "2.7.2-psx"


EXTERN_DECL = re.compile(r"extern\s+[^;()]*?\b(\w+)\s*(\[[^\]]*\])?\s*;")


def gp_modes(code):
    """Modo de acesso de cada global declarado: 'gp' (tamanho conhecido) ou 'abs' ([])."""
    return {m.group(1): ("abs" if m.group(2) == "[]" else "gp") for m in EXTERN_DECL.finditer(code)}


def apply(target):
    """Substitui INCLUDE_ASM pelos C casados, evitando conflitos dentro do arquivo.

    O assembler decide entre $gp e %hi/%lo por arquivo: se uma função declara um
    global com tamanho (acesso via $gp) e outra o declara incompleto (acesso
    absoluto), as duas vinham de unidades de tradução diferentes e não podem
    coexistir no mesmo .c. A segunda fica em INCLUDE_ASM até a separação dos
    arquivos-fonte.
    """
    store = CACHE / target
    n = skipped = rod = 0
    ro_lo, ro_hi = rodata_range(target)
    for c in sorted((ROOT / "src" / target).rglob("*.c")):
        file_gcc = file_compiler(c) + ("+g0fill" if g0fill.enabled(c) else "")
        s = c.read_text(encoding="utf-8")
        modes = gp_modes(s)

        def repl(m):
            nonlocal n, skipped, rod
            f = store / f"{m.group(2)}.c"
            g = store / f"{m.group(2)}.gcc"
            gcc = g.read_text().strip() if g.exists() else "2.7.2-psx"
            if not f.exists() or gcc != file_gcc:
                return m.group(0)
            code = f.read_text(encoding="utf-8").rstrip()
            # funções que usam .rodata (jump tables, strings, constantes) ficam para
            # a etapa de migração do .rodata por unidade de tradução
            asm = asm_path(target, m.group(2))
            refs = [int(x, 16) for x in re.findall(r"\b(?:D|jtbl)_([0-9A-F]{8})\b",
                                                   asm.read_text(encoding="utf-8"))]
            strings = '"' in re.sub(r'^#include\s+"[^"]+"$', "", code, flags=re.M)
            if strings or any(ro_lo <= r < ro_hi for r in refs):
                rod += 1
                return m.group(0)
            mine = gp_modes(code)
            if any(modes.get(k, v) != v for k, v in mine.items()):
                skipped += 1
                return m.group(0)
            modes.update(mine)
            n += 1
            return code
        t = INCLUDE.sub(repl, s)
        if t != s:
            c.write_text(t, encoding="utf-8", newline="\n")
    print(f"{n} funções aplicadas em src/{target} ({skipped} adiadas por conflito de $gp, "
          f"{rod} adiadas por usar .rodata)")


def rodata_range(target):
    """Faixa de VRAM do .rodata do alvo, a partir do YAML do splat."""
    y = (ROOT / "config" / f"{target}.yaml").read_text(encoding="utf-8")
    seg = re.search(r"type: code\s+start: (0x[0-9A-Fa-f]+)\s+vram: (0x[0-9A-Fa-f]+)", y)
    start, vram = int(seg.group(1), 16), int(seg.group(2), 16)
    ro = re.search(r"- \[(0x[0-9A-Fa-f]+), rodata\]", y)
    tx = re.search(r"- \[(0x[0-9A-Fa-f]+), c, ", y)
    return vram + int(ro.group(1), 16) - start, vram + int(tx.group(1), 16) - start


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("--max-size", type=lambda x: int(x, 0), default=0x200)
    ap.add_argument("--min-size", type=lambda x: int(x, 0), default=0)
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--jobs", type=int, default=8)
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--only")
    a = ap.parse_args()
    if a.apply:
        return apply(a.target)
    store = CACHE / a.target
    store.mkdir(parents=True, exist_ok=True)
    HANDWRITTEN[a.target] = load_handwritten(a.target)
    PROTOS.update(typeinfer.known_prototypes([a.target] + (["yuugi"] if a.target in ("chess", "raise", "etc") else [])))
    funcs = []
    for c, f in pending_functions(a.target):
        p = asm_path(a.target, f)
        if p is None or (store / f"{f}.c").exists() or (a.only and f != a.only):
            continue
        sz = func_size(p)
        if a.min_size < sz <= a.max_size:
            funcs.append((sz, f))
    funcs.sort()
    if a.limit:
        funcs = funcs[:a.limit]
    print(f"{len(funcs)} funções candidatas (<= {a.max_size:#x} bytes)")
    stats = {}
    with cf.ThreadPoolExecutor(a.jobs) as ex:
        for func, c, why in ex.map(lambda x: try_function(a.target, x[1]), funcs):
            stats[why] = stats.get(why, 0) + 1
            if c:
                code, gcc = c
                (store / f"{func}.c").write_text(code + "\n", encoding="utf-8")
                (store / f"{func}.gcc").write_text(gcc + "\n", encoding="utf-8")
                print(f"  MATCH {func} ({gcc})", flush=True)
    print("resumo:", stats)


if __name__ == "__main__":
    main()
