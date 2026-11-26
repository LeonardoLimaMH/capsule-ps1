export PATH=$HOME/.local/bin:$PATH
u=$(decomp url 2>&1 | grep -o 'http://[^ ]*' | head -1)
curl -s -m 10 -o /dev/null -c /tmp/da-cj "$u"
H=(-b /tmp/da-cj -H "X-Decomp: 1" -H "Content-Type: application/json")
j=$(curl -s -m 20 "${H[@]}" -X POST http://127.0.0.1:6464/api/fork/check -d '{"slug":"capsule-ps1"}' | python3 -c 'import json,sys; print(json.load(sys.stdin)["job"])')
for i in $(seq 1 120); do s=$(curl -s -m 10 "${H[@]}" "http://127.0.0.1:6464/api/job?id=$j"); echo "$s" | grep -q '"state": *"running"' || break; sleep 5; done
echo "$s" | python3 -c 'import json,sys; d=json.load(sys.stdin); print(d["state"], d["log"][-1:])'
