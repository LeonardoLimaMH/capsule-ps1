# Notas de engenharia reversa

Registro de descobertas sobre o funcionamento do jogo e de funções que ainda
não casaram byte a byte (com o melhor C obtido até agora).

## Laço principal (`main`, YUUGI.EXE 0x80011820)

Fluxo reconstruído (funcionalmente correto; ainda **não** byte-idêntico):

```c
typedef struct SceneState {
    /* 0x00 */ u16 active;            /* != 0: cena carregada e rodando */
    /* 0x02 */ u16 unk2;
    /* 0x04 */ void (*callback)(void); /* atualização por quadro da cena */
    /* 0x08 */ u8 unk8[0xC];
} SceneState; /* 0x14 bytes em D_8008ED50 */

int main(void) {
    SceneState* scene = &D_8008ED50;

    func_800118BC();                  /* ResetGraph(0), srand(1), init de memória e sistema */
    while (1) {
        do {
            func_800118FC();          /* seleção/carga da próxima cena */
            func_80012698();
        } while (D_8008ED50.active == 0);
        do {
            if (scene->callback == NULL) {
                func_800126F8();      /* atualização padrão */
            } else {
                scene->callback();
            }
        } while (D_8008ED50.active != 0);
    }
}
```

Diferença restante: o original mantém `%hi(D_8008ED50)` em `$s1` e deriva
`$s0 = $s1 + %lo(...)`, reutilizando `$s1` no primeiro laço. Variações de
estrutura de laço e `-msplit-addresses` não reproduziram isso. Próximo passo:
decomp-permuter.

## Inicialização (`func_800118BC`) ✅

`ResetGraph(0)`, `srand(1)`, `func_8001A998(__bss_start, 4)`,
`func_8001C9D8()`. A semente fixa do `rand` significa que a sequência
aleatória do jogo é determinística a partir do boot.

## Cadeia de compilação: dois compiladores e várias unidades de tradução

Evidências reunidas com `tools/match.py`, `tools/compiler_map.py` e o build:

1. **GCC 2.7.2** casa `func_800118BC` (e ~95% das funções do jogo testadas);
   o 2.8.x preenche o *delay slot* do `jr $ra` com o ajuste de pilha, o que
   o original não faz nessas funções.
2. **GCC 2.8.1** é o único que casa `func_80012144`: o compilador carrega
   `%hi(global)` num registrador comum (`$v0`) em vez de deixar o assembler
   expandir a macro com `$at`. Nenhuma declaração alternativa faz o 2.7.2
   gerar isso. A versão do ASPSX (2.21–2.86) não muda o resultado.
3. `tools/compiler_map.py yuugi --regions`: a região de código do jogo
   (`0x80011820–0x8003D518`) é quase toda no estilo 2.7.2; o estilo 2.8 aparece
   sobretudo entre as funções do SDK (bibliotecas da Sony compiladas com GCC
   mais novo), além de casos isolados.
4. O mesmo global (ex.: `D_80078CC0`) é acessado via `$gp` numa função e via
   `%hi/%lo` noutra. Como o ASPSX decide isso por arquivo (pela diretiva
   `.extern simbolo,tamanho`), essas funções estavam em **arquivos-fonte
   diferentes**.

Consequências para o projeto:
- `tools/autodecomp.py` tenta os dois compiladores e registra qual casou.
- `--apply` adia funções cujo modo de acesso a globais conflita com o de
  funções já presentes no mesmo `.c`.
- A etapa 9 (separar `main.c` nos arquivos originais) passa a ser necessária
  para aproveitar tudo: cada arquivo terá o seu compilador
  (`config/compilers.txt`) e as suas declarações.

## Separação em unidades de tradução (etapa 9)

- `plan_tus.py`: 410 TUs iniciais a partir de conflitos de `$gp` (124 pares → 6
  fronteiras mínimas no código do jogo do `yuugi`), ilhas de estilo de
  compilador e objetos do SDK identificados.
- `assign_compilers.py --split`: a evidência de byte-matching prevalece sobre a
  heurística de estilo; 40 fronteiras extras criadas onde funções casadas com
  compiladores diferentes caíam no mesmo arquivo. Total: ~450 arquivos-fonte.
- Correção de segmentação: o texto do `ETC.BIN` começa em `0x800979BC`
  (offset `0x1BC`), não em `0x1F4`; o falso "assembly à mão" em
  `func_800979F4` era o fim dessa função.

## Assembly escrito à mão no original

