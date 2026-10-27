#!/usr/bin/env python3
"""Functional-first batch: independent drafts, bounded attempts, atomic acceptance.

Run in the toolchain container. Timed-out drafts remain pending; acceptance
requires 200 complete equal executions and the ordinary differential checks.
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
import functional_ghidra
import retuse
from handwritten import load as handwritten

ROOT = pathlib.Path(__file__).resolve().parent.parent
CACHE = ROOT / '.cache/functional_batch'


def candidates(target, func):
    asm = ad.asm_path(target, func)
    if asm is None:
        return []
    asm_text = asm.read_text()
    state_profile = ''
    if functional_ghidra.access_types(asm_text).get(0x8008EE54) in ('s16', 'u16'):
        state_profile = '/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */\n'
    out = []
    typed = functional_ghidra.draft(target, func, asm_text)
    if typed:
        out.append(('ghidra-typed', typed))
    best = ad.load_best(target, func)
    if best and best.get('c'):
        out.append(('cached', ad.scalarize(best['c']) if '+g0fill' in best.get('gcc', '') else best['c']))
    out.extend(('draft', c) for c in ad.all_drafts(target, func))
    seen, result = set(), []
    for label, code in out:
        for variant in [code, arggaps.restore(code, func)]:
            if variant and variant not in seen:
                seen.add(variant)
                result.append((label, state_profile + variant))
    return result


def try_function(target, func, seconds=45, budget=180):
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
        drafts = candidates(target, func)
    except (subprocess.TimeoutExpired, ValueError) as exc:
        drafts = []
        attempts.append({'status': 'draft failed', 'message': str(exc)})
    accepted = None
    for i, (label, code) in enumerate(drafts):
        if time.monotonic() - started >= budget:
            break
        src = folder / (str(i) + '.c')
        text = ad.HEADER + code.strip() + '\n'
        src.write_text(text)
        cmd = [sys.executable, 'tools/difftest.py', target, func, '--src',
               str(src.relative_to(ROOT)), '--abi', '--isolate', '--trials', '200'] + extra
        try:
            proc = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True,
                                  timeout=min(seconds, max(1, budget - (time.monotonic() - started))))
            message = proc.stdout + proc.stderr
            match = re.search(r'\[EQUIVALENTE\].*?\b(\d+) tentativas', message)
            passed = proc.returncode == 0 and match is not None and int(match[1]) >= 200
            attempts.append({'variant': label, 'exit': proc.returncode, 'message': message})
        except subprocess.TimeoutExpired:
            attempts.append({'variant': label, 'status': 'deferred: time budget'})
            passed = False
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
           'sha256': accepted, 'seconds': round(time.monotonic() - started, 2), 'attempts': attempts}
    (folder / 'result.json').write_text(json.dumps(rec, ensure_ascii=False, indent=2))
    return rec


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('targets', nargs='+', choices=['chess', 'raise', 'yuugi', 'slpm', 'etc'])
    ap.add_argument('--jobs', type=int, default=4)
    ap.add_argument('--seconds', type=int, default=45, help='time per draft; timeout never counts as accepted')
    ap.add_argument('--budget', type=int, default=180, help='total time per function')
    ap.add_argument('--only')
    ap.add_argument('--limit', type=int, default=0)
    ap.add_argument('--resume', action='store_true', help='skip completed result records; omit after changing draft generation')
    args = ap.parse_args()
    jobs = []
    for t in args.targets:
        hand = handwritten(t)
        for _, f in ad.pending_functions(t):
            if f not in hand and not (ROOT / 'equiv' / t / (f + '.c')).exists() and (not args.only or f == args.only):
                if args.resume and (CACHE / t / f / 'result.json').exists():
                    continue
                jobs.append((t, f, ad.func_size(ad.asm_path(t, f))))
    # Larger functions move the byte-based progress most. Time budgets prevent
    # one difficult function from occupying a worker indefinitely.
    jobs.sort(key=lambda x: -x[2])
    if args.limit:
        jobs = jobs[:args.limit]
    retuse.used(jobs[0][1]) if jobs else None  # fill shared read-only indexes once
    print(f'{len(jobs)} pending functions; {args.jobs} workers; 200 complete executions required', flush=True)
    accepted, done = 0, 0
    with cf.ThreadPoolExecutor(args.jobs) as pool:
        futures = {pool.submit(try_function, t, f, args.seconds, args.budget): size for t, f, size in jobs}
        for future in cf.as_completed(futures):
            rec = future.result()
            done += 1
            if rec['status'] == 'accepted':
                accepted += 1
                print(f"ACCEPT {rec['target']} {rec['func']} {futures[future]} bytes {rec['seconds']}s", flush=True)
            if done % 20 == 0:
                print(f'PROGRESS {done}/{len(jobs)}; accepted {accepted}', flush=True)
    print(f'COMPLETE {done}; accepted {accepted}', flush=True)


if __name__ == '__main__':
    main()
