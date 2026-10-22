"""Perfil de compilação das bibliotecas PsyQ: `-G0` + delay slot do ASPSX antigo.

Os arquivos listados em config/g0fill.txt (um caminho `src/...c` por linha) são
compilados com `cc1 -G0` e passam por tools/aspsx_fill.py entre o maspsx e o GNU as
(ver docs/NOTES.md, "Bibliotecas PsyQ"). O Makefile lê a mesma lista.
"""
import pathlib

ROOT = pathlib.Path(__file__).resolve().parent.parent
LIST = ROOT / "config" / "g0fill.txt"
MASPSX_NOAS = ("python3 /opt/maspsx/maspsx.py --aspsx-version=2.79 --expand-div --use-comm-section "
               "--dont-force-G0")
AS = "mips-linux-gnu-as -EL -Iinclude -march=r3000 -mtune=r3000 -no-pad-sections -O1 -G0"


def files():
    if not LIST.exists():
        return set()
    return {l.split("#")[0].strip() for l in LIST.read_text(encoding="utf-8").splitlines()} - {""}


def enabled(src):
    p = pathlib.Path(src)
    try:
        p = p.resolve().relative_to(ROOT)
    except ValueError:
        pass
    return p.as_posix() in files()


def backend(obj):
    """Parte do pipeline depois do cc1 (que deve receber -G0)."""
    return f"{MASPSX_NOAS} | python3 tools/aspsx_fill.py | {AS} -o {obj}"
