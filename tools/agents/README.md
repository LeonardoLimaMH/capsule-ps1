# tools/agents: do app dos agentes para o main, sem mão humana

Os agentes do decomp.anything trabalham numa cópia própria do repositório (distro WSL `decomp-wtf`,
`~/Decomp/capsule-ps1`) e registram no banco do app o C que casou. Este diretório leva esse trabalho ao
main (distro `Ubuntu`, `~/capsule-ps1`), uma função por commit, só com os 5 SHA-1 conferidos.

## Uso

```sh
tools/agents/pipeline.sh                 # uma rodada: integra, publica e sincroniza
tools/agents/pipeline.sh --loop 30       # uma rodada a cada 30 min (deixar rodando com setsid nohup)
tools/agents/pipeline.sh --no-publish --no-sync
```

A cópia dos agentes só é sincronizada quando nenhum agente tem claim ativo; com agentes rodando, a
rodada integra e publica, e o sync fica para a próxima rodada em que estiverem parados.

## Peças

| Arquivo | O que faz |
|---|---|
| `pipeline.sh` | a rodada inteira (export, candidatos, gêmeas, permuter, publicação, sync, conferência no app) |
| `permq.py` | fila do permuter (SQLite): pending → running com lease (dono + prazo) → done; lease vencido volta a pending |
| `perm_workers.sh` | `ensure`/`stop`/`status`: um `perm_worker.sh` por máquina (local + `.cache/agents/remotes.txt`) |
| `perm_worker.sh` | pega tarefa quando a máquina está livre, roda o decomp-permuter (~70 variantes/s), traz o resultado; 0 vai ao try_one |
| `remote_perm.sh` | roda no computador remoto: permuter no container, limitado a N núcleos, com vigia que para se a máquina ficar ocupada |
| `agent_claims.py` | roda na distro do app: quantos agentes têm claim ativo (a CPU local é dos agentes primeiro) |
| `near_dump.py`, `perm_prep.py`, `perm_merge.py` | quase-casadas do banco; candidato que compila sozinho; volta do resultado do permuter |
| `own_tu.sh` (+ `isolate.py`, `only_fn.py`, `split_rodata.py`) | função numa TU própria (switch em arquivo que já tem .rodata) |
| `db_matched.py` | roda na distro do app: funções casadas no banco e claims ativos (JSON) |
| `candidates.py` | para cada casada ainda em assembly no main: C do banco, C do arquivo do agente e C do banco com os tipos do arquivo |
| `with_helpers.py`, `csplit.py` | tira de um arquivo a função com só os helpers/tipos/externs que ela usa |
| `rename_clash.py` | tipo/helper que o main já tem com outro corpo é renomeado no candidato (o main fica intacto) |
| `try_one.sh` | aplica um candidato (opcional: nogp, outro perfil de compilador) e commita só com 5 SHA-1 |
| `integrate.sh` | rodata_migrate + troca do INCLUDE_ASM + dedupe + laço de conflitos de tipo/extern |
| `apply_candidate.py`, `dedupe.py`, `fix_typedef.py`, `fix_conflict.py` | passos do integrate.sh |
| `publish.sh` | limpa equiv/, README de progresso, commit, push (`push.sh`, chave do `.env`) e ByteMatch |
| `sync_down.sh` | roda na distro do app: guarda o WIP dos agentes num stash e iguala o código ao main |
| `app_check.sh` | roda na distro do app: pede ao app para medir de novo o projeto (fork/check) |

Cada candidato é tentado como está, com nogp (`config/nogp.<alvo>.txt`) e com nogp + 2.7.2-cdk; o que não entra
no arquivo (ex.: switch num arquivo que já tem .rodata próprio) é tentado numa TU própria.
O permuter do app testa ~25 variantes/min (recompila o arquivo inteiro); o daqui, ~4000/min.
As gêmeas (`tools/twins.py`) entram depois das funções dos agentes, para aproveitar as que acabaram de
casar.

## Fila do permuter e outros computadores

Cada rodada do pipeline põe as 40 quase-casadas mais perto do original na fila (`permq.py`; uma função volta à
fila quando o melhor C dela no app muda) e garante um trabalhador por máquina. Quem está livre pega a próxima
tarefa, que fica travada com prazo (lease); se o resultado não volta no prazo (máquina caiu, ssh travou), a
tarefa volta a ficar pendente para outra máquina.

- Local: livre quando nenhum agente do app tem claim ativo.
- Remoto: livre quando responde por ssh e a carga de 1 min está abaixo de 1/4 dos núcleos. Usa até
  `PERM_REMOTE_JOBS` (8) núcleos; durante a tarefa, se os outros processos da máquina passam de 1/4 dos núcleos,
  o permuter para e a tarefa volta à fila.

Para pôr outra máquina na fila: Ubuntu com Docker, acesso por chave ssh a partir do Windows (`ssh.exe`), a imagem
do toolchain (`docker save ygo-decomp-tc | gzip | ssh.exe usuario@host "gunzip | docker load"`) e uma linha
`usuario@host` em `.cache/agents/remotes.txt` (fora do git). Vai para lá só o que o compilador usa (`tools`,
`include`, `config`) e a pasta de trabalho de cada função; o disco e o assembly do jogo ficam aqui.

    tools/agents/perm_workers.sh status     # máquinas e fila
    tools/agents/perm_workers.sh stop       # para todos (as tarefas voltam à fila pelo prazo)

## Modelo local em outra máquina (janela noturna)

`night_llm.sh <usuario@host> <modelo> <sessões> <HH:MM fim>` liga, até o horário de fim, sessões do agente embutido do
app (tipo "api") num modelo servido pelo Ollama da outra máquina (`http://<ip>:11434/v1`): trabalho ativo além do
permuter. No fim remove o endpoint das configurações do app (as sessões param) e descarrega o modelo da GPU; um guarda
na própria máquina descarrega no mesmo horário se este computador estiver desligado. `app_llm.py start|stop` (roda na
distro do app) faz a parte do app. Log em `.cache/agents/night.log`.
