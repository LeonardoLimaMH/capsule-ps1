#!/usr/bin/env python3
"""Frente funcional: gêmeas de uma função já equivalente, a partir de um modelo.

Acha funções pendentes cujo assembly é igual ao do modelo, exceto por constantes
imediatas (deslocamentos e valores), e gera o C delas trocando, no C do modelo, as
constantes que diferem (na mesma ordem em que aparecem). Cada C gerado passa pelo
teste diferencial (tools/fn.py test) antes de ir para equiv/.

Uso: twinfill.py <alvo> <modelo> [--dry]
"""
import pathlib
import re
import subprocess
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import autodecomp as ad  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent
NUM = re.compile(r"-?0x[0-9A-Fa-f]+|\b\d+\b")


def body(t, f):
    """Instruções do assembly sem endereços e rótulos, com a lista das constantes."""
    lines, consts = [], []
    for l in ad.asm_path(t, f).read_text(encoding="utf-8").splitlines():
        m = re.search(r"\*/\s+(.*)$", l)
        if not m:
            continue
        ins = re.sub(r"\b[LD]_?[0-9A-F]{8}\b|\bL[0-9A-F]{8}\b|\bfunc_[0-9A-F]{8}\b", "SYM", m.group(1))
        ins = re.sub(r"\. \+ 4 \+ \(-?0x[0-9A-Fa-f]+ << 2\)", "BR", ins)
        consts += [c for c in NUM.findall(ins)]
        lines.append(NUM.sub("N", ins))
    syms = re.findall(r"\b(?:D_|func_)[0-9A-F]{8}\b", ad.asm_path(t, f).read_text(encoding="utf-8"))
    return lines, consts, syms


def main():
    t, model = sys.argv[1], sys.argv[2]
    dry = "--dry" in sys.argv
    src = (ROOT / "equiv" / t / f"{model}.c").read_text(encoding="utf-8")
    mlines, mconsts, msyms = body(t, model)
    made = ok = 0
    for _, f in ad.pending_functions(t):
        if f == model or (ROOT / "equiv" / t / f"{f}.c").exists():
            continue
        a = ad.asm_path(t, f)
        if a is None:
            continue
        lines, consts, syms = body(t, f)
        if lines != mlines or len(consts) != len(mconsts) or len(syms) != len(msyms):
            continue
        c = src.replace(model, f)
        # símbolos (globais/funções) que mudam: troca direta
        for x, y in zip(msyms, syms):
            if x != y:
                c = re.sub(rf"\b{x}\b", y, c)
        # constantes que mudam: precisam aparecer no C do modelo exatamente uma vez
        bad = False
        for x, y in zip(mconsts, consts):
            if x == y:
                continue
            pat = rf"(?<![\w]){re.escape(x)}(?![\w])"
            if len(re.findall(pat, c)) != 1:
                bad = True
                break
            c = re.sub(pat, y, c)
        if bad:
            print(f"  {f}: constante ambígua no modelo, pulei")
            continue
        made += 1
        out = ROOT / ".cache" / "manual" / t / f"{f}.c"
        out.parent.mkdir(parents=True, exist_ok=True)
        out.write_text(c, encoding="utf-8", newline="\n")
        if dry:
            print(f"  {f}: gerado")
            continue
        r = subprocess.run(["python3", "tools/fn.py", "test", t, f, str(out.relative_to(ROOT))],
                           cwd=ROOT, capture_output=True, text=True)
        good = r.returncode == 0
        ok += good
        print(f"  {f}: {'EQUIVALENTE' if good else (r.stdout.strip().splitlines() or ['?'])[-1][:120]}")
    print(f"{model}: {made} gêmeas geradas, {ok} equivalentes")


if __name__ == "__main__":
    main()
