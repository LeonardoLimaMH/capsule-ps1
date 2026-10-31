# Estratégia de byte-matching

## Ponto de partida e ordem de trabalho

O C de `equiv/` é a primeira candidata. Ele preserva o trabalho funcional já
feito; gerar C novamente com m2c é uma alternativa quando os tipos ou a forma
do controle de fluxo dificultam o matching. Equivalência amostrada não garante
que uma candidata esteja correta para todas as entradas.

1. Identificar o commit, a função ainda em `INCLUDE_ASM`, sua unidade de
   tradução (TU), o perfil de compilação e o hash do C equivalente.
2. Compilar esse C primeiro no perfil da TU, depois nos perfis ainda não
   testados: `2.7.2-psx`, `2.8.1-psx`, `2.7.2-cdk`; testar `g0fill` quando o
   padrão do SDK e os acessos a globais justificarem. A versão do CDK encontrou
   matches que pequenas mudanças de C nos outros compiladores não resolviam.
3. Agrupar as diferenças restantes: extensão de sinal (`lh/lhu`), tamanho e
   deslocamento de campos, cálculo de endereço, ordem de argumentos,
   registradores, epílogo, espera GTE, padding ou relocações. Alterar uma causa
   por rodada, mantendo inicialização e comportamento definidos.
4. Aplicar uma transformação promissora às funções da mesma família. Priorizar
   o total de bytes recuperáveis e o custo de validação, além da quantidade de
   funções. Uma função pequena ajuda a descobrir o padrão de uma família maior.
5. Reservar o permutador para diferenças residuais, com limite inicial de
   180 segundos por hipótese. Registrar o melhor resultado e a hipótese que
   falhou; não repetir uma busca sem mudar o C, o compilador ou a hipótese.

## Busca, validação e integração

Usar uma cópia isolada do commit, com o dump local fora do Git. Enquanto um
lote passa nos testes, preparar ou compilar candidatos de outro lote, com um
limite de processos para evitar competição entre compiladores. Não permitir
que dois processos integrem alterações no mesmo arquivo ou índice do Git.

O cache atual de `profile_sweep.py` identifica resultados por alvo e função;
ele **não invalida resultados automaticamente** quando o C ou as ferramentas
mudam. Usar um arquivo `--results` novo para cada rodada relevante. Registrar
commit, hashes dos fontes, perfil, ferramentas, resultado e duração junto ao
lote. A chave desejável para um cache futuro inclui também headers, flags,
backend e compilador. Não interpretar um resultado antigo como teste do C atual.

Um `[MATCH]` isolado é uma triagem: `match.py` mascara relocações e pode aceitar
padding. A integração precisa de todas estas verificações:

- Match da função compilada no **arquivo C integrado**, usando seu perfil real.
- Conferência de acessos a `$gp` (`tools/gp_check.py` ajuda na triagem) e dos
  símbolos usados. A comparação por conjuntos não comprova cada relocação.
- Testes diferenciais contra o original, com entradas e estados que cubram os
  ramos relevantes; registrar também falhas e testes inconclusivos.
- `make -j4 check`: os cinco SHA-1 devem ser idênticos aos originais. Esta etapa
  verifica as relocações finais, posições, padding e efeitos sobre outras funções.

Se outro compilador for necessário, testar todas as funções C da TU antes de
trocar o perfil. Se houver conflito, separar a TU na fronteira correta e
verificar novamente o build. Evitar criar fronteiras sem necessidade.

Uma TU mista não exige alternar o compilador em cada candidata: testar também
as funções C vizinhas no novo perfil e agrupar trechos consecutivos compatíveis.
No lote CDK abaixo, isso reduziu 25 novas fronteiras para oito. Preservar os
headers necessários em cada trecho; um `ghidra.h` colocado entre funções no
arquivo antigo precisa preceder os usos dos tipos no arquivo separado.

As fronteiras devem vir de endereços originais verificados. Um mapa produzido
por um link que falhou pode conter posições deslocadas: não o usar como fonte
de offsets. A tentativa com tabelas `.rodata` duplicadas mostrou esse problema;
recalcular os offsets originais e repetir o build recuperou os cinco SHA-1.

Antes de copiar o lote de volta, comparar os arquivos com a base da cópia
isolada. Incorporar alterações concorrentes e repetir os testes afetados;
nunca substituir a árvore atual por uma cópia antiga. Remover de `equiv/`
somente as funções que acabaram de entrar em `src/`.

## Argumentos repetidos sem valores indefinidos

