"""Functional candidates for complete unaligned word copies emitted by m2c."""
import re


def unaligned_words(code):
    if 'M2C_UNALIGNED32(' not in code:
        return code
    # Both sides of a recognized word copy can be unaligned. Preserve bytes
    # outside the word; do not turn unhandled partial loads into valid code.
    code = re.sub(r'^(\s*)([^;\n]+?)\s*=\s*(M2C_UNALIGNED32\([^;\n]+\));',
                  r'\1M2C_UNALIGNED32(\2) = \3;', code, flags=re.M)
    return ('struct FunctionalUnaligned32 { u32 value; } __attribute__((packed));\n'
            '#define M2C_UNALIGNED32(expr) (((struct FunctionalUnaligned32 *)&(expr))->value)\n' + code)
