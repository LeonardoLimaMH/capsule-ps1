# Histórico da bancada fixa (tools/bench.py)

Cada linha é uma rodada no mesmo conjunto `config/bench.txt`. *Casadas* = bytes idênticos; *compila* e *tamanho igual* são métricas auxiliares, não sucesso.

| Data | Rótulo | Heurísticas | Pendentes casadas | Controles casados | Compila | Tamanho igual | Mediana instr. dif. | Principais causas |
|---|---|---|---|---|---|---|---|---|
| 2026-10-21 | padrao | gcc281, noandor, protos, ptypes, unproto, unsigned | 3/180 | 42/42 | 174 | 33 | 34 | registradores (98); ordem/instrução diferente (64); extensão/truncamento (6); m2c falhou (5) |
| 2026-10-21 | sem-gcc281 | noandor, protos, ptypes, unproto, unsigned | 3/180 | 37/42 | 174 | 32 | 37 | registradores (96); ordem/instrução diferente (65); extensão/truncamento (7); m2c falhou (5) |
| 2026-10-21 | sem-noandor | gcc281, protos, ptypes, unproto, unsigned | 3/180 | 42/42 | 174 | 33 | 34 | registradores (97); ordem/instrução diferente (65); extensão/truncamento (6); m2c falhou (5) |
| 2026-10-21 | sem-protos | gcc281, noandor, ptypes, unproto, unsigned | 3/180 | 42/42 | 174 | 33 | 34 | registradores (98); ordem/instrução diferente (64); extensão/truncamento (6); m2c falhou (5) |
| 2026-10-21 | sem-ptypes | gcc281, noandor, protos, unproto, unsigned | 3/180 | 42/42 | 174 | 33 | 34 | registradores (98); ordem/instrução diferente (64); extensão/truncamento (6); m2c falhou (5) |
| 2026-10-21 | sem-unproto | gcc281, noandor, protos, ptypes, unsigned | 3/180 | 42/42 | 174 | 33 | 34 | registradores (98); ordem/instrução diferente (64); extensão/truncamento (6); m2c falhou (5) |
| 2026-10-21 | sem-unsigned | gcc281, noandor, protos, ptypes, unproto | 3/180 | 42/42 | 174 | 33 | 34 | registradores (98); ordem/instrução diferente (64); extensão/truncamento (6); m2c falhou (5) |

### Decisão — ablação de 2026-10-21

- `gcc281`: **necessária** (sem ela, 5 controles deixam de casar). Fica no padrão.
- `noandor`, `unsigned`: 0 casamentos; deixam 5 e 1 rascunhos mais próximos → conjunto de
  rascunho (`DRAFT_HEURISTICS`), usado para pontos de partida de trabalho manual/permuter.
- `protos`, `ptypes`, `unproto`: nenhum efeito → desligadas (continuam disponíveis).
- Causa dominante das falhas: **registradores (98)** e **ordem de instruções (64)** de 180;
  só 33 rascunhos têm o tamanho certo. Inferência de tipos não ataca essa causa.
| 2026-10-21 | padrao-v2 | gcc281 | 3/180 | 42/42 | 174 | 33 | 34 | registradores (97); ordem/instrução diferente (65); extensão/truncamento (6); m2c falhou (5) |
| 2026-10-22 | permuter-lote | gcc281 | 3/180 | 42/42 | 174 | 33 | 34 | registradores (97); ordem/instrução diferente (65); extensão/truncamento (6); m2c falhou (5) |
- 2026-10-22 — **permuter em lote** (11 processos, 120 s/função, 29 quase-acertos com mesmo tamanho e ≤ 40 instruções
  diferentes): **6 casamentos** (chess: func_8009C178, func_800A8D08, func_800A89C8; etc: func_800A822C,
  func_8009BD30, func_80097D8C). A linha `permuter-lote` acima é igual a `padrao-v2` por construção: a bancada mede
  o pipeline automático (m2c + heurísticas), e os resultados do permuter são casamentos individuais, verificados por
  bytes e aplicados ao `src/`. Todos os 6 casaram em n ≥ 3; nenhum com 1–2 instruções diferentes (estes são, em
  geral, alocação de registradores que o permuter não alcança em 2 min). Duas funções do etc exigiram GCC 2.8.1 →
  `assign_compilers.py --split` criou novas fronteiras de TU; SHA-1 dos 5 binários inalterados.
| 2026-10-22 | ghidra-v1 | gcc281, ghidra | 9/180 | 42/42 | 174 | 47 | 34 | registradores (87); ordem/instrução diferente (63); extensão/truncamento (9); m2c falhou (5) |
- 2026-10-22 — **heurística `ghidra` aceita** (`ghidra-v1`): o pseudo-C do Ghidra 12.1.4 (ELF do build
  importado com os símbolos do projeto) vira variante de rascunho: `tools/ghidra2c.py` traduz tipos/intrínsecos
  do Ghidra, as declarações de globais vêm do m2c e o `to_c` aplica as regras de $gp e %hi/%lo. Resultado:
  **+6 pendentes casadas (3 → 9/180)**, 0 controles perdidos, 65 mais próximas, 0 mais distantes; "tamanho igual"
  33 → 47. Casadas novas: yuugi func_8001E208, func_800342CC; slpm DecDCTinSync, func_8011B530,
  slpm_RestartCallback; chess func_8009C178. Entra em `DEFAULT_HEURISTICS`. Rascunhos com registradores sem
  origem no C (`in_*`, `unaff_*`, `extraout_*`) são descartados.
- 2026-10-22 — **hipótese rejeitada: outro compilador/nível de otimização.** Os 113 rascunhos da bancada
  (`ghidra-v1`, ≤ 60 instruções diferentes) foram recompilados com GCC 2.6.3, 2.7.2, 2.8.0, 2.8.1 e 2.91.66 ×
  `-O1/-O2/-O3 -G8` e `-O2 -G0`: **0 casamentos**; no máximo 7 rascunhos ficam um pouco mais próximos (sempre
  com `-O1`, por poucas instruções). O par GCC 2.7.2/2.8.1 com `-O2 -G8` continua sendo o do original; as
  diferenças restantes estão no C (alocação de registradores e ordem), não na escolha do compilador.
- 2026-10-22 — **hipótese rejeitada: junção artificial automática para constante repetida** (ver
  `docs/NOTES.md`). Aplicada à primeira chamada com literal repetido em todas as 227 pendentes cujo
  assembly copia um registrador de argumento (`addu $aN, $aM, $zero`): **0 casamentos**, 26 mais
  próximas, 92 mais distantes, 109 iguais. O truque só serve caso a caso (casou `raise:func_800DC79C`).
