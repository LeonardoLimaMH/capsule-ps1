#!/bin/bash
# pipeline.sh: integra no main, sem mão humana, o que os agentes do decomp.anything casaram.
#   1. exporta da distro do app (decomp-wtf) o src/ dos agentes e as funções casadas no banco;
#   2. para cada casada que ainda é INCLUDE_ASM no main, tenta o C do banco e o C do arquivo do agente
#      (com helpers/tipos; nomes que conflitam com o main são renomeados), cada um também com nogp;
#   3. gêmeas: tools/twins.py tenta o C já casado nas funções de código idêntico (inclusive as que
#      acabaram de entrar) e o resultado passa pelo mesmo try_one;
#   4. cada função entra num commit próprio só com os 5 SHA-1 conferidos;
#   5. se algo entrou: publica (README, GitHub, ByteMatch) e, se não há agente com claim ativo,
#      sincroniza a cópia dos agentes e atualiza o app.
# Uso: tools/agents/pipeline.sh [--no-publish] [--no-sync] [--loop MINUTOS]
# Variáveis: AGENTS_DISTRO (decomp-wtf), AGENTS_REPO (~/Decomp/capsule-ps1 na distro do app).
cd "$(dirname "$0")/../.."
A=tools/agents; W=.cache/agents
DISTRO=${AGENTS_DISTRO:-decomp-wtf}; AREPO=${AGENTS_REPO:-'~/Decomp/capsule-ps1'}
PUBLISH=1; SYNC=1; LOOP=0
while [ $# -gt 0 ]; do case $1 in --no-publish) PUBLISH=0;; --no-sync) SYNC=0;; --loop) LOOP=$2; shift;; esac; shift; done
log() { echo "[$(date '+%F %T')] $*"; }

try_all() {  # try_all <alvo> <f> <candidato>...: para no primeiro MATCH
  local t=$1 f=$2; shift 2
  for c in "$@"; do
    [ -f "$c" ] || continue
    for v in "" "nogp" "nogp 2.7.2-cdk"; do
      r=$(bash $A/try_one.sh "$t" "$f" "$c" $v < /dev/null 2>&1 | grep -E "^(MATCH|falha|já)" | tail -1)
      case "$r" in MATCH*|já*) log "$r ($(basename "$c")${v:+, $v})"; return 0;; esac
    done
  done
  log "falha $t/$f"; return 1
}

round() {
  local head0; head0=$(git rev-parse HEAD)
  [ -z "$(git status --short src config)" ] || { log "src/config com mudanças locais; rodada cancelada"; return 1; }
  mkdir -p $W; rm -rf .cache/agents/tree .cache/agents/cands; mkdir -p $W/tree $W/cands
  wsl.exe -d "$DISTRO" --cd / -- bash -c "cd $AREPO && tar -cf - src" | tar -xf - -C $W/tree || { log "export falhou"; return 1; }
  wsl.exe -d "$DISTRO" --cd / -- python3 - < $A/db_matched.py > $W/matched.json || { log "banco do app ilegível"; return 1; }
  python3 $A/candidates.py $W/matched.json $W/tree $W/cands > $W/todo.txt
  log "agentes: $(wc -l < $W/todo.txt) casadas no app ainda em assembly no main"
  while read -r t f; do try_all "$t" "$f" $W/cands/$t/$f.db.c $W/cands/$t/$f.tree.c; done < $W/todo.txt
  # gêmeas
  ./run.sh python3 tools/full_asm.py < /dev/null > /dev/null 2>&1
  touch $W/twins.mark
  ./run.sh python3 tools/twins.py --jobs 12 < /dev/null > $W/twins.log 2>&1
  find .cache/auto -name '*.c' -newer $W/twins.mark 2>/dev/null | while read -r c; do
    t=$(basename "$(dirname "$c")"); f=$(basename "$c" .c)
    grep -rqE "INCLUDE_ASM\(.*, $f\)" src/$t/ && try_all "$t" "$f" "$c"
  done
  local n; n=$(git rev-list --count "$head0"..HEAD)
  log "rodada: $n commit(s) novos"
  [ "$n" -gt 0 ] || return 0
  [ $PUBLISH = 1 ] && bash $A/publish.sh "$n função(ões) integradas pelo pipeline dos agentes"
  if [ $SYNC = 1 ]; then
    c=$(python3 -c "import json;print(json.load(open('$W/matched.json'))['claims'])")
    if [ "$c" = 0 ]; then wsl.exe -d "$DISTRO" --cd / -- bash -s < $A/sync_down.sh; wsl.exe -d "$DISTRO" --cd / -- bash -s < $A/app_check.sh
    else log "sync da cópia dos agentes adiado: $c claim(s) ativo(s)"; fi
  fi
}

if [ "$LOOP" -gt 0 ]; then
  while true; do round; sleep $((LOOP * 60)); done
else
  round
fi
