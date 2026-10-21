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
