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

Restam três matches isolados desta varredura para integrar suas tabelas de
`switch`: `CHESS:func_800A84A0`, `func_800C41E8` e `func_800CAE6C`. O link
detectou referências às labels originais, que desapareceram ao converter as
funções; o C também gera suas próprias tabelas. A próxima etapa é associar
cada faixa `.rodata` à TU correta, preservando endereço, ordem e padding.
Essas três funções continuam em `equiv/`, fora do progresso byte-exact.

Em `func_800A84A0`, o teste inicial também apontou diferença em `v0`; isso
permanece pendente de investigação junto à relocação da tabela. Não ocultar
essa divergência nem interpretar o match de instruções como aceitação.