Quando o original copia `$a2` para `$a3`, mas o compilador recarrega a mesma
constante, `include/matching.h` oferece `MATCHING_CALL4_REPEAT`:

```c
MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(index), 1, 0);
```

Os três primeiros argumentos são inicializados e vinculados a `$a0/$a1/$a2`.
Um asm vazio com entradas vinculadas às saídas preserva seus valores e impede
a propagação da constante. Não emite instruções; a chamada continua em C.
O GCC antigo exige restrições `"=r"` e entradas `"0"/"1"/"2"`, em vez de `"+r"`.
`typeof` preserva os tipos e permite a conversão de arrays em ponteiros.
Os dois primeiros argumentos são avaliados uma vez; o argumento repetido
deve ser uma constante sem efeitos colaterais. O resultado da chamada é mantido.

A macro usa uma expressão GNU `({ ... })`: a versão `do/while (0)` mudou o
escalonamento do prólogo em duas candidatas. Fora de MIPS, a expansão é uma
chamada C direta. É uma pista específica do compilador para reproduzir bytes,
não uma afirmação sobre a forma do código-fonte original. Os testes executam
as expansões MIPS e fallback no Unicorn, verificando argumentos, incremento
único, arrays e valor de retorno.

## Evidências e publicação

Cada lote aceito recebe um registro em `docs/validation/`, com a base, os hashes
e as verificações executadas. O README apresenta percentuais por **bytes** e
contagens por função; equivalentes e byte-exact são métricas separadas.

Antes de cada commit, preparar somente os arquivos do lote e executar:

```sh
python tools/progress.py --readme --staged
git add README.md
python tools/progress.py --check --staged
```

Publicar fontes, ferramentas, testes e registros de validação. Dump, binários
originais/reconstruídos, assembly extraído, assets e credenciais permanecem
locais. Não contar matches já integrados por outro colaborador como novos.

## Diário de decisões

| Base / lote | Decisão e resultado |
|---|---|
| `b678acd` | Argumentos vinculados e inicializados recuperaram nove matches; preservação dos valores verificada por testes e build. |
| `fc15bf8` | A outra frente integrou o GCC do CDK. Sete de onze candidatas preparadas já estavam resolvidas; a integração desta frente foi reduzida às quatro novas funções CHESS, preservando esses avanços. |
| CHESS / helper | Quatro funções novas e uma refatoração usam a macro compartilhada. Evidências em `validation/byte-matching-2026-10-29-chess-helper.json`. |
| Base `27d6006`, equivalentes / CDK | 1.113 equivalentes de CHESS, ETC e SLPM compilados com o CDK; 25 matches isolados, 22 integrados: 17 CHESS, quatro ETC e um SDK de SLPM. Dez mil execuções diferenciais idênticas, 5.420 inconclusivas e 38 não suportadas, separadas no registro; nenhum teste divergente entre os 22 aceitos. Cinco SHA-1 confirmados. Evidências em `validation/byte-matching-2026-10-29-cdk-equivalents.json`. |

Os três matches com tabelas pendentes foram integrados na rodada seguinte:
`CHESS:func_800A84A0`, `func_800C41E8` e `func_800CAE6C`. Os subsegmentos
`.rodata` do splat agora associam as faixas originais `0x4B4..0x5E0`,
`0x10B4..0x10C8` e `0x1198..0x11AC` aos respectivos arquivos C. O compilador
gera as tabelas; o linker as posiciona nos endereços originais. Isso elimina
as tabelas duplicadas e as referências a labels do assembly removido.
Não foi preciso criar novas fronteiras de código. Os cinco SHA-1 e 2.400
execuções diferenciais confirmaram o lote:
`validation/byte-matching-2026-10-29-switch-tables.json`.

Em `func_800A84A0`, a diferença inicial em `v0` vinha do `lui` com a parte alta
do endereço da tabela, executado no delay slot de um ramo. No teste, o C é
realocado, mudando esse valor residual de `0x80090000` para `0x80180000`.
A função é `void`; `retuse.py` confirmou que seus chamadores diretos não usam
o retorno. Os testes dessa função desconsideram apenas `v0` e continuam
comparando memória, chamadas e os outros registradores observados. O rebuild
completo preserva **todos** os bytes, sem essa exceção. O registro explicita
o diagnóstico e a limitação da análise de chamadas indiretas.

