#!/bin/bash
# try_one.sh <alvo> <função> <candidato.c> [nogp] [perfil]: põe o C do candidato no lugar do INCLUDE_ASM (com
# rename_clash.py, rodata_migrate e o laço de conflitos do integrate.sh), opcionalmente liga nogp e troca o
# perfil do arquivo, e faz commit só se os 5 SHA-1 baterem. Se não der no arquivo (ex.: switch num arquivo que
# já tem .rodata próprio), tenta a função numa TU própria (own_tu.sh). Senão desfaz tudo.
# Saída: "MATCH <f>" ou "falha <f>".
cd "$(dirname "$0")/../.."
A=tools/agents
mkdir -p .cache/agents; exec 8> .cache/agents/git.lock; flock 8  # um try_one por vez (pipeline e trabalhadores do permuter)
t=$1; f=$2; c=$3; ng=${4:-}; pr=${5:-}
mkdir -p .cache/agents/try; w=.cache/agents/try/$f.c; cp "$c" "$w"
grep -q '#include "common.h"' "$w" || sed -i '1i #include "common.h"' "$w"
cp "$w" .cache/agents/try/$f.alone.c
file=$(grep -lE "INCLUDE_ASM\(\"[^\"]+\", $f\)" src/$t/*.c | head -1)
[ -z "$file" ] && { echo "já em C: $f"; exit 0; }
python3 $A/rename_clash.py "$file" "$w" "$f" > /dev/null
stem=$(basename "$file" .c)
p=$(awk -v p="src/$t/$stem.c" '$1==p{print $2}' config/compilers.txt); p=${p:-2.7.2-psx}

setup() {  # nogp e perfil pedidos
  [ -n "$ng" ] && echo "$f" >> config/nogp.$t.txt
  if [ -n "$pr" ] && [ "$pr" != "$p" ]; then
    awk -v p="src/$t/$stem.c" '$1!=p' config/compilers.txt > .cache/agents/cc.txt && cat .cache/agents/cc.txt > config/compilers.txt
    echo "src/$t/$stem.c $pr" >> config/compilers.txt
  fi
}
undo() {
  local yc; yc=$(git diff --name-only -- 'config/*.yaml'; git ls-files -o --exclude-standard src)
  git checkout -q -- src config; git clean -fdq src
  [ -f config/nogp.$t.txt ] && ! git ls-files --error-unmatch config/nogp.$t.txt > /dev/null 2>&1 && rm -f config/nogp.$t.txt
  if [ -n "$yc" ]; then rm -rf asm; ./run.sh make split < /dev/null > /dev/null 2>&1; fi
}
ok5() { [ "$(./run.sh make -j10 < /dev/null 2>&1 | grep -c '^\[OK\]')" = 5 ]; }
commit() {
  echo "MATCH $f"
  [ -f equiv/$t/$f.c ] && git rm -q equiv/$t/$f.c
  git add -A src config
  git commit -qm "$f em C${ng:+ (nogp)}${pr:+ ($pr)}$1; 5 SHA-1 conferidos" -m "Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>"
  exit 0
}

setup
echo "$t $f ${pr:-$p} $w" > .cache/agents/one.txt
r=$(bash $A/integrate.sh .cache/agents/one.txt 2>/dev/null | grep -E "^(ok|falha)")
if echo "$r" | grep -q "^ok" && ok5; then commit ""; fi
undo
# TU própria: o candidato inteiro (compila sozinho) vira o arquivo da função
if [ -z "$pr" ]; then
  setup
  if bash $A/own_tu.sh "$t" "$f" "$p" .cache/agents/try/$f.alone.c > .cache/agents/own_tu.log 2>&1 && ok5; then commit " (TU própria)"; fi
  undo
fi
echo "falha $f"