`tools/handwritten.py` (sinais certos: COP0/GTE, código que continua na
próxima função, leitura de temporário antes da escrita). Primeira versão
superestimava por causa de `nop`s de alinhamento entre objetos do SDK; com
esses `nop`s descartados, os resultados conferem: `yuugi` 81 funções (71 de
GTE/COP0: libgte e rotinas de sistema; `crt0`), `slpm` 3, `chess` 13, `raise` 6.

## Gêmeos

`tools/twins.py`: 258 grupos de funções idênticas (721 funções), inclusive
entre binários (SDK duplicado em `yuugi`/`slpm`/overlays). Hoje não há grupo
misto porque o pipeline m2c é determinístico; a ferramenta passa a render a
cada função escrita/corrigida à mão.

## Funções quase casadas (C em `docs/wip/`)

| Função | Cópias (gêmeas) | Estado | Pista principal |
|---|---|---|---|
| `raise:func_800BBA38` (cria objeto/sprite, 13 parâmetros) | 4 (`raise`) | mesmo tamanho; 60 instruções diferem (registradores/ordem) | o original calcula `&D_8008ED68` uma vez e lê `+0x108/+0x10C` a partir do registrador; ponteiro local e `register` não reproduzem isso no GCC 2.7.2; campos de bits em `+0x30/+0x38` confirmados |
| `yuugi:SetDrawEnv` (pacote de ambiente de desenho da GPU) | 2 (`yuugi`, `slpm`) | mesmo tamanho; 68 instruções diferem | função `void`; soma `w + x` / `y + h`; o *clamp* relê `r.h` da pilha com `lh` e `lhu` (macro de *clamp* sobre o retângulo em memória); quadro de pilha original 0x28 (o nosso gera 0x40) |

O permuter chegou a 42 diferenças em `SetDrawEnv` apenas com um temporário
`volatile`, artifício descartado por não refletir o código original.

## Tabela de carga e cadeia de leitura do CD (confirmada com o Ghidra)

- Registros de arquivo de 16 bytes {destino, tamanho, LBA, modo} em dois blocos:
  `0x8006E994` (373) e `0x800701C4` (27); tabelas-índice de 8 bytes `D_8006DDE4`
  (tipos 0x00-0x10) e `D_800700E4` (tipos 0x11/0x12: OVDT0, CHESS/RAISE/ETC, CHSRF*).
  Catálogo: `config/disc_files.txt`; testes: `tests/test_overlays.py`.
- `func_80019F30(id = (tipo << 16) | índice, ...)`: resolve o registro e despacha por tipo.
- `func_8001A1DC(a0, a1, registro)`: modo 1 → `func_80019D48(tamanho, destino, LBA)`;
  outro modo → fila (`func_800190F4(0xFE, ...)`).
- `func_80019D48` → `func_80019DB4(tamanho, setores = (tamanho + 0x7FF) >> 11, destino, LBA)`
  → `func_800190F4(6, LBA, &{destino, setores}, tamanho)`: comando 6 na fila do CD.
- O comando 6 é consumido por `func_800196A0`, que chama `func_8004749C(pos, setores,
  destino, 0x80)` (forma de `DsRead` da LIBDS) com o destino do registro, sem deslocamento.
- **Resolvido — destino dos overlays:** a tabela diz `0x80098000`, mas antes de cada carga
  o jogo chama `func_8001A480(i, 0x80097800)`, que faz `D_800700E4[i].registro->destino =
  0x80097800` (7 chamadas: índice 2 = CHESS, 3 = RAISE, 4 = ETC). O valor da tabela é só o
  inicial. Confirmações independentes: 50–67% das chamadas internas caem em prólogos na base
  `0x80097800` (0–1% em `0x80098000`), e o ETC chama 3 funções do primeiro setor do arquivo
  (`0x80097B24`, `0x80097C6C`, `0x80097E40`). Teste: `test_overlay_dest_override`.

## Ghidra (plugin GhidraMCP via HTTP, `tools/ghidra.py`)

Usado para análise (pseudo-C de leitura, referências cruzadas, structs), nunca como
fonte de verdade. Importar o ELF do build **sem** fixar `language`; com ele o plugin
usa o carregador de binário cru e os endereços ficam errados (aconteceu na 1ª tentativa).

