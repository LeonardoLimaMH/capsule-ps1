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
import pathlib
import re
import subprocess
import sys
import tempfile

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import match  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent
CACHE = ROOT / ".cache" / "auto"
GP = {"slpm": 0x80133474}
INCLUDE = re.compile(r'INCLUDE_ASM\(\s*"([^"]+)"\s*,\s*(\w+)\s*\);')
SYM_RE = re.compile(r"\b(D_[0-9A-F]{8}|jtbl_[0-9A-F]{8}|__bss_start|__bss_end|g_\w+)\b")


def asm_path(target, func):
    hits = list((ROOT / "asm" / target / "nonmatchings").rglob(f"{func}.s"))
    return hits[0] if hits else None


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
                body_text = re.sub(rf"&{name}\b(?!\s*\[)", name, body_text)
                body_text = re.sub(rf"(?<![\w&]){name}\b(?!\s*\[)", f"(*{name})", body_text)
            continue
        if "(" in d:
            d = d.replace("?", "s32")
            if variant.get("unproto"):
                d = re.sub(r"\((.*)\);$", "();", d)
            out_decls.append(d if d.startswith("extern") else d)
    body_text = body_text.replace("?", "s32")
    if variant.get("unsigned"):
        body_text = body_text.replace("s32 temp", "u32 temp")
    # injeta as declarações no início do corpo da função
    i = body_text.index("{") + 1
    inner = "\n".join(f"    {d}" for d in out_decls)
    c_func = body_text[:i] + ("\n" + inner if inner else "") + body_text[i:]
    return c_func


HEADER = '#include "common.h"\n\n'


def try_function(target, func):
    asm = asm_path(target, func)
    if asm is None:
        return func, None, "sem asm"
    asm_text = asm.read_text(encoding="utf-8")
    if re.search(r"\b(rtps|rtpt|nclip|mvmva|avsz3|avsz4|ncds|nccs|mfc2|mtc2|cfc2|ctc2|lwc2|swc2)\b", asm_text):
        return func, None, "usa GTE"
    if "/* handwritten" in asm_text.lower():
        return func, None, "escrita à mão"
    variants = [{}, {"unproto": True}, {"unsigned": True}]
    flags_sets = [(), ("--no-andor",)]
    last = "m2c falhou"
    for flags in flags_sets:
        draft = run_m2c(target, func, asm, flags)
        if draft is None:
            continue
        for v in variants:
            c = to_c(draft, func, asm_text, v)
            if c is None:
                last = "tipo composto"
                continue
            tmp = pathlib.Path(tempfile.mkdtemp()) / f"{func}.c"
            tmp.write_text(HEADER + c + "\n", encoding="utf-8")
            r = subprocess.run(["python3", "tools/match.py", target, func, str(tmp), "-q"],
                               cwd=ROOT, capture_output=True, text=True, timeout=120)
            if r.returncode == 0:
                return func, c, "MATCH"
            last = "não casou" if "DIFERENTE" in r.stdout else "não compila"
    return func, None, last


def pending_functions(target):
    out = []
    for c in sorted((ROOT / "src" / target).rglob("*.c")):
        for folder, func in INCLUDE.findall(c.read_text(encoding="utf-8")):
            out.append((c, func))
    return out


def apply(target):
    store = CACHE / target
    n = 0
    for c in sorted((ROOT / "src" / target).rglob("*.c")):
        s = c.read_text(encoding="utf-8")
        def repl(m):
            nonlocal n
            f = store / f"{m.group(2)}.c"
            if f.exists():
                n += 1
                return f.read_text(encoding="utf-8").rstrip()
            return m.group(0)
        t = INCLUDE.sub(repl, s)
        if t != s:
            c.write_text(t, encoding="utf-8", newline="\n")
    print(f"{n} funções aplicadas em src/{target}")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("--max-size", type=lambda x: int(x, 0), default=0x200)
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--jobs", type=int, default=8)
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--only")
    a = ap.parse_args()
    if a.apply:
        return apply(a.target)
    store = CACHE / a.target
    store.mkdir(parents=True, exist_ok=True)
    funcs = []
    for c, f in pending_functions(a.target):
        p = asm_path(a.target, f)
        if p is None or (store / f"{f}.c").exists() or (a.only and f != a.only):
            continue
        sz = func_size(p)
        if sz <= a.max_size:
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
                (store / f"{func}.c").write_text(c + "\n", encoding="utf-8")
                print(f"  MATCH {func}", flush=True)
    print("resumo:", stats)


if __name__ == "__main__":
    main()
