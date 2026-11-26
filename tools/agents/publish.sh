#!/bin/bash
# publish.sh "<resumo>": tira de equiv/ o que já está em C, confere os 5 SHA-1, atualiza o README,
# faz o commit, envia ao GitHub (push.sh) e o relatório ao ByteMatch (make report).
set -e
cd "$(dirname "$0")/../.."
mkdir -p .cache/agents; exec 8> .cache/agents/git.lock; flock 8
for e in equiv/*/*.c; do
  [ -f "$e" ] || continue
  t=$(basename "$(dirname "$e")"); f=$(basename "$e" .c)
  grep -rqE "INCLUDE_ASM\(.*, $f\)" src/$t/ && continue
  grep -rqE "^[A-Za-z_][A-Za-z0-9_ *]*\b$f\s*\(" src/$t/ || continue
  git rm -q "$e"
done
./run.sh make -j8 < /dev/null > .cache/agents/publish.log 2>&1 || true
[ "$(grep -c '^\[OK\]' .cache/agents/publish.log)" = 5 ] || { echo "SHA-1 não confere; nada publicado"; exit 1; }
git add -A config src equiv include 2>/dev/null
./run.sh python3 tools/progress.py --readme --staged < /dev/null | tail -1
git add README.md
git diff --cached --quiet || git commit -q -m "decomp.anything: README e equiv após rodada de integração" -m "${1:-}" -m "Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>"
bash tools/agents/push.sh
./run.sh make report < /dev/null 2>&1 | tail -1
