#!/usr/bin/env bash
# Ciclo automático (roda no host, fora do container): permuter/autodecomp por alvo,
# aplicação, validação (SHA-1 dos 5 binários + testes) e commit.
#
# Validação: build com os 5 SHA-1 idênticos + teste diferencial das funções que
# acabaram de entrar em C + rebuild/overlays. Se algum teste diferencial falhar, as
# funções reprovadas vão para .cache/auto_rejected/<alvo>/ (quarentena, com o motivo)
# e o resto do alvo é reaplicado; se o build falhar, o alvo inteiro é desfeito.
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

quarantine() {  # alvo, função, motivo
    local t=$1 f=$2 why=$3 d=.cache/auto_rejected/$1
    mkdir -p "$d"
    mv -f .cache/auto/"$t"/"$f".c .cache/auto/"$t"/"$f".gcc "$d"/ 2>/dev/null
    echo "$why" > "$d/$f.why"
    log "$t: $f em quarentena ($why)"
}

# aplica os casamentos de um alvo, valida e faz o commit (tenta de novo sem as reprovadas)
apply_and_commit() {
    local t=$1 label=$2 attempt
    for attempt in 1 2 3; do
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
        # funções que acabaram de entrar em C neste alvo
        local new sel tests failed
        new=$(git diff -U0 -- src | sed -n 's/^-INCLUDE_ASM("[^"]*", \([A-Za-z0-9_]*\));$/\1/p' | sort -u)
        sel="rebuild or overlay"
        for f in $new; do sel="$sel or $t-$f]"; done
        tests=$(./run.sh python3 -m pytest -q -rf tests/test_difftest.py tests/test_rebuild.py \
                tests/test_overlays.py -k "$sel" 2>&1)
        failed=$(echo "$tests" | sed -n "s/^FAILED tests\/test_difftest.py::test_function_is_equivalent\[$t-\([A-Za-z0-9_]*\)\].*/\1/p")
        local summary
        summary=$(echo "$tests" | tail -1)
        if [ -n "$failed" ]; then
            log "$t: teste diferencial reprovou: $(echo $failed)"
            revert
            for f in $failed; do quarantine "$t" "$f" "difftest falhou no arquivo-fonte ($label)"; done
            continue
        fi
        if ! echo "$summary" | grep -q ' passed' || echo "$summary" | grep -q 'failed'; then
            log "$t: testes falharam ($summary); desfazendo"
            echo "$tests" | grep '^FAILED' | head -5
            revert
            return
        fi
        local n
        n=$(echo "$new" | grep -c .)
        git add -A src config
        if ! (python tools/progress.py --readme --staged >/dev/null 2>&1 || python3 tools/progress.py --readme --staged >/dev/null); then
            log "$t: falha ao calcular o progresso preparado; commit interrompido"
            return 1
        fi
        git add README.md
        if ! (python tools/progress.py --check --staged >/dev/null 2>&1 || python3 tools/progress.py --check --staged >/dev/null); then
            log "$t: README divergente do indice; commit interrompido"
            return 1
        fi
        git commit -q -m "$t: +$n funções ($label, ciclo automático)

Testes: $summary

Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>"
        log "$t: commit $(git log --oneline -1)"
        return
    done
    log "$t: desisti depois de 3 tentativas"
}

# 0) espera uma rodada já em andamento terminar (último alvo: slpm) e aplica
if [ "${1:-}" = "--wait-log" ]; then
    wl=$2
    log "esperando a rodada em $wl terminar"
    idle=0  # se o container do permuter sumir por 10 min, a rodada morreu: segue assim mesmo
    until [ "$(grep -c '^permuter em lote' "$wl")" -ge 5 ] || [ $idle -ge 10 ]; do
        sleep 60
        if docker ps --format '{{.Command}}' | grep -q permute; then idle=0; else idle=$((idle + 1)); fi
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

# casamentos pendentes de rodadas anteriores (ex.: yuugi desfeito antes da quarentena)
if [ "${1:-}" = "--apply-pending" ]; then
    for t in $TARGETS; do apply_and_commit "$t" "pendentes"; done
fi

# rodada do autodecomp (grava .cache/best para o permuter reusar)
auto_stage "autodecomp" --max-size 0x800 --jobs 2
# permuter: mais tempo nos mais próximos, depois mais distância com tempo médio
run_stage "permuter 600s, até 10 instr." python3 tools/permute_batch.py --cached --seconds 600 --max-diff 10 --jobs 3
run_stage "permuter 300s, até 40 instr." python3 tools/permute_batch.py --cached --seconds 300 --max-diff 40 --jobs 3
log "ciclo automático concluído"
