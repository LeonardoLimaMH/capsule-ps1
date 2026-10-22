# Processo de trabalho

Este documento define como o projeto avança. A regra central: **só conta o que é
verificado por comparação binária**. Um C que compila não é um C correto; uma
heurística que gera mais C não é uma heurística melhor.

## 1. Diagnóstico permanente — bancada fixa

`config/bench.txt` é um conjunto **fixo** de 222 funções dos 5 binários
(180 pendentes sorteadas com semente fixa + 42 controles já casados). Ele não é
editado; uma revisão do conjunto exige criar uma nova versão e registrar o motivo.

```bash
./run.sh python3 tools/bench.py --run ROTULO            # pipeline padrão
./run.sh python3 tools/bench.py --run ROTULO --heur a,b # só as heurísticas listadas
./run.sh python3 tools/bench.py --ablate                # padrão + cada heurística removida
./run.sh python3 tools/bench.py --compare A B           # o que mudou função a função
```

Para cada função, a bancada registra: se o C **compila**, se o **tamanho** coincide,
quantas **instruções diferem**, a **primeira divergência** e a sua categoria
(registradores, ordem/instrução, tipo de load, extensão/truncamento, comparação
com/sem sinal, tamanho). Cada rodada acrescenta uma linha a `docs/BENCH.md`
separando *casadas* (sucesso) de *compila* e *tamanho igual* (métricas auxiliares).

## 2. Heurísticas: critério de aceitação

Uma heurística (inferência de tipos, sinal, protótipos, variáveis locais,
estruturas...) entra em `DEFAULT_HEURISTICS` (`tools/autodecomp.py`) somente se:

1. aumentar o número de **pendentes casadas** na bancada fixa; e
2. **não** fizer nenhum controle deixar de casar (`bench.py --compare` sai com
   erro se houver perda); e
3. os casamentos novos, aplicados ao `src/`, mantiverem o **SHA-1** dos 5 binários
   e passarem nos **testes diferenciais**.

Heurísticas que só melhoram "compila" ou "tamanho igual" ficam desligadas até
produzirem casamentos.

## 3. Funções casadas como referência

- `tools/typeinfer.py`: assinaturas exatas das funções já casadas viram
  protótipos para quem as chama; tipos de parâmetros vêm da normalização na
  entrada (`sll/sra`, `andi`), evidência direta do compilador.
- `tools/twins.py`: o C de uma função casada é testado nas gêmeas (código
  idêntico com relocações mascaradas), com os nomes trocados.
- `tools/assign_compilers.py`: o compilador de cada arquivo-fonte segue a
  evidência das funções casadas nele.
- `tools/ghidra.py` + `tools/ghidra2c.py`: o pseudo-C do Ghidra (gerado no host com
  o Ghidra aberto, guardado em `.cache/ghidra/c/`) é uma segunda fonte de rascunho,
  ao lado do m2c; aceita pela bancada em 2026-10-22 (`docs/BENCH.md`).

## 4. Trabalho manual

Toda função difícil fica em `docs/wip/<alvo>/<função>.c` (hipótese) +
`<função>.md` (ficha). `tools/wip.py check` recompila tudo e atualiza
`docs/wip/STATUS.md`; o lado a lado com o original é regenerado localmente com
`tools/wip.py show` (o assembly do jogo não é versionado).

Cada correção registra na ficha **a causa** da diferença e se ela **generaliza**.
Uma causa que se repete vira candidata a heurística e passa pelo item 2. Quando a
hipótese casa, o `check` a promove para `.cache/auto` (aplicada pelo
`autodecomp.py --apply`) e lista as gêmeas.

## 5. Validação dos binários e dos dados

`make test` executa:

| Teste | O que garante |
|---|---|
| `test_rebuild.py` | os 5 binários de código são reproduzidos byte a byte |
| `test_difftest.py` | cada função em C se comporta igual à original (emulação R3000) |
| `test_overlays.py` | disco confere com `config/disc_files.txt`; a tabela de carga do jogo aponta para arquivos reais; a tabela-índice dos tipos 0x11/0x12 alcança os três overlays; base de ligação `0x80097800` confirmada por estatística de chamadas; toda chamada de overlay resolve para função conhecida do overlay ou do executável principal |

Overlays (`CHESS`, `RAISE`, `ETC`) seguem exatamente as mesmas regras do
executável principal: estão na bancada fixa, no rebuild, nos testes diferenciais
e na validação de dependências.

## Ciclo

```
bench (medir) → hipótese/heurística → bench (comparar, sem regressão)
   → autodecomp --apply → assign_compilers --split / pad_split → make (SHA-1)
   → make test → progress --readme → commit
```
