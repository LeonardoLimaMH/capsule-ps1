# yuugi:SetDrawEnv

- **Binário / arquivo-fonte:** `yuugi` / objeto do SDK (libgpu) `sdk_libgpu_sys__Priority`
- **Compilador do arquivo:** GCC 2.7.2 (o 2.8.1 piora: 75 instruções e tamanho diferente)
- **Tamanho:** 0x1f8 bytes
- **Gêmeas:** `slpm:slpm_SetDrawEnv`
- **Reproduzir:** `./run.sh python3 tools/wip.py show yuugi SetDrawEnv`

## O que a função faz

Monta o pacote de comandos de ambiente de desenho da GPU (área de recorte, deslocamento,
janela de textura, modo/página de textura) a partir de uma descrição; se `isbg` estiver
ligado, acrescenta um retângulo de preenchimento do fundo, com largura/altura limitadas
pela resolução (`D_80078920`/`D_80078922`). Grava o número de palavras no byte 3 do pacote.

## Hipótese atual

Função `void`; retângulo local na pilha (+0x10) copiado campo a campo; *clamp* em ternário.

## Causas identificadas

| # | Diferença observada | Causa | Correção | Generaliza? |
|---|---|---|---|---|
| 1 | quadro 0x40 e `move v0` no fim | função não retorna valor | `void` | sim: verificar uso de `v0` no epílogo (candidata a heurística) |
| 2 | ordem dos `lhu` na soma | operandos `w + x` / `y + h` | reescrita | não |
| 3 | limite relido com `lh` e `lhu` | provável macro de *clamp* sobre o retângulo em memória | em aberto | possivelmente (libgpu) |
| 4 | quadro de pilha 0x28 (original) x 0x38 | em aberto | — | — |

## Histórico

- 2026-10-21: 68 → 42 instruções com `volatile` no permuter (rejeitado: não reflete o original).
