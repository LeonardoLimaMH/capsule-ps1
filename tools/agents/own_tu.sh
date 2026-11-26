#!/bin/bash
# own_tu.sh <alvo> <função> <perfil> <candidato.c>: põe a função numa TU própria cujo conteúdo é o próprio
# candidato (que compila sozinho). Funções com switch: migra antes o trecho do .rodata (jtbl) para o objeto C.
# Serve quando o arquivo de origem já tem subsegmento .rodata (rodata_migrate recusa) ou conflita com o candidato.
# Não commita; sai 0 se o arquivo foi montado.
cd "$(dirname "$0")/../.."
A=tools/agents
t=$1 f=$2 p=$3 s=$4; g=${p%%+*}
src0=$(grep -lE "INCLUDE_ASM\(.*, $f\)" src/$t/*.c | head -1); stem0=$(basename "$src0" .c)
python3 $A/isolate.py $t $f $p > /dev/null 2>&1 || { echo "isolate falhou"; exit 1; }
rm -rf asm; ./run.sh make split < /dev/null > /dev/null 2>&1
n=$(grep -lE "INCLUDE_ASM\(.*, $f\)" src/$t/*.c | head -1)
[ -n "$n" ] || { echo "TU não encontrada"; exit 1; }
others=$(grep -cE '^INCLUDE_ASM\(' "$n")
[ "$others" = 1 ] || { echo "TU com $others funções"; exit 1; }
s_asm=$(ls asm/$t/nonmatchings/*/$f.s 2>/dev/null | head -1)
if [ -n "$s_asm" ] && grep -qE '%(hi|lo)\(jtbl_' "$s_asm"; then
  cp config/$t.yaml .cache/agents/yaml_tu.bak
  out=$(./run.sh python3 tools/rodata_migrate.py $t $f $s --gcc $g < /dev/null 2>&1 | tail -1)
  cmp -s config/$t.yaml .cache/agents/yaml_tu.bak && { echo "rodata: $out"; exit 1; }
  rm -rf asm; ./run.sh make split < /dev/null > /dev/null 2>&1
fi
python3 $A/only_fn.py "$s" $f "$n" > /dev/null
# o arquivo de origem tinha .rodata próprio (switches das funções C dele): reparte entre os pedaços
if grep -q "\.rodata, $stem0\]" config/$t.yaml; then
  new=$(git ls-files -o --exclude-standard "src/$t/" | xargs -n1 basename | sed 's/\.c$//' | tr '\n' ' ')
  ./run.sh make -k -j4 < /dev/null > /dev/null 2>&1
  out=$(./run.sh python3 $A/split_rodata.py $t $stem0 $new < /dev/null 2>&1 | tail -1)
  case "$out" in "rodata repartido"*) rm -rf asm; ./run.sh make split < /dev/null > /dev/null 2>&1;;
                 "sem subsegmento"*) ;;
                 *) echo "rodata da origem: $out"; exit 1;; esac
fi
echo "montado: $n"
