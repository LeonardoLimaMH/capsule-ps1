"""Roda na distro do app, lido pelo stdin: quantos agentes do app têm claim ativo (o permuter do app não conta)."""
import os
import sqlite3
import time

db = sqlite3.connect(f"file:{os.path.expanduser('~')}/Decomp/.decomp/decomp.db?mode=ro", uri=True)
pid = db.execute("select id from projects where slug='capsule-ps1'").fetchone()[0]
print(db.execute("select count(*) from claims c join functions f on f.id=c.function_id join agents a on a.id=c.agent_id "
                 "where f.project_id=? and a.name!='permuter' and c.expires_at>?", (pid, time.time())).fetchone()[0])
