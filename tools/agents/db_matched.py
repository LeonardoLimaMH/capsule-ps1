"""Roda na distro do app (decomp-wtf), lido pelo stdin: python3 - < db_matched.py
Imprime em JSON as funções casadas no banco do app (alvo, símbolo, C casado) e quantos claims estão ativos."""
import json
import os
import sqlite3

db = sqlite3.connect(f"file:{os.path.expanduser('~')}/Decomp/.decomp/decomp.db?mode=ro", uri=True)
pid = db.execute("select id from projects where slug='capsule-ps1'").fetchone()[0]
rows = []
for name, unit, meta, src in db.execute(
        "select name, unit, meta, matched_source from functions where project_id=? and status='matched'", (pid,)):
    if not unit:
        continue
    sym = json.loads(meta or "{}").get("symbol") or name.split("@")[0]
    rows.append({"t": unit.split("/")[0], "f": sym, "src": src or ""})
# o permuter do próprio app também faz claim, mas não edita arquivos: não conta como agente trabalhando
claims = db.execute("select count(*) from claims c join functions f on f.id=c.function_id "
                    "join agents a on a.id=c.agent_id where f.project_id=? and a.name!='permuter'", (pid,)).fetchone()[0]
print(json.dumps({"claims": claims, "matched": rows}))
