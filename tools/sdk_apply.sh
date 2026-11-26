#!/bin/bash
# sdk_apply.sh: integra no src/ as funções do SDK que tools/sdk_seed.py casou (.cache/sdk_seed/<alvo>/<f>.txt).
# Para cada uma: C mínimo (tools/with_helpers.py sobre o .i), perfil do arquivo (compilers.txt, g0fill.txt,
# sdk_o3.txt) e commit só se os 5 SHA-1 baterem; senão desfaz. Só mexe em arquivos sem outras funções em C.
cd "$(dirname "$0")/.."
for txt in .cache/sdk_seed/*/*.txt; do
  [ -f "$txt" ] || continue
  t=$(basename "$(dirname "$txt")"); f=$(basename "$txt" .txt)
  read -r gcc o g s g0 aspsx src < <(sed 's/g0fill=//; s/aspsx=//' "$txt")
  file=$(grep -lE "INCLUDE_ASM\(\"[^\"]+\", $f\)" src/$t/*.c | head -1)
  [ -z "$file" ] && { echo "já em C: $t/$f"; continue; }
  if grep -qE '^[A-Za-z_][A-Za-z0-9_ *]*\([^;]*\)\s*\{?\s*$' "$file"; then echo "pula $t/$f: $file já tem C"; continue; fi
  cand=.cache/sdk_seed/$t/$f.c
  python3 tools/agents/with_helpers.py ".cache/sdk_seed/$t/$f.i" "$f" "$cand.tmp" > /dev/null || { echo "falha extração $f"; continue; }
  { echo '#include "common.h"'; echo "/* $f: C de sozud/psy-q-decomp ($src), licença MIT, ver docs/terceiros/README.md */"; cat "$cand.tmp"; } > "$cand"; rm -f "$cand.tmp"
  python3 tools/agents/apply_candidate.py "$file" "$f" "$cand" && python3 tools/agents/dedupe.py "$file" > /dev/null
  awk -v p="$file" '$1!=p' config/compilers.txt > /tmp/cc.txt && cat /tmp/cc.txt > config/compilers.txt
  [ "$gcc" != "2.7.2-psx" ] && echo "$file $gcc" >> config/compilers.txt
  [ "$g0" = True ] && ! grep -qx "$file" config/g0fill.txt && echo "$file" >> config/g0fill.txt
  [ "$o" = -O3 ] && ! grep -qx "$file" config/sdk_o3.txt 2> /dev/null && echo "$file" >> config/sdk_o3.txt
  ok=$(./run.sh make -j10 < /dev/null 2>&1 | grep -c '^\[OK\]')
  if [ "$ok" = 5 ]; then
    git add -A src config "$file"
    git commit -qm "SDK: $f em C (sozud/psy-q-decomp, MIT; $gcc $o $s g0fill=$g0); 5 SHA-1 conferidos" -m "Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>"
    echo "MATCH $t/$f"
  else
    echo "falha $t/$f ($ok OK)"
    git checkout -q -- src config; git clean -fdq src config
  fi
done
