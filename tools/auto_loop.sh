#!/usr/bin/env bash
# Ciclo automático (roda no host, fora do container): permuter/autodecomp por alvo,
# aplicação, validação (SHA-1 dos 5 binários + testes do alvo) e commit. Se a
# validação falhar, desfaz as mudanças daquele alvo e segue para o próximo.
#
# Uso:  nohup tools/auto_loop.sh > .cache/logs/auto_loop.log 2>&1 &
#       tools/auto_loop.sh --wait-log .cache/logs/permute_all.log   (espera a rodada em
#       andamento terminar, aplica os casamentos dela e então começa as etapas)
# Parar: touch .cache/auto_loop.stop   (termina ao fim da etapa atual)
set -u
cd "$(dirname "$0")/.."
STOP=.cache/auto_loop.stop
TARGETS="raise chess etc yuugi slpm"
rm -f "$STOP"

log() { echo "[$(date '+%F %T')] $*"; }

# casamentos do permuter sem o include dos tipos do Ghidra (rodadas antigas)
fix_includes() {
    local t=$1 f
    for f in $(grep -l 'undefined\|\buint\b\|\bbyte\b\|\bushort\b' .cache/auto/"$t"/*.c 2>/dev/null); do
        grep -q ghidra.h "$f" || sed -i '1i #include "ghidra.h"' "$f"
    done
}

revert() {
    git checkout -- src config
    git clean -fdq src
    ./run.sh make -j2 >/dev/null 2>&1
}

# aplica os casamentos de um alvo, valida e faz o commit
apply_and_commit() {
    local t=$1 label=$2
    fix_includes "$t"
    ./run.sh python3 tools/assign_compilers.py --split
    ./run.sh python3 tools/autodecomp.py "$t" --apply
    if git diff --quiet -- src && [ -z "$(git ls-files --others --exclude-standard src)" ]; then
        log "$t: nada novo para aplicar"
        return
    fi
    local build
    build=$(./run.sh make -j2 2>&1)
    if [ "$(echo "$build" | grep -c '^\[OK\]')" != 5 ]; then
        log "$t: SHA-1 diferente ou erro de build; desfazendo"
        echo "$build" | grep -E 'FAIL|rror' | head -5
        revert
        return
    fi
    local tests
    tests=$(./run.sh python3 -m pytest -q tests -k "$t or rebuild or overlay" 2>&1 | tail -1)
    if ! echo "$tests" | grep -q ' passed' || echo "$tests" | grep -q 'failed'; then
        log "$t: testes falharam ($tests); desfazendo"
        revert
        return
    fi
    local n
    n=$(git diff -U0 -- src | grep -c '^-INCLUDE_ASM')
    python tools/progress.py --readme >/dev/null 2>&1 || python3 tools/progress.py --readme >/dev/null
    git add -A src config README.md
    git commit -q -m "$t: +$n funções ($label, ciclo automático)

Testes: $tests

Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>"
    log "$t: commit $(git log --oneline -1)"
}

# 0) espera uma rodada já em andamento terminar (último alvo: slpm) e aplica
if [ "${1:-}" = "--wait-log" ]; then
    wl=$2
    log "esperando a rodada em $wl terminar"
    idle=0  # se nenhum container rodar por 10 min, a rodada morreu: segue assim mesmo
    until [ "$(grep -c '^permuter em lote' "$wl")" -ge 5 ] || [ $idle -ge 10 ]; do
        sleep 60
        if [ -z "$(docker ps -q)" ]; then idle=$((idle + 1)); else idle=0; fi
    done
    for t in yuugi slpm; do apply_and_commit "$t" "permuter em lote"; done
fi

# 1) etapas: cada uma passa por todos os alvos
run_stage() {
    local label=$1; shift
    for t in $TARGETS; do
        [ -f "$STOP" ] && { log "parada pedida"; exit 0; }
        log "== $label: $t"
        ./run.sh "$@" --target "$t" 2>&1 | grep -E 'MATCH|quase-acertos|permuter em lote' || true
        apply_and_commit "$t" "$label"
    done
}

auto_stage() {
    local label=$1; shift
    for t in $TARGETS; do
        [ -f "$STOP" ] && { log "parada pedida"; exit 0; }
        log "== $label: $t"
        ./run.sh python3 tools/autodecomp.py "$t" "$@" 2>&1 | grep -E 'MATCH|resumo' || true
        apply_and_commit "$t" "$label"
    done
}

# rodada do autodecomp (grava .cache/best para o permuter reusar)
auto_stage "autodecomp" --max-size 0x800 --jobs 2
# permuter: mais tempo nos mais próximos, depois mais distância com tempo médio
run_stage "permuter 600s, até 10 instr." python3 tools/permute_batch.py --cached --seconds 600 --max-diff 10 --jobs 3
run_stage "permuter 300s, até 40 instr." python3 tools/permute_batch.py --cached --seconds 300 --max-diff 40 --jobs 3
log "ciclo automático concluído"
