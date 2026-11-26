#!/bin/bash
# integrate.sh <lista>: cada linha "<alvo> <função> <perfil> <candidato.c>". Migra o rodata (rodata_migrate),
# troca o INCLUDE_ASM pelo candidato, tira repetições (dedupe.py) e resolve conflitos de tipo/extern com o
# arquivo (fix_typedef.py / fix_conflict.py). Imprime "ok"/"falha" por função; desfaz o que falhou.
cd "$(dirname "$0")/../.."
A=tools/agents
while read -r t f p src; do
  grep -rqE "INCLUDE_ASM\(.*, $f\)" src/$t/ || { echo "ok $t/$f"; continue; }
  g=${p%%+*}; file=$(grep -lE "INCLUDE_ASM\(.*, $f\)" src/$t/*.c | head -1)
  cp config/$t.yaml .cache/agents/yaml.bak
  ./run.sh python3 tools/rodata_migrate.py $t $f $src --gcc $g < /dev/null > /dev/null 2>&1
  if ! cmp -s config/$t.yaml .cache/agents/yaml.bak; then rm -rf asm; ./run.sh make split < /dev/null > /dev/null 2>&1; file=$(grep -lE "INCLUDE_ASM\(.*, $f\)" src/$t/*.c | head -1); fi
  cp "$file" .cache/agents/file.bak
  python3 $A/apply_candidate.py "$file" $f $src 2>/dev/null; python3 $A/dedupe.py "$file" > /dev/null
  for n in 1 2 3 4 5 6 7 8; do
    e=$(./run.sh make -k -j10 < /dev/null 2>&1 | grep "conflicting types for\|redefinition of" | grep -v built-in | head -1)
    [ -z "$e" ] && break
    ef=$(echo "$e" | cut -d: -f1); sym=$(echo "$e" | grep -o "\`[A-Za-z_0-9]*'" | head -1 | tr -d "\`'")
    [ "$ef" != "$file" ] && break
    case "$sym" in S_*|Rec_*|Unk_*) python3 $A/fix_typedef.py "$file" "$sym" > /dev/null;; *) python3 $A/fix_conflict.py "$file" "$sym" > /dev/null;; esac
  done
  if [ "$(./run.sh make -j10 < /dev/null 2>&1 | grep -c '^\[OK\]')" = 5 ]; then echo "ok $t/$f"
  else echo "falha $t/$f"; cp .cache/agents/file.bak "$file"
    if ! cmp -s config/$t.yaml .cache/agents/yaml.bak; then cp .cache/agents/yaml.bak config/$t.yaml; rm -rf asm; ./run.sh make split < /dev/null > /dev/null 2>&1; fi
  fi
done < "$1"
