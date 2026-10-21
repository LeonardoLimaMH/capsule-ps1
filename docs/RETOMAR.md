# Como retomar o trabalho

Estado salvo em 2026-10-21 (último commit desta sessão). Nada se perde ao suspender
o notebook: o código, as configurações e as notas estão no git; resultados
intermediários ficam em `.cache/` (local, não versionado) e podem ser regenerados.

## 1. Conferir que está tudo íntegro

```bash
docker info >/dev/null && echo "Docker ok"   # o Docker Desktop precisa estar rodando
./run.sh make -j8          # os 5 binários devem sair [OK] (SHA-1 idêntico)
./run.sh make test         # rebuild + testes diferenciais + validação dos overlays
```

Se o `make` reclamar de arquivos faltando em `asm/`: `./run.sh make split` antes.

## 2. O que estava rodando ao suspender

**Permuter em lote nos quase-acertos da bancada** (candidato a heurística). Se foi
interrompido, rode de novo; casamentos já obtidos ficam em `.cache/auto/` e não se perdem:

```bash
./run.sh python3 tools/permute_batch.py --bench --seconds 120 --max-diff 40
```

Ao terminar: medir na bancada e aplicar o que casou.

```bash
./run.sh python3 tools/bench.py --run permuter-lote
./run.sh python3 tools/bench.py --compare padrao-v2 permuter-lote
for t in yuugi slpm chess raise etc; do ./run.sh python3 tools/autodecomp.py $t --apply; done
./run.sh make -j8 && ./run.sh make test
python tools/progress.py --readme && git add -A && git commit
```

## 3. Próximos passos planejados

1. Decidir pelo resultado do permuter em lote (regra em `docs/PROCESS.md`).
2. Testar o pseudo-C do Ghidra como fonte alternativa de rascunho, medido na bancada
   (`tools/ghidra.py`; abrir o Ghidra com o plugin e o projeto `RECOMP/Ghidra`).
3. Questão em aberto dos overlays (`0x80098000` x `0x80097800`): seguir o comando 6 da
   fila do CD (`func_800190F4`) até o callback de leitura — ver `docs/NOTES.md`.
4. Trabalho manual: `docs/wip/STATUS.md` (`./run.sh python3 tools/wip.py check`).

## Referências

- Processo e regras de aceitação: `docs/PROCESS.md`
- Histórico da bancada: `docs/BENCH.md`
- Descobertas técnicas: `docs/NOTES.md`
