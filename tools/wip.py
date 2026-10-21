#!/usr/bin/env python3
"""Trabalho manual sistemático em funções difíceis (no container).

Cada função em trabalho fica em docs/wip/<alvo>/<função>.c (hipótese em C) e
docs/wip/<alvo>/<função>.md (ficha: hipótese, causas identificadas, decisões).
O assembly de referência NÃO é versionado (é conteúdo do jogo): `show`
regenera o lado a lado localmente a partir do disco do usuário.

  wip.py new <alvo> <função>   cria a hipótese inicial (rascunho do pipeline) e a ficha
  wip.py show <alvo> <função>  diff lado a lado original x hipótese (reprodutível)
  wip.py check                 recompila todas as hipóteses, atualiza docs/wip/STATUS.md;
                               uma hipótese que casa é promovida (.cache/auto) para o
                               --apply do autodecomp, e as gêmeas são listadas

Regra (docs/PROCESS.md): cada correção registra a CAUSA na ficha; se a causa se
repete em outras funções, vira candidata a heurística e é medida na bancada.
"""
import datetime
import pathlib
import re
import subprocess
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import autodecomp as ad  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent
WIP = ROOT / "docs" / "wip"
CARD = """# {t}:{f}

- **Binário / arquivo-fonte:** `{t}` / `{src}`
- **Compilador do arquivo:** {gcc}
- **Tamanho:** {size:#x} bytes
- **Gêmeas:** {twins}
- **Reproduzir:** `./run.sh python3 tools/wip.py show {t} {f}`

## O que a função faz

(descrever)

## Hipótese atual

(o que o C atual assume: tipos, structs, ordem, macros)

## Causas identificadas

| # | Diferença observada | Causa | Correção | Generaliza? |
|---|---|---|---|---|

## Histórico

- {date}: ficha criada (rascunho automático).
"""


def src_file(t, f):
    for c in (ROOT / "src" / t).rglob("*.c"):
        if re.search(rf"\b{re.escape(f)}\b", c.read_text(encoding="utf-8")):
            return c
    return None


def gcc_of(t, f):
    c = src_file(t, f)
    return ad.file_compiler(c) if c else "2.7.2-psx"


def twins_of(t, f):
    try:
        import twins
        for g in twins.collect().values():
            names = [(tt, ff) for tt, ff, _, _ in g]
            if (t, f) in names:
                return [f"{tt}:{ff}" for tt, ff in names if (tt, ff) != (t, f)]
    except Exception:
        pass
    return []


def cmd_new(t, f):
    d = WIP / t
    d.mkdir(parents=True, exist_ok=True)
    c, md = d / f"{f}.c", d / f"{f}.md"
    if c.exists():
        sys.exit(f"{c} já existe")
    asm = ad.asm_path(t, f)
    draft = ad.run_m2c(t, f, asm)
    body = ad.to_c(draft, f, asm.read_text(encoding="utf-8"), {"protos": True}) if draft else None
    c.write_text(ad.HEADER + (body or f"/* m2c falhou: escrever {f} manualmente */") + "\n",
                 encoding="utf-8", newline="\n")
    src = src_file(t, f)
    md.write_text(CARD.format(t=t, f=f, src=src.relative_to(ROOT).as_posix() if src else "?",
                              gcc=gcc_of(t, f), size=ad.func_size(asm),
                              twins=", ".join(twins_of(t, f)) or "nenhuma",
                              date=datetime.date.today()), encoding="utf-8", newline="\n")
    print(f"criados {c.relative_to(ROOT)} e {md.relative_to(ROOT)}")


def run_match(t, f, quiet=True):
    c = WIP / t / f"{f}.c"
    args = ["python3", "tools/match.py", t, f, str(c), "--gcc", gcc_of(t, f)] + (["-q"] if quiet else [])
    return subprocess.run(args, cwd=ROOT, capture_output=True, text=True)


def cmd_show(t, f):
    r = run_match(t, f, quiet=False)
    print(r.stdout + r.stderr)


def cmd_check():
    rows = []
    for c in sorted(WIP.glob("*/*.c")):
        t, f = c.parent.name, c.stem
        r = run_match(t, f)
        out = r.stdout.strip().splitlines()[-1] if r.stdout.strip() else r.stderr.strip()[-120:]
        if r.returncode == 0:
            status = "✅ MATCH"
            store = ad.CACHE / t
            store.mkdir(parents=True, exist_ok=True)
            code = c.read_text(encoding="utf-8").replace(ad.HEADER, "", 1).strip()
            (store / f"{f}.c").write_text(code + "\n", encoding="utf-8")
            (store / f"{f}.gcc").write_text(gcc_of(t, f) + "\n", encoding="utf-8")
            tw = twins_of(t, f)
            status += f" — promovida; gêmeas: {', '.join(tw) or 'nenhuma'} (rode tools/twins.py)"
        else:
            m = re.search(r"\((\d+) instruções, (\d+) vs (\d+)\)", out)
            status = (f"{m.group(1)} instruções diferem ({m.group(2)} vs {m.group(3)})" if m
                      else "não compila")
        rows.append(f"| `{t}` | `{f}` | {gcc_of(t, f)} | {status} | [ficha]({t}/{f}.md) |")
        print(f"{t}:{f}: {status}")
    (WIP / "STATUS.md").write_text(
        "# Funções em trabalho manual\n\n"
        f"Atualizado por `tools/wip.py check` em {datetime.date.today()}. "
        "O lado a lado com o original é gerado localmente: `./run.sh python3 tools/wip.py show <alvo> <função>`.\n\n"
        "| Binário | Função | Compilador | Estado | Ficha |\n|---|---|---|---|---|\n" + "\n".join(rows) + "\n",
        encoding="utf-8", newline="\n")


def main():
    if len(sys.argv) >= 2 and sys.argv[1] == "check":
        return cmd_check()
    if len(sys.argv) == 4 and sys.argv[1] in ("new", "show"):
        return {"new": cmd_new, "show": cmd_show}[sys.argv[1]](sys.argv[2], sys.argv[3])
    sys.exit(__doc__)


if __name__ == "__main__":
    main()
