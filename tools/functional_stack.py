"""Candidate layout for address-taken Ghidra locals with explicit stack offsets."""
import re

SIZES = {'char': 1, 's8': 1, 'u8': 1, 'byte': 1, 'uchar': 1, 'undefined1': 1,
         'short': 2, 'ushort': 2, 's16': 2, 'u16': 2, 'undefined2': 2,
         'int': 4, 'uint': 4, 'long': 4, 'ulong': 4, 's32': 4, 'u32': 4,
         'float': 4, 'undefined4': 4, 'double': 8, 'longlong': 8, 'ulonglong': 8,
         's64': 8, 'u64': 8, 'undefined8': 8, 'SVECTOR': 8, 'DVECTOR': 4}
NAME = r'(?:_?local|[A-Za-z]*Stack)_([0-9a-fA-F]+)'
DECL = re.compile(r'^[ \t]+([\w ]+?\s*\**)[ \t]*(' + NAME + r')'
                  r'[ \t]*(\[[ \t]*(0x[0-9a-fA-F]+|[0-9]+)[ \t]*\])?[ \t]*;[ \t]*$', re.M)


def frame_variant(code, func):
    entry = re.search(r'\b' + re.escape(func) + r'\s*\([^;{}]*\)\s*\{', code)
    if not entry or 'recovered_local_frame' in code:
        return None
    body = code[entry.end():]
    declarations = list(DECL.finditer(body))
    if not declarations:
        return None
    fields, top = {}, 0
    for match in declarations:
        typ, name, offset, array, count = match.groups()
        typ = typ.strip()
        size = 4 if '*' in typ else SIZES.get(typ)
        if size is None:
            return None
        number = int(count, 16 if count.lower().startswith('0x') else 10) if count else 1
        size *= number
        offset = int(offset, 16)
        if not 0 < size <= offset <= 0x4000 or name in fields:
            return None
        fields[name] = (typ, offset, number if array else None)
        top = max(top, offset)
    used = {m[0] for m in re.finditer(r'\b' + NAME + r'\b', body)}
    if used - fields.keys():
        return None
    if not any(re.search(r'&\s*' + re.escape(name) + r'\b', body) or field[2]
               for name, field in fields.items()):
        return None
    top = (top + 7) & ~7
    lines = [f'\n  union {{ u64 align; u8 bytes[0x{top:X}]; }} recovered_local_frame;']
    for name, (typ, offset, count) in fields.items():
        cast = typ + ' volatile ' + (f'(*)[{count}]' if count else '*')
        lines.append(f'#define {name} (*({cast})(recovered_local_frame.bytes + 0x{top - offset:X}))')
    body = DECL.sub('', body)
    return (code[:entry.end()] + '\n'.join(lines) + '\n' + body + '\n' +
            '\n'.join('#undef ' + name for name in fields) + '\n')
