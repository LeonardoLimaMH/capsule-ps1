#!/bin/bash
# permute_near.sh [N] [SEGUNDOS]: decomp-permuter (tools/permute.py, ~70 variantes/s com 8 jobs) nas N
# quase-casadas do app mais perto do original, SEGUNDOS cada. O que chegar a 0 passa pelo try_one.sh (commit só
# com 5 SHA-1). Uma função só é permutada de novo quando o melhor C dela no app muda (.cache/agents/permuted.txt).
# Precisa de .cache/agents/tree (export do pipeline.sh).
cd "$(dirname "$0")/../.."
A=tools/agents; W=.cache/agents
N=${1:-20}; SECS=${2:-180}
DISTRO=${AGENTS_DISTRO:-decomp-wtf}
log() { echo "[$(date '+%F %T')] $*"; }
mkdir -p $W/perm; touch $W/permuted.txt
wsl.exe -d "$DISTRO" --cd / -- python3 - < $A/near_dump.py > $W/near.json || { log "banco do app ilegível"; exit 1; }
python3 $A/perm_prep.py $W/near.json $W/tree $W/perm 400 > $W/perm/all.txt
n=0
while read -r t f p c; do
  [ "$n" -ge "$N" ] && break
  h=$(sha1sum "$c" | cut -c1-12)
  grep -qx "$f $h" $W/permuted.txt && continue
  n=$((n + 1))
  file=$(grep -lE "INCLUDE_ASM\(.*, $f\)" src/$t/*.c | head -1)
  g0=""; grep -qx "$file" config/g0fill.txt && g0=--g0fill
  ./run.sh timeout $((SECS + 120)) python3 tools/permute.py $t $f "$c" --seconds $SECS --jobs 8 --gcc ${p%%+*} $g0 < /dev/null > $W/perm/$f.log 2>&1
  echo "$f $h" >> $W/permuted.txt
  best=$(ls -d .cache/permuter/$f/output-* 2>/dev/null | sed 's/.*output-//' | sort -t- -k1,1n | head -1)
  log "permuter $t/$f: melhor ${best%%-*} (era $(python3 -c "import json;print(next(r['score'] for r in json.load(open('$W/near.json')) if r['f']=='$f'))"))"
  [ "${best%%-*}" = 0 ] || continue
  python3 $A/perm_merge.py "$c" .cache/permuter/$f/output-$best/source.c $f $W/perm/$f.match.c || continue
  for v in "" "nogp" "nogp 2.7.2-cdk"; do
    r=$(bash $A/try_one.sh "$t" "$f" $W/perm/$f.match.c $v < /dev/null 2>&1 | grep -E "^(MATCH|falha|já)" | tail -1)
    case "$r" in MATCH*|já*) log "$r (permuter${v:+, $v})"; break;; esac
  done
done < $W/perm/all.txt
log "permuter: $n função(ões) nesta rodada"
