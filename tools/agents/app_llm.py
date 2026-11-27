#!/usr/bin/env python3
"""app_llm.py: agentes do app (decomp.anything) num modelo local servido por Ollama em outra máquina. Roda na distro
do app (python3 - < app_llm.py ...), falando com o app pela API local (cookie do server.json).

  app_llm.py start <nome> <base_url> <modelo> <sessões> [contexto]   # cria o endpoint e liga as sessões
  app_llm.py stop <nome>                                             # remove o endpoint (as sessões dele param)

O endpoint fica salvo com <nome>; o stop remove todos os endpoints com esse nome, deixando as configurações como antes.
"""
import json
import pathlib
import sys
import urllib.request

INTERNAL = pathlib.Path.home() / "Decomp" / ".decomp"


def call(path, data=None):
    info = json.loads((INTERNAL / "server.json").read_text())
    port = info["port"]
    req = urllib.request.Request(f"http://127.0.0.1:{port}{path}", method="POST" if data is not None else "GET",
                                 data=json.dumps(data).encode() if data is not None else None,
                                 headers={"Cookie": f"decomp_live={info['secret']}", "X-Decomp": "1",
                                          "Host": f"127.0.0.1:{port}", "Content-Type": "application/json"})
    with urllib.request.urlopen(req, timeout=60) as r:
        return json.loads(r.read())


def mine(settings, name):
    return [e for e in settings.get("endpoints", []) if e.get("name") == name]


def main():
    cmd, args = sys.argv[1], sys.argv[2:]
    if cmd == "start":
        name, base, model, count = args[:4]
        ctx = int(args[4]) if len(args) > 4 else 16384
        s = call("/api/settings", {})
        for e in mine(s, name):  # um start repetido não duplica
            s = call("/api/settings", {"remove_endpoint": e["id"]})
        s = call("/api/settings", {"endpoint": {"name": name, "provider": "ollama", "base_url": base, "model": model,
                                                "context_tokens": ctx, "max_sessions": int(count)}})
        eid = mine(s, name)[-1]["id"]
        slug = s.get("last_project") or "capsule-ps1"
        r = call("/api/agents/start", {"kind": "api", "slug": slug, "count": int(count), "options": {"endpoints": [eid]}})
        print(f"{name}: endpoint {eid}, sessões {r.get('started')}")
    elif cmd == "stop":
        name = args[0]
        s = call("/api/settings", {})
        for e in mine(s, name):
            call("/api/settings", {"remove_endpoint": e["id"]})
        print(f"{name}: {len(mine(s, name))} endpoint(s) removido(s), sessões paradas")
    else:
        sys.exit(__doc__)


if __name__ == "__main__":
    main()
