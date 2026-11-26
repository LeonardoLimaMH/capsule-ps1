#!/bin/bash
# main -> decomp-wtf (cópia dos agentes): guarda o trabalho em andamento num stash, deixa o código igual ao main,
# refaz o split, confere os 5 SHA-1 e regenera os objetos/objdiff.json que o app usa.
set -e
cd "$HOME/Decomp/capsule-ps1"
git fetch -q origin
ref=$(git rev-parse --short origin/main)
git stash push -u -q -m "WIP dos agentes antes do sync com main $ref ($(date +%F))"
echo "stash: $(git stash list | head -1)"
git restore --source=origin/main --staged --worktree -- src include config tools equiv docs AGENTS.md README.md Makefile .decomp.wtf.json
git clean -fdq src
git add -A src include config tools equiv docs AGENTS.md README.md Makefile .decomp.wtf.json
git commit -q -m "sync: main -> decomp-wtf ($ref)" -m "Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>"
echo "commit: $(git log -1 --format='%h %s')"
echo "diferenças para o main em src/config/tools: $(git diff --stat origin/main -- src include config tools | tail -1)"
rm -rf asm
./run.sh make split < /dev/null > /tmp/split.log 2>&1 || { echo "split falhou"; tail -5 /tmp/split.log; exit 1; }
./run.sh make -j6 < /dev/null > /tmp/make.log 2>&1 || true
grep '^\[' /tmp/make.log
./run.sh python3 tools/objdiff_report.py --objects < /dev/null 2>&1 | tail -2
echo "objetos-alvo com tabelas: $(grep -l '^.section .jtbl' build/objdiff/target/*/*.s | wc -l)"
git status --short | grep -v '^??' | head -5
