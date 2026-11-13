#!/usr/bin/env python3
"""Reescritas do decomp-permuter para o decomp.anything (rodar dentro do container: ./run.sh).

O permuter em lote do decomp.anything pede aqui N reescritas de uma função e depois compila
todas de uma vez pelo tools/matrix_build.py. Quem gera as reescritas é o decomp-permuter
(/opt/decomp-permuter), o mesmo do tools/permute.py: reordena declarações e comandos, cria
temporários, troca tipos equivalentes, etc., sempre preservando o comportamento.

Job (JSON): {"function": "func_80012345", "source_path": "src/yuugi/main.c",
             "source": ".decomp-wtf/matrix/<execução>/base.c",   o arquivo com a função atual
             "count": 24, "seed": 1234, "out": ".decomp-wtf/matrix/<execução>/variants.json"}
Saída (JSON): {"variants": ["<definição da função>", ...], "error": "..."}

Uso:  ./run.sh python3 tools/matrix_permute.py <job.json>
"""
import json
import pathlib
import shlex
import subprocess
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
sys.path.insert(0, "/opt/decomp-permuter")


def main():
    import match
    import permute
    from src import ast_util
    from src.candidate import Candidate
    from src.helpers import get_default_randomization_weights
    from src.perm.perm import EvalState

    job = json.loads((ROOT / sys.argv[1]).read_text(encoding="utf-8"))
    out = ROOT / job["out"]
    folder = pathlib.Path(job["source_path"]).parent.as_posix()
    result = {"variants": []}
    try:
        # o permuter trabalha sobre um C já pré-processado (INCLUDE_ASM vazio, como no objeto base)
        pre = subprocess.run(["mips-linux-gnu-cpp", *shlex.split(match.CPP_FLAGS), "-P", "-DPERMUTER",
                              "-DOBJDIFF_BASE", f"-I{folder}", job["source"]], cwd=ROOT,
                             capture_output=True, text=True, check=True).stdout
        pre = permute.declare_implicit_calls(pre)
        weights = get_default_randomization_weights("gcc")
        seen = set()
        for k in range(int(job.get("count", 24)) * 3):
            if len(result["variants"]) >= int(job.get("count", 24)):
                break
            try:
                cand = Candidate.from_source(pre, EvalState(), job["function"], weights, int(job.get("seed", 0)) + k)
                cand.randomize_ast()
                fn, _ = ast_util.extract_fn(cand.ast, job["function"])
                text = ast_util.to_c(fn)
            except Exception:  # uma reescrita que o permuter não consegue fazer: tenta a próxima
                continue
            if text not in seen:
                seen.add(text)
                result["variants"].append(text)
    except subprocess.CalledProcessError as e:
        result["error"] = "cpp: " + (e.stderr or "")[-600:]
    except Exception as e:  # C que o pycparser do permuter não lê, função ausente...
        result["error"] = f"{type(e).__name__}: {e}"[:600]
    out.write_text(json.dumps(result), encoding="utf-8", newline="\n")
    print(f"permuter: {len(result['variants'])} reescritas" + (f" ({result['error']})" if result.get("error") else ""))


if __name__ == "__main__":
    main()
