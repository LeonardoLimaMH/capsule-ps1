#!/bin/bash
# perm_workers.sh ensure|stop|status [SEGUNDOS]: um perm_worker.sh por máquina (local + cada linha de
# .cache/agents/remotes.txt, "usuario@host"; fica fora do git). ensure sobe os que faltam (máquina nova no
# remotes.txt entra no próximo ensure); stop espera um try_one em andamento e derruba todos (as tarefas
# em andamento voltam à fila pelo lease).
cd "$(dirname "$0")/../.."
A=tools/agents; D=.cache/agents/workers
mkdir -p $D
hosts() { echo local; grep -v '^\s*#' .cache/agents/remotes.txt 2> /dev/null | tr -d '\r' | awk 'NF{print $1}'; }
alive() { [ -f "$D/$1.pid" ] && kill -0 "$(cat "$D/$1.pid")" 2> /dev/null; }
case "${1:-status}" in
  ensure)
    for h in $(hosts); do
      alive "$h" && continue
      setsid nohup bash $A/perm_worker.sh "$h" "${2:-180}" >> "$D/$h.log" 2>&1 < /dev/null &
      echo $! > "$D/$h.pid"; echo "trabalhador $h iniciado"
    done;;
  stop)
    # espera um try_one em andamento terminar (a trava do git) para não deixar src/ pela metade
    exec 8> .cache/agents/git.lock; flock 8
    for p in $D/*.pid; do [ -f "$p" ] || continue; kill -- -"$(cat "$p")" 2> /dev/null || kill "$(cat "$p")" 2> /dev/null; rm -f "$p"; done
    echo "trabalhadores parados";;
  status)
    for h in $(hosts); do echo "$h: $(alive "$h" && echo rodando || echo parado) | $(tail -1 "$D/$h.log" 2> /dev/null)"; done
    python3 $A/permq.py status;;
esac
