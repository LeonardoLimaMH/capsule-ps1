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
**Código do jogo decompilado em C (byte-matching):** `█░░░░░░░░░░░░░░░░░░░` **3.24%**  
**Total incluindo SDK PsyQ:** `█░░░░░░░░░░░░░░░░░░░` **3.80%**  
**Cobertura (C + funções que já eram assembly no original):** `█░░░░░░░░░░░░░░░░░░░` **4.16%**  
**Funcional (C byte-idêntico + C equivalente validado por teste diferencial, `equiv/`; sobre o código convertível em C):** `████████████████████` **99.44%**  
**Rebuild byte-idêntico dos 5 binários:** ✅ (verificado por SHA-1 em `make check`)

| Binário | Função | Código do jogo (C) | Funções | SDK PsyQ (C) | Total |
|---|---|---|---|---|---|
| `YUUGI.EXE` | executável principal | 4.81% (9,916 / 206,368 B) | 186 / 732 | 11.41% (114 / 303 fn) | **6.12%** |
| `SLPM_860.96` | loader / boot | 5.22% (1,084 / 20,756 B) | 29 / 119 | 8.13% (79 / 215 fn) | **7.19%** |
| `CHESS.BIN` | overlay de batalha (tabuleiro) | 1.76% (7,416 / 421,956 B) | 101 / 867 | 100.00% (2 / 2 fn) | **1.77%** |
| `RAISE.BIN` | overlay de criação de monstros | 4.55% (14,864 / 326,576 B) | 280 / 940 | 100.00% (2 / 2 fn) | **4.57%** |
| `ETC.BIN` | overlay de menus/diversos | 1.38% (1,232 / 88,992 B) | 14 / 189 | 0.00% (0 / 0 fn) | **1.38%** |
| **Total** | | **3.24%** (34,512 / 1,064,648 B) | 610 / 2847 | 10.03% (197 / 522 fn) | **3.80%** |

**Equivalentes e pendências por binário (jogo + SDK):**

| Binário | C equivalente (`equiv/`) | Funcional (bytes convertíveis) | Funções em C | Assembly original | Faltam C |
|---|---|---|---|---|---|
| `YUUGI.EXE` | 91.54% (663 fn) | `██████████` **98.56%** | 963 / 970 (99.28%) | 65 | **7** |
| `SLPM_860.96` | 85.54% (191 fn) | `██████████` **95.49%** | 299 / 302 (99.01%) | 32 | **3** |
| `CHESS.BIN` | 98.23% (766 fn) | `██████████` **100.00%** | 869 / 869 (100.00%) | 0 | **0** |
| `RAISE.BIN` | 95.43% (660 fn) | `██████████` **100.00%** | 942 / 942 (100.00%) | 0 | **0** |
| `ETC.BIN` | 98.62% (175 fn) | `██████████` **100.00%** | 189 / 189 (100.00%) | 0 | **0** |
| **Total** | 95.28% (2,455 fn) | `██████████` **99.44%** | 3,262 / 3,272 (99.69%) | 97 | **10** |

Equivalente conta somente `equiv/`; funcional soma byte-exact e equivalente, sem duplicar funções.
As barras medem bytes de código convertível: ficam de fora as rotinas que já eram assembly no
original e não têm equivalente em C (trampolins e chamadas da BIOS, `syscall`/`break`, COP0,
troca de contexto), listadas em `config/handwritten.*.txt` e contadas na coluna própria.
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
| O C integrado em `src/` gera exatamente os mesmos bytes | `tools/match.py` (por função) + SHA-1 do build | ✅ no C da frente byte-matching |
| O C de `equiv/` reproduz as execuções testadas | `tools/difftest.py`, com os perfis e helpers de cada validação | Equivalência amostrada; não é prova para todas as entradas |
| Todo o código está em C legível | percentual acima | 🚧 em andamento |

Como o build é sempre byte-idêntico, o jogo gerado a partir deste repositório é
funcionalmente 100% igual ao original em qualquer estágio; o trabalho restante é
converter o assembly em C.

