# Auditoria e primeira rodada de byte-matching do CHESS

Data: 2026-10-27. Snapshot inicial analisado: `ed2bcf7d7a877f1356316531a10af52cf98ae515`.
A outra IA continuou trabalhando no checkout durante esta auditoria. As mudanças
desta rodada ficam em CHESS, sua configuração e este relatório. O README pode ser
recalculado a partir do estado atual, sem substituir o trabalho paralelo em RAISE.

## Resultado da auditoria

O rebuild foi recompilado em uma cópia isolada, incluindo os objetos C e assembly,
e os cinco binários reproduziram os arquivos extraídos do disco byte a byte.
Os testes iniciais de rebuild, overlays e controle negativo passaram: 21 testes.
Também foram revalidadas 14 funções existentes de `equiv/`, incluindo as cinco
funções do último commit de RAISE do snapshot inicial e seis funções que usam v1.
Todas passaram nos respectivos testes. Os casos 20 e 21 de `raise:func_800E66A4`
também passaram quando forçados separadamente.

Isso valida a amostra e o rebuild exato. Não certifica todas as 2.172 funções que
estavam em `equiv/` no início da análise. A suíte completa de equivalentes não foi
executada nesta auditoria. Logs antigos de falhas não foram tratados como falhas
atuais: várias funções já tinham sido removidas ou reescritas.

### Lacunas reproduzidas nos testes funcionais

Os experimentos abaixo alteraram somente cópias temporárias; nenhuma mutação
foi aplicada ao código do jogo ou ao harness.

| Experimento | Resultado |
|---|---|
| Remover os casos 20 e 21 de `raise:func_800E66A4` | O teste padrão aprovou 200 execuções. Com arg1 fixado em 20, a mutação foi reprovada na tentativa 0. A diretiva `arg1: small` só gera 0..15. |
| Substituir o quinto e o sexto argumentos de uma chamada de `func_8001DB8C` em `raise:func_800A70F8` por 0x1234 e 0x5678 | A mutação incorreta ainda aprovou 200 execuções. A inferência retorna quatro argumentos de registrador e zero de pilha para esse wrapper variádico. |
| Remover todas as escritas de hardware de `yuugi:SetRCnt` | A mutação incorreta ainda aprovou 200 execuções. O harness mapeia I/O, mas retorna e compara apenas a RAM principal, registradores e chamadas. |

Prioridades para aumentar a confiança:

1. Registrar leituras/escritas de I/O com endereço, largura, valor e ordem; uma
   comparação apenas do estado final também perderia escritas intermediárias.
2. Descrever assinaturas de funções variádicas e argumentos de pilha explicitamente.
   Acrescentar contratos para buffers apontados e para saídas escritas por stubs.
3. Medir caminhos exercitados e preparar estados válidos para cada caso de switch,
   limites, ponteiros e índices. Mais tentativas com a mesma distribuição não
   alcançam valores excluídos pelas diretivas atuais.
4. Fazer `tests/test_equiv.py` passar `--check-v1` nas mesmas condições usadas por
   `tools/functional.py` e `tools/fn.py`. As seis equivalentes detectadas como
   consumidoras de v1 passaram na rechecagem com esse sinalizador.
5. Separar nos relatórios aprovação isolada com stubs de aprovação em integração.
   O build padrão usa assembly nas pendentes; ele não executa todo o `equiv/`.
6. Indexar aridade, tamanho e uso de retornos por alvo e função. `arity.asm_files()`
   usa somente o nome e escolhe a primeira ocorrência; overlays compartilham nomes
   de endereço e não necessariamente a mesma assinatura.
7. Registrar aprovação com hash do C, original, compilador, harness, seed e perfil.
   `tools/progress.py` conta a existência do arquivo equivalente; não confere se
   existe evidência de teste atual para aquele conteúdo.
8. Isolar o ciclo automático por checkout/worktree. O `revert()` de
   `tools/auto_loop.sh` restaura todo `src` e `config` e limpa arquivos novos em
   `src`, podendo apagar mudanças simultâneas da outra IA nesses caminhos.

Alguns C byte-matching existentes leem variáveis não inicializadas para influenciar
GCC 2.7.2, por exemplo `raise:func_800A0A30` e `yuugi:func_8001AD48`.
O rebuild exato comprova os bytes da ferramenta fixada; essas construções não
servem como garantia de C portável para compiladores modernos.

