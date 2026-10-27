#!/usr/bin/env python3
"""Run maspsx with the original division profile for each function.

Use maspsx's own unchecked expansion, preserving its scheduling and nop rules.
Rewriting the pseudo into div/mflo beforehand loses the macro's nop handling.
All functions outside config/rawdiv.<target>.txt keep the command-line profile.
"""
import pathlib
import re
import runpy
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
ENTER = re.compile(r"\s*\.ent\s+(\w+)")
LEAVE = re.compile(r"\s*\.end(?:\s|$)")


def names(target):
    path = ROOT / 'config' / ('rawdiv.' + target + '.txt')
    if not path.exists():
        return set()
    return {line.split('#')[0].strip() for line in path.read_text().splitlines()} - {''}


def main():
    target = None
    if '--target' in sys.argv:
        i = sys.argv.index('--target')
        target = sys.argv[i + 1]
        del sys.argv[i:i + 2]
    unchecked = names(target) if target else set()
    sys.path.insert(0, '/opt/maspsx')
    import maspsx

    original = maspsx.MaspsxProcessor

    class ProfiledProcessor(original):
        def __init__(self, *args, **kwargs):
            super().__init__(*args, **kwargs)
            self.checked_division = self.expand_div

        def process_line(self, line):
            entry = ENTER.match(line)
            if entry:
                self.expand_div = self.checked_division and entry.group(1) not in unchecked
            result = super().process_line(line)
            if LEAVE.match(line):
                self.expand_div = self.checked_division
            return result

    maspsx.MaspsxProcessor = ProfiledProcessor
    runpy.run_path('/opt/maspsx/maspsx.py', run_name='__main__')


if __name__ == '__main__':
    main()