O build padrão usa `src/` e o assembly restante. Ele não integra automaticamente
as versões de `equiv/`: seu SHA-1 confirma a reconstrução do original, enquanto
os testes diferenciais avaliam essas candidatas separadamente. As macros GTE em
`include/gte_inline.h` ainda emitem instruções MIPS/COP2 e precisam de outro
backend para um port nativo. Veja a [auditoria de 29/10/2026](docs/reviews/2026-10-29-functional-audit.md)
para o estado verificado, as pendências e a análise de `ref/`.

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

Na frente funcional, o m2c recebe `--target mipsel-gcc-c`, correspondente à ordem
de bytes do PS1. Interpretar um par `lwl/lwr` little-endian como MIPS big-endian
produzia erros de pares incompletos e offsets incorretos. As cópias completas de
32 bits usam acessos packed nos dois lados; testes executam todas as combinações
de alinhamento da origem e destino com GCC 2.7.2 e 2.8.1, verificando também os
bytes vizinhos. Instruções parciais não resolvidas continuam reprovadas.
`--m2c-target mips-gcc-c` permite uma rodada de comparação. Essa seleção é da
frente funcional; o pipeline padrão de busca byte-exact mantém sua configuração.

O lote também fornece ao m2c assinaturas mínimas de helpers leaf, identificados
no assembly do overlay correto (ou no executável principal). Uma chamada pode
reutilizar `a0..a2` sem os reatribuir imediatamente antes do `jal`; sem contexto,
o m2c chegava a substituir esses três argumentos por um único zero. Essa correção
resolveu `func_8009BE30` nas duas sementes. Wrappers que chamam outras funções,
saltos não resolvidos, syscalls, possíveis retornos em `v0/v1` e parâmetros de
pilha ficam fora dessa inferência.
Usar `--no-callee-context` para comparar o resultado sem essa ajuda.

O difftest usa um único hook com despacho por endereço exato para os stubs,
preservando callbacks duplicados, delay slots, registradores, RAM e conteúdo
dos argumentos string. Uma comparação de dez execuções com 1.903 stubs manteve
todos esses estados idênticos e reduziu o tempo de emulação em cerca de 4,7×
naquela medição. Os testes também comparam o modo anterior e exigem que versões
erradas continuem sendo reprovadas; o critério de aceitação permanece o mesmo.

`func_800DD428` tem um perfil de scheduler inicializado e executa os helpers
originais `func_80015B3C`, `func_800136C8` e `func_80013C14`. Assim, o teste compara
as escritas no objeto realmente alocado, incluindo cópias de buffers desalinhados.
O controle negativo troca as coordenadas copiadas e precisa falhar pela RAM.

A opção `--stack-frames` acrescenta candidatos que recuperam os offsets dos
locais do Ghidra em um buffer alinhado. Por exemplo, três `short` consecutivos
passados como vetor precisam continuar contíguos; variáveis C independentes não
garantem isso. Views `volatile` preservam os acessos sobrepostos. Tipos e tamanhos
não resolvidos continuam pendentes. Os testes compilam com GCC 2.7.2 e 2.8.1 e
verificam os seis bytes do vetor e uma escrita por uma view sobreposta.
O gerador testa também um frame compacto, limitado ao intervalo efetivamente
ocupado pelos locais, além do frame completo. Isso reduz espaço de pilha sem
alterar os offsets entre views; ambas as formas são verificadas nos dois GCCs.

Em `func_800F3BB4`, o helper original copia quatro bytes de cada cor, embora o
chamador só inicialize RGB. O quarto byte continua observado na RAM do objeto.
O frame compacto com `/* compiler: 2.8.1-psx */` preservou esse comportamento nas
duas sementes, com atores e tarefas preparados. Um controle negativo aumenta o
frame em oito bytes sem alterar RGB e precisa falhar pelos bytes de padding.
Não descartar esses bytes para aprovar um candidato.

As declarações de `__floatsidf` e `__muldf3` preservam o retorno bruto de 64 bits
em `v0/v1`; declarar `s32` descartava a metade alta. Testes geram o C pelo mesmo
adaptador Ghidra, compilam com os dois GCCs e verificam argumentos e ambas as
metades do retorno em emulação.
Isso inclui também `__adddf3`, `__subdf3`, `__divdf3` e `__negdf2`; a seleção
dos helpers originais executados acompanha o grafo de `jal` do próprio dump.

