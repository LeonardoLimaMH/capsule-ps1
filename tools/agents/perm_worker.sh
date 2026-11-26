#!/bin/bash
# perm_worker.sh <local|usuario@host> [SEGUNDOS]: trabalhador da fila do permuter (permq.py), um por máquina.
# Repete: se a máquina está livre, pega a próxima tarefa (lease = SEGUNDOS + 10 min), roda o decomp-permuter
# (local: tools/permute.py; remoto: via ssh, remote_perm.sh no container do toolchain, com vigia de CPU), traz o
# resultado e, se chegou a 0, passa pelo try_one.sh (5 SHA-1). Máquina ocupada/fora do ar: a tarefa volta à fila
# e o trabalhador espera. Se o trabalhador morrer, o lease vence e outra máquina pega a tarefa.
#   local  = livre quando nenhum agente do app tem claim (a CPU daqui é dos agentes primeiro)
#   remoto = livre quando responde e a CPU ocupada agora está abaixo de 1/4 dos núcleos (remote_idle.sh)
cd "$(dirname "$0")/../.."
A=tools/agents; W=.cache/agents
NAME=$1; SECS=${2:-180}
DISTRO=${AGENTS_DISTRO:-decomp-wtf}
SSH=${PERM_SSH:-ssh.exe}; RJOBS=${PERM_REMOTE_JOBS:-8}
mkdir -p $W/perm
log() { echo "[$(date '+%F %T')] [$NAME] $*"; }
rssh() { $SSH -o BatchMode=yes -o ConnectTimeout=10 "$NAME" "$@"; }

ship_tools() {  # para o remoto: só o que o compile.sh do permuter usa (o disco e o asm do jogo ficam aqui)
  tar -cf - tools include config | rssh 'mkdir -p ~/capsule-perm && tar -xf - -C ~/capsule-perm' 2>> $W/perm/remote.err
}

available() {
  if [ "$NAME" = local ]; then
    [ "$(wsl.exe -d "$DISTRO" --cd / -- python3 - < $A/agent_claims.py 2> /dev/null | tr -d '\r')" = 0 ]
  else
    rssh 'test -f ~/capsule-perm/tools/agents/remote_idle.sh' < /dev/null > /dev/null 2>&1 || ship_tools || return 1
    rssh 'bash ~/capsule-perm/tools/agents/remote_idle.sh' < /dev/null > /dev/null 2>&1
  fi
}

