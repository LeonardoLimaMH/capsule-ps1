#!/usr/bin/env python3
"""Cliente mínimo da API HTTP do plugin GhidraMCP (rodar no HOST, não no container).

O plugin escuta em 127.0.0.1:8089 (o bridge MCP usa a mesma API). Usamos o
Ghidra como fonte de ANÁLISE (decompilação de leitura, referências cruzadas,
uso de campos de structs) para o trabalho manual e como candidata a heurística
medida na bancada; nunca como fonte de verdade: só o byte-matching decide.

Uso:
  ghidra.py import <alvo>              importa build/<alvo>.elf (símbolos do projeto) e analisa
  ghidra.py status                     programas abertos / estado da análise
  ghidra.py decompile <alvo> <função>  pseudo-C do Ghidra (leitura)
  ghidra.py xrefs <alvo> <0xendereço>  referências para um endereço
  ghidra.py call <rota> [k=v ...]      chamada genérica (GET); rota sem "/" inicial
"""
import json
import pathlib
import shutil
import sys
import urllib.parse
import urllib.request

ROOT = pathlib.Path(__file__).resolve().parent.parent
BASE = "http://127.0.0.1:8089"
PROG = {"yuugi": "/ygo_elf/yuugi.elf"}  # alvo -> nome do programa no projeto Ghidra (padrão: <alvo>.elf)


def _route(route):
    # aceita "rota" ou "/rota" (o Git Bash converte argumentos com "/" inicial em caminhos)
    return "/" + route.replace("\\", "/").rsplit("/", 1)[-1]


def get(route, **params):
    route = _route(route)
    q = urllib.parse.urlencode({k: v for k, v in params.items() if v is not None})
    with urllib.request.urlopen(f"{BASE}{route}?{q}", timeout=600) as r:
        return r.read().decode("utf-8", "replace")


def post(route, data):
    req = urllib.request.Request(f"{BASE}{route}", data=json.dumps(data).encode(),
                                 headers={"Content-Type": "application/json"}, method="POST")
    with urllib.request.urlopen(req, timeout=1800) as r:
        return r.read().decode("utf-8", "replace")


def elf_path(target):
    dst = ROOT / ".cache" / "ghidra" / f"{target}.elf"
    dst.parent.mkdir(parents=True, exist_ok=True)
    shutil.copyfile(ROOT / "build" / f"{target}.elf", dst)
    return dst


def symbol_addr(target, func):
    import re
    mp = (ROOT / "build" / f"{target}.map").read_text(encoding="utf-8")
    m = re.search(rf"^\s+0x([0-9a-f]{{8}})\s+{re.escape(func)}\s*$", mp, re.M)
    return f"0x{m.group(1)}" if m else func


def main():
    a = sys.argv[1:]
    if not a:
        sys.exit(__doc__)
    if a[0] == "import":
        p = elf_path(a[1])
        # sem "language": com ele o plugin usa o carregador de binário cru e perde o ELF
        print(post("/import_file", {"file_path": str(p), "project_folder": "/ygo_elf",
                                    "auto_analyze": True}))
    elif a[0] == "status":
        print(get("/list_open_programs"))
    elif a[0] == "decompile":
        print(get("/force_decompile", function=symbol_addr(a[1], a[2]), program=PROG.get(a[1], f"{a[1]}.elf")))
    elif a[0] == "xrefs":
        print(get("/get_xrefs_to", address=a[2], program=PROG.get(a[1], f"{a[1]}.elf")))
    elif a[0] == "call":
        print(get(a[1], **dict(kv.split("=", 1) for kv in a[2:])))
    else:
        sys.exit(__doc__)


if __name__ == "__main__":
    main()
