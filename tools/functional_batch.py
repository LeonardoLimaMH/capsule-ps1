#!/usr/bin/env python3
"""Functional-first batch: independent drafts, bounded attempts, atomic acceptance.

Run in the toolchain container. Timed-out drafts remain pending; acceptance
requires 200 complete equal executions per seed and ordinary differential checks.
"""
import argparse
import concurrent.futures as cf
import hashlib
import json
import os
import pathlib
import re
import subprocess
import sys
import time

import arggaps
import autodecomp as ad
import functional_context
import functional_ghidra
import functional_m2c
import functional_stack
import retuse
from handwritten import load as handwritten

ROOT = pathlib.Path(__file__).resolve().parent.parent
CACHE = ROOT / '.cache/functional_batch'
REAL_CALLEES = set()
M2C_TARGET = 'mipsel-gcc-c'
CALLEE_CONTEXT = True
STACK_FRAMES = False
GHIDRA_DATA = {}
RESOLVE_GP = False
BATTLE_PROFILE = ('/* rand-u16: 0x8008EE54 1 '
                  '0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */\n')


def required_profile(asm_text):
    if functional_ghidra.access_types(asm_text).get(0x8008EE54) in ('s16', 'u16'):
        return BATTLE_PROFILE
    return ''


def candidates(target, func):
    asm = ad.asm_path(target, func)
    if asm is None:
        return []
    asm_text = asm.read_text()
    state_profile = required_profile(asm_text)
    for name in sorted(REAL_CALLEES & set(re.findall(r'\bjal\s+(\w+)', asm_text))):
        state_profile += '/* real-callee: ' + name + ' */\n'
    out = []
    m2c_flags = ('--target', M2C_TARGET)
    context = functional_context.leaf_context(target, asm_text) if CALLEE_CONTEXT else None
    if context:
        folder = CACHE / target / func
        folder.mkdir(parents=True, exist_ok=True)
        path = folder / 'context.c'
        path.write_text(context, encoding='utf-8')
        m2c_flags += ('--context', str(path))
    m2c = ad.run_m2c(target, func, asm, m2c_flags)
    for char_signed in (True, False):
        typed = functional_ghidra.draft(target, func, asm_text, m2c or '', char_signed=char_signed, resolve_gp=RESOLVE_GP)
        if typed:
            label = 'ghidra-typed' if char_signed else 'ghidra-unsigned-char'
            out.append((label, typed))
            addressed = functional_ghidra.data_address_variant(typed, GHIDRA_DATA.get(target, []))
            if addressed:
                out.append((label + '+data-address', addressed))
            byte_addressed = functional_ghidra.byte_address_variant(typed)
            if byte_addressed:
                out.append((label + '+byte-address', byte_addressed))
    best = ad.load_best(target, func)
    if best and best.get('c'):
        out.append(('cached', ad.scalarize(best['c']) if '+g0fill' in best.get('gcc', '') else best['c']))
    out.extend(('draft', functional_m2c.unaligned_words(c))
               for c in ad.all_drafts(target, func, m2c_flags=m2c_flags))
    seen, result = set(), []
    char_variants = []
    for label, code in out:
        if '#include "ghidra.h"' in code:
            char_variants.extend((label + suffix, functional_ghidra.signed_chars(code, signed))
                                 for suffix, signed in [('', True), ('+unsigned-char', False)])
        else:
            char_variants.append((label, code))
    for label, code in char_variants:
        layouts = [(label, code)]
        if STACK_FRAMES:
            for compact in [True, False]:
                frame = functional_stack.frame_variant(code, func, compact=compact)
                if frame:
                    layouts.append((label + '+stack-frame' + ('' if compact else '+full'), frame))
        for variant_label, layout in layouts:
            for variant in [layout, arggaps.restore(layout, func)]:
                if variant and variant not in seen:
                    seen.add(variant)
                    result.append((variant_label, state_profile + variant))
    return result