`--ghidra-data arquivo.json` aceita metadados de data items no formato
`{"chess": [{"address": "8008f7ac", "type": "undefined2", "size": 2}]}`.
A variante preserva o tipo original em `&global`, mantendo a largura das
leituras escalares. Em `func_800F1280`, o ponteiro a um símbolo de dois bytes
precisava avançar em passos de dois, embora a leitura fosse de quatro bytes.
O cast para o load continua explícito. Testes compilados verificam ambas as
propriedades, incluindo a leitura dos bytes altos. Tipos não resolvidos ficam
fora dessa variante; os metadados são pistas, sujeitos ao teste diferencial.

Em `func_800F234C`, a recuperação da pilha foi combinada com a restauração de
argumentos do scheduler e a execução dos helpers originais de geometria, alocação
e ponto flutuante por software. A validação completou as duas sementes de 200
execuções. Essa função usa **contratos explícitos de buffers do SDK** para
`RotTransPers`, `SetRotMatrix` e `SetTransMatrix`: comparam coordenadas, matrizes,
aliases e escritas; endereços de buffers na pilha morta podem diferir. Heap e
memória global continuam comparadas. Um controle negativo altera uma coordenada
da animação e exige divergência na chamada de projeção.

Esses contratos, implementados em `tools/sdk_contracts.py`, produzem saídas
opacas determinísticas para exercitar o chamador; **não emulam a matemática da
GTE**. Portanto, a aprovação é equivalência amostrada sob esse modelo, sem
validar a projeção numérica no hardware. A seleção é por função, com
`/* callee-contract: nome */` ou `--callee-contract nome`, somente em `--abi`.
Os testes normais e o modo estrito preservam suas comparações anteriores.

Callbacks do scheduler têm um contexto adicional, selecionado explicitamente
por `/* task-callback */` ou `difftest --task-callback --abi --isolate`.
O teste exige referência em um construtor de tarefas e ausência de chamadas
diretas visíveis. Recupera o slot real: o primeiro callback do construtor fica
em `+0x10`, e o segundo em `+0x0c`. O wrapper `func_80020CE4` encaminha seu segundo
argumento para o slot `+0x10`. Os testes cobrem as duas posições do dispatcher.
Executa `func_80013A68` original com uma tarefa preparada,
desvia somente a função candidata e exige que ela seja alcançada nos dois lados.
Também compara a sequência de entradas: um scheduler que pula o callback não
aprova o C. O dispatcher sobrescreve o retorno temporário do callback; seus
registradores finais, a RAM viva e as chamadas continuam comparados. O modo
normal de validação permanece disponível para chamadas diretas.

Essa validação cobre o uso como callback registrado, sem afirmar equivalência
de um retorno indefinido quando a função é chamada isoladamente. O manifesto
registra esse contexto. Os controles usam o dispatcher do dump, mostram que uma
mudança apenas no retorno é descartada por ele e que escritas erradas continuam
observáveis. Mutações em `func_800B7988` e `func_800F7DE4` precisam divergir.
Na primeira, os argumentos omitidos de `func_800B3558` vêm dos campos `+0x5c`
e `+0x60` da tarefa. Na segunda, `AddPrim` precisa receber também o ponteiro da
primitiva. Corrigir esses protótipos no programa Ghidra separado evita perder
os argumentos na exportação seguinte.

`RotAverage4` tem um contrato explícito de quatro vetores com os mesmos seis
buffers de saída, ordem de leitura/escrita conferida no assembly e um retorno
opaco de 16 bits. Também não emula os cálculos da GTE.

A revalidação dos callbacks nos slots recuperados está em
[callback-slots-2026-10-27.json](docs/validation/callback-slots-2026-10-27.json),
com hashes dos fontes e das ferramentas e duas sementes de 200 execuções.
`PTR_DAT_...` representa um ponteiro armazenado na RAM: o adaptador gera o load
desse ponteiro, preservando o acesso posterior à tabela apontada. A flag de
`func_8009D2AC` usa `lbu` e compara `0xff`; compará-la a `-1` em C unsigned pula
o caminho ativo. Em `func_800EE0C8` e `func_800EE2D4`, o argumento montado com
shifts precisa da conversão final para `u8`, correspondente ao `andi 0xff`.
`func_800E4764` usa cópias packed de palavras nos offsets desalinhados do objeto.
Controles negativos removem essas correções e exigem divergência.

