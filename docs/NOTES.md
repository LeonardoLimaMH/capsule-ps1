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