def try_function(target, func, seconds=45, budget=180, prepared=None, seeds=(1, 2)):
    dest = ROOT / 'equiv' / target / (func + '.c')
    if dest.exists():
        return {'target': target, 'func': func, 'status': 'already present'}
    folder = CACHE / target / func
    folder.mkdir(parents=True, exist_ok=True)
    extra = [] if retuse.used(func) else ['--ignore-v0']
    if retuse.used(func, reg='$v1'):
        extra.append('--check-v1')
    started, attempts = time.monotonic(), []
    try:
        drafts = candidates(target, func) if prepared is None else prepared
    except (subprocess.TimeoutExpired, ValueError) as exc:
        drafts = []
        attempts.append({'status': 'draft failed', 'message': str(exc)})
    accepted = None
    asm = ad.asm_path(target, func)
    # Prepared/manual drafts bypass candidates(). Apply the same state fixture
    # here too, so a switch cannot pass only its unchanged image/default state.
    profile = required_profile(asm.read_text()) if asm else ''
    for i, (label, code) in enumerate(drafts):
        if time.monotonic() - started >= budget:
            break
        src = folder / (str(i) + '.c')
        if profile and not re.search(r'/\* rand-u16:\s*0x8008[Ee][Ee]54\b', code):
            code = profile + code
        text = ad.HEADER + code.strip() + '\n'
        src.write_text(text)
        passed = bool(seeds)
        for seed in seeds:
            if time.monotonic() - started >= budget:
                attempts.append({'variant': label, 'seed': seed, 'status': 'deferred: time budget'})
                passed = False
                break
            cmd = [sys.executable, 'tools/difftest.py', target, func, '--src',
                   str(src.relative_to(ROOT)), '--abi', '--isolate', '--trials', '200',
                   '--seed', str(seed)] + extra
            try:
                proc = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True,
                                      timeout=min(seconds, max(1, budget - (time.monotonic() - started))))
                message = proc.stdout + proc.stderr
                match = re.search(r'\[EQUIVALENTE\].*?\b(\d+) tentativas', message)
                passed = proc.returncode == 0 and match is not None and int(match[1]) >= 200
                attempts.append({'variant': label, 'seed': seed, 'exit': proc.returncode, 'message': message})
            except subprocess.TimeoutExpired:
                attempts.append({'variant': label, 'seed': seed, 'status': 'deferred: time budget'})
                passed = False
            if not passed:
                break
        if passed:
            # A concurrently accepted source must never be overwritten. The
            # candidate is fully written outside equiv/ before the atomic link.
            dest.parent.mkdir(parents=True, exist_ok=True)
            try:
                os.link(src, dest)
                accepted = hashlib.sha256(text.encode()).hexdigest()
            except FileExistsError:
                pass
            break
    rec = {'target': target, 'func': func, 'status': 'accepted' if accepted else 'pending',
           'sha256': accepted, 'seeds': list(seeds),
           'return_options': extra, 'm2c_target': M2C_TARGET, 'callee_context': CALLEE_CONTEXT,
           'stack_frames': STACK_FRAMES,
           'seconds': round(time.monotonic() - started, 2), 'attempts': attempts}
    (folder / 'result.json').write_text(json.dumps(rec, ensure_ascii=False, indent=2))
    return rec


