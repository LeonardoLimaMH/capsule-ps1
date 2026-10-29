# GTE no teste diferencial

O GTE (Geometry Transformation Engine, coprocessador 2 do PS1) faz as contas de 3D:
rotação e translação de vértices, projeção perspectiva, profundidade média para a
tabela de ordenação, produto matriz × vetor etc. As rotinas que o usam foram escritas à
mão em assembly no original (`config/handwritten.*.txt`, motivo "coprocessador").

O Unicorn, base do `tools/difftest.py`, não emula o COP2: qualquer instrução GTE gera
uma exceção sem informar o `pc`. Por isso, até aqui, toda tentativa que chegava a uma
instrução GTE contava como "não suportada", e essas rotinas não podiam ser validadas.

## Referências

- **psx-spx — Geometry Transformation Engine (GTE)**:
  <https://psx-spx.consoledev.net/geometrytransformationenginegte/>
  Especificação usada na implementação: registradores, FLAG, fórmulas de cada comando,
  divisão UNR e as peculiaridades do hardware.
- **DuckStation** (emulador de PS1): <https://github.com/stenzek/duckstation>
  (`src/core/gte.cpp`). Usado só como referência de comportamento para conferir pontos
  que o psx-spx deixa em aberto, por exemplo onde a soma parcial dos MAC é estendida
  para 44 bits, e para cruzar resultados (a tabela UNR gerada pela fórmula do psx-spx é
  idêntica à do DuckStation, e a divisão bate em 300.000 casos sorteados).
  **Licença:** o DuckStation é CC BY-NC-ND 4.0. Nenhum código dele foi copiado ou
  adaptado: `tools/gte.py` é implementação própria a partir da especificação. O clone
  local fica em `ref/duckstation/`, fora do git (`.git/info/exclude`), e não é publicado.
- **psxe** (Allkern): <https://github.com/allkern/psxe>, licença **MIT**. O GTE fica em
  `psx/cpu.c`. É o oráculo independente previsto em `tools/gte_oracle.py`: o `cpu.c` é
  compilado num harness e roda os mesmos estados e instruções que o `tools/gte.py`,
  comparando os 64 registradores. O código não é copiado para o repositório; o clone
  fica em `ref/psxe/` (fora do git) e o compilador nativo vem da imagem Docker.
- **ARMSX1**: <https://github.com/ARMSX2/ARMSX1>, um fork do psxe. Licença mista: o
  `LICENSE` é LGPLv3, o código herdado do psxe é MIT (`LICENSES/UPSTREAM-MIT.txt`) e o
  README declara o material próprio do ARMSX como proprietário ("all rights reserved").
  As funções do GTE no `psx/cpu.c` do ARMSX1 são idênticas às do psxe (conferido função a
  função), então o projeto usa o psxe original, só MIT, e não o ARMSX1.

## Implementação (`tools/gte.py`)

Cobertura atual, escolhida pelo que as rotinas pendentes realmente usam:

| Grupo | Instruções |
|---|---|
| Movimentos | `mfc2`, `mtc2`, `cfc2`, `ctc2`, `lwc2`, `swc2` |
| Comandos | `RTPS`, `RTPT`, `NCLIP`, `AVSZ3`, `AVSZ4`, `MVMVA` |

Outro comando (`NCCS`, `NCDS`, `SQR`, `OP`, `DPCS`, `INTPL`, `CC`, `CDP`...) ainda levanta
`GTEUnsupported`, e a tentativa continua contando como "não suportada".

Detalhes seguidos do psx-spx:

- registradores de 16 bits (VZ, IR, RT33, H, DQA, ZSF3/4...) guardam o valor com sinal
  estendido; OTZ e SZ0..3 sem sinal; `SXYP` empurra a fila SXY; `IRGB` grava IR1..3
  (× 80h); `ORGB` é lido de IR1..3; `LZCS` → `LZCR` (contagem de bits iniciais iguais);
  `FLAG` grava os bits 30..12 e o bit 31 é o OU dos bits 30..23 e 18..13;
- MAC1..3 conferidos em 44 bits a cada soma parcial (FLAG 30..25), MAC0 em 32 bits
  (FLAG 16/15); IR1..3 saturam em −8000h..7FFFh (0..7FFFh com `lm`), IR0 em 0..1000h;
- RTPS/RTPT: a flag do IR3 é conferida com `MAC3 SAR 12`, como se `lm = 0`; SZ3 satura em
  0..FFFFh; divisão UNR com saturação em 1FFFFh (FLAG 17); SX2/SY2 saturam em
  −400h..3FFh (FLAG 14/13); a profundidade (MAC0/IR0) é calculada só no último vértice
  do RTPT;
- MVMVA: matriz RT/LLM/LCM ou a matriz "lixo" (`mx = 3`); vetor V0/V1/V2/IR; translação
  TR/BK/FC/nenhuma, com o bug do FC (`cv = 2`) reproduzido.

## Integração no `difftest.py`

- Cada instrução GTE dentro do código testado (função original e candidato em C) é
  localizada antes da execução. Um gancho de código restrito a esses trechos executa a
  instrução em `tools/gte.py` e pula para a seguinte.
- Instrução GTE no delay slot: o gancho decide o desvio anterior (`branch_outcome`) com
  os registradores lidos antes do delay slot, executa a instrução GTE e segue para o
  destino.
- O estado inicial do GTE é sorteado por tentativa, igual nos dois lados. O estado final
  (64 registradores) entra na comparação como o evento `io:gte`, comparado sem
  relaxamento.
- Funções do SDK que mexem no GTE (`SetRotMatrix`, `RotTransPers`...) continuam como
  stubs ou contratos; o GTE só é emulado dentro do código testado.

## Validação da própria emulação

- Casos manuais: projeção com matriz identidade, NCLIP, AVSZ3, MVMVA, IRGB/ORGB, LZCR,
  máscara do FLAG e extensão de sinal do H.
- Tabela e divisão UNR cruzadas com o DuckStation.
- Oráculo psxe (`./run.sh python3 tools/gte_oracle.py --n 200000 --seed 7`): 200.000 estados
  e instruções sorteados (RTPS, RTPT, NCLIP, AVSZ3, AVSZ4, MVMVA com todos os mx/v/cv/sf/lm,
  e escritas em todos os registradores), com valores de borda; os 64 registradores
  (incluindo o FLAG) ficaram idênticos em todos os casos. Também 30.000 com `--seed 1`.
- Mutações no C de `func_800E3C24` (deslocamento do SZ, `rtpt` no lugar de `rtps`) são
  detectadas como divergentes.
- Regressão: uma amostra de funções já validadas mantém o mesmo veredito.
