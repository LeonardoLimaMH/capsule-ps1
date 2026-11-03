# Ambiente de trabalho (desde 2026-11-03)

O projeto passou a ser trabalhado **dentro do WSL2**, e não mais na pasta do Windows.

O Docker no Windows lendo o repositório por bind mount de `C:\` era o gargalo de tudo:
build, `make split`, varreduras, permuter e `--apply`. Com o repositório no sistema de
arquivos do Ubuntu (ext4), o mesmo container roda quase sem custo de disco.

| Etapa | Windows (`C:\...\ygo-mcbb-decomp`) | WSL2 (`~/capsule-ps1`) |
|---|---|---|
| `make split` | ~5 min | 20 s |
| build completo (`make -j10`) | 5–10 min | 6 s |
| `make` sem nada a refazer | ~1 min | < 1 s |

## Onde fica cada coisa

- **Cópia de trabalho:** `/home/leonardoqueiroz/capsule-ps1` na distribuição `Ubuntu` do
  WSL2. É um clone do GitHub (`LeonardoLimaMH/capsule-ps1`), branch `main`.
- **No Windows**, a mesma pasta aparece em
  `\\wsl.localhost\Ubuntu\home\leonardoqueiroz\capsule-ps1`. Dá para abrir e editar
  por esse caminho, mas os comandos devem rodar dentro do WSL.
- **A pasta antiga** `C:\Users\leonardo.queiroz\Documents\Projects\RECOMP\ygo-mcbb-decomp`
  ficou como estava, sem uso. Não faça commits nela: a sincronização entre as cópias é
  só pelo GitHub.
- **Arquivos fora do git** foram copiados da pasta antiga para o WSL:
  - `disc/`: dump extraído, necessário para `make split`.
  - `.env`: `SITE`, `KEY`, `BYTE_MATCH_TOKEN`.
  - `.cache/bin/objdiff-cli`.
  - Caches de candidatos: `.cache/auto`, `tr2`, `rt`, `gf`, `xc`, `xc2`, `si`, `sweep`.

## Como rodar

```bash
# no Windows: abrir um terminal do Ubuntu, ou rodar um comando direto
wsl -d Ubuntu --cd /home/leonardoqueiroz/capsule-ps1 -- bash -c './run.sh make -j10'

# dentro do Ubuntu
cd ~/capsule-ps1
./run.sh make split && ./run.sh make -j10
```

- O `run.sh` funciona igual. Ele monta o diretório atual em `/work` no container
  `ygo-decomp-tc`.
- A imagem é a mesma do Docker Desktop, compartilhada com o Windows.
- No Git Bash do Windows, prefixe com `MSYS_NO_PATHCONV=1`. Sem isso, o Git Bash
  reescreve os caminhos `/home/...`.

## Ajustes feitos na máquina

- **Docker Desktop:** integração com o WSL ligada para a distribuição `Ubuntu`.
  - Em `%APPDATA%\Docker\settings-store.json`: `EnableIntegrationWithDefaultWslDistro`
    e `IntegratedWslDistros: ["Ubuntu"]`.
  - Backup da versão anterior em `settings-store.json.bak-claude`.
  - Uma atualização do Docker Desktop apagou essa configuração uma vez. Se o `docker`
    sumir dentro do Ubuntu, religue em Settings → Resources → WSL integration.
- **`%USERPROFILE%\.wslconfig`:** `memory=9GB` (antes 7GB) e `processors=12` (antes 11).
  - Backup em `.wslconfig.bak-claude`.
  - A máquina tem 15,6 GB. Não suba mais: falta de memória no Windows já derrubou
    tarefas longas em segundo plano.
- **`run.sh` e `tools/*.sh`** agora têm o bit de execução registrado no git. Os clones
  no Linux saem prontos.

## Para a outra IA

- O container antigo (`recomp-chess-codex-progress`) montava
  `.cache/codex-chess/staging` da pasta do Windows. Ele foi parado.
- Para continuar com a mesma velocidade, recrie o container montando um diretório
  do WSL, por exemplo um clone próprio em `~/capsule-ps1-codex`.
- Use o GitHub para sincronizar. Antes de começar: `git pull`, e confira se uma
  função ainda está em `INCLUDE_ASM` antes de refazer.
- Depois de cada lote validado (os 5 SHA-1): commit, push, `./run.sh make report` e
  `python3 tools/objdiff_report.py --upload`. O último publica o progresso no ByteMatch.
