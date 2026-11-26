#!/bin/bash
# remote_perm.sh <função> <segundos> <jobs> [máx. núcleos dos outros]: roda NO COMPUTADOR REMOTO (~/capsule-perm,
# preparado pelo permute_near.sh) o decomp-permuter de .cache/permuter/<função> no container do toolchain,
# limitado a <jobs> núcleos. Um vigia mede a CPU usada pelos OUTROS processos da máquina a cada 15 s; se passar
# do limite (padrão: 1/4 dos núcleos) duas vezes seguidas, o permuter é parado (a máquina é de outra pessoa
# primeiro). Um 0 é copiado na hora para ~/capsule-perm/matches. Saída: 0 terminou, 3 parado por uso alto.
cd ~/capsule-perm || exit 1
f=$1; secs=$2; jobs=$3; ncpu=$(nproc); max=${4:-$((ncpu / 4))}
name=perm-$f-$$
docker run -d --rm --name "$name" --cpus "$jobs" --user "$(id -u):$(id -g)" -e HOME=/tmp -v "$PWD:/work" -w /work \
  ygo-decomp-tc timeout "$secs" python3 /opt/decomp-permuter/permuter.py /work/.cache/permuter/$f -j "$jobs" \
  --stop-on-zero --best-only > /dev/null || exit 1
save_match() {  # um 0 fica guardado aqui também, fora da pasta da tarefa (que é apagada depois da cópia)
  local o
  for o in .cache/permuter/$f/output-0-*; do
    [ -d "$o" ] || continue
    mkdir -p matches && cp -r "$o" "matches/$f-$(date +%Y%m%d-%H%M%S)-$(basename "$o")"
  done
}
busy() { awk '/^cpu /{print $2+$3+$4+$7+$8, $2+$3+$4+$5+$6+$7+$8}' /proc/stat; }
read -r b0 t0 < <(busy); high=0
while docker inspect "$name" > /dev/null 2>&1; do
  sleep 15
  read -r b1 t1 < <(busy)
  total=$(awk -v db=$((b1 - b0)) -v dt=$((t1 - t0)) -v n="$ncpu" 'BEGIN{print (dt > 0 ? db / dt * n : 0)}')
  b0=$b1; t0=$t1
  ours=$(docker stats --no-stream --format '{{.CPUPerc}}' "$name" 2> /dev/null | tr -d '%')
  others=$(awk -v t="$total" -v o="${ours:-0}" 'BEGIN{x = t - o / 100; print (x < 0 ? 0 : x)}')
  if awk -v x="$others" -v m="$max" 'BEGIN{exit !(x > m)}'; then high=$((high + 1)); else high=0; fi
  if [ $high -ge 2 ]; then docker kill "$name" > /dev/null 2>&1; save_match; echo "parado: outros processos usando ${others} núcleos"; exit 3; fi
done
save_match
exit 0
