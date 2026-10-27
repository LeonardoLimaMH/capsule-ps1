#!/usr/bin/env python3
"""Build a local analysis ELF containing YUUGI plus one overlay and their symbols.

Run in the toolchain container after a byte-identical build. Output contains
private game bytes and stays under ignored .cache/; only this generator is source.
Import the resulting ELF into a separate Ghidra project folder without forcing
the loader language, so the ELF's RAM addresses and function symbols are retained.
"""
import argparse
import pathlib
import re
import subprocess

import progress

ROOT = pathlib.Path(__file__).resolve().parent.parent


def build(target):
    folder = ROOT / '.cache/ghidra-merged' / target
    folder.mkdir(parents=True, exist_ok=True)
    main_file = ROOT / 'disc/YUUGI.EXE'
    overlay_file = ROOT / 'disc/MASTER/PSF' / (target.upper() + '.BIN')
    for name, original in [('yuugi', main_file), (target, overlay_file)]:
        built = ROOT / 'build' / (name + '.exe')
        if not built.exists() or built.read_bytes() != original.read_bytes():
            raise SystemExit('Rebuild and verify ' + name + ' before exporting its symbol map')
    main = main_file.read_bytes()[0x800:]
    overlay = overlay_file.read_bytes()
    base, overlay_base = 0x80010000, 0x80097800
    offset = overlay_base - base
    ram = bytearray(max(len(main), offset + len(overlay)))
    ram[:len(main)], ram[offset:offset + len(overlay)] = main, overlay
    (folder / 'ram.bin').write_bytes(ram)
    lines = ['.section .ram,"awx",@progbits', 'ram_start:',
             '.incbin "' + (folder / 'ram.bin').as_posix() + '"']
    seen, functions = set(), 0
    for t in ['yuugi', target]:
        sizes = progress.function_sizes(t)
        for line in (ROOT / 'build' / (t + '.map')).read_text(encoding='utf-8').splitlines():
            match = re.match(r'\s+0x([0-9a-f]{8})\s+([A-Za-z_]\w*)\s*$', line)
            if not match:
                continue
            address, name = int(match[1], 16), match[2]
            if name in seen or not base <= address < base + len(ram):
                continue
            if name not in sizes and not name.startswith(('D_', 'jtbl_')):
                continue
            seen.add(name)
            lines.extend(['.globl ' + name, '.type ' + name + (',@function' if name in sizes else ',@object'),
                          f'.set {name},ram_start+0x{address - base:X}'])
            if name in sizes:
                lines.append('.size ' + name + ',' + str(sizes[name]))
                functions += 1
    assembly, obj, script = folder / 'ram.s', folder / 'ram.o', folder / 'ram.ld'
    assembly.write_text('\n'.join(lines) + '\n', encoding='utf-8')
    script.write_text('SECTIONS { . = 0x80010000; .ram : { *(.ram) } /DISCARD/ : { *(*) } }\n')
    elf = folder / ('codex-' + target + '-merged.elf')
    subprocess.run(['mips-linux-gnu-as', '-EL', '-march=r3000', '-o', str(obj), str(assembly)], check=True)
    subprocess.run(['mips-linux-gnu-ld', '-EL', '-T', str(script), '-e', 'main', '-o', str(elf), str(obj)], check=True)
    print(f'{elf.relative_to(ROOT)}: {functions} functions, {len(seen)} symbols, {len(ram)} mapped bytes')
    return elf


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('target', choices=['chess', 'raise', 'etc'])
    build(parser.parse_args().target)
