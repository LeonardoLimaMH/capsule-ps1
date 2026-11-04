# Código de terceiros: bibliotecas do SDK PsyQ

Parte do C das bibliotecas PsyQ deste projeto veio de outros projetos de decompilação.
Esses projetos já tinham as mesmas funções do SDK em C byte-exact. Só entram projetos
com licença permissiva (MIT ou CC0). Projetos AGPL (sotn-decomp, BFM-decomp) foram
consultados, mas nenhum código deles foi copiado.

| Projeto | Licença | Revisão usada | Texto da licença |
|---|---|---|---|
| [sozud/psy-q-decomp](https://github.com/sozud/psy-q-decomp) | MIT | `6edf9b2` | [sozud_psy-q-decomp.LICENSE.txt](sozud_psy-q-decomp.LICENSE.txt) |
| [Fancy2209/psyz](https://github.com/Fancy2209/psyz) | MIT | `72fb5e7` | [Fancy2209_psyz.LICENSE.txt](Fancy2209_psyz.LICENSE.txt) |
| [ser-pounce/rood-reverse](https://github.com/ser-pounce/rood-reverse) | CC0-1.0 | `8bd7908` | [ser-pounce_rood-reverse.LICENSE.txt](ser-pounce_rood-reverse.LICENSE.txt) |
| [celophi/lom-decomp](https://github.com/celophi/lom-decomp) | MIT | `071ac1b` | [celophi_lom-decomp.LICENSE.txt](celophi_lom-decomp.LICENSE.txt) |
| [afsenovilla/Tombi-Decomp](https://github.com/afsenovilla/Tombi-Decomp) | MIT | `3e73b71` | [afsenovilla_Tombi-Decomp.LICENSE.txt](afsenovilla_Tombi-Decomp.LICENSE.txt) |
| [gonzaloberteri/ygofm-decomp](https://github.com/gonzaloberteri/ygofm-decomp) | MIT | `18bcb58` | [gonzaloberteri_ygofm-decomp.LICENSE.txt](gonzaloberteri_ygofm-decomp.LICENSE.txt) |

Cada função importada tem, no próprio `src/`, um comentário com o projeto, a licença e
o arquivo de origem.

## Funções importadas

| Função | Executável | Origem |
|---|---|---|
| `SetDefDispEnv`, `SetDefDrawEnv` | YUUGI e SLPM | psyz (`decomp/src/libgpu/ext.c`) |
| `SetRCnt` | YUUGI e SLPM | psy-q-decomp (`src/api/counter.c`) |
| `ResetRCnt` | YUUGI e SLPM | rood-reverse (`libapi/COUNTER.c`) |
| `SpuSetTransferStartAddr` | YUUGI | rood-reverse (`libspu/S_STSA.c`) |
| `_SpuIsInAllocateArea` | YUUGI | rood-reverse (`libspu/S_M_UTIL.c`) |
| `memmove` | YUUGI | psy-q-decomp (`src/c/memmove.c`) |
| `DecDCTGetEnv`, `DecDCTin` | SLPM | psy-q-decomp (`src/press/libpress.c`) |
| `_SsInit` | SLPM | psy-q-decomp (`src/snd/ssinit.c`) |
| `CdReset` | SLPM | rood-reverse (`libcd/SYS.c`) |

## Como importar mais

1. **Clonar** os projetos num diretório isolado (`~/ext`) e copiá-los, sem `.git`,
   para `.cache/ext`. Nada deles é executado.
2. **Indexar** as definições e cruzar com as funções do SDK ainda em `INCLUDE_ASM`.
   Os nomes vêm de `config/symbols.<alvo>.psyq.txt`.
3. **Compilar** cada candidato com os cabeçalhos do próprio projeto de origem, em
   todos os perfis (`2.7.2-psx`, `2.8.1-psx`, `2.7.2-cdk`, `2.6.3-psx`, com e sem
   `+g0fill`), e comparar com o original.
4. **Reduzir** os que casam com `tools/ext_import.py`:
   - mantém só as declarações de que a função depende e descarta tipos que o
     `common.h` já tem;
   - transforma definições de variáveis em `extern`;
   - troca os nomes do projeto de origem pelos deste, pareando as relocações com o
     assembly original.

   O bloco reduzido tem de continuar casando.
5. **Posicionar e integrar:**
   - Trocar o perfil do arquivo (`config/compilers.txt` + `config/g0fill.txt`) se as
     funções C existentes continuam casando; senão, dividir o TU.
   - Integrar com `autodecomp.py --apply`.
   - Se o C usa um array que o splat dividiu em vários `D_...`, declarar o nome do
     SDK em `config/extra_syms.<alvo>.ld`, como `mdec_iq`.

Na primeira rodada (2026-11-03): 97 das 282 funções do SDK pendentes tinham C em
algum desses projetos; 18 casaram de primeira; 15 foram integradas.
- As outras ~80 diferem pela versão: o jogo usa PsyQ 4.0–4.3, e os projetos usam 3.5
  (psy-q-decomp) e 4.4–4.7.
- Elas são bons pontos de partida para o permuter.

Tombi-Decomp: o C do SDK vem dos arquivos `src/<Função>.c` marcados `MATCHING`, que o próprio
projeto atribui a psx_tomba, eternal-silver-sssc-decomp e aos arquivos MIT de sotn-decomp (ver o
`THIRD_PARTY_NOTICES.md` dele). Os headers PsyQ da Sony que esse C usa ficam só no cache local
(`.cache/ext_hdr/`, buscados de psx_tomba como o Tombi faz) e não entram no repositório: cada função
é reduzida às próprias declarações por `tools/ext_import.py --inc-first`.
