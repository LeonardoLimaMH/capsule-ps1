# raise:func_800BBA38

- **Binário / arquivo-fonte:** `raise` / `raise_800B9C3C`
- **Compilador do arquivo:** GCC 2.7.2 (o 2.8.1 piora: 89+ instruções)
- **Tamanho:** 0x1f0 bytes
- **Gêmeas:** `raise:func_800BC8FC`, `raise:func_800BD2E0`, `raise:func_800BDE30`
- **Reproduzir:** `./run.sh python3 tools/wip.py show raise func_800BBA38`

## O que a função faz

Cria um objeto/sprite: registra uma tarefa (`func_80015B3C` com a rotina de atualização
`func_800BB814`), carrega o recurso gráfico por identificador `(tipo << 16) | índice`
(`func_80019F30`, tipos 6 e 7) e preenche posição centralizada pela largura/altura da
tela (`D_8008ED68 + 0x108/0x10C`), campos de bits em +0x30/+0x38 e uma cópia de 8 bytes.

## Hipótese atual

13 parâmetros; struct `Obj` com campos de bits; ordem de blocos ABDFEC (busca exaustiva).

## Causas identificadas

| # | Diferença observada | Causa | Correção | Generaliza? |
|---|---|---|---|---|
| 1 | `res->unk0` lido antes de `res->unk18` | argumento calculado dentro da chamada | `tmp = ...` dentro da chamada | não |
| 2 | `unk1C = 0` antes de `unk18` | resultado guardado em temporário | temporário | não |
| 3 | `&D_8008ED68` calculado uma vez em registrador | em aberto: ponteiro local e `register` não reproduzem no 2.7.2 | — | provável (padrão recorrente) |
| 4 | registradores trocados (s6/s7) | depende de 3 | — | — |

## Histórico

- 2026-10-21: 88 → 60 instruções (ordem dos blocos); permuter 5 min sem ganho.