def main():
    global M2C_TARGET, CALLEE_CONTEXT, STACK_FRAMES, RESOLVE_GP
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('targets', nargs='+', choices=['chess', 'raise', 'yuugi', 'slpm', 'etc'])
    ap.add_argument('--jobs', type=int, default=4)
    ap.add_argument('--draft-jobs', type=int, default=2, help='independent workers preparing the next candidates')
    ap.add_argument('--prefetch', type=int, default=0, help='maximum functions in flight (default: twice the validator count plus draft workers)')
    ap.add_argument('--seconds', type=int, default=45, help='time per draft; timeout never counts as accepted')
    ap.add_argument('--budget', type=int, default=180, help='total time per function')
    ap.add_argument('--seeds', type=lambda value: tuple(int(x) for x in value.split(',')), default=(1, 2),
                    help='require 200 complete equal executions for every seed (default: 1,2)')
    ap.add_argument('--only')
    ap.add_argument('--limit', type=int, default=0)
    ap.add_argument('--max-size', type=lambda value: int(value, 0), default=0,
                    help='defer functions larger than this byte size (0 means no size limit)')
    ap.add_argument('--resume', action='store_true', help='skip completed result records; omit after changing draft generation')
    ap.add_argument('--ghidra-cache', help='alternative Ghidra C cache containing target/function.c')
    ap.add_argument('--ghidra-data', help='Ghidra data-item JSON, mapping each target to its item list')
    ap.add_argument('--m2c-target', choices=['mipsel-gcc-c', 'mips-gcc-c'], default='mipsel-gcc-c',
                    help='m2c input byte order; PS1 uses mipsel (byte-exact search defaults are unchanged)')
    ap.add_argument('--no-callee-context', action='store_true',
                    help='disable leaf-helper signatures when comparing generation strategies')
    ap.add_argument('--stack-frames', action='store_true',
                    help='also test layouts recovered from explicit Ghidra stack offsets')
    ap.add_argument('--resolve-gp', action='store_true',
                    help='recover read-only unaff_gp from the target ABI; reject functions that change gp')
    ap.add_argument('--real-callee', action='append', default=[], help='execute this helper when called; persist the test profile in C')
    args = ap.parse_args()
    M2C_TARGET = args.m2c_target
    CALLEE_CONTEXT = not args.no_callee_context
    STACK_FRAMES = args.stack_frames
    RESOLVE_GP = args.resolve_gp
    if args.jobs < 1 or args.draft_jobs < 1 or args.prefetch < 0 or not args.seeds:
        ap.error('worker counts must be positive; prefetch must not be negative')
    REAL_CALLEES.update(args.real_callee)
    if args.ghidra_data:
        data = json.loads(pathlib.Path(args.ghidra_data).read_text())
        if not isinstance(data, dict) or any(not isinstance(data.get(t, []), list) for t in args.targets):
            ap.error('--ghidra-data expects a target-to-item-list mapping')
        GHIDRA_DATA.update(data)
    if args.ghidra_cache:
        functional_ghidra.CACHE = pathlib.Path(args.ghidra_cache).resolve()
        ad.ghidra2c.CACHE = functional_ghidra.CACHE
    jobs = []
    for t in args.targets:
        hand = handwritten(t)
        for _, f in ad.pending_functions(t):
            if f not in hand and not (ROOT / 'equiv' / t / (f + '.c')).exists() and (not args.only or f == args.only):
                if args.resume and (CACHE / t / f / 'result.json').exists():
                    continue
                size = ad.func_size(ad.asm_path(t, f))
                if args.max_size and size > args.max_size:
                    continue
                jobs.append((t, f, size))
    # Larger functions move the byte-based progress most. Time budgets prevent
    # one difficult function from occupying a worker indefinitely.
    jobs.sort(key=lambda x: -x[2])
    if args.limit:
        jobs = jobs[:args.limit]
    retuse.used(jobs[0][1]) if jobs else None  # fill shared read-only indexes once
    print(f'{len(jobs)} pending functions; {args.draft_jobs} generators + {args.jobs} validators; '
          f'200 complete executions required per seed {args.seeds}', flush=True)
    accepted, done = 0, 0
    iterator = iter(jobs)
    with cf.ThreadPoolExecutor(args.draft_jobs) as generators, cf.ThreadPoolExecutor(args.jobs) as validators:
        pending, generating, validating = set(), {}, {}

        def prepare_next():
            job = next(iterator, None)
            if job is None:
                return
            t, f, size = job
            future = generators.submit(candidates, t, f)
            generating[future] = job
            pending.add(future)

        for _ in range(args.prefetch or (2 * args.jobs + args.draft_jobs)):
            prepare_next()
        while pending:
            ready, _ = cf.wait(pending, return_when=cf.FIRST_COMPLETED)
            for future in ready:
                pending.remove(future)
                if future in generating:
                    t, f, size = generating.pop(future)
                    try:
                        drafts = future.result()
                    except (subprocess.TimeoutExpired, ValueError) as exc:
                        print(f'DEFER {t} {f}: candidate generation: {exc}', flush=True)
                        drafts = []
                    validation = validators.submit(try_function, t, f, args.seconds, args.budget, drafts, args.seeds)
                    validating[validation] = size
                    pending.add(validation)
                    continue
                size = validating.pop(future)
                rec = future.result()
                done += 1
                if rec['status'] == 'accepted':
                    accepted += 1
                    print(f"ACCEPT {rec['target']} {rec['func']} {size} bytes {rec['seconds']}s", flush=True)
                if done % 20 == 0:
                    print(f'PROGRESS {done}/{len(jobs)}; accepted {accepted}; '
                          f'generating {len(generating)}; validating/queued {len(validating)}', flush=True)
                prepare_next()
    print(f'COMPLETE {done}; accepted {accepted}', flush=True)


if __name__ == '__main__':
    main()
