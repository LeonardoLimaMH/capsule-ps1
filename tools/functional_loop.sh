#!/usr/bin/env bash
# Ciclo automático da trilha funcional (roda no host): para cada alvo, gera C
# equivalente das funções pendentes (tools/functional.py, validado por difftest) e
# faz o commit de equiv/ + README. Não mexe em src/ nem config/ (essas são do
# ciclo de byte-matching, tools/auto_loop.sh), então os dois rodam juntos.
#
# Uso:  nohup tools/functional_loop.sh > .cache/logs/functional_loop.log 2>&1 &
# Parar: touch .cache/functional_loop.stop
set -u
cd "$(dirname "$0")/.."
STOP=.cache/functional_loop.stop
rm -f "$STOP"
log() { echo "[$(date '+%F %T')] $*"; }

commit() {  # o outro ciclo também faz commits: tenta de novo se o índice estiver ocupado
    local msg=$1 i
    for i in 1 2 3 4 5 6 7 8 9 10; do
        if git add -A equiv \
            && python tools/progress.py --readme --staged >/dev/null \
            && git add README.md \
            && python tools/progress.py --check --staged >/dev/null \
            && git commit -q -m "$msg"; then
            log "commit $(git log --oneline -1)"
            return
        fi
        sleep 30
    done
    log "commit falhou: $msg"
}

for pass in first retry; do
    for t in etc raise chess slpm yuugi; do
        [ -f "$STOP" ] && { log "parada pedida"; exit 0; }
        log "== $pass: $t"
        extra=""; [ "$pass" = retry ] && extra="--retry"
        ./run.sh python3 tools/functional.py "$t" --jobs 2 $extra 2>&1 | grep -E 'a tentar|removido|resumo' || true
        if [ -n "$(git status --porcelain -- equiv)" ]; then
            n=$(git status --porcelain -uall -- equiv | grep -c '^??')
            commit "equiv/$t: +$n funções equivalentes (difftest --abi, ciclo automático)

Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>"
        fi
    done
done
log "ciclo funcional concluído"
