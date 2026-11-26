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
| `permute_near.sh` | com os agentes parados: decomp-permuter (~70 variantes/s) nas N quase-casadas do app; o que chega a 0 vai ao try_one |
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
