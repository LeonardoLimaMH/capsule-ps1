# Yu-Gi-Oh! Monster Capsule Breed & Battle — Decompilação (SLPM-86096)

Decompilação do jogo de PlayStation **Yu-Gi-Oh! Monster Capsule: Breed & Battle**
(Konami, 1998, versão japonesa `SLPM-86096`) para código C que, compilado com o
mesmo compilador da época, gera **binários idênticos byte a byte** aos do disco
original. Cada função convertida também passa por **testes diferenciais** em
emulação contra a função original.

> ⚖️ **Este repositório não contém nenhum dado do jogo.** Para compilar é preciso
> fornecer a sua própria cópia do disco (dump do seu CD original). Binários,
> assembly desmontado e assets extraídos ficam fora do controle de versão
> (`.gitignore`). Veja [Aspectos legais](#aspectos-legais).

---

## Progresso

<!-- PROGRESS:START -->
**Código do jogo decompilado em C (byte-matching):** `░░░░░░░░░░░░░░░░░░░░` **1.96%**  
**Total incluindo SDK PsyQ:** `░░░░░░░░░░░░░░░░░░░░` **2.45%**  
**Cobertura (C + funções que já eram assembly no original):** `█░░░░░░░░░░░░░░░░░░░` **5.05%**  
**Funcional (C byte-idêntico + C equivalente validado por teste diferencial, `equiv/`):** `████████████████░░░░` **78.20%**  
**Rebuild byte-idêntico dos 5 binários:** ✅ (verificado por SHA-1 em `make check`)

| Binário | Função | Código do jogo (C) | Funções | SDK PsyQ (C) | Total |
|---|---|---|---|---|---|
| `YUUGI.EXE` | executável principal | 2.80% (5,772 / 206,372 B) | 142 / 732 | 8.79% (84 / 303 fn) | **3.99%** |
| `SLPM_860.96` | loader / boot | 4.76% (988 / 20,756 B) | 27 / 119 | 6.57% (70 / 215 fn) | **5.99%** |
| `CHESS.BIN` | overlay de batalha (tabuleiro) | 1.72% (7,268 / 421,956 B) | 100 / 867 | 100.00% (2 / 2 fn) | **1.74%** |
| `RAISE.BIN` | overlay de criação de monstros | 1.84% (6,008 / 326,576 B) | 190 / 940 | 100.00% (2 / 2 fn) | **1.86%** |
| `ETC.BIN` | overlay de menus/diversos | 0.92% (816 / 88,992 B) | 10 / 189 | 0.00% (0 / 0 fn) | **0.92%** |
| **Total** | | **1.96%** (20,852 / 1,064,652 B) | 469 / 2847 | 7.89% (158 / 522 fn) | **2.45%** |

**Equivalentes e pendências por binário (jogo + SDK):**

| Binário | C equivalente (`equiv/`) | Funcional (bytes) | Funções em C | Faltam C |
|---|---|---|---|---|
| `YUUGI.EXE` | 83.93% (648 fn) | `█████████░` **87.93%** | 874 / 1,035 (84.44%) | **161** |
| `SLPM_860.96` | 82.92% (198 fn) | `█████████░` **88.90%** | 295 / 334 (88.32%) | **39** |
| `CHESS.BIN` | 59.72% (559 fn) | `██████░░░░` **61.46%** | 661 / 869 (76.06%) | **208** |
| `RAISE.BIN` | 82.24% (712 fn) | `████████░░` **84.10%** | 904 / 942 (95.97%) | **38** |
| `ETC.BIN` | 99.08% (179 fn) | `██████████` **100.00%** | 189 / 189 (100.00%) | **0** |
| **Total** | 75.75% (2,296 fn) | `████████░░` **78.20%** | 2,923 / 3,369 (86.76%) | **446** |

Equivalente conta somente `equiv/`; funcional soma byte-exact e equivalente, sem duplicar funções.
As barras medem bytes de código. A coluna de funções mostra também seu percentual por quantidade.
Faltam C inclui as rotinas que permanecem em assembly original, contabilizadas separadamente na cobertura acima.
<!-- PROGRESS:END -->

A **cobertura** soma ao C as funções que já eram escritas em assembly no
original (detectadas por `tools/handwritten.py`): nesses casos o `.s` é a forma
correta do código-fonte, como num projeto de decompilação tradicional.

O percentual é medido em **bytes de código**: uma função conta como decompilada
quando o seu `INCLUDE_ASM` foi substituído por C e o build completo continua
batendo o SHA-1 do original. O código do SDK oficial da Sony (PsyQ), linkado
dentro dos executáveis, é contado à parte (`tools/progress.py`).

### O que "100% das funcionalidades" significa aqui

| Garantia | Como é verificada | Estado |
|---|---|---|
| O build reproduz **todos** os binários de código do jogo | `make check` compara SHA-1 dos 5 executáveis/overlays | ✅ 100% |
| Cada função em C gera exatamente os mesmos bytes | `tools/match.py` (por função) + SHA-1 do build | ✅ em todas as funções em C |
| Cada função em C tem o mesmo comportamento | `tools/difftest.py` (emulação R3000, estado aleatório) | ✅ em todas as funções em C |
| Todo o código está em C legível | percentual acima | 🚧 em andamento |

Como o build é sempre byte-idêntico, o jogo gerado a partir deste repositório é
funcionalmente 100% igual ao original em qualquer estágio; o trabalho restante é
converter o assembly em C.

### Duas frentes

| Frente | Critério de aceitação | Onde fica | Objetivo |
|---|---|---|---|
| **Byte-matching** | os bytes compilados são idênticos aos do original (SHA-1 do build) | `src/` | reconstrução exata, verificável bit a bit |
| **Funcional** | o C executa igual ao original no teste diferencial (`difftest --abi`: registradores visíveis ao chamador, RAM inteira e chamadas ao SDK, 200 estados aleatórios) | `equiv/` | o jogo inteiro em C legível e funcionando, base para um port nativo |

As duas avançam em paralelo, cada uma com seu ciclo automático (`tools/auto_loop.sh`
e `tools/functional_loop.sh`). Uma função sai de `equiv/` quando passa a casar byte a
byte. O percentual **Funcional** acima soma as duas. A frente funcional segue a mesma
ideia de projetos como Road Rash: Jailbreak (xport) e CTR Native: primeiro todo o
jogo em C com comportamento verificado; o byte-matching continua como progresso
próprio.

---

## Planejamento por etapas

| # | Etapa | Entregável | Estado |
|---|---|---|---|
| 0 | **Análise do disco** | extração ISO9660/XA, mapa de arquivos, identificação dos executáveis e overlays | ✅ |
| 1 | **Toolchain reprodutível** | imagem Docker com GCC 2.7.2 (PsyQ), maspsx, binutils MIPS, splat, spimdisasm, m2c, Unicorn | ✅ |
| 2 | **Split + rebuild byte-idêntico** | `config/*.yaml`, Makefile, 5 binários reconstruídos com SHA-1 idêntico | ✅ |
| 3 | **Identificação do SDK** | ~520 funções PsyQ nomeadas por assinatura (`config/symbols.*.psyq.txt`) | ✅ |
| 4 | **Identificação do compilador** | GCC 2.7.2 (maioria) e GCC 2.8.1 (parte do código e bibliotecas), `-O2 -G8`, ASPSX 2.79 — confirmados por byte-matching (ver `docs/NOTES.md`) | ✅ |
| 5 | **Ferramentas de matching e testes diferenciais** | `tools/match.py`, `tools/difftest.py`, suíte `pytest` | ✅ |
| 6 | **Decompilação do executável principal** (`YUUGI.EXE`) | motor, gráficos, CD, som, memória, menus | 🚧 |
| 7 | **Decompilação do loader** (`SLPM_860.96`) | boot, vídeos de abertura | ⏳ |
| 8 | **Decompilação dos overlays** (`CHESS`, `RAISE`, `ETC`) | batalha no tabuleiro, criação de monstros, telas diversas | ⏳ |
| 9 | **Separação em unidades de tradução** | fronteiras deduzidas de conflitos de `$gp`, ilhas de compilador e objetos do SDK; compilador por arquivo (`config/compilers.txt`) | 🚧 |
| 10 | **Dados e nomes** | tipos, structs, nomes de variáveis/funções, `.data`/`.rodata` migrados para C | ⏳ |
| 11 | **Formatos de arquivo** | documentação/ferramentas para `.CVT`, `SOUND.DAT`, `*.STR`, `*.XA` | ⏳ |

Legenda: ✅ concluída · 🚧 em andamento · ⏳ planejada

---

## Arquitetura do jogo

O disco (`MODE2/2352`, um único track de dados) contém:

| Arquivo | Endereço de carga | Tamanho | Papel |
|---|---|---|---|
| `SLPM_860.96` | `0x80110000` | 0x23800 | executável de boot (definido em `SYSTEM.CNF`): inicialização, vídeos de logo, carrega o principal |
| `YUUGI.EXE` | `0x80010000` | 0x69000 (+ BSS até `0x80096690`) | executável principal: laço do jogo, gráficos, CD, som, cartão de memória |
| `MASTER/PSF/CHESS.BIN` | `0x80097800` | 0x81F80 | overlay do modo de batalha no tabuleiro |
| `MASTER/PSF/RAISE.BIN` | `0x80097800` | 0x6EAD4 | overlay do modo de criação/treino de monstros |
| `MASTER/PSF/ETC.BIN` | `0x80097800` | 0x1C55C | overlay de telas diversas |
| `MASTER/PSF/*.BIN` (demais) | — | — | dados carregados pelo jogo (tabelas, textos, parâmetros) |
| `MASTER/CDROM/*.CVT` | — | — | gráficos/modelos no formato do conversor interno da Konami ("PSXCVT") |
| `SOUND/SOUND.DAT`, `SOUND/MASTER.XA` | — | — | bancos de som e música/voz em XA-ADPCM |
| `STR/*.STR`, `LOGO15XA.STR` | — | — | vídeos MDEC |

Os três overlays de código são carregados no mesmo endereço (`0x80097800`,
logo após o BSS do executável principal) e se alternam conforme o modo de jogo.
Endereços confirmados pelo código de inicialização (`crt0`) e pela análise dos
alvos de `jal` dentro de cada overlay.

**Compiladores:** PsyQ `ccpsx` → GCC **2.7.2** na maior parte do código do jogo e
GCC **2.8.1** em parte dele e nas bibliotecas, ambos com `-O2 -G8`, montados pelo
ASPSX 2.79 (emulado pelo [maspsx](https://github.com/mkst/maspsx) com
`--dont-force-G0 -G8`, que reproduz a escolha de `$gp` por arquivo).
**SDK:** bibliotecas PsyQ ~4.0–4.3 (libgpu/libgte/libgs/libcd/libspu/libsnd/
libpress/libapi/libc/libetc).

---

## Estrutura do repositório

```
ygo-mcbb-decomp/
├── config/                 # configurações do splat e tabelas de símbolos
│   ├── <alvo>.yaml         #   segmentação de cada binário (yuugi, slpm, chess, raise, etc)
│   ├── symbols.<alvo>.txt  #   símbolos nomeados manualmente
│   ├── symbols.<alvo>.psyq.txt  # funções do SDK identificadas por assinatura
│   └── extra_syms.<alvo>.ld     # símbolos absolutos (fim do BSS, base dos overlays)
├── docker/Dockerfile       # toolchain completa e reprodutível
├── include/                # headers: tipos, protótipos do SDK e do jogo, macros
├── src/<alvo>/*.c          # código C (funções decompiladas + INCLUDE_ASM das restantes)
├── tools/                  # scripts do projeto (ver abaixo)
├── tests/                  # suíte pytest: rebuild por SHA-1 e testes diferenciais
├── Makefile
└── run.sh                  # executa comandos dentro do container
```

Gerados localmente e **não versionados**: `disc/` (arquivos extraídos do seu
disco), `asm/` (assembly desmontado), `build/`.

### Ferramentas (`tools/`)

| Script | Função |
|---|---|
| `extract_disc.py` | extrai o sistema de arquivos ISO9660 (inclusive XA/STR em setores crus) e grava `disc_manifest.json` |
| `postsplit.py` | pós-processa o assembly do splat: rótulos de jump table globais, strings Shift-JIS como bytes, dados embutidos no texto como `.word` |
| `psyq_match.py` | identifica funções do SDK PsyQ por assinatura (todas as versões; vence a maior assinatura) |
| `match.py` | compila um trecho C e compara instrução a instrução com o original (diff lado a lado) |
| `difftest.py` | teste diferencial em emulação MIPS (Unicorn): original × C, com log de chamadas ao SDK |
| `progress.py` | calcula o progresso e atualiza este README (`--readme`) |
| `autodecomp.py` | decompilação automática: rascunho m2c → C compilável → byte-matching com GCC 2.7.2 e 2.8.1; `--apply` insere em `src/` evitando conflitos |
| `compiler_map.py` | classifica funções por estilo de compilador (epílogo 2.7.2 × 2.8.x) |
| `tu_boundaries.py` / `plan_tus.py` | deduzem e aplicam a separação em unidades de tradução |
| `split_tu.py` | separa um `.c` numa fronteira de função (atualiza YAML, caminhos e compilador) |
| `permute.py` | prepara e roda o decomp-permuter em funções quase casadas |
| `assign_compilers.py` | define o compilador de cada arquivo pela evidência de byte-matching e cria fronteiras de TU onde o compilador troca (`--split`) |
| `full_asm.py` | gera o assembly de todas as funções (inclusive as já em C) em `.cache/fullasm`, para análise |
| `handwritten.py` | detecta funções que eram assembly no original (COP0/GTE, código que continua na próxima função, leitura de temporário antes da escrita) → `config/handwritten.<alvo>.txt` |
| `twins.py` | casamentos "de graça": funções gêmeas (mesmo código com relocações mascaradas, em qualquer binário) recebem o C de uma irmã já casada, com os nomes trocados |
| `check.py` | compara os binários gerados com os originais (SHA-1 + primeiras diferenças) |
| `find_drift.py` | encontra o primeiro símbolo cujo endereço linkado divergiu (depuração de layout) |
| `find_islands.py`, `sections.py`, `disasm.py` | análise de fronteiras de seção, ilhas de dados e desmontagem rápida |

---

## Como compilar

Pré-requisitos: **Docker** e **Python 3** (no host, apenas para extrair o disco).

```bash
# 1. Coloque o dump do SEU disco (BIN/CUE) em qualquer pasta e extraia:
python tools/extract_disc.py "caminho/para/Yu-Gi-Oh! Monster Capsule Breed & Battle (Japan).bin" disc

# 2. Construa a imagem da toolchain (uma vez) e divida os binários:
docker build -t ygo-decomp-tc docker
./run.sh make split

# 3. Compile e verifique:
./run.sh make -j8          # gera build/*.exe e compara SHA-1 com os originais
./run.sh make test         # rebuild + testes diferenciais (pytest)
./run.sh make progress     # mostra o progresso
```

Saída esperada do `make`:

```
[OK]    build/yuugi.exe  sha1=ded3d5e61d5906077d0171396fea4ca3959ecf23
[OK]    build/slpm.exe   sha1=a4d3c7f4750acc79a29f2f941449f73950497e5e
[OK]    build/chess.exe  sha1=a6a63cc46a633968573c23b5681bb178070dba25
[OK]    build/raise.exe  sha1=92ccafd66ecb0030f9bfff109c855c09dbb4cf8b
[OK]    build/etc.exe    sha1=f14bbffbbee2ec2013b481a2f814997b3984ce74
```

Os SHA-1 acima são os dos arquivos do disco `SLPM-86096`; se o seu dump for de
outra revisão, o `make check` vai acusar a diferença.

---

## Fluxo de trabalho para decompilar uma função

1. Escolha uma função em `src/<alvo>/*.c` (linha `INCLUDE_ASM(..., func_XXXXXXXX)`)
   e leia o assembly em `asm/<alvo>/nonmatchings/.../func_XXXXXXXX.s`.
2. Gere um rascunho (opcional): `./run.sh python3 /opt/m2c/m2c.py asm/.../func_XXXXXXXX.s`.
3. Escreva o C num arquivo de teste e itere até casar:
   ```bash
   ./run.sh python3 tools/match.py yuugi func_XXXXXXXX rascunho.c
   ```
   O diff mostra lado a lado original × compilado; `[MATCH]` = bytes idênticos.
4. Substitua o `INCLUDE_ASM` pelo corpo em C, adicione protótipos em
   `include/yuugi.h` (ou `include/psyq.h`) e rode `./run.sh make` — o SHA-1
   precisa continuar `[OK]`.
5. Rode o teste diferencial e a suíte:
   ```bash
   ./run.sh python3 tools/difftest.py yuugi func_XXXXXXXX
   ./run.sh make test
   ```
6. Atualize o progresso: `./run.sh python3 tools/progress.py --readme`.

### Prioridade atual: completar a frente funcional

Em 2026-10-27, a pedido do usuário, a prioridade passou a ser **C equivalente
validado em `equiv/`**; os ajustes de alocação de registradores para byte-exact
ficam para depois. Um rascunho que apenas compila não aumenta a cobertura.

```sh
./run.sh python3 tools/functional_batch.py chess yuugi slpm raise --jobs 4 --draft-jobs 2
```

O lote usa variantes m2c e Ghidra, recupera larguras de globais pelas instruções
MIPS e restaura posições de argumentos omitidos. Exige **200 execuções completas
idênticas por semente** (sementes 1 e 2 por padrão), comparando retorno utilizado,
RAM e chamadas, antes de publicar o C
atomicamente em `equiv/`. Tentativas que excedem o orçamento continuam pendentes;
`--seconds`, `--budget` e `--resume` permitem distribuir o trabalho. O cache de
resultados está em `.cache/functional_batch/`; depois de mudar a geração de C,
omitir `--resume` para não reutilizar falhas antigas.
`--seeds 1,2` explicita a seleção: a falha na segunda semente impede a aceitação
mesmo que a primeira tenha completado todas as 200 execuções.

A geração tem uma fila própria: dois workers preparam candidatos enquanto
quatro validadores executam os anteriores. `--prefetch` limita o total de funções
em andamento; a fila é reabastecida conforme os testes terminam. Não aguardar o
fim de uma validação para gerar o próximo candidato. O teste de concorrência usa
eventos para verificar que a geração avança com uma validação ainda bloqueada.

O contexto m2c distingue um array no endereço global de um ponteiro armazenado
nesse endereço. Os acessos MIPS também recuperam larguras após somar um índice a
uma base conhecida. O GCC PSX usado aqui trata `char` simples como unsigned;
o pseudo-C nem sempre explicita o sinal correto. O gerador testa variantes `s8`
e `u8`, confrontadas com `lb`/`lbu` e as execuções originais, em vez de aplicar
uma conversão global como certeza. Essas regras produzem candidatos;
a compilação e os testes diferenciais ainda decidem se cada função é aceita.

Há também uma candidata separada para aritmética de endereços em bytes.
Inferir `u32` de um load não prova que `&objeto + deslocamento` deva multiplicar
o deslocamento por quatro. A variante converte somente esse uso em soma a um
`u8 *`, preservando loads escalares, índices tipados e literais. A candidata
original continua na fila, pois há objetos que usam deslocamentos tipados.
Isso resolveu funções como `func_800AA15C` e `func_800D5DAC`; diferenças em outros
caminhos continuam exigindo correção e nova validação.

Para analisar chamadas entre o executável e um overlay no mesmo programa:

```sh
./run.sh python3 tools/ghidra_merged.py chess
```

O gerador exige os rebuilds idênticos de YUUGI e do overlay. Importar o ELF de
`.cache/ghidra-merged/chess/` em uma pasta separada do projeto Ghidra, deixando o
loader detectar o formato ELF. O arquivo contém bytes privados do dump e deve
permanecer no cache ignorado. Prototipar helpers nesse programa separado evita
alterar a análise usada pela outra IA. `--ghidra-cache caminho` permite testar
uma nova exportação de C sem substituir o cache anterior.

No modo `--abi`, os 16 bytes de home area dos argumentos em registradores
pertencem ao callee e podem conter spills diferentes. O comparador normaliza
somente esse intervalo e a pilha morta já existente; o quinto argumento em
`sp+16` e a memória externa continuam comparados. Controles negativos escrevem
fora do intervalo e na heap e exigem reprovação. O modo estrito permanece igual.

A rodada registrada em
[functional-2026-10-27-next.json](docs/validation/functional-2026-10-27-next.json)
integra 31 funções, cada uma com duas sementes de 200 execuções completas.
Inclui os shifts de 64 bits do SDK com ambos os sentidos, contagens negativas e
fronteiras 31/32 e 63/64. Tentativas inconclusivas ou não suportadas estão nos
registros e não contam entre as 200; isso continua sendo validação amostrada.

As traduções manuais seguintes estão em
[functional-2026-10-27-manual.json](docs/validation/functional-2026-10-27-manual.json).
`ClearOTag` e sua cópia no loader preservam o callback de debug, os links de 24
bits e o último ponteiro retornado. `func_8009AC88` passa os endereços dos textos,
sem confundi-los com a primeira palavra armazenada ali, e sorteia os estados
principais e secundários para exercitar os switches.

Os resultados da fila seguinte estão em
[functional-2026-10-27-pipeline.json](docs/validation/functional-2026-10-27-pipeline.json),
com o SHA-256 do fonte e as duas sementes. Quando há apenas limpeza de espaços,
o manifesto também registra que o blob ligado antes e depois é idêntico.
Em `func_800CBA14`, o produto tem 32 bits: armazenar seus 16 bits baixos não
autoriza truncar a variável antes de comparar o overflow. Em `func_800C1F84`, o
assembly usa a coordenada recebida em 32 bits; uma assinatura inferida com `s8`
altera entradas que o original não truncava. Conferir as instruções e os efeitos
dos helpers é necessário mesmo em funções pequenas.

Para funções que leem o estado de batalha `0x8008EE54`, o lote também sorteia
estados pequenos e valores de fronteira. A RAM aleatória sozinha quase nunca
alcança os casos de um switch de 16 bits. Candidatos aprovados apenas nesse
caminho inicial foram separados antes da integração, sem aumentar o progresso.
Não ignorar diferenças em ponteiros para buffers locais: verificar o conteúdo e
os efeitos dos callees antes de atribuir a rejeição apenas ao layout da pilha.

Quando um helper preenche ou consome esse buffer, o difftest aceita a diretiva
`/* real-callee: func_800FE188 */` no C (ou `--real-callee` na linha de comando).
Ela executa o helper original nos dois lados, com suas leituras e escritas reais.
As comparações de retorno, RAM e demais chamadas continuam ativas. Isso resolveu
`func_800E21D8`, `func_800EA3E4` e `func_800E5078`, cada uma com dois conjuntos de
200 execuções completas e estados de batalha explícitos. Um controle negativo
altera o vetor produzido pelo helper e exige que a validação detecte a diferença.

Para acelerar lotes grandes, usar uma cópia de trabalho no filesystem Linux do
container e manter os binários originais em acesso local de leitura. Isso evita
reler milhares de arquivos pelo bind mount do Windows. Promover somente C
aprovado, conferir alterações concorrentes e atualizar o README pelo snapshot
do índice a cada commit. O cálculo desse snapshot agora lê os blobs em uma única
chamada Git, mantendo os hashes capturados mesmo se a outra IA alterar o índice.

<!-- BYTE_MATCHING_STRATEGY:START -->
### Estratégia para obter byte-exact — validada no CHESS

**Histórico das rodadas byte-exact; a prioridade atual é a frente funcional acima.**
Na primeira rodada de 2026-10-27, esta estratégia integrou **16 funções / 912 bytes**
do CHESS: dez traduções novas e seis candidatos recuperados do cache. O código do
jogo neste overlay passou de **61 para 77 funções** e de **0,82% para 1,04%** em C
byte-matching. Os cinco binários continuaram idênticos e os **22 testes da rodada
passaram, sem skips**. Veja a lista e a auditoria em
[docs/AUDIT_CODEX_2026-10-27.md](docs/AUDIT_CODEX_2026-10-27.md).

A segunda rodada integrou mais **22 funções / 2.792 bytes**: o CHESS chegou a
**99 / 867 funções do jogo** e **7.180 / 421.956 bytes (1,70%)** em C byte-exact.
As duas jump tables migradas também são geradas pelo compilador. O rebuild dos
cinco binários permanece idêntico; os resultados e limites dos testes estão em
[docs/wip/chess/2026-10-27-round2.md](docs/wip/chess/2026-10-27-round2.md).

A passagem seguinte recuperou `func_800C9484`: manter o primeiro argumento
sem uso restaurou o segundo em `$a1`; a expressão com resto e divisão assinados
casou com GCC 2.8.1. O CHESS chegou a **100 / 867 funções** e **1,72% dos bytes**
em C byte-exact. Antes de copiar as correções de sinal do pseudo-C, testar
também os operadores C que as originam. Detalhes em
[docs/wip/chess/2026-10-27-round3.md](docs/wip/chess/2026-10-27-round3.md).

O Ghidra também pode ser consultado ao vivo por `python tools/ghidra.py status`,
`decompile chess <função>` e `xrefs chess <endereço>`. A API local do GhidraMCP
fica em `127.0.0.1:8089`; é necessário abrir o projeto no Ghidra. O pipeline já
consulta os rascunhos em `.cache/ghidra/c/`, mas esse cache não substitui a análise
de tipos e referências. Conferir sempre o assembly: cargas não alinhadas de
uma cópia de struct podem aparecer como operações de bits e locais fragmentados
no pseudo-C. Alterações de protótipos no projeto compartilhado devem ser
coordenadas com a outra IA; consultas de leitura permitem investigar sem isso.

#### 1. Procurar casamentos bloqueados antes de repetir o pipeline

Cruzar os `INCLUDE_ASM` ainda presentes em `src/chess/` com os candidatos de
`.cache/auto/chess/<função>.c` e seus arquivos `.gcc`. Um candidato salvo pode
estar correto e ainda não ter sido integrado por conflito de compilador, `$gp`,
headers ou `.rodata`. Revalidar com `tools/match.py`; o cache não é prova atual.

Nesta rodada, `func_800AED34`, `func_800DCC28` e `func_800F5228` casaram com GCC
2.7.2; `func_800B3878`, `func_800C942C` e `func_800FE958` casaram com GCC 2.8.1.
Esses seis candidatos já existiam. O avanço foi revalidar e resolver sua integração.

#### 2. Traduzir famílias pequenas a partir do assembly

Começar por wrappers, acessos a campos e funções curtas; comparar funções
vizinhas com a mesma sequência de instruções. Identificar quais argumentos são
preservados ou movidos, o símbolo de dados, a constante, o retorno e o delay slot.
Usar símbolos do projeto e tipos com sinal/largura confirmados no assembly.

Exemplo que casou com GCC 2.7.2:

```c
void func_800A0238(s32 arg0, s32 arg1) {
    extern u8 D_80100D58[];
    func_8009FF58(arg0, D_80100D58, 0x18, arg1);
}
```

O original move `a1` para `a3`, coloca o endereço em `a1`, chama
`func_8009FF58` e carrega `a2` com a constante no delay slot. O mesmo molde resolveu
as dez funções de `func_800A0238` até `func_800A03C4`, variando símbolo e constante.
Cada função foi comparada separadamente; semelhança de forma não substitui o teste.

#### 3. Escolher o compilador por evidência e preservar o contexto do arquivo

Tentar os perfis já confirmados, GCC 2.7.2 e 2.8.1, com as opções do projeto.
Comparar prólogo/epílogo, registradores, extensões, ordem e deslocamentos antes de
gastar tempo em permutações. O compilador correto de uma função pode ser diferente
do compilador do arquivo C em que ela está agrupada atualmente.

Se uma função só casa com GCC 2.8.1, isolá-la em uma unidade de tradução e restaurar
GCC 2.7.2 na função seguinte, quando a evidência exigir isso. Atualizar
`config/chess.yaml` e `config/compilers.txt`. O modelo de separação é:

```sh
./run.sh python3 tools/split_tu.py chess ARQUIVO TRECHO_281 PRIMEIRA_FUNCAO --gcc 2.8.1-psx
./run.sh python3 tools/split_tu.py chess TRECHO_281 RESTANTE PROXIMA_FUNCAO --gcc 2.7.2-psx
```

Substituir os nomes em maiúsculas pelos do caso analisado. Preservar os headers e
as declarações necessários em cada trecho novo: um `#include "ghidra.h"` situado
no meio do arquivo original pode ficar para trás durante o split. Nesta rodada,
as três funções GCC 2.8.1 foram isoladas entre fronteiras exatas, sem deslocar código.
Depois da mudança no YAML, o `make` regenera o split e o linker script do CHESS.

#### 4. Separar diferença de código de problema de integração

- Se o C chama a função certa mas o assembly difere, revisar tipos, sinal,
  avaliação de expressões, temporários e compilador antes de usar o permuter.
- Se o comparador aprova mas o build falha, examinar headers, contexto da unidade
  de tradução, `$gp`, relocações, alinhamento e `.rodata` antes de descartar o C.
- `func_800C22A0` e `func_800C2324` foram integradas após parear o intervalo
  `[0xF94, 0xFE0)` com `.rodata, chess_800C22A0` no YAML. O linker usa os 76 bytes
  de tabelas do objeto C na posição original. O Makefile redescobre os objetos
  depois do split para compilar também os arquivos de dados recém-gerados.
- `func_800A88C4` e `func_800C9534` foram integradas após corrigir a divisão.
  `tools/psx_as.py` seleciona a expansão sem checks do próprio maspsx por função,
  conforme `config/rawdiv.chess.txt`, preservando suas regras de nops. Build,
  comparador e permuter usam o mesmo perfil; as demais funções mantêm seus checks.
- Preservar os parâmetros ausentes dos rascunhos: `arg1` continua sendo `a1`.
  A heurística `arggaps` tenta acrescentar os slots não usados. Foi aceita após
  elevar a bancada de 18 para 21 pendentes casadas, com 42/42 controles intactos.

#### 5. Aceitar somente depois de integrar e reconstruir

`tools/match.py` **mascara campos de relocação**. Um `[MATCH]` isolado ainda pode
esconder símbolo ou endereço incorreto; a prova final é o rebuild completo idêntico.
Exemplos de comparação dos fontes já integrados:

```sh
./run.sh python3 tools/match.py chess func_800A0238 src/chess/chess.c --gcc 2.7.2-psx -q
./run.sh python3 tools/match.py chess func_800C942C src/chess/chess_800C4ECC__800C942C.c --gcc 2.8.1-psx -q
./run.sh make -j2
./run.sh python3 -m pytest -q tests/test_difftest.py -k 'chess and (func_800A0238 or func_800C942C)'
./run.sh python3 -m pytest -q tests/test_rebuild.py 'tests/test_overlays.py::test_overlay_calls_resolve[chess]'
```

Exigir os cinco SHA-1 corretos e testar todas as funções novas, não apenas os dois
exemplos acima. Se um teste for inconclusivo ou pulado, registrar essa limitação.
Promover o C para `src/`, remover sua cópia de `equiv/` e atualizar o progresso
somente após validar a integração. O relatório da rodada contém a seleção completa
dos 16 testes diferenciais, que passaram sem skips.

Com duas IAs trabalhando, usar checkouts/worktrees separados para experimentar,
conferir o diff e os arquivos atuais antes de aplicar. Evitar o rollback global de
`tools/auto_loop.sh` na pasta compartilhada: ele restaura `src/` e `config/` e limpa
arquivos novos em `src/`. Uma heurística automática nova continua sujeita à bancada
fixa e aos controles de regressão de [docs/PROCESS.md](docs/PROCESS.md).

#### 6. Manter os percentuais coerentes em cada commit

Antes de **todo commit**, preparar somente as alterações aceitas, recalcular o
progresso do índice e incluir o README no mesmo commit:

```sh
git add -- src/chess config/chess.yaml config/compilers.txt equiv/chess
python tools/progress.py --readme --staged
git add README.md
python tools/progress.py --check --staged
git commit
```

`--staged` mede os conteúdos exatos preparados no índice Git, incluindo arquivos
novos já adicionados. Rascunhos não versionados e edições ainda não preparadas não
entram nessa medição. `--check --staged` falha se o bloco de progresso do README
não corresponde ao mesmo estado. Em trabalho paralelo, repetir o cálculo se o
índice mudar antes do commit. O mapa de build deve ser o da integração validada.
Não copiar percentuais de logs antigos ou da árvore temporária de outra rodada.
Os ciclos automáticos também recalculam e verificam o README depois de preparar
os fontes e antes de executar o commit.

<!-- BYTE_MATCHING_STRATEGY:END -->

### Como o teste diferencial funciona

Dois emuladores MIPS R3000 recebem o **mesmo estado inicial aleatório** (RAM,
argumentos `a0–a3`, registradores salvos). No emulador A roda a função original;
no B, o nosso C compilado é ligado em área livre (`0x80180000`) e a entrada da
função original recebe um salto para ele — assim todos os outros endereços
continuam iguais. Funções do jogo chamadas por ela executam de verdade; funções
do SDK (que dependem de hardware) e a BIOS viram *stubs* que **registram cada
chamada com seus argumentos**. Ao final, comparam-se registradores, a RAM
inteira (exceto pilha morta) e o log de chamadas. Tentativas em que os dois
lados travam igualmente são **inconclusivas** e nunca contam como aprovação. A
suíte inclui um teste negativo que garante que o harness reprova uma versão
propositalmente errada.

---

## Detalhes técnicos e armadilhas resolvidas

- **Ordem das funções com GCC 2.7.2:** o compilador emite blocos `asm` de topo
  imediatamente, mas pode adiar corpos de funções C, o que embaralharia o
  `.text`. O `INCLUDE_ASM` embrulha o assembly numa função falsa
  (`__maspsx_include_asm_hack_*`) que o maspsx remove, preservando a ordem.
- **Strings Shift-JIS:** o disassembler mostra o texto decodificado, mas o GAS
  gravaria UTF-8 (mais bytes). O `postsplit.py` reescreve strings não-ASCII como
  `.byte` em Shift-JIS, mantendo o texto em comentário.
- **Jump tables entre arquivos:** rótulos `.L…` são locais no GAS; o
  `postsplit.py` os renomeia para `L…` e a macro `jlabel` os exporta.
- **Dados no meio do código:** trechos que o disassembler decodificou como
  instruções inexistentes no R3000 são reemitidos como `.word`.
- **Bibliotecas duplicadas em overlays:** o overlay `RAISE` tem cópia própria de
  `SpuInit`; nomes que colidem com o executável principal recebem prefixo
  (`raise_SpuInit`) para não sequestrar as chamadas ao principal.
- **Endereços no linker do difftest:** o `ld` de 64 bits estende o sinal de
  endereços ELF32-MIPS; o script do candidato usa `0xFFFFFFFF80180000`.

---

## Aspectos legais

Este projeto é uma obra independente de engenharia reversa para fins de
preservação, estudo e interoperabilidade. Ele **não distribui** código
executável, assembly, gráficos, sons, textos ou qualquer outro conteúdo do jogo:
todo esse material é extraído localmente da cópia de cada usuário e excluído do
git. Yu-Gi-Oh! é marca de seus respectivos detentores; este projeto não tem
vínculo com Konami, Kazuki Takahashi ou Sony Interactive Entertainment.

## Créditos das ferramentas

[splat](https://github.com/ethteck/splat) · [spimdisasm](https://github.com/Decompollaborate/spimdisasm) ·
[maspsx](https://github.com/mkst/maspsx) · [decompals/old-gcc](https://github.com/decompals/old-gcc) ·
[m2c](https://github.com/matt-kempster/m2c) · [asm-differ](https://github.com/simonlindholm/asm-differ) ·
[decomp-permuter](https://github.com/simonlindholm/decomp-permuter) ·
[psx_psyq_signatures](https://github.com/lab313ru/psx_psyq_signatures) · [Unicorn](https://www.unicorn-engine.org/)

As técnicas de gêmeos e de detecção de assembly escrito à mão foram inspiradas
no [decomp.wtf](https://github.com/i12bp8/decomp.wtf) e reimplementadas do zero
sobre as ferramentas deste projeto.