O contrato de `RotTransPers4` observa os quatro vetores e os seis argumentos de
pilha, grava os seis resultados na ordem do assembly e carrega o quarto vetor
somente depois das três primeiras escritas. Isso preserva também o caso em que
um resultado sobrepõe esse vetor. Testes verificam essa ordem, os bytes vizinhos,
o décimo argumento e o despacho do emulador sem depender de `--isolate`.

As rotinas de sprites `func_800AADE0` e `func_800ABD9C` usam um perfil com três
primitivas, buffers de textura e GPU válidos e animações com durações positivas.
Executam `func_80015D14` original: substituir esse helper por um retorno sempre
não zero prendia o teste no loop de atualização. O perfil varia flags, escala,
rotação e timer. Cada rotina passou nas duas sementes; controles negativos
alteram uma escrita de cor e precisam divergir na RAM. Casos inconclusivos ou
com GTE não suportada continuam fora das 200 execuções aceitas por semente.

Em `func_800B0F48`, o perfil prepara quatro mapas de 13×13 e coordenadas de dois
atores no tabuleiro. A tabela de mapas usa offsets em bytes; multiplicá-los pelo
tamanho de um `int` desviava a leitura para outra região. A correção passou nas
duas sementes e não usa contratos gráficos.

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
Esse perfil também é aplicado aos rascunhos fornecidos diretamente para
`try_function`, quando ainda não o declaram; um teste impede essa omissão.
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
inteira (exceto pilha morta), o log de chamadas e os acessos ao barramento de
dispositivos do PS1 (`0x1F801000–0x1F801FFF`). Para cada leitura ou escrita de
dispositivo, o teste compara endereço, largura, valor e ordem. Assim, uma
escrita de 8 bits diferente de uma de 16 bits, ou uma leitura extra, reprova
mesmo quando os registradores finais e a RAM principal coincidem. A memória
de dispositivos ainda é um modelo simples: os testes de CD precisam de estados
de resposta explícitos e não demonstram a temporização real do hardware.
Tentativas em que os dois lados travam igualmente são **inconclusivas** e nunca
contam como aprovação. A
suíte inclui um teste negativo que garante que o harness reprova uma versão
propositalmente errada.

Em `MoveImage`, o comparador registra os oito bytes do `RECT` no momento da
chamada. O compilador pode colocar o mesmo `RECT` em outra posição da pilha;
os valores de origem, destino e dimensões precisam coincidir. Um teste negativo
reprova dimensões diferentes mesmo quando o endereço do ponteiro é igual.

O contrato de `RotAverage3` observa os três vetores antes das escritas, lê os
quatro argumentos da pilha e escreve os cinco resultados na ordem do SDK.
Também compara aliases e o conteúdo dos vetores. A profundidade é uma amostra
determinística limitada às 1.024 entradas da tabela de ordenação do renderer;
o modelo valida o uso dos buffers e das chamadas, com resultados numéricos
opacos em vez de emular a matemática do GTE. Os testes negativos alteram uma
coordenada e os aliases dos buffers para garantir a detecção dessas diferenças.

Para funções com cinco ou seis argumentos, as diretivas `arg4` e `arg5` também
podem fixar ou limitar os valores enviados na pilha MIPS (`sp+0x10` e
`sp+0x14`). Essas posições pertencem aos argumentos do chamador e continuam
na comparação de RAM. Assim, funções de tabuleiro são testadas com índices
válidos e inválidos em vez de receber sempre zero nessas posições.
Para preencher grades inteiras sem centenas de comentários repetidos, a diretiva
`rand-u32-strided` sorteia palavras de uma lista com passo fixo. Ela permite
exercitar buscas e sorteios de peças em casas ocupadas; o teste compara a grade
final e inclui um controle negativo para alterações nos bits das peças.

