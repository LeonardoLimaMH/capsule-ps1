"""Restore unused argument slots omitted from m2c drafts.

arg1 still denotes a1 even if m2c omitted unused a0. Do not compact it to
the first C parameter. Restrict this to simple, one-word m2c arguments.
"""
import re


def restore(code, func):
    match = re.search(r'\b' + re.escape(func) + r'\s*\(([^()]*)\)', code)
    if not match or re.search(r'\b(double|f64|s64|u64|M2C_UNK64|struct|union)\b|long\s+long', match.group(1)):
        return code
    params = match.group(1).split(',')
    numbered = []
    for param in params:
        name = re.search(r'\barg(\d+)\s*$', param.strip())
        if not name:
            return code
        numbered.append((int(name.group(1)), param.strip()))
    indices = [i for i, _ in numbered]
    if not indices or indices == list(range(len(indices))) or indices != sorted(set(indices)) or indices[-1] > 16:
        return code
    result = []
    for i, param in numbered:
        while len(result) < i:
            result.append('s32 unused_arg' + str(len(result)))
        result.append(param)
    return code[:match.start(1)] + ', '.join(result) + code[match.end(1):]
