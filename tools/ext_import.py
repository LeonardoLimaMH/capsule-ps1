#!/usr/bin/env python3
"""Importa o C de uma função do SDK PsyQ vindo de outro projeto de decompilação.

Projetos como psy-q-decomp, psyz e rood-reverse já têm parte das bibliotecas PsyQ em C
byte-exact. O C deles depende dos próprios cabeçalhos; aqui o candidato é
pré-processado com esses cabeçalhos e só as declarações de nível de arquivo de que a
função depende (typedefs, structs, externs, protótipos) são mantidas, em ordem. O
resultado é um bloco autocontido que compila com os cabeçalhos deste projeto. Ele leva
um comentário com a origem e a licença (só projetos MIT ou CC0).

Uso (no container):
  ext_import.py <alvo> <função> <candidato.c> <origem> --gcc X [--g0fill] [-I dir...] -o saída.c
Sai com 1 se o bloco reduzido não casar mais.
"""
import argparse
import pathlib
import re
import subprocess
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import match  # noqa: E402

LICENSES = {
    "sozud_psy-q-decomp": ("https://github.com/sozud/psy-q-decomp", "MIT"),
    "Fancy2209_psyz": ("https://github.com/Fancy2209/psyz", "MIT"),
    "ser-pounce_rood-reverse": ("https://github.com/ser-pounce/rood-reverse", "CC0-1.0"),
    "celophi_lom-decomp": ("https://github.com/celophi/lom-decomp", "MIT"),
    "gonzaloberteri_ygofm-decomp": ("https://github.com/gonzaloberteri/ygofm-decomp", "MIT"),
}
IDENT = re.compile(r"\b[A-Za-z_]\w*\b")
KEYWORDS = set("""auto break case char const continue default do double else enum extern float for goto
if int long register return short signed sizeof static struct switch typedef union unsigned void
volatile while __attribute__ __asm__ asm inline __inline__ __extension__""".split())


def statements(text):
    """Declarações de nível de arquivo: (texto, é_definição_de_função)."""
    out, cur, depth, i = [], [], 0, 0
    while i < len(text):
        ch = text[i]
        cur.append(ch)
        if ch == "{":
            depth += 1
        elif ch == "}":
            depth -= 1
            if depth == 0:
                s = "".join(cur)
                # fim de corpo de função: ')' antes da primeira '{' e nenhum '=' no topo
                head = s[:s.index("{")]
                if re.search(r"\)\s*$", head) and "=" not in head and not head.strip().startswith(("typedef", "struct", "union", "enum")):
                    out.append((s.strip(), True))
                    cur = []
        elif ch == ";" and depth == 0:
            out.append(("".join(cur).strip(), False))
            cur = []
        i += 1
    return [(s, f) for s, f in out if s]


def declared(stmt, is_func):
    """Nomes que a declaração introduz."""
    names = set()
    if is_func:
        m = re.search(r"(\w+)\s*\([^()]*\)\s*\{", stmt)
        if m:
            names.add(m.group(1))
        return names
    for m in re.finditer(r"\b(?:struct|union|enum)\s+(\w+)\s*\{", stmt):
        names.add(m.group(1))
    for m in re.finditer(r"\{([^{}]*)\}", stmt):
        if re.search(r"\benum\b", stmt):
            names |= {x.split("=")[0].strip() for x in m.group(1).split(",") if x.strip()}
    flat = re.sub(r"\{[^{}]*\}", "", re.sub(r"\{[^{}]*\{[^{}]*\}[^{}]*\}", "", stmt))
    flat = re.sub(r"\([^()]*\)\s*;?$", "", flat.rstrip(";").strip())  # parâmetros de protótipo
    for part in flat.split(","):
        ids = [x for x in IDENT.findall(re.sub(r"\[[^\]]*\]", "", part)) if x not in KEYWORDS]
        if ids:
            names.add(ids[-1])
    m = re.search(r"(\w+)\s*\([^()]*\)\s*;$", stmt)
    if m:
        names.add(m.group(1))
    return names


def ours():
    """Nomes que o common.h deste projeto já declara (não podem ser redefinidos)."""
    pre = subprocess.run(f"echo '#include \"common.h\"' | mips-linux-gnu-cpp {match.CPP_FLAGS} -P -",
                         shell=True, capture_output=True, text=True, cwd=match.ROOT).stdout
    names = set()
    for s, f in statements(pre):
        names |= declared(s, f)
    return names


def reduce(text, func):
    have = ours()
    sts = [(s, f) for s, f in statements(text) if f or not (declared(s, f) and declared(s, f) <= have)]
    keep = {i for i, (s, f) in enumerate(sts) if f and func in declared(s, f)}
    if not keep:
        raise SystemExit(f"{func} não encontrada no pré-processado")
    decl = [declared(s, f) for s, f in sts]
    changed = True
    while changed:
        changed = False
        used = set()
        for i in keep:
            used |= set(IDENT.findall(sts[i][0]))
        for i, (s, f) in enumerate(sts):
            if i in keep or f:
                continue
            if decl[i] & used:
                keep.add(i)
                changed = True
    return "\n\n".join(as_extern(sts[i][0], sts[i][1]) for i in sorted(keep)) + "\n"