Para gerar candidatos C, a análise do Ghidra é cruzada com os tipos de memória
inferidos pelo `m2c` e com as larguras de acesso do MIPS. Ponteiros armazenados
em globais, vetores de caracteres e endereços de strings são preservados como
tais; uma string em RAM não pode virar o valor de seu primeiro byte. Quando o
assembly lê `$gp` e não o modifica, o gerador pode resolver o endereço inicial
desse registrador a partir da ABI do executável. Cada variante ainda passa pelo
teste diferencial com as funções auxiliares reais e estados que exercitam os
ramos relevantes. A resolução de `$gp` é opcional (`--resolve-gp`).

Se o Ghidra transformar um `switch` em chamada indireta, ler os endereços da
tabela de saltos no binário original e seguir cada destino no MIPS, incluindo
as instruções nos delay slots. Isso recuperou as oito direções de
`func_800B5C4C`, `func_800B63CC` e `func_800B678C`. Para validar a ordem dos
casos, usar um auxiliar como stub que registre as coordenadas e executar o
outro auxiliar original para selecionar cada destino. Complementar com os
dois auxiliares originais, terreno bloqueado, alturas e bordas do tabuleiro.

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


`func_800BAF44` agora tem perfis separados para os estados 0 a 10 e para
os dois caminhos do quinto argumento na pilha. A projeção `func_800CD950`
usa um contrato explícito de fronteira: observa os três componentes XYZ,
a sobreposição dos buffers e as escritas de 16 bits em `+0x46` e `+0x4A`.
As coordenadas projetadas e a profundidade são amostras determinísticas opacas;
a matemática da GTE e as alterações internas de matrizes desse helper não são
validadas por esse contrato. Um controle negativo que desloca X é rejeitado.
`func_800E1258` executa os helpers originais de direção, vetores, interpolação
e criação de efeitos, cobrindo seus seis estados e células vazias, bloqueadas,
ocupadas pelos dois lados e reis. Os manifestos registram os helpers isolados
e as limitações de cada validação. Cada perfil exige 200 execuções completas
por semente, com retorno, RAM viva e sequência de chamadas iguais.

Em `func_800F3080`, a amplitude em `0x8008F756` precisa ser `s16`: o
assembly usa `lh` e compara o resultado com sinal depois de subtrair 3.
A primeira candidata com `u16` divergiu ao encerrar o efeito. Os oito perfis
da versão corrigida cobrem os estados 0, 1, 2, 3, 4 e 99, divisores positivos
nos limites, listas de alvos vazias, preenchidas e já consumidas. O construtor
da lista, a criação de efeitos, o alocador e as funções trigonométricas rodam
em código original; somente o som fica isolado por stub.

`func_800F1BDC` e `func_800ECC94` completam as candidatas CHESS que vieram
de C no original. Seus estados e limites de temporizadores têm perfis próprios.
O cancelamento de `func_800F1BDC` recebe o registrador `s3` sem inicializá-lo
no assembly original; uma pequena instrução inline captura esse valor para
preservar a convenção existente. Os testes variam os registradores salvos,
e zerar esse valor reprova o controle negativo. Isso não é byte-matching.
As 13 rotinas CHESS escritas originalmente em assembly continuam pendentes
e permanecem na coluna **Faltam C**; a cobertura ainda não é 100%.
A suíte do validador e dos rebuilds passou em **102 testes**.

Em RAISE, `func_800C2E04` valida o parser com os seis jogadores, profundidades
da pilha e sequências de tokens simples ou delimitados por `$` e `%`.
`func_800994FC` cobre separadamente os papéis de widget 0 a 17; a tabela
original usa o índice `papel - 1`, que precisava ser corrigido no pseudo-C.
`func_80099F54` recupera os cinco caminhos de criação de widgets que o Ghidra
não estruturou. O alocador e a inicialização de sprites executam código
original; chamadas isoladas de recursos e desenho ficam identificadas nos
manifestos. Todas as três mantêm também o retorno `v0` na comparação.

