#!/bin/bash
# night_llm.sh <usuario@host> <modelo> <sessões> <HH:MM fim>: até o horário de fim, agentes do app rodando num modelo
# do Ollama de outra máquina (trabalho ativo, além do permuter). No fim: as sessões param, o endpoint sai das
# configurações do app e o modelo é descarregado da GPU da máquina (o Ollama dela volta ao que era). O modelo
# baixado fica no disco dela para a próxima vez. Um guarda na própria máquina descarrega o modelo no mesmo horário
# caso este computador esteja desligado.
# Ex.: setsid nohup tools/agents/night_llm.sh ia-server@100.105.136.53 gpt-oss:20b 2 09:00 >> .cache/agents/night.log 2>&1 &
cd "$(dirname "$0")/../.."
A=tools/agents
HOST=$1; MODEL=$2; N=${3:-2}; END=${4:-09:00}
DISTRO=${AGENTS_DISTRO:-decomp-wtf}; SSH=${PERM_SSH:-ssh.exe}
IP=${HOST#*@}; NAME="${IP}-noite"
log() { echo "[$(date '+%F %T')] [noite] $*"; }
rssh() { $SSH -o BatchMode=yes -o ConnectTimeout=10 "$HOST" "$@" < /dev/null; }
end=$(date -d "$END" +%s); [ "$end" -gt "$(date +%s)" ] || end=$(date -d "tomorrow $END" +%s)
left=$((end - $(date +%s)))

log "modelo $MODEL em $HOST, $N sessão(ões), até $(date -d @$end '+%F %T')"
rssh "ollama pull $MODEL > /dev/null 2>&1" || { log "não deu para baixar $MODEL"; exit 1; }
# guarda na máquina remota: descarrega o modelo no horário mesmo se este computador cair
rssh "setsid nohup bash -c 'sleep $left; ollama stop $MODEL' > /dev/null 2>&1 &"
wsl.exe -d "$DISTRO" --cd / -- python3 - start "$NAME" "http://$IP:11434/v1" "$MODEL" "$N" < $A/app_llm.py | while read -r l; do log "$l"; done

sleep "$left"
wsl.exe -d "$DISTRO" --cd / -- python3 - stop "$NAME" < $A/app_llm.py | while read -r l; do log "$l"; done
rssh "ollama stop $MODEL" && log "$MODEL descarregado de $HOST; Ollama de volta ao normal"
