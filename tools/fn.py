#!/usr/bin/env python3
"""Ficha de trabalho manual de uma função (frente funcional).

  fn.py show <alvo> <função>      # assembly limpo, rascunho atual e último resultado do difftest
  fn.py test <alvo> <função> <arquivo.c>
                                  # testa um C escrito à mão (difftest --abi); se equivalente,
                                  # grava em equiv/<alvo>/<função>.c
  fn.py todo <alvo> [N]           # pendentes sem C equivalente, das menores para as maiores
"""
import json
import pathlib
import re
import shutil
import subprocess
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import autodecomp as ad  # noqa: E402
import retuse  # noqa: E402
from handwritten import load as load_handwritten  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent


def clean_asm(path):
    out = []
    for l in path.read_text(encoding="utf-8").splitlines():
        if l.startswith(("nonmatching", "endlabel")) or not l.strip():
            continue
        out.append(re.sub(r"/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/", r"/*\1*/", l))
    return "\n".join(out)


def show(t, f):
    a = ad.asm_path(t, f)
    print(clean_asm(a))
    j = ROOT / ".cache" / "functional" / t / f"{f}.json"
    if j.exists():
        print("\n// último difftest:", json.loads(j.read_text(encoding="utf-8"))["msg"][:300])
    print("// retorno usado pelos chamadores:", "sim" if retuse.used(f) else "não")
    d = ad.all_drafts(t, f)
    if d:
        print("\n// rascunho:\n" + d[0])


def test(t, f, src):
    extra = [] if retuse.used(f) else ["--ignore-v0"]
    r = subprocess.run(["python3", "tools/difftest.py", t, f, "--src", src, "--abi", "--isolate"] + extra,
                       cwd=ROOT, capture_output=True, text=True, timeout=900)
    msg = (r.stdout.strip().splitlines() or [r.stderr.strip()[-600:]])[-1]
    print(msg if r.returncode == 0 or r.stdout.strip() else r.stderr[-1500:])
    if r.returncode == 0:
        dst = ROOT / "equiv" / t / f"{f}.c"
        dst.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy(src, dst)
        (ROOT / ".cache" / "functional" / t).mkdir(parents=True, exist_ok=True)
        (ROOT / ".cache" / "functional" / t / f"{f}.json").write_text(
            json.dumps({"code": 0, "msg": msg + " (manual)"}, ensure_ascii=False), encoding="utf-8")
    sys.exit(r.returncode)


def todo(t, n):
    rows = []
    hand = load_handwritten(t)
    for _, f in ad.pending_functions(t):
        if (ROOT / "equiv" / t / f"{f}.c").exists() or f in hand:
            continue
        a = ad.asm_path(t, f)
        if a is None:
            continue
        txt = a.read_text(encoding="utf-8")
        if re.search(r"\b(rtps|rtpt|nclip|mvmva|avsz3|avsz4|ncds|nccs|mfc2|mtc2|cfc2|ctc2|lwc2|swc2)\b", txt):
            continue  # GTE: o difftest não emula
        m = re.search(r"nonmatching \w+, (0x[0-9A-Fa-f]+)", txt)
        rows.append((int(m.group(1), 16) if m else 0, f))
    for sz, f in sorted(rows)[:n]:
        print(f"{sz:#06x} {f}")
    print(f"// {len(rows)} pendentes sem C equivalente (sem GTE)")


if __name__ == "__main__":
    cmd = sys.argv[1]
    if cmd == "show":
        show(sys.argv[2], sys.argv[3])
    elif cmd == "test":
        test(sys.argv[2], sys.argv[3], sys.argv[4])
    elif cmd == "todo":
        todo(sys.argv[2], int(sys.argv[3]) if len(sys.argv) > 3 else 30)