Na frente byte-exact, o alinhamento das instruções revelou casos em que a
única diferença era a ordem dos operandos de `addu`. Em `func_800C2DA4`, agrupar
o deslocamento do índice e explicitar a base inteira recuperou o código do
GCC 2.7.2. Em `func_80019C20`, uma variável para a base recuperou o código do
GCC 2.8.1; somente essa função foi isolada numa unidade de tradução com esse
compilador. Trocar os operandos no C sem observar o código gerado não bastou.
As duas passaram por matching, duas sementes de 200 execuções e rebuild dos
cinco binários. A evidência está em
`docs/validation/byte-matching-2026-10-29-operands.json`.

Ao revalidar as candidatas mais recentes com o perfil real de cada unidade de
tradução, mais dez funções casaram: cinco setters da GTE, três rotinas do jogo
e os dois conversores de códigos do CD no loader. As macros GTE continuam
emitindo COP2; o matching verifica essas instruções e o rebuild confirma os
endereços finais. O registro está em
`docs/validation/byte-matching-2026-10-29-profiles-gte.json`.
Os testes diferenciais de acesso por índices ainda descartam entradas inválidas;
essas tentativas são registradas como inconclusivas e não contam como iguais.

Os registros de RAISE também ajudam no matching: representar os campos em
estruturas com os tamanhos originais (`0x79C` e `0x1A8`) recuperou a base e o
deslocamento das instruções de acesso em `func_800D0FE0` e `func_800E1554`.
No loader, `func_80111EF0` deve passar o endereço `D_801334F0` à rotina seguinte,
e não o conteúdo carregado desse endereço. A correção passou no matching e
no rebuild completo. O teste diferencial isolado, sozinho, não distinguiu
essa diferença no argumento do trampolim da BIOS; o assembly e os bytes do
build são a evidência adicional. Ver
`docs/validation/byte-matching-2026-10-29-records.json`.

Outros cinco matches de RAISE vieram da mesma recuperação de registros.
Os campos usam os deslocamentos e as larguras do assembly; uma comparação
com `1` pode aceitar tanto um tipo com sinal como sem sinal funcionalmente,
mas `lh` e `lhu` produzem bytes diferentes. Também foi necessário preservar
a aritmética inteira da base em alguns acessos. Os perfis dos jogadores 0 e 5
passaram em 4.000 execuções completas, sem inconclusivas, e compilam para o
mesmo candidato das funções integradas. O registro está em
`docs/validation/byte-matching-2026-10-29-record-fields.json`.

Mais quatro rotinas de RAISE casaram ao declarar os temporizadores, as tabelas
de valores e os ponteiros de tarefas dentro dos mesmos registros. A rotina
gêmea `func_80050648`, em YUUGI, recebeu a correção do endereço do buffer da
BIOS já identificada no loader. O lote passou por 3.600 execuções diferenciais
completas e pelo SHA-1 dos cinco binários. A evidência está em
`docs/validation/byte-matching-2026-10-29-task-records.json`.

Em mais três rotinas de RAISE, a ordem de inicialização das bases recuperou
o escalonamento original. Em `func_800B0A94`, limpar os bits 3 e 4 em duas
atribuições gera as duas instruções `and` originais; juntar as máscaras
mantém o resultado funcional, mas muda os bytes. O lote completou 2.400
execuções diferenciais e preservou os SHA-1 dos cinco binários. Ver
`docs/validation/byte-matching-2026-10-29-record-mutations.json`.

Uma varredura sem reaproveitar resultados antigos encontrou mais cinco
matches em YUUGI, incluindo `DrawSync`. O cache de `profile_sweep.py` considera
a função já processada pelo nome; depois de mudar o C, os resultados anteriores
precisam ser refeitos numa cópia de trabalho com cache novo. Confirmar o perfil
da unidade de tradução atual também é necessário. Ao separar arquivos, confira
os headers usados pelas funções que ficaram na outra parte, pois alguns estão
incluídos no meio do arquivo original. O lote passou por 2.800 execuções
diferenciais completas e pelo rebuild dos cinco binários. Ver
`docs/validation/byte-matching-2026-10-29-fresh-profiles.json`.

