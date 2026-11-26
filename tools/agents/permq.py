#!/usr/bin/env python3
"""Fila de tarefas do permuter (.cache/agents/permq.db, SQLite): qualquer máquina livre pega a próxima.

Estados: pending -> running (com lease: dono e prazo) -> done. Tarefa running cujo prazo venceu (máquina caiu,
ssh travou, worker morreu) volta a pending sozinha no próximo claim. Uma função volta à fila quando o melhor C
dela no app muda (hash do candidato).

  permq.py add <all.txt>              # linhas "<alvo> <f> <perfil> <candidato> " em ordem de prioridade
  permq.py claim <worker> <lease_s>   # imprime "<alvo> <f> <perfil> <candidato> <hash>" ou nada
  permq.py done <f> <hash> <melhor>   # resultado entregue
  permq.py release <f> <hash>         # devolve à fila (máquina ficou ocupada)
  permq.py status
"""
import hashlib
import pathlib
import sqlite3
import sys
import time

ROOT = pathlib.Path(__file__).resolve().parents[2]
DB = ROOT / ".cache" / "agents" / "permq.db"


def db():
    DB.parent.mkdir(parents=True, exist_ok=True)
    c = sqlite3.connect(DB, timeout=30, isolation_level=None)
    c.execute("""CREATE TABLE IF NOT EXISTS jobs(f TEXT PRIMARY KEY, t TEXT, p TEXT, c TEXT, h TEXT, prio INTEGER,
                 state TEXT, worker TEXT, lease_until REAL, tries INTEGER DEFAULT 0, best TEXT, updated REAL)""")
    return c


def main():
    cmd, args = sys.argv[1], sys.argv[2:]
    c = db()
    now = time.time()
    if cmd == "add":
        new = 0
        c.execute("BEGIN IMMEDIATE")
        for prio, line in enumerate(open(args[0])):
            p = line.split()
            if len(p) < 4:
                continue
            t, f, prof, cand = p[:4]
            h = hashlib.sha1(pathlib.Path(ROOT / cand).read_bytes()).hexdigest()[:12]
            row = c.execute("SELECT h, state FROM jobs WHERE f=?", (f,)).fetchone()
            if row is None:
                c.execute("INSERT INTO jobs(f,t,p,c,h,prio,state,updated) VALUES(?,?,?,?,?,?,'pending',?)",
                          (f, t, prof, cand, h, prio, now))
                new += 1
            elif row[0] != h and row[1] != "running":  # o melhor C mudou: permutar de novo
                c.execute("UPDATE jobs SET t=?,p=?,c=?,h=?,prio=?,state='pending',tries=0,best=NULL,updated=? WHERE f=?",
                          (t, prof, cand, h, prio, now, f))
                new += 1
            else:
                c.execute("UPDATE jobs SET prio=? WHERE f=?", (prio, f))
        c.execute("COMMIT")
        print(f"fila: {new} nova(s)")
    elif cmd == "claim":
        worker, lease = args[0], float(args[1])
        c.execute("BEGIN IMMEDIATE")
        c.execute("UPDATE jobs SET state='pending', worker=NULL, tries=tries+1 WHERE state='running' AND lease_until<?",
                  (now,))
        row = c.execute("SELECT f,t,p,c,h FROM jobs WHERE state='pending' AND tries<3 ORDER BY prio LIMIT 1").fetchone()
        if row:
            c.execute("UPDATE jobs SET state='running', worker=?, lease_until=?, updated=? WHERE f=?",
                      (worker, now + lease, now, row[0]))
            print(row[1], row[0], row[2], row[3], row[4])
        c.execute("COMMIT")
    elif cmd == "done":
        f, h, best = args
        c.execute("UPDATE jobs SET state='done', best=?, worker=NULL, updated=? WHERE f=? AND h=?", (best, now, f, h))
    elif cmd == "release":
        f, h = args
        c.execute("UPDATE jobs SET state='pending', worker=NULL, updated=? WHERE f=? AND h=? AND state='running'",
                  (now, f, h))
    elif cmd == "status":
        for state, n in c.execute("SELECT state, COUNT(*) FROM jobs GROUP BY state"):
            print(f"{state}: {n}")
        for f, w, lu in c.execute("SELECT f, worker, lease_until FROM jobs WHERE state='running'"):
            print(f"  {f} em {w} (prazo em {int(lu - now)} s)")
        for f, best in c.execute("SELECT f, best FROM jobs WHERE state='done' ORDER BY updated DESC LIMIT 5"):
            print(f"  feito: {f} melhor {best}")
    else:
        sys.exit(__doc__)


if __name__ == "__main__":
    main()
