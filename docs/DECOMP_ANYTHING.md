# decomp.anything (bancada de agentes) neste projeto

[decomp.anything](https://github.com/giveen/decomp.anything) (MIT) é uma bancada de
decompilação com agentes de IA. No modo *fork*, ele trabalha sobre um repositório que já
existe:

- clona o projeto, numa branch `decomp-wtf`;
- os agentes reservam funções (*claims*), escrevem C no arquivo-fonte e compilam com o
  build do próprio projeto;
- o objdiff julga cada tentativa; cada match vira um commit na `decomp-wtf`;
- notas e o cabeçalho compartilhado ficam disponíveis para todos os agentes.

O que ele resolve aqui: **coordenação entre as duas IAs**. Com os *claims*, ninguém pega a
mesma função, e cada tentativa fica registrada com pontuação e notas.

O que ele **não** muda: escrever o C que casa continua sendo o trabalho difícil (veja o
AGENTS.md, seções 6 e 9).

## Instalação nesta máquina (2026-11-03)

| O quê | Onde |
|---|---|
| código baixado | `C:\Users\leonardo.queiroz\Documents\Projects\RECOMP\decomp.anything` (clone do GitHub) |
| instalação usada | `~/decomp.anything` no Ubuntu do WSL2: clone do anterior, com `uv sync` |
| `uv` | `~/.local/bin/uv` (instalador oficial da Astral) |
| cópia de trabalho dos agentes | `~/Decomp/capsule-ps1`, branch `decomp-wtf`, criada com `decomp fork ~/capsule-ps1` |
| app | `http://127.0.0.1:6464` (o link com a chave de acesso é impresso por `decomp url`) |

Ele exige Linux; por isso roda no WSL2, nunca na pasta do Windows.

Na cópia dos agentes também foram colocados `disc/` e `.cache/bin/objdiff-cli`. Depois
disso, `./run.sh make split` e `make` deram os 5 SHA-1.

### Como o build é chamado

O decomp.anything compila pelo `custom_make`/`custom_args` do `objdiff.json`. Aqui isso é:

```
./run.sh python3 tools/objdiff_report.py --objects
```

O comando refaz só os objetos que mudaram (2–3 s). O `objdiff.json` é gerado por
`tools/objdiff_report.py`; não edite à mão.

### Conectar um agente

```bash
# Claude Code no Windows (já feito; config em %USERPROFILE%\.claude.json)
claude mcp add decomp -s user -- wsl.exe -d Ubuntu -- /home/leonardoqueiroz/decomp.anything/.venv/bin/decomp mcp --name claude-code

# Codex (a outra IA): dentro do WSL
cd ~/decomp.anything && uv run decomp connect codex
```

O app sobe sozinho quando um agente conecta (`decomp mcp`). Para abrir no navegador:
`cd ~/decomp.anything && uv run decomp url`.

## Fluxo

1. Os agentes trabalham em `~/Decomp/capsule-ps1` (branch `decomp-wtf`). Cada match é um
   commit ali.
2. Os commits voltam para a cópia principal, onde a prova final é feita:

   ```bash
   cd ~/capsule-ps1
   git fetch ~/Decomp/capsule-ps1 decomp-wtf
   git cherry-pick <commits>
   ./run.sh make -j10        # os 5 SHA-1, como sempre
   ```

   Depois: `progress.py --readme --staged`, commit, push e ByteMatch (AGENTS.md, seção 6).

## Limites que importam neste projeto

- **Configuração e layout:** os agentes do decomp.anything só escrevem C e cabeçalhos. Não
  mudam `config/compilers.txt` nem o YAML do splat, e não dividem TUs. Boa parte dos matches
  deste projeto depende de trocar o compilador do arquivo ou de isolar a função num TU
  próprio (AGENTS.md, seção 6, passo 6). Isso continua sendo feito na cópia principal, com
  as ferramentas daqui (`split_tu.py`, `place2.py`, `rodata_migrate.py`).
- **Prova:** o objdiff dele ignora relocações, do mesmo jeito que o nosso relatório. A prova
  continua sendo o build com os 5 SHA-1, na cópia principal.
- **Escopo:** as regras do AGENTS.md valem também para os agentes que trabalham por ele.
