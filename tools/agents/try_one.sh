#!/bin/bash
# try_one.sh <alvo> <função> <candidato.c> [nogp] [perfil]: põe o C do candidato no lugar do INCLUDE_ASM (com
# rename_clash.py, rodata_migrate e o laço de conflitos do integrate.sh), opcionalmente liga nogp, e faz
# commit só se os 5 SHA-1 baterem; senão desfaz tudo. Saída: "MATCH <f>" ou "falha <f>".
cd "$(dirname "$0")/../.."
A=tools/agents
t=$1; f=$2; c=$3; ng=${4:-}; pr=${5:-}
mkdir -p .cache/agents/try; w=.cache/agents/try/$f.c; cp "$c" "$w"
grep -q '#include "common.h"' "$w" || sed -i '1i #include "common.h"' "$w"
file=$(grep -lE "INCLUDE_ASM\(\"[^\"]+\", $f\)" src/$t/*.c | head -1)
[ -z "$file" ] && { echo "já em C: $f"; exit 0; }
python3 $A/rename_clash.py "$file" "$w" "$f" > /dev/null
stem=$(basename "$file" .c)
p=$(awk -v p="src/$t/$stem.c" '$1==p{print $2}' config/compilers.txt); p=${p:-2.7.2-psx}
if [ -n "$pr" ] && [ "$pr" != "$p" ]; then  # troca o perfil do arquivo inteiro; os 5 SHA-1 dizem se as outras funções aguentam
  awk -v p="src/$t/$stem.c" '$1!=p' config/compilers.txt > .cache/agents/cc.txt && cat .cache/agents/cc.txt > config/compilers.txt
  echo "src/$t/$stem.c $pr" >> config/compilers.txt; p=$pr
fi
[ -n "$ng" ] && echo "$f" >> config/nogp.$t.txt
echo "$t $f $p $w" > .cache/agents/one.txt
r=$(bash $A/integrate.sh .cache/agents/one.txt 2>/dev/null | grep -E "^(ok|falha)")
if echo "$r" | grep -q "^ok" && [ "$(./run.sh make -j10 < /dev/null 2>&1 | grep -c '^\[OK\]')" = 5 ]; then
  echo "MATCH $f"
  [ -f equiv/$t/$f.c ] && git rm -q equiv/$t/$f.c
  git add -A src config
  git commit -qm "$f em C${ng:+ (nogp)}${pr:+ ($pr)}; 5 SHA-1 conferidos" -m "Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>"
else
  echo "falha $f"
  yc=$(git diff --name-only -- 'config/*.yaml')
  git checkout -q -- src config; git clean -fdq src
  [ -f config/nogp.$t.txt ] && ! git ls-files --error-unmatch config/nogp.$t.txt > /dev/null 2>&1 && rm -f config/nogp.$t.txt
  if [ -n "$yc" ]; then rm -rf asm; ./run.sh make split < /dev/null > /dev/null 2>&1; fi
fi
