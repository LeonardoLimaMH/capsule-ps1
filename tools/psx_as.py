#!/usr/bin/env python3
"""Run maspsx with the original division profile for each function.

Use maspsx's own unchecked expansion, preserving its scheduling and nop rules.
Rewriting the pseudo into div/mflo beforehand loses the macro's nop handling.
All functions outside config/rawdiv.<target>.txt keep the command-line profile.

Functions in config/destload.<target>.txt expand symbolic loads with a base register
(`lw $2,sym($4)`) through the destination register, as GNU as does, instead of $at:
lui $2,%hi(sym); addu $2,$2,$4; lw $2,%lo(sym)($2).
"""
import pathlib
import re
import runpy
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
ENTER = re.compile(r"\s*\.ent\s+(\w+)")
LEAVE = re.compile(r"\s*\.end(?:\s|$)")


LOADS = {'lb', 'lbu', 'lh', 'lhu', 'lw', 'lwl', 'lwr'}


def names(target, kind='rawdiv'):
    path = ROOT / 'config' / (kind + '.' + target + '.txt')
    if not path.exists():
        return set()
    return {line.split('#')[0].strip() for line in path.read_text().splitlines()} - {''}


def through_dest(lines):
    """Troca $at pelo registrador de destino na expansão de um load com registrador-base."""
    i = lines.index('# EXPAND_AT START')
    j = lines.index('# EXPAND_AT END', i)
    block = lines[i:j]
    last = [l for l in block if not l.startswith(('.', '#'))]
    if len(last) != 3:
        return lines
    op, args = last[2].split(None, 1)
    dest = args.split(',')[0]
    src = [r for r in last[1].split(None, 1)[1].split(',')[1:] if r != '$at'][0]
    if op not in LOADS or dest in (src, '$0', '$zero') or not last[0].startswith('lui'):
        return lines
    out = [l.replace('$at', dest) if not l.startswith(('.', '#')) else l for l in block]
    return lines[:i] + out + lines[j:]


def main():
    target = None
    if '--target' in sys.argv:
        i = sys.argv.index('--target')
        target = sys.argv[i + 1]
        del sys.argv[i:i + 2]
    unchecked = names(target) if target else set()
    destload = names(target, 'destload') if target else set()
    sys.path.insert(0, '/opt/maspsx')
    import maspsx

    original = maspsx.MaspsxProcessor

    class ProfiledProcessor(original):
        def __init__(self, *args, **kwargs):
            super().__init__(*args, **kwargs)
            self.checked_division = self.expand_div
            self.dest_expand = False

        def process_line(self, line):
            entry = ENTER.match(line)
            if entry:
                self.expand_div = self.checked_division and entry.group(1) not in unchecked
                self.dest_expand = entry.group(1) in destload
            result = super().process_line(line)
            if LEAVE.match(line):
                self.expand_div = self.checked_division
                self.dest_expand = False
            if self.dest_expand and '# EXPAND_AT START' in result:
                result = through_dest(result)
            return result

    maspsx.MaspsxProcessor = ProfiledProcessor
    runpy.run_path('/opt/maspsx/maspsx.py', run_name='__main__')


if __name__ == '__main__':
    main()
