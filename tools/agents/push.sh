#!/bin/bash
# envia a branch atual -> main no GitHub usando SITE/KEY do .env (a chave não é gravada no .git/config)
cd "$(dirname "$0")/../.."
set -a; . ./.env; set +a
R=${SITE#https://}
git -c credential.helper= push "https://x-access-token:${KEY}@${R}" HEAD:main 2>&1 | sed "s/${KEY}/***/g" | tail -2
