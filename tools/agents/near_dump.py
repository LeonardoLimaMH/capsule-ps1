import json, os, sqlite3
db = sqlite3.connect(f"file:{os.path.expanduser('~')}/Decomp/.decomp/decomp.db?mode=ro", uri=True)
pid = db.execute("select id from projects where slug='capsule-ps1'").fetchone()[0]
rows = []
for name, unit, meta, src, score, n in db.execute(
        "select name, unit, meta, best_source, best_score, n_insns from functions where project_id=? and status='open' "
        "and best_source is not null and best_score>0 and n_insns>0 order by cast(best_score as real)/(n_insns*100) limit 300", (pid,)):
    sym = json.loads(meta or "{}").get("symbol") or name.split("@")[0]
    rows.append({"t": unit.split("/")[0], "f": sym, "score": score, "n": n, "src": src})
print(json.dumps(rows))
