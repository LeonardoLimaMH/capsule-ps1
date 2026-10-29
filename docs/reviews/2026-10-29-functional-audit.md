# Auditoria funcional e preparação para byte-matching

Estado analisado: `0a79f37eb671824488de7c79246dac9e177b56ba`, de 29/10/2026.
A revisão e a recompilação usaram uma cópia isolada desse commit. Os arquivos
de trabalho não versionados de outra IA foram preservados.

## Resultado

| Binário | Cobertura funcional dos bytes convertíveis | Funções em C | Pendentes C | Assembly original separado |
|---|---:|---:|---:|---:|
| CHESS | 100,00% | 869 / 869 | 0 | 0 |
| RAISE | 100,00% | 942 / 942 | 0 | 0 |
| ETC | 100,00% | 189 / 189 | 0 | 0 |
| YUUGI | 98,56% | 963 / 970 | 7 | 65 |
| SLPM | 95,49% | 299 / 302 | 3 | 32 |
| Total | 99,44% | 3.262 / 3.272 | 10 | 97 |

São 661 funções integradas em C byte-matching e 2.601 equivalentes
contabilizadas, sem duplicar as candidatas de funções já integradas. Existem
26 arquivos adicionais em `equiv/` que não entram nessa soma.

O total contém 1.159.928 bytes de código. O C cobre 1.149.232 bytes, ou 99,08%
do total incluindo as rotinas de assembly original. A métrica de 99,44% usa
como denominador 1.155.724 bytes, excluindo 4.204 bytes de assembly original.
A distinção está explícita no README; não são duas medições intercambiáveis.

Pendências convertíveis:

- YUUGI: `main`, `CD_cw`, `CD_getsector`, `CD_getsector2`, `SpuWrite0`,
  `__adddf3`, `__divdf3`.
- SLPM: `StCdInterrupt`, `slpm_CD_getsector`, `slpm_CD_getsector2`.

Byte-matching: 2,16% dos bytes do jogo, ou 2,70% incluindo o SDK.
Esse progresso é independente da cobertura funcional.

## Verificações executadas nesta revisão

- `make -j4 check`: os cinco binários reconstruídos coincidiram em tamanho e
  SHA-1 com os originais. O build padrão usa `src/` e o assembly remanescente;
  não compila automaticamente todo o conteúdo de `equiv/`.
- Suíte selecionada de 102 testes do validador e dos rebuilds: **90 passaram,
  12 falharam**, detalhadas abaixo. Não foi executada a suíte completa de
  todas as funções de `equiv/` nesta revisão.
- Treze funções recentes de matrizes, projeção, iluminação, desenho, criação
  de widgets e lógica de RAISE foram reexecutadas com 200 conclusões por
  semente, sementes 1 e 2. Todas atingiram o critério com a política de retorno
  apropriada. A amostra não substitui uma revalidação das 2.601 funções.
- `func_800E53CC` diverge apenas em `v0` no modo estrito. `retuse.used()`
  confirma que seus chamadores não leem esse retorno; com `--ignore-v0`,
  as duas sementes passaram. Não se deve tratar esse caso como diferença
  observável pelo chamador, nem usar essa dispensa indiscriminadamente.
- O GTE foi conferido novamente contra o código C do psxe compilado em um
  diretório temporário: **30.000 / 30.000** casos idênticos, semente 29,
  incluindo os 22 comandos e operações de registradores. Isso confirma essa
  amostra do modelo, não a temporização de um PS1 físico.
- Os hashes dos fontes existentes referidos nos manifestos versionados
  conferiram. A auditoria de publicação encontrou zero ocorrências nas
  categorias verificadas de binários, dumps, arquivos excluídos e credenciais
  em 4.394 blobs do histórico. O remoto foi atualizado por fetch e já estava
  no mesmo commit analisado.

## Ajustes necessários na validação

1. **Argumentos `arg6` e `arg7` são ignorados.**
   `tools/difftest.py` reconhece apenas `arg0` a `arg5` e inicializa somente
   os argumentos 4 e 5 na pilha. `equiv/yuugi/RotAverage3.c` declara também
   `arg6` e `arg7`. Na reexecução, cada semente produziu 200 conclusões
   idênticas e 200 tentativas inconclusivas; uma amostra destas falhou em
   escrita para endereço não mapeado. É preciso ampliar a preparação dos
   argumentos e rejeitar diretivas desconhecidas, com teste que confira os
   oito argumentos reais. As inconclusivas não contaram como aprovações.