def as_extern(stmt, is_func):
    """Variáveis definidas no arquivo de origem viram extern: aqui os dados vêm das seções
    de assembly do binário (definir de novo criaria outra cópia em .bss/.data)."""
    if is_func or re.match(r"\s*(typedef|extern|struct\s+\w+\s*\{|union\s+\w+\s*\{|enum\b)", stmt):
        return stmt
    if re.search(r"\)\s*;$", stmt) and "=" not in stmt:  # protótipo de função
        return stmt
    if re.match(r"\s*(struct|union|enum)\s+\w+\s*;$", stmt):  # declaração de tag
        return stmt
    s = re.sub(r"^\s*static\s+", "", stmt)
    s = re.sub(r"\s*=.*;$", ";", s, flags=re.S)  # tira o inicializador
    return "extern " + s


def reloc_names(obj, func):
    """Símbolos das relocações da função no objeto compilado, na ordem."""
    syms = [l.split() for l in match.sh(f"mips-linux-gnu-nm -n {obj}").splitlines()]
    # como em match.compiled: rótulos locais (L..., $...) não delimitam funções
    funcs = {s[2]: int(s[0], 16) for s in syms
             if len(s) == 3 and s[1] in "Tt" and not s[2].startswith(("L", "$"))}
    start = funcs[func]
    nxt = sorted(a for a in funcs.values() if a > start)
    end = nxt[0] if nxt else 1 << 30
    out, section = [], None
    for l in match.sh(f"mips-linux-gnu-readelf -rW {obj}").splitlines():
        if l.startswith("Relocation section"):
            section = l.split("'")[1]
            continue
        p = l.split()
        if (section == ".rel.text" and len(p) >= 5 and re.fullmatch(r"[0-9a-f]{8}", p[0])
                and p[2].startswith("R_MIPS")):
            off = int(p[0], 16)
            if start <= off < end and not p[4].startswith((".", "$")):
                out.append((off, p[4]))
    return [n for _, n in sorted(out)]


def asm_names(target, func):
    """Símbolos referenciados pelo assembly original, na ordem."""
    p = next((match.ROOT / "asm" / target / "nonmatchings").rglob(f"{func}.s"), None) or \
        next((match.ROOT / ".cache" / "fullasm" / target / "nonmatchings").rglob(f"{func}.s"))
    refs = re.findall(r"(?:%(?:hi|lo|gp_rel)\((\w+)|\bjal\s+(\w+))", p.read_text(encoding="utf-8"))
    return [a or b for a, b in refs]


def rename(code, target, func, obj):
    """Troca os nomes do projeto de origem pelos deste projeto (pareando as relocações)."""
    mine, theirs = asm_names(target, func), reloc_names(obj, func)
    if len(mine) != len(theirs):
        return code, f"relocações diferentes ({len(theirs)} vs {len(mine)}); nomes mantidos"
    m = {}
    for a, b in zip(theirs, mine):
        if m.get(a, b) != b:
            return code, f"mapa inconsistente em {a}; nomes mantidos"
        m[a] = b
    for a, b in sorted(m.items(), key=lambda x: -len(x[0])):
        if a != b and a != func:
            code = re.sub(rf"\b{re.escape(a)}\b", b, code)
    return code, ", ".join(f"{a}->{b}" for a, b in m.items() if a != b) or "nomes iguais"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("func")
    ap.add_argument("cand")
    ap.add_argument("origin", help="arquivo de origem, relativo a .cache/ext")
    ap.add_argument("--gcc", default="2.7.2-psx")
    ap.add_argument("--g0fill", action="store_true")
    ap.add_argument("-I", dest="incs", action="append", default=[])
    ap.add_argument("-o", dest="out", required=True)
    a = ap.parse_args()
    flags = match.CPP_FLAGS + " " + " ".join(f"-I{d}" for d in a.incs)
    pre = subprocess.run(f"mips-linux-gnu-cpp {flags} -P {a.cand}", shell=True, capture_output=True,
                         text=True, cwd=match.ROOT)
    if pre.returncode:
        sys.exit(pre.stderr[-500:])
    body = reduce(pre.stdout, a.func)
    repo = a.origin.split("/")[0]
    url, lic = LICENSES[repo]
    header = (f"/* {a.func}: C do SDK PsyQ importado de {url} ({lic}),\n"
              f"   arquivo {a.origin.split('/', 1)[1]}; reduzido às declarações de que a função depende\n"
              f"   (tools/ext_import.py). */\n")
    code = '#include "common.h"\n\n' + header + body
    out = pathlib.Path(a.out)
    out.write_text(code, encoding="utf-8", newline="\n")
    try:
        obj = match.compile_c(str(out), a.gcc, "-O2 -G8", a.g0fill, a.target)
        code, info = rename(code, a.target, a.func, obj)
        out.write_text(code, encoding="utf-8", newline="\n")
        print("nomes:", info, file=sys.stderr)
    except SystemExit:
        pass
    r = subprocess.run([sys.executable, "tools/match.py", a.target, a.func, str(out), "--gcc", a.gcc, "-q"]
                       + (["--g0fill"] if a.g0fill else []), cwd=match.ROOT, capture_output=True, text=True)
    errs = [l for l in r.stderr.splitlines() if "warning" not in l and l.strip()]
    print(r.stdout.strip().splitlines()[-1] if r.stdout.strip() else " | ".join(errs[-3:])[-300:])
    sys.exit(r.returncode)


if __name__ == "__main__":
    main()
