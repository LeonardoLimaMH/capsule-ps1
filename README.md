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
**Código do jogo decompilado em C (byte-matching):** `░░░░░░░░░░░░░░░░░░░░` **1.51%**  
**Total incluindo SDK PsyQ:** `░░░░░░░░░░░░░░░░░░░░` **2.03%**  
**Cobertura (C + funções que já eram assembly no original):** `█░░░░░░░░░░░░░░░░░░░` **4.64%**  
**Funcional (C byte-idêntico + C equivalente validado por teste diferencial, `equiv/`):** `███████████░░░░░░░░░` **56.84%**  
**Rebuild byte-idêntico dos 5 binários:** ✅ (verificado por SHA-1 em `make check`)

| Binário | Função | Código do jogo (C) | Funções | SDK PsyQ (C) | Total |
|---|---|---|---|---|---|
| `YUUGI.EXE` | executável principal | 2.80% (5,772 / 206,372 B) | 142 / 732 | 8.79% (84 / 303 fn) | **3.99%** |
| `SLPM_860.96` | loader / boot | 4.76% (988 / 20,756 B) | 27 / 119 | 6.57% (70 / 215 fn) | **5.99%** |
| `CHESS.BIN` | overlay de batalha (tabuleiro) | 0.82% (3,476 / 421,956 B) | 61 / 867 | 100.00% (2 / 2 fn) | **0.84%** |
| `RAISE.BIN` | overlay de criação de monstros | 1.52% (4,972 / 326,576 B) | 181 / 940 | 100.00% (2 / 2 fn) | **1.54%** |
| `ETC.BIN` | overlay de menus/diversos | 0.92% (816 / 88,992 B) | 10 / 189 | 0.00% (0 / 0 fn) | **0.92%** |
| **Total** | | **1.51%** (16,024 / 1,064,652 B) | 421 / 2847 | 7.89% (158 / 522 fn) | **2.03%** |
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
