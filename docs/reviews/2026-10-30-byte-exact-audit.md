# Revisão do estado e continuação byte-exact

Base revisada: `c36dcab`, em 30/10/2026. O build foi executado numa cópia
isolada do commit, com o dump local. A árvore estava limpa no início da revisão.
Alterações posteriores de outra IA, incluindo `tools/bytearith.py`, foram
preservadas fora deste lote.

## Estado verificado da base

- `make -j4 check`: os cinco binários coincidiram byte a byte com os originais.
- `tools/progress.py --check --staged`: README coerente com o índice.
- Byte-exact: 4,78% dos bytes do jogo; 5,55% incluindo SDK; 954 funções em C.
- Funcional: 99,44% dos bytes convertíveis; dez funções C pendentes, sete em
  YUUGI e três em SLPM. CHESS, RAISE e ETC têm equivalentes contabilizados
  para todo o código convertível, mas isso não representa 100% byte-exact.

Os commits desde `d69ddf0` adicionaram perfis de preenchimento do retorno do
SDK, referências às strings originais, ajustes de `$gp` e campos de globais
com `M2C_GFIELD`. O rebuild confirma a integração desses fontes; não significa
que todas as candidatas de `equiv/` tenham sido reexecutadas nesta revisão.

## Testes e correções

A primeira amostra executou 39 testes: 36 passaram e três falharam por
expectativas antigas já documentadas na auditoria de 29/10. A revisão dos
testes relacionados corrigiu o mesmo problema em mais nove parametrizações:

- O exemplo de progresso agora espera uma pendência convertível, funcional
  de 16/36 bytes e duas de três funções em C; o assembly original fica separado.
- Os testes de dispositivos, contratos do SDK e despacho conferem também o
  evento final `io:gte`, com os valores esperados de todos os registradores GTE.
  O evento não é filtrado nem removido do validador.
- Um novo teste executa duas escritas COP2 distintas, com CPU e RAM finais
  iguais, e exige que a comparação rejeite a diferença no GTE.

Após os ajustes, **60 testes passaram**, com o comando:

```sh
python3 -m pytest -q tests/test_codegen_profiles.py tests/test_progress_snapshot.py \
  tests/test_profile_sweep.py tests/test_permute_pipeline.py tests/test_matching_helpers.py \
  tests/test_difftest_io.py tests/test_functional_memory_types.py tests/test_functional_gp.py \
  tests/test_difftest_stack_args.py tests/test_sdk_contracts.py tests/test_stub_dispatch.py
```

Essa é uma seleção, não a suíte completa. Permanecem fora do escopo desta
revisão as limitações de argumentos `arg6/arg7`, assinaturas indiretas e
revalidação integral dos equivalentes registradas na auditoria anterior.

## Progresso desta rodada

Quatro funções novas foram integradas: `YUUGI:SpuInitMalloc`,
`SLPM:slpm_memchr`, `CHESS:func_800BE408` e `CHESS:func_800A4B34`.
As duas primeiras reaproveitam funções gêmeas; a terceira gêmea preparada,
`RAISE:func_800E79C0`, já havia sido integrada pela outra frente e não foi
contada novamente. As duas CHESS exigiram distinguir stores de byte sem
sinal e halfword com sinal para reproduzir as cargas de constantes originais.

Todas passaram no match do arquivo integrado, em **4.800 execuções
diferenciais sem inconclusivas** e no rebuild completo dos cinco binários.
Evidências: `../validation/byte-matching-2026-10-30-audit-next.json`.
As porcentagens atuais, posteriores à base desta revisão, ficam no README.
