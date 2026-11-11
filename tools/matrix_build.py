#!/usr/bin/env python3
"""Build da matriz de compiladores do decomp.anything (rodar dentro do container: ./run.sh).

O decomp.anything testa o C de uma função em todos os perfis de compilação do projeto e em
vários contextos de unidade de tradução, sem tocar em src/ nem em config/. Ele grava as
fontes em .decomp-wtf/matrix/<execução>/ e chama este script com um job JSON:

  {"function", "symbol", "unit": "yuugi/main_8001A1DC", "source_path": "src/yuugi/main_8001A1DC.c",
   "result": ".decomp-wtf/matrix/<execução>/result.json",
   "builds": [{"id": "b0", "profile": "2.8.1-psx+g0fill", "context": "alone",
               "source": ".decomp-wtf/matrix/<execução>/alone.c", "object": ".../b0.o"}]}

Cada build é compilado com o mesmo pipeline dos objetos "base" do objdiff
(tools/objdiff_report.py: INCLUDE_ASM vazio) e o resultado diz qual é o perfil atual do
arquivo (config/compilers.txt, g0fill.txt, spfill.txt), para o decomp.anything saber se um
casamento já vale no build do projeto ou se precisa mudar o compilador/TU do arquivo.

Perfis: <gcc>[+g0fill[+spfill]], com gcc em 2.7.2-psx, 2.7.2-cdk, 2.8.1-psx (ver
"matrix" em .decomp.wtf.json).

Uso:  ./run.sh python3 tools/matrix_build.py <job.json>
      python3 tools/matrix_build.py --profiles      lista os perfis (para o manifesto)
"""
import json
import pathlib
import shutil
import sys
from concurrent.futures import ThreadPoolExecutor

ROOT = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))

GCCS = {"2.7.2-psx": "GCC 2.7.2 PSX", "2.7.2-cdk": "GCC 2.7.2 CDK", "2.8.1-psx": "GCC 2.8.1 PSX"}
VARIANTS = {"": "-O2 -G8", "+g0fill": "-O2 -G0 + aspsx_fill", "+g0fill+spfill": "-O2 -G0 + aspsx_fill --sp"}


def profiles():
    return [{"name": gcc + suffix, "compiler": label, "flags": flags}
            for gcc, label in GCCS.items() for suffix, flags in VARIANTS.items()]


def lines(name):
    p = ROOT / "config" / name
    if not p.exists():
        return []
    return [l.split("#")[0].strip() for l in p.read_text(encoding="utf-8").splitlines() if l.split("#")[0].strip()]


def current_profile(source_path):
    """O perfil com que o build do projeto compila este arquivo."""
    gcc = "2.7.2-psx"
    for l in lines("compilers.txt"):
        p = l.split()
        if len(p) >= 2 and p[0] == source_path:
            gcc = p[1].split("+")[0]
    if source_path in lines("g0fill.txt"):
        return gcc + "+g0fill" + ("+spfill" if source_path in lines("spfill.txt") else "")
    return gcc


def main():
    if len(sys.argv) == 2 and sys.argv[1] == "--profiles":
        print(json.dumps(profiles(), indent=2))
        return
    import match

    job_path = ROOT / sys.argv[1]
    job = json.loads(job_path.read_text(encoding="utf-8"))
    target = job["unit"].split("/")[0]
    folder = pathlib.Path(job["source_path"]).parent.as_posix()
    # como o objeto base do objdiff: INCLUDE_ASM vazio; a cópia da fonte fica fora de src/, então
    # a pasta do arquivo original entra no caminho de inclusão
    match.CPP_FLAGS = match.CPP_FLAGS.replace("-DOBJDIFF_BASE", "") + f" -DOBJDIFF_BASE -I{folder}"

    def build(b):
        gcc, *extra = b["profile"].split("+")
        if gcc not in GCCS or any(e not in ("g0fill", "spfill") for e in extra):
            return b["id"], {"ok": False, "log": f"perfil desconhecido: {b['profile']}"}
        try:
            obj = match.compile_c(b["source"], gcc, "-O2 -G8", "g0fill" in extra, target, "spfill" in extra)
        except SystemExit as e:  # match.compile_c sai com a mensagem do compilador
            return b["id"], {"ok": False, "log": str(e)[-1500:]}
        dst = ROOT / b["object"]
        dst.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy(obj, dst)
        shutil.rmtree(pathlib.Path(obj).parent, ignore_errors=True)
        return b["id"], {"ok": True}

    with ThreadPoolExecutor(max_workers=8) as pool:
        said = dict(pool.map(build, job["builds"]))
    (ROOT / job["result"]).write_text(
        json.dumps({"current": current_profile(job["source_path"]), "builds": said}, indent=1) + "\n",
        encoding="utf-8", newline="\n")
    bad = sum(not v["ok"] for v in said.values())
    print(f"matriz: {len(said) - bad} de {len(said)} builds compilaram")


if __name__ == "__main__":
    main()