Desde 2026-10-22 também é fonte de rascunho (heurística `ghidra`, aceita pela bancada):
`tools/ghidra.py all` grava o pseudo-C das funções pendentes em `.cache/ghidra/c/` e
`tools/ghidra2c.py` o torna compilável (`include/ghidra.h` com os tipos do Ghidra).
Armadilhas encontradas:
- O Ghidra às vezes escolhe outro rótulo do mesmo endereço para a função chamada
  (`gcc2_compiled_` no lugar de `_SpuSetAnyVoice`). O `match.py` mascara relocações e
  não percebe; o link falha. Os nomes das chamadas diretas são trocados pelos alvos
  dos `jal`, na ordem.
- Iniciar o Ghidra fora do terminal do usuário exige `JAVA_HOME`
  (`C:\Program Files\Eclipse Adoptium\jdk-25.0.4.101-hotspot`); a ponte MCP não é
  necessária (o plugin escuta em 127.0.0.1:8089). Heap limitado com
  `GHIDRA_GUI_MAXMEM=3G` para conviver com o Docker.

## Preenchimento no fim dos objetos

O .text de cada objeto original termina com nops de preenchimento. Quando a última
função de um objeto vira C, os nops somem e tudo depois se desloca. Duas ferramentas:
- `tools/ldpad.py` fixa no linker script a extensão original de cada arquivo-fonte
  (`. = início + tamanho`): neutro num build que bate, repõe os nops quando faltam e
  faz o `ld` falhar se o código crescer. A regra anterior ("completar até múltiplo de
  16 a partir do início do arquivo") falhava quando o objeto original começava antes
  do arquivo (`loader_80116850`, `main_800427E0`).
- `tools/pad_split.py` separa o arquivo quando o fim de objeto cai no meio dele (o
  splat juntou vários objetos do SDK num `main_*`); ex.: os setters de primitivas da
  LIBGPU (`SetPolyF3`, `SetPolyG3`...) são cada um um objeto com 0x14 bytes + nops.
O `.cache/fullasm` precisa refletir as separações atuais: o Makefile o regenera junto
com o linker script.

## Constante repetida copiada de registrador (`addu $a3, $a2, $zero`)

Padrão frequente nos overlays (35 funções pendentes só no chess): numa chamada com o mesmo
valor constante em dois argumentos, o original carrega a constante uma vez e copia o
registrador (`addu $a2, $zero, $zero` … `addu $a3, $a2, $zero`), enquanto o GCC 2.7.2
com `f(x, y, 0, 0)` carrega as duas. Não reproduzem: variável local, atribuição dentro da
chamada, `register`, `inline`, protótipos com `s16`/`float`/ponteiro, outro compilador ou
nível de otimização. **Reproduz (fora de laço)** uma junção artificial em que a variável
recebe a constante nos dois ramos de um `if` com condição opaca:

```c
s32 z, w;
if (arg0 || w) { z = 0; } else { z = 0; }
f(arg0, arg1, z, z);
```

Casou `raise:func_800DC79C` e suas 8 gêmeas (`func_800DC6EC` … `func_800DC84C`) e (achado
pelo permuter) `yuugi:func_8001AD48`. Sem parâmetro útil para a condição, duas variáveis
opacas funcionam (`if (v || w)`; só `w` não basta): `raise:func_800A0A30`, `func_800A5378`. Dentro de
laço (`chess:func_8009CC34`) a variável extra fica viva e aloca outro `$s`: em aberto. A
forma original provavelmente é uma macro ou função `inline` que ainda não identificamos.

## Bibliotecas PsyQ: `-G0` e delay slot preenchido pelo ASPSX antigo

`slpm:CdReadCallback` (libcd) **casa** com GCC 2.7.2, `-O2 -G0`, global escalar
(`extern s32 D_80132054;`) e o filtro `tools/aspsx_fill.py` entre o maspsx e o `as`:

```
lui $v0,%hi(D) / lw $v0,%lo(D)($v0) / lui $at,%hi(D) / jr $ra / sw $a0,%lo(D)($at)
```

O maspsx gera `lui; sw; j; nop`; o ASPSX das bibliotecas colocava a segunda metade da
macro de store no delay slot do retorno. O padrão (`lui $at` … `jr $ra` / `sw …($at)`)
aparece em 22 funções pendentes, todas do SDK (yuugi 12, slpm 10; nenhuma nos overlays).
Conclusões: (1) as bibliotecas PsyQ foram compiladas com `-G0` (acesso absoluto, sem
`$gp`); (2) foram montadas com um ASPSX diferente do usado no código do jogo.

Medição parcial (`-G0` ± filtro, rascunho do m2c com globais escalares) nas pendentes do
slpm, interrompida por falta de memória: 0 casamentos novos até agora; algumas ficam bem
mais próximas (`func_80113004` 17 → 2, `func_801131D0` 23 → 15, `slpm__putchar_flash`
14 → 10). Integrado ao build: os arquivos listados em `config/g0fill.txt` são compilados com esse
perfil pelo Makefile, por `tools/difftest.py` e por `tools/match.py --g0fill`
(implementação comum em `tools/g0fill.py`). Primeiro arquivo: `sdk_libcd_cdread.c`.

## Frente funcional: o que o teste diferencial garante (e o que não)

`tools/difftest.py --abi --isolate` (usado por `tools/functional.py`, `tools/fn.py` e
`tests/test_equiv.py`) executa original e C lado a lado no Unicorn, com o executável
principal carregado junto dos overlays, e compara: registradores visíveis ao chamador
(`v0`, salvo quando nenhum chamador o lê — `tools/retuse.py`; `s0`–`s8`, `sp`, `gp`), a RAM
inteira (menos a pilha morta) e cada chamada a outra função: as funções do jogo e do SDK
chamadas viram stubs (são o mesmo código original dos dois lados), e são comparados os
argumentos que a função chamada lê (`tools/arity.py`: registradores e pilha). String
literal do C vale pelo conteúdo. Até 3000 estados aleatórios; aceita com ≥ 50 execuções
completas idênticas e nenhuma divergente.

Limitações conhecidas: (1) ponteiro para a pilha passado a uma função chamada é comparado
pelo endereço, não pelo conteúdo apontado (o conteúdo inclui bytes de preenchimento não
inicializados que diferem entre as versões); (2) funções cujo comportamento depende de
estado global realista (índices válidos, ponteiros) quase sempre travam com estados
aleatórios e ficam inconclusivas — pedem entradas capturadas do jogo em execução.

Detalhes que evitam falsos resultados: a aridade vem de uma análise de fluxo (quais
`$aN` ainda podem ter o valor de entrada em cada leitura, seguindo desvios e tabelas de
saltos `jlabel`), não de blocos lineares; o código do candidato fica na memória dos dois
lados (um ponteiro sorteado que caia ali lê o mesmo conteúdo); escrita sobre o código
testado (original ou candidato) ou leitura do trecho do original tornam a execução
inconclusiva (cada lado estaria modificando/lendo um código diferente — os ganchos de
memória do Unicorn recebem endereço físico, sem o `0x80000000`); e uma função que passa o
próprio endereço como callback é aceita (no candidato ela tem outro endereço).

- difftest: um C avulso (equiv/, rascunho) pode escolher o compilador com a diretiva `/* compiler: 2.8.1-psx */` no próprio arquivo (necessário para funções da libc/libcard compiladas com 2.8.1, cujo frame difere no 2.7.2).
- difftest `--stub-ret mixed` (ou a diretiva `/* stub-ret: mixed */` no C): com --isolate, os stubs devolvem também 0..31 (sorteado por tentativa, igual nos dois lados). Cobre laços que dependem do retorno (OpenTMD/ReadTMD, esperas por status) que com o retorno-ponteiro fixo nunca rodavam ou não terminavam.
- difftest --isolate: `jal` para fora das imagens carregadas (função de overlay chamada pelo principal) também vira stub, em vez de executar memória vazia.
- difftest: diretiva `/* rand-mem: 0xENDEREÇO N MÁX */` sorteia N bytes da RAM em [0, MÁX) por tentativa (iguais nos dois lados). Globais da imagem são fixas em todas as tentativas; sem isso, uma máquina de estados só teria o estado inicial testado.
- `tools/port_equiv.py`: porta um C equivalente de função do SDK entre alvos (alinha os assemblies e troca os símbolos). O SDK PsyQ está linkado em mais de um executável.
- difftest, outras diretivas no C: `/* rand-ptr: 0xEND N */` (N ponteiros válidos sorteados numa tabela), `/* args: small */` (a0-a3 em 0..15, índices de tabela) ou `/* argN: small */` (só o argumento N), `/* max-insns: N */` (limite menor por execução, para laços que esperam um valor que nunca chega).
- difftest: `/* argN: 0xEND */` fixa um argumento; `/* rand-u16: 0xEND N v1,v2,... */` preenche N halfwords com valores da lista (textos com códigos de controle e terminador).
- Frame com registros a menos que o original por constantes de laço içadas para s-regs: mover o trecho para um helper static (não é inlinado em -O2) resolve. A chamada interna não aparece no difftest, só stubs são comparados.