## CHESS: byte-matching primeiro

Critério desta rodada: comparar instruções, integrar com o compilador correto,
recompilar os cinco binários e conferir seus SHA-1, depois executar os testes
diferenciais das funções integradas. Não foram aceitas novas funções somente
por passarem no teste funcional.

| Grupo | Funções | Bytes | Origem |
|---|---|---:|---|
| Wrappers de `func_8009FF58` | `func_800A0238`, `func_800A0264`, `func_800A0290`, `func_800A02BC`, `func_800A02E8`, `func_800A0314`, `func_800A0340`, `func_800A036C`, `func_800A0398`, `func_800A03C4` | 440 | C traduzido nesta rodada, GCC 2.7.2 |
| Contador e atualizações | `func_800AED34`, `func_800DCC28`, `func_800F5228` | 276 | C recuperado do cache e revalidado, GCC 2.7.2 |
| C que exige outro compilador | `func_800B3878`, `func_800C942C`, `func_800FE958` | 196 | C recuperado do cache e revalidado, GCC 2.8.1 |
| Total | 16 funções | 912 | Todos integrados no rebuild exato |

Foram criadas unidades de tradução em volta das três funções GCC 2.8.1,
restaurando GCC 2.7.2 na função seguinte. Os arquivos novos preservam os headers
necessários aos corpos C que foram movidos. As 15 cópias já existentes em `equiv/`
foram removidas, pois agora estão em `src/` byte-exact.

CHESS, código do jogo: **61 -> 77 funções**, **3.476 -> 4.388 bytes**,
**0,82% -> 1,04%**. O código do jogo completo passa de 16.024 para 16.936 bytes
byte-matching (1,59%). Percentuais funcionais devem ser recalculados no checkout
atual, pois a outra IA está adicionando equivalentes em paralelo.

### Validação da rodada

- Os 16 candidatos passaram em `tools/match.py` com seu respectivo compilador.
- Rebuild completo forçado em cópia isolada: cinco SHA-1 idênticos.
- Pytest: **22 passed**, nenhum skip; 16 testes diferenciais das novas funções,
  cinco testes de rebuild e resolução de chamadas do overlay CHESS.

| Binário | SHA-1 |
|---|---|
| yuugi | ded3d5e61d5906077d0171396fea4ca3959ecf23 |
| slpm | a4d3c7f4750acc79a29f2f941449f73950497e5e |
| chess | a6a63cc46a633968573c23b5681bb178070dba25 |
| raise | 92ccafd66ecb0030f9bfff109c855c09dbb4cf8b |
| etc | f14bbffbbee2ec2013b481a2f814997b3984ce74 |

Comandos de revalidação, usando o container padrão do projeto:

```sh
./run.sh make -j2
./run.sh python3 -m pytest -q tests/test_difftest.py -k 'chess and (func_800A0238 or func_800A0264 or func_800A0290 or func_800A02BC or func_800A02E8 or func_800A0314 or func_800A0340 or func_800A036C or func_800A0398 or func_800A03C4 or func_800AED34 or func_800DCC28 or func_800F5228 or func_800C942C or func_800FE958 or func_800B3878)'
./run.sh python3 -m pytest -q tests/test_rebuild.py 'tests/test_overlays.py::test_overlay_calls_resolve[chess]'
```

### Próximas funções

- `func_800C22A0`: já há C candidato que casa no comparador de instruções, mas a
  jump table original reside no `.rodata` compartilhado. A integração exige
  preservar seus rótulos e posições; não foi promovida nesta rodada.
- `func_800AECC4`: o C simples tem o comportamento esperado, mas a escolha entre
  adicionar deslocamento ao símbolo e usar deslocamento na instrução ainda difere.
- `func_800A88C4` e `func_800C9534`: a divisão original não contém os checks que o
  montador acrescenta ao operador C. A reescrita crua do difftest não está no build
  padrão; passar no funcional não basta para aceitar como byte-matching.

A frente byte-exact deve continuar antes da frente equivalente. O ganho imediato
mais claro é integrar candidatos bloqueados por compilador/TU e `.rodata`, além
de traduzir famílias de wrappers simples. Para funções maiores, structs e
protótipos corretos ajudam as duas frentes antes de gastar longos períodos em
permutações de registradores.
