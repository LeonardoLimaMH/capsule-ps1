import pathlib
import re

ROOT = pathlib.Path(__file__).resolve().parent.parent
TARGETS = {
    "yuugi": "disc/YUUGI.EXE",
    "slpm": "disc/SLPM_860.96",
    "chess": "disc/MASTER/PSF/CHESS.BIN",
    "raise": "disc/MASTER/PSF/RAISE.BIN",
    "etc": "disc/MASTER/PSF/ETC.BIN",
}
# definição de função C no início da linha:  tipo nome(args) {
FUNC_DEF = re.compile(r"^(?!static inline)[A-Za-z_][\w \*]*?\b(\w+)\s*\([^;{]*\)\s*\{", re.M)


def decompiled_functions():
    """(alvo, função) para cada função já escrita em C em src/."""
    out = []
    for t in TARGETS:
        for c in sorted((ROOT / "src" / t).rglob("*.c")):
            for m in FUNC_DEF.finditer(c.read_text(encoding="utf-8")):
                if not m.group(1).startswith("__maspsx"):
                    out.append((t, m.group(1)))
    return out


def unchanged_gte_event(regs):
    """Expected final COP2 observation for a program that never touches GTE."""
    import random
    import gte

    state = gte.GTE()
    state.randomize(random.Random(repr(sorted(regs.items()))))
    return ('io:gte',) + state.state()
