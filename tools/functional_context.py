"""Minimal m2c call signatures proved by leaf helpers in the correct overlay."""
import re

import arity
import autodecomp as ad
import retuse


def leaf_context(target, asm_text):
    declarations = []
    for name in sorted(set(re.findall(r'\bjal\s+(func_[0-9A-Fa-f]{8})\b', asm_text))):
        path = ad.asm_path(target, name)
        if path is None and target in ('chess', 'raise', 'etc'):
            path = ad.asm_path('yuugi', name)
        if path is None:
            continue
        text = path.read_text(encoding='utf-8')
        if re.search(r'\b(jal|jalr|bal|bgezal|bltzal|syscall|break|eret|rfe|mfc1|mtc1|lwc1|swc1)\b', text):
            continue  # forwarding wrappers and floating ABI need more evidence
        if retuse.used(name, reg='$v1'):
            continue  # do not impose a 32-bit return type on a possible pair
        lines = text.splitlines()
        params = arity._flow(lines)
        if params is None:
            continue  # an unresolved jump cannot establish a call signature
        # Register-only leaf signatures; stack arguments need frame analysis.
        if re.search(r'\b(lw|lh|lhu|lb|lbu)\s+[^\n]*\(\$sp\)', text):
            continue
        argc = max((arity.ARGS.index(reg) + 1 for reg in params), default=0)
        args = ', '.join('s32' for _ in range(argc)) or 'void'
        declarations.append('s32 ' + name + '(' + args + ');')
    return 'typedef signed int s32;\n' + '\n'.join(declarations) + '\n' if declarations else None