2. **Onze testes ainda esperam o formato antigo das observações.**
   A inclusão incondicional de `io:gte` em `difftest.run()` acrescenta um
   evento mesmo a execuções sem instruções GTE. Falham três casos em
   `test_sdk_contracts.py`, seis em `test_stub_dispatch.py` e dois em
   `test_functional_memory_types.py`. Os valores e acessos esperados continuam
   presentes; essas falhas não demonstram, por si, erro nas funções do jogo.
   Convém definir o contrato do evento e atualizar os testes, preservando a
   comparação estrita do estado GTE quando ele for usado.

3. **O teste da tabela de progresso ainda usa o denominador anterior.**
   `tests/test_progress_snapshot.py:66` espera duas pendências no exemplo
   que agora separa o assembly original. A nova regra calcula uma.
   Atualizar também as expectativas de bytes e de quantidade desse teste.

4. **Preservar evidências de aceitação em formato único.**
   Há registros de resultado em `.cache/functional/`, excluída do Git,
   e manifestos com hash em `docs/validation/`, com esquemas diferentes.
   Só 327 arquivos presentes em `equiv/` têm um registro com hash nos
   manifestos versionados examinados. Isso não significa que os demais
   falharam: significa que a evidência não está igualmente registrada.
   Registrar commit, hash, comandos, sementes, helpers reais/isolados,
   conclusões e inconclusivas permite auditar e repetir a aceitação.

Alguns perfis ainda descartam muitas entradas inválidas: `func_800C1E1C`
precisou descartar 255 e 229 tentativas nas sementes examinadas, além de um
caso não suportado na segunda. Preparar contextos válidos e estados limite
melhora a cobertura e a velocidade sem relaxar o comparador.

## Leitura de ref/ e aplicação ao byte-matching

| Referência local | Utilidade concreta | Limite |
|---|---|---|
| `fm-recomp/tools/project/align_functions.py` | Alinhar sequências de instruções para separar inserções, ordem, registradores e constantes | O código do outro jogo não substitui as funções deste jogo |
| `fm-recomp/tools/project/run_remaining_profile_pass.py` | Registrar tentativas por compilador/perfil e reaproveitar candidatos próximos | A varredura básica já foi adaptada em `tools/profile_sweep.py`; repetir os mesmos perfis sem novos candidatos pouco acrescenta |
| `fm-recomp/tools/project/matching_source_contracts.py` | Aceitação verificável, com distinção entre fonte C e assembly embutido | Adaptar os critérios ao projeto, mantendo transparentes as macros GTE |
| `psxe/psx/cpu.c` | Oráculo independente para o modelo de CPU/GTE; usado na conferência desta revisão | Emulação não determina a alocação de registradores do GCC original |
| `duckstation/src/core/` | Conferir comportamento de GTE, GPU, CD-ROM e casos limite para validação integrada | Usar como referência de comportamento, observando a licença documentada em `docs/gte.md` |
| `armsx1/psx/` | Conferir alternativas de integração e execução de CPU e dispositivos | O GTE herdado do psxe não constitui um segundo oráculo independente; há licenças diferentes por componente |

O C legível ajuda a recuperar estruturas, sinais, tamanhos dos campos e
efeitos das chamadas. Byte-matching ainda depende da forma das expressões,
dos temporários, da ordem de avaliação, das fronteiras das unidades de
tradução, do compilador e do montador. Uma refatoração ampla pode piorar a
proximidade do código gerado.

Fluxo recomendado para a próxima etapa:

1. Escolher funções com mesmo tamanho e poucas diferenças alinhadas, usando
   o C equivalente como ponto de partida.
2. Confirmar o perfil da unidade de tradução e os quatro perfis básicos já
   disponíveis antes de alterar a lógica.
3. Corrigir tipos e estruturas pelo acesso observado no assembly; testar
   variantes pequenas de expressões e temporários. Usar o permuter em
   diferenças de ordem/alocação, depois de confirmar o pipeline de compilação.
4. Exigir `match.py` e o rebuild completo antes de mover uma candidata para
   `src/`; relocações mascaradas no teste isolado são verificadas pelo SHA-1.
5. Atualizar o README no mesmo commit, com uma evidência reproduzível do
   ganho, e publicar sem dumps ou artefatos privados.

O estado atual é uma base ampla de reconstrução funcional. Ainda não representa
um port nativo completo, uma prova de equivalência para todas as entradas ou
100% de C byte-idêntico.
