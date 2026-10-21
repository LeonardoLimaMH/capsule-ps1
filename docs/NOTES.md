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
