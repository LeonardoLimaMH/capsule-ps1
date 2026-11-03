#!/usr/bin/env bash
# Executa um comando dentro do container do toolchain, com o projeto em /work.
# Ex.: ./run.sh make -j8     |   ./run.sh make progress
set -e
cd "$(dirname "$0")"
IMAGE=ygo-decomp-tc
if ! docker image inspect "$IMAGE" >/dev/null 2>&1; then
    docker build -t "$IMAGE" docker
fi
MSYS_NO_PATHCONV=1 docker run --rm -v "$(pwd -W 2>/dev/null || pwd):/work" -w /work "$IMAGE" "$@"