A varredura das 2.573 candidatas terminou com nove matches: os cinco de YUUGI
acima, `CdLastPos` e `slpm_DrawSync` no loader, `func_800E1720` em RAISE e
`func_800A07AC` em ETC. No loader, use o símbolo da string original de
`DrawSync`, pois um literal C novo duplica o `.rodata` mesmo quando as
instruções isoladas casam. Preserve também os símbolos de dados que deixam
de ser descobertos no assembly após a conversão. Os quatro matches finais
completaram 2.000 execuções diferenciais, e os cinco SHA-1 permaneceram iguais.
O match concorrente de `func_800E1848` foi preservado e revalidado após a
separação dos arquivos. Ver
`docs/validation/byte-matching-2026-10-29-sweep-complete.json`.

Em `func_800B15CC`, declarar o campo `0x18C` do registro de `0x1A8` bytes
reduziu a diferença a duas instruções. Inicializar a base inteira dentro do
`if`, antes de ler o índice global, recuperou a ordem dos dois `lui` e fechou
o match com GCC 2.8.1. Os dois estados e os jogadores 0 e 5 passaram em 1.600
execuções completas; os cinco SHA-1 foram preservados. Ver
`docs/validation/byte-matching-2026-10-29-conditional-base.json`.

O `tools/permute.py` agora usa os mesmos defines, opções do compilador e
backend de `match.py`, incluindo `-gcoff`, e aceita `--g0fill`. O script de
compilação usa a raiz da cópia de trabalho atual, permitindo buscas isoladas.
Chamadas C89 sem declaração recebem apenas o protótipo implícito `int f()`
no arquivo temporário, para que o verificador de tipos do permutador possa
processá-las. Isso não recupera assinaturas de argumentos. Três testes
verificam os callbacks e a igualdade de instruções e relocações entre os
dois fluxos, incluindo caminhos com espaços e o perfil G0. A pontuação do
permutador continua sendo só uma pista: todo vencedor precisa passar por
`match.py`, pelo rebuild completo e pela validação diferencial antes de entrar
em `src/`.

Nas rotinas de cor do SDK, o assembly usa um único `nop` antes do comando
GTE. Selecionar `GTE_CMD_WAIT` nos dois arquivos correspondentes recuperou oito
matches; o header mantém duas esperas como padrão para os demais arquivos.
`SetGeomOffset` e `SetGeomScreen` também casaram: a varredura os classificava
como erro porque não reconhecia `[MATCH (+N nop(s) ...)]`. O parser agora
aceita essa mensagem e exige sucesso do processo. Os oito bytes de padding
entre esses setters exigiram uma fronteira entre arquivos C; o match isolado
não detecta esse deslocamento. O lote completou 4.000 execuções diferenciais,
seis testes das ferramentas e o rebuild com os cinco SHA-1 originais. Ver
`docs/validation/byte-matching-2026-10-29-gte-waits.json`.

Mais nove rotinas GTE casaram ao selecionar também `GTE_READ_WAIT`. Em algumas
leituras, o `jr` ou outra instrução original já ocupa a espera; acrescentar um
`nop` muda o escalonamento. As médias que usam SZ já carregados não têm espera
antes do comando, enquanto `NormalClip` usa duas. Essas sequências ficam em
arquivos distintos, com padding preservado. Em `Square0` e `Square12`, vincular
o ponteiro inicializado ao registrador de argumento `$5` mantém os stores no
registrador original e a cópia do retorno no delay slot. Não são necessários
valores locais sem inicialização. O lote passou em 3.600 execuções completas e
nos cinco SHA-1: `docs/validation/byte-matching-2026-10-29-gte-reads.json`.

A cópia de constantes entre argumentos também tem uma forma validada com
extensões do GCC: variáveis inicializadas nos registradores de argumentos e
um asm vazio com entradas e saídas vinculadas. Ele não emite instruções e
preserva os valores, mas impede substituir a cópia `a3 = a2` por outra carga
de constante. Isso fechou nove funções em YUUGI, RAISE e CHESS, inclusive
`func_8009C0E4`. As chamadas e os laços continuam em C; não há instruções MIPS
inseridas por esse asm vazio. Os perfis cobrem ponteiro nulo, os dois tipos de
descritor e listas de 0, 1 e 4 elementos: 6.400 execuções completas e cinco
SHA-1 iguais. Ver `docs/validation/byte-matching-2026-10-29-argument-copies.json`
e o exemplo em `docs/NOTES.md`.
