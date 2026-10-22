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

Estado em 2026-10-22: 5 binários idênticos; heurística `ghidra` no padrão; rodada
automática completa nos 5 alvos (+99 funções); progresso total 1,58%.

1. **Permuter**: as duas últimas rodadas foram interrompidas pelo Claude Code por
   falta de memória (o WSL pode usar até 10 GB de 15,6 GB). Antes de rodar de novo:
   baixar `memory=` em `%USERPROFILE%\.wslconfig` para 8GB (e
   `wsl --shutdown`) ou usar `--jobs 4`. Comando:
   `./run.sh python3 tools/permute_batch.py --bench --seconds 300 --max-diff 20 --jobs 4`
   - 2026-10-22: terceira tentativa (`--target <alvo> --seconds 180 --max-diff 20 --jobs 3`,
     todas as pendentes) também foi interrompida por falta de memória (só ~3,5 GB livres
     no Windows), ainda na seleção de candidatos do yuugi; nenhum resultado perdido. O
     container órfão foi parado (`docker ps` para conferir). **Antes de repetir**: fechar
     outros programas ou baixar `memory=` no `.wslconfig` para 6–8 GB + `wsl --shutdown`;
     se possível, iniciar o Claude Code com `CLAUDE_CODE_DISABLE_BG_SHELL_PRESSURE_REAP=1`.
   - Varredura de compiladores/níveis de otimização: rejeitada (ver `docs/BENCH.md`).
2. ~~Ghidra como fonte de rascunho~~: aceito (+6 na bancada). Para funções novas:
   abrir o Ghidra (ver `docs/NOTES.md`, seção Ghidra), `python tools/ghidra.py all`.
3. ~~Destino dos overlays~~: resolvido (`func_8001A480` troca o destino para `0x80097800`).
4. Funções acima de 0x800 bytes ainda não passaram pelo autodecomp (`--max-size`).
5. `.rodata` por unidade de tradução: casamentos adiados por usar `.rodata`
   (strings, tabelas de salto) esperam a migração.
6. Trabalho manual: `docs/wip/STATUS.md` (`./run.sh python3 tools/wip.py check`).

## Referências

- Processo e regras de aceitação: `docs/PROCESS.md`
- Histórico da bancada: `docs/BENCH.md`
- Descobertas técnicas: `docs/NOTES.md`
