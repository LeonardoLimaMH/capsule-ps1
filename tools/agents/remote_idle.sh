#!/bin/bash
# remote_idle.sh [fração]: roda NO COMPUTADOR REMOTO. Sai 0 se a máquina está livre para o permuter: tem a imagem
# do toolchain e a CPU ocupada agora (5 s de /proc/stat) está abaixo de <fração> dos núcleos (padrão 0.25).
# Mede o instante, não a carga média, que ainda carregaria a tarefa anterior do próprio permuter.
docker image inspect ygo-decomp-tc > /dev/null 2>&1 || exit 2
read -r _ u1 n1 s1 i1 w1 q1 sq1 _ < /proc/stat
sleep 5
read -r _ u2 n2 s2 i2 w2 q2 sq2 _ < /proc/stat
busy=$(( (u2 + n2 + s2 + q2 + sq2) - (u1 + n1 + s1 + q1 + sq1) ))
total=$(( busy + (i2 + w2) - (i1 + w1) ))
awk -v b=$busy -v t=$total -v f="${1:-0.25}" 'BEGIN{exit !(t > 0 && b / t < f)}'