Depois dessas tabelas, 472 funções CHESS de até `0x200` bytes passaram por
alternativas de m2c: quatro casaram com o CDK. A mesma busca em 240 funções
entre `0x200` e `0x600` não produziu matches; não repetir essa rodada sem uma
nova hipótese. Retestar 163 variantes distintas anteriormente próximas do
matching, agora com o CDK, recuperou duas funções RAISE. Os campos tipados
dos registros de `0x1A8` bytes foram decisivos, incluindo testes de `0xFFFF`
como sentinela sem sinal. O lote de seis passou em 2.400 execuções diferenciais
sem casos inconclusivos e no rebuild completo. Registro:
`validation/byte-matching-2026-10-29-cdk-records.json`.

Executar `tools/twins.py` após cada conjunto relevante de matches permite
reaproveitar funções repetidas entre executáveis e overlays. As relocações
precisam ser adaptadas para os símbolos de destino; cada cópia passa pela
mesma validação de uma candidata nova. A varredura seguinte encontrou três
candidatas dessa forma. `SpuInitMalloc` e `slpm_memchr` foram integradas no lote
de 30/10; `func_800E79C0` já havia sido integrada pela outra frente.

Na revisão de 30/10, corrigir o tipo dos stores recuperou mais duas funções
CHESS: `u8` em vez de `s8` fez o compilador carregar `0xFF`, e `s16` em vez de
`u16` recuperou a carga de `-0x98`. Os bits gravados na memória são iguais,
mas a extensão da constante nas instruções é diferente. Examinar essas
diferenças antes de iniciar buscas de permutação. O lote de quatro completou
4.800 execuções diferenciais e os cinco SHA-1:
`validation/byte-matching-2026-10-30-audit-next.json`.

A técnica `M2C_GFIELD`, incorporada pela outra frente, também foi aplicada a
CHESS: 397 fontes transformados, entre equivalentes e alternativas de m2c,
foram testados em três perfis (1.191 pares candidata/perfil). Quatro funções
casaram: `func_8009CD9C`, `func_800A70EC`, `func_800FEBF4` e `func_80100900`.
Foram escolhidas as versões originadas dos equivalentes. O acesso por campo
mantém o deslocamento na instrução de memória em vez de incorporá-lo ao
endereço do símbolo. Conferir largura, sinal e alinhamento contra o assembly;
a macro não demonstra, sozinha, o layout completo da estrutura original.

Uma nova fronteira preservou o compilador das funções vizinhas. O lote passou
em 1.600 execuções diferenciais sem inconclusivas, incluindo sentinelas,
negação de halfwords, overflow do contador de 16 bits e o helper original
`func_800CAE6C`, além dos cinco SHA-1. Registro:
`validation/byte-matching-2026-10-30-chess-globals.json`.

Em 31/10, retestar 107 equivalentes alterados desde a rodada anterior recuperou
`YUUGI:func_8001F8D8` no CDK. A correção prévia da escala de um acesso à tabela
de callbacks foi decisiva. O cache de buscas deve identificar o conteúdo da
fonte, além de função e compilador; resultados anteriores à edição não bastam.

Diferenças no prólogo também podem vir dos tipos dos parâmetros. Nas funções
CHESS `func_800D72CC` e `func_800D7328`, usar `u8` no primeiro parâmetro recuperou
a ordem original dos registradores salvos. Em `func_800DDBC8`, ampliar o quarto
parâmetro de `s8` para `s32` eliminou extensões extras. Uma busca de 195 variantes
em 21 funções próximas confirmou esse terceiro caso. `tools/retype.py` agora
aceita `--parameters` para procurar também tipos inteiros dos parâmetros:

```sh
python tools/retype.py chess func_800DDBC8 equiv/chess/func_800DDBC8.c /tmp/candidate.c --gcc 2.7.2-cdk --parameters
python tools/match.py chess func_800DDBC8 /tmp/candidate.c --gcc 2.7.2-cdk
```

Essa busca gera hipóteses: estreitar um parâmetro pode mudar sua faixa válida
e a ABI. Conferir os usos, preservar casts do corpo e exigir o rebuild completo.
A ferramenta não altera parâmetros ponteiro, array ou callback. O modo padrão
continua procurando somente tipos de variáveis locais.

`func_800BB880` exigiu uma temporária inicializada vinculada a `v0`, com uma
restrição vazia de entrada/saída, para preservar a cópia antes do store de byte.
Isso orienta a alocação de registradores sem inserir instruções de assembly e
sem ler valores não inicializados. As cinco funções passaram em 2.800 execuções
diferenciais sem inconclusivas e nos cinco SHA-1 completos. Os testes isolam
helpers com stubs e não substituem testes de gameplay. Evidências e fixtures:
`validation/byte-matching-2026-10-31-parameters.json`.
