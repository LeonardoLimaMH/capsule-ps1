#!/usr/bin/env bash
# Executa um comando dentro do container do toolchain, com o projeto em /work.
# Ex.: ./run.sh make -j8     |   ./run.sh make progress
set -e
cd "$(dirname "$0")"
IMAGE=ygo-decomp-tc
if ! docker image inspect "$IMAGE" >/dev/null 2>&1; then
    docker build -t "$IMAGE" docker
fi
# git dentro do container: o repositório pertence a outro usuário (safe.directory)
GIT_ENV=(-e GIT_CONFIG_COUNT=1 -e GIT_CONFIG_KEY_0=safe.directory -e GIT_CONFIG_VALUE_0=/work)
USER_ARGS=()
if [ "$(uname -s)" = Linux ]; then
    # no Linux/WSL2 os arquivos gerados ficam com o dono de quem rodou, não com root
    USER_ARGS=(--user "$(id -u):$(id -g)" -e HOME=/tmp)
fi
MSYS_NO_PATHCONV=1 docker run --rm "${USER_ARGS[@]}" "${GIT_ENV[@]}" \
    -v "$(pwd -W 2>/dev/null || pwd):/work" -w /work "$IMAGE" "$@"
