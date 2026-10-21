# Histórico da bancada fixa (tools/bench.py)

Cada linha é uma rodada no mesmo conjunto `config/bench.txt`. *Casadas* = bytes idênticos; *compila* e *tamanho igual* são métricas auxiliares, não sucesso.

| Data | Rótulo | Heurísticas | Pendentes casadas | Controles casados | Compila | Tamanho igual | Mediana instr. dif. | Principais causas |
|---|---|---|---|---|---|---|---|---|
| 2026-10-21 | padrao | gcc281, noandor, protos, ptypes, unproto, unsigned | 3/180 | 42/42 | 174 | 33 | 34 | registradores (98); ordem/instrução diferente (64); extensão/truncamento (6); m2c falhou (5) |