g0flag() { local file; file=$(grep -lE "INCLUDE_ASM\(.*, $1\)" src/$2/*.c | head -1); grep -qx "$file" config/g0fill.txt && echo --g0fill; }

run_local() {  # run_local t f p c -> 0 ok, 4 C que o permuter não lê
  ./run.sh timeout $((SECS + 120)) python3 tools/permute.py $1 $2 "$4" --seconds $SECS --jobs 8 --gcc ${3%%+*} $(g0flag $2 $1) \
    < /dev/null > $W/perm/$2.log 2>&1
  grep -qa "base score" $W/perm/$2.log || return 4
  return 0
}

run_remote() {  # run_remote t f p c -> 0 ok, 3 máquina ficou ocupada, outro: falhou (passo em remote.err)
  local t=$1 f=$2 p=$3 c=$4 rc
  ship_tools || { echo "$(date '+%T') $f: envio das ferramentas falhou" >> $W/perm/remote.err; return 1; }
  ./run.sh python3 tools/permute.py $t $f "$c" --gcc ${p%%+*} $(g0flag $f $t) --prepare < /dev/null > $W/perm/$f.log 2>&1 \
    || { echo "$(date '+%T') $f: preparo falhou (C que o permuter não lê)" >> $W/perm/remote.err; return 4; }
  tar -cf - -C .cache/permuter $f | rssh "rm -rf ~/capsule-perm/.cache/permuter/$f; mkdir -p ~/capsule-perm/.cache/permuter && tar -xf - -C ~/capsule-perm/.cache/permuter" \
    2>> $W/perm/remote.err || { echo "$(date '+%T') $f: envio da tarefa falhou" >> $W/perm/remote.err; return 1; }
  rssh "bash ~/capsule-perm/tools/agents/remote_perm.sh $f $SECS $RJOBS" < /dev/null >> $W/perm/$f.log 2>&1
  rc=$?
  # traz o resultado; a pasta remota só é apagada depois que a cópia daqui foi conferida (o remote_perm.sh já
  # guardou um 0 em ~/capsule-perm/matches, que nunca é apagada)
  local n
  for n in 1 2 3; do
    rssh "tar -cf - -C ~/capsule-perm/.cache/permuter/$f ." < /dev/null | tar -xf - -C .cache/permuter/$f 2> /dev/null && break
    sleep 10
  done
  if [ -f .cache/permuter/$f/target.o ] && [ "$(ls -d .cache/permuter/$f/output-* 2> /dev/null | wc -l)" = \
       "$(rssh "ls -d ~/capsule-perm/.cache/permuter/$f/output-* 2> /dev/null | wc -l" < /dev/null | tr -d '\r')" ]; then
    rssh "rm -rf ~/capsule-perm/.cache/permuter/$f" < /dev/null
  else
    echo "$(date '+%T') $f: resultado não conferiu aqui; pasta mantida no remoto" >> $W/perm/remote.err
  fi
  [ $rc = 0 ] || [ $rc = 3 ] || echo "$(date '+%T') $f: permuter remoto saiu com $rc" >> $W/perm/remote.err
  return $rc
}

evaluate() {  # evaluate t f c h -> BEST (melhor pontuação); se 0: guarda (banco + arquivo) e só então integra
  local t=$1 f=$2 c=$3 h=$4 best r
  best=$(ls -d .cache/permuter/$f/output-* 2> /dev/null | sed 's/.*output-//' | sort -t- -k1,1n | head -1)
  BEST=${best%%-*}; BEST=${BEST:-sem melhora}
  [ "$BEST" = 0 ] || return 0
  if python3 $A/perm_merge.py "$c" .cache/permuter/$f/output-$best/source.c $f $W/perm/$f.match.c; then
    log "$(python3 $A/permq.py match $t $f $h $W/perm/$f.match.c "$NAME")"
  else  # sem o candidato original: guarda o C do permuter como veio
    log "$(python3 $A/permq.py match $t $f $h .cache/permuter/$f/output-$best/source.c "$NAME")"; return 0
  fi
  for v in "" "nogp" "nogp 2.7.2-cdk"; do
    r=$(bash $A/try_one.sh "$t" "$f" $W/perm/$f.match.c $v < /dev/null 2>&1 | grep -E "^(MATCH|falha|já)" | tail -1)
    case "$r" in MATCH*|já*)
      python3 $A/permq.py integrated $f "$(git rev-parse --short HEAD)"
      log "$r (permuter${v:+, $v})"; return 0;; esac
  done
  log "$t/$f: casou no permuter mas não integrou ainda; fica no banco e o pipeline tenta de novo"
}

was() { python3 -c "import json;print(next((r['score'] for r in json.load(open('$W/near.json')) if r['f']=='$1'),'?'))" 2> /dev/null; }

log "início (${SECS}s por tarefa)"
[ "$NAME" = local ] || ship_tools
idle=""
while true; do
  if ! available; then [ "$idle" = busy ] || log "máquina ocupada ou fora do ar; esperando"; idle=busy; sleep 120; continue; fi
  line=$(python3 $A/permq.py claim "$NAME" $((SECS + 600)))
  if [ -z "$line" ]; then [ "$idle" = empty ] || log "fila vazia; esperando"; idle=empty; sleep 120; continue; fi
  idle=""
  read -r t f p c h <<< "$line"
  if [ "$NAME" = local ]; then run_local $t $f $p "$c"; else run_remote $t $f $p "$c"; fi
  rc=$?
  if [ $rc = 4 ]; then  # a tarefa em si não serve (falharia em qualquer máquina): conclui sem devolver
    python3 $A/permq.py done $f $h "erro: C que o permuter não lê"
    log "$t/$f: C que o permuter não lê; tarefa concluída sem resultado"
  elif [ $rc = 0 ]; then
    evaluate $t $f "$c" $h
    python3 $A/permq.py done $f $h "$BEST"
    log "$t/$f: melhor $BEST (era $(was $f))"
  else
    python3 $A/permq.py release $f $h
    log "$t/$f: devolvida à fila ($([ $rc = 3 ] && echo 'máquina ficou ocupada' || echo "falha $rc, ver perm/remote.err"))"
    sleep 120
  fi
done
