# AGENTS.md — guia para agentes de IA neste repositório

Escrito para um agente que **acabou de chegar** e não sabe nada do projeto. Leia
inteiro antes de mudar qualquer arquivo. Duas IAs trabalham aqui em paralelo
(Claude e Codex). Este arquivo é o contrato entre elas e o usuário; a seção 11
registra o que cada uma considera prioritário, até chegarem a um acordo.

Idioma do projeto: **português** (commits, README, documentação, conversa com o usuário).

---

## 0. Resumo de 30 segundos

- **O que é:** decompilação de *Yu-Gi-Oh! Monster Capsule: Breed & Battle* (PS1,
  `SLPM-86096`). O objetivo é C que, compilado com o compilador da época, gere
  **binários idênticos byte a byte** aos do disco.
- **Prova de correção:** os 5 SHA-1 do `make` (seção 3). Nada que quebre um deles entra.
- **Onde trabalhar:** clone no WSL2 (`~/capsule-ps1`), com comandos via `./run.sh`
  (container Docker). Na pasta do Windows tudo fica 50–100× mais lento
  ([docs/AMBIENTE.md](docs/AMBIENTE.md)).
- **Como medir o progresso:**
  - o bloco de progresso do [README](README.md), gerado por `tools/progress.py`;
  - o [ByteMatch](https://bytematch.dev/LeonardoLimaMH/capsule-ps1), gerado por
    `tools/objdiff_report.py`.
- **Onde estão os bytes que faltam:** em funções de 256 B a 4 KB, que são 87% do
  que falta. As ferramentas automáticas só fecham funções pequenas; as médias
  precisam de C reescrito olhando o assembly (seção 6).

---

## 1. Contexto: o que é o projeto e onde ele está

O jogo tem 5 executáveis MIPS (R3000):

| Alvo | Arquivo do disco | Papel | Endereço |
|---|---|---|---|
| `yuugi` | `YUUGI.EXE` | programa principal | `0x80010000` |
| `slpm` | `SLPM_860.96` | boot/loader | `0x80110000` |
| `chess` | `CHESS.BIN` | overlay: batalha | `0x80097800` |
| `raise` | `RAISE.BIN` | overlay: criação de monstros | `0x80097800` |
| `etc` | `ETC.BIN` | overlay: menus | `0x80097800` |

**Duas frentes de trabalho**, que não se confundem:

1. **C equivalente** (`equiv/`): funciona igual ao original, validado por teste
   diferencial em emulação (`tools/difftest.py`). Cobre ~99% das funções. Não conta
   como byte-exact.
2. **C byte-exact** (`src/`): compila para os mesmos bytes. É a meta: **100%**. No
   início de novembro de 2026 estava em ~7,8% dos bytes e ~34% das funções.

**Compiladores** (escolhidos por arquivo em `config/compilers.txt`):
- `2.7.2-psx`: o padrão quando o arquivo não aparece na lista.
- `2.8.1-psx`.
- `2.7.2-cdk`: GCC do CDK da Sony; muito código de jogo casa só nele.
- `2.6.3-psx`.
- `+g0fill` (`config/g0fill.txt`): perfil das bibliotecas PsyQ, com `-G0` e o
  preenchimento do ASPSX antigo.

Todos usam `-O2 -G8`, montados pelo maspsx, que emula o ASPSX 2.79. **O mesmo
arquivo-fonte pode ter sido compilado com compiladores diferentes no original**:
o repositório resolve isso dividindo arquivos em unidades de tradução (TUs) com
`tools/split_tu.py`.

---

## 2. Regras inegociáveis

1. **Os 5 SHA-1 têm de continuar idênticos** em todo commit:

   ```
   yuugi ded3d5e61d5906077d0171396fea4ca3959ecf23   slpm  a4d3c7f4750acc79a29f2f941449f73950497e5e
   chess a6a63cc46a633968573c23b5681bb178070dba25   raise 92ccafd66ecb0030f9bfff109c855c09dbb4cf8b
   etc   f14bbffbbee2ec2013b481a2f814997b3984ce74
   ```

2. **Nenhum dado do jogo no git.** Ficam fora do controle de versão:
   - `disc/`, `asm/`, `build/` e `.cache/`;
   - assets e binários;
   - qualquer trecho do assembly original copiado para documentos versionados.
3. **Segredos:** o `.env` (`SITE`, `KEY` do GitHub, `BYTE_MATCH_TOKEN`) nunca é
   impresso, commitado ou colocado em URL gravada no `.git/config`. O push usa
   `.cache/tmp/push.sh`, que passa a chave só na linha de comando e mascara a saída.
4. **Código de terceiros:** só com licença MIT ou CC0. O texto da licença vai em
   `docs/terceiros/`, e um comentário de origem fica na função. Código AGPL
   (sotn-decomp, BFM-decomp) pode ser lido, nunca copiado.
5. **Baixar ou executar código externo** exige autorização do usuário. Já
   autorizados: compiladores antigos, objdiff-cli e os projetos PsyQ de
   `docs/terceiros/`.
6. **Não mexer no trabalho não publicado da outra IA:** arquivos não commitados,
   containers e cópias de trabalho dela. Antes de começar, faça `git pull` e confira
   se a função ainda está em `INCLUDE_ASM`.
7. **Um `[MATCH]` não basta.** O `tools/match.py` mascara relocações. A prova é o
   build completo com os 5 SHA-1.
8. **Mudanças em ambiente compartilhado** (Docker Desktop, `.wslconfig`, Makefile,
   cabeçalhos globais, ferramentas usadas pelas duas) são documentadas no mesmo
   commit, em `docs/` ou no README.

---

## 3. Setup do zero

```bash
# Windows: o projeto roda dentro do Ubuntu do WSL2 (o Docker Desktop precisa da
# integração com o Ubuntu ligada: Settings → Resources → WSL integration)
wsl -d Ubuntu
git clone https://github.com/LeonardoLimaMH/capsule-ps1.git ~/capsule-ps1 && cd ~/capsule-ps1
# disc/  : dump extraído do disco do usuário (python3 tools/extract_disc.py <bin> disc)
# .env   : pedir ao usuário (ou copiar da cópia existente)
docker build -t ygo-decomp-tc docker     # uma vez (a imagem já existe nesta máquina)
./run.sh make split                      # ~20 s: gera asm/ a partir do disco
./run.sh make -j10                       # ~6 s: compila e confere os 5 SHA-1
```

Se aparecer `Permission denied` em `./run.sh`, rode `chmod +x run.sh`. No Linux, o
`run.sh` executa o container com o seu usuário. Arquivos com dono root deixados por
versões antigas se corrigem com
`docker run --rm -v "$PWD:/work" ygo-decomp-tc chown -R 1000:1000 /work`.

Detalhes do ambiente, medições e ajustes da máquina: [docs/AMBIENTE.md](docs/AMBIENTE.md).

---

## 4. Mapa do projeto

| Caminho | O que é |
|---|---|
| `src/<alvo>/*.c` | fontes byte-exact. Cada arquivo é uma TU; as funções ainda não decompiladas estão em `INCLUDE_ASM("asm/...", nome);` |
| `equiv/<alvo>/<função>.c` | C equivalente (frente funcional). Ao integrar a função em `src/`, **apague** o arquivo daqui (`git rm`) |
| `config/<alvo>.yaml` | configuração do splat: subsegmentos (uma linha por TU: `[offset, c, arquivo]`), `.rodata` por TU |
| `config/compilers.txt` | compilador por arquivo (`src/x/y.c 2.8.1-psx`); quem não aparece usa `2.7.2-psx` |
| `config/g0fill.txt`, `spfill.txt` | arquivos no perfil das bibliotecas PsyQ |
| `config/rawdiv.<alvo>.txt`, `destload.<alvo>.txt` | variações do montador por função (divisão sem checks; loads expandidos pelo registrador de destino) |
| `config/extra_syms.<alvo>.ld` | símbolos absolutos extras (nomes do SDK para endereços) |
| `config/symbols.<alvo>.psyq.txt` | funções do SDK PsyQ identificadas por assinatura |
| `include/` | `common.h`, tipos, `m2c.h` (`M2C_FIELD` etc.), `include_asm.h` |
| `tools/` | ferramentas (tabela no README, seção "Ferramentas") |
| `tests/` | pytest (`./run.sh make test`) |
| `docs/` | `AMBIENTE.md`, `PROCESS.md`, `BYTE_EXACT_STRATEGY.md`, `terceiros/`, notas e auditorias |
| `objdiff.json` | gerado por `tools/objdiff_report.py` (unidades do relatório do ByteMatch) |
| `asm/`, `build/`, `.cache/` | gerados; fora do git |
| `.cache/fullasm/` | assembly de **todas** as funções, inclusive as já em C (gerado no `make split`) |
| `.cache/auto/<alvo>/<f>.c` + `.gcc` | fila de integração do `autodecomp.py --apply` (o `.gcc` precisa ser igual ao perfil do arquivo) |

---

## 5. Ferramentas que você vai usar

| Para | Comando (sempre via `./run.sh`) |
|---|---|
| comparar um C com o original | `python3 tools/match.py <alvo> <f> <arquivo.c> --gcc X [--g0fill]` (lado a lado) |
| diferença classificada | `python3 tools/align_diff.py <alvo> <f> <arquivo.c> --gcc X -v` |
| integrar candidatos | `python3 tools/autodecomp.py <alvo> --apply` (lê `.cache/auto/<alvo>`) |
| dividir um arquivo em TUs | `python3 tools/split_tu.py <alvo> <arquivo> <novo> <primeira_função> --gcc X`, depois `rm -rf asm && make split` |
| switch com tabela de saltos | `python3 tools/rodata_migrate.py <alvo> <f> <c> --gcc X` |
| permuter | `python3 tools/permute.py <alvo> <f> <c> --gcc X --seconds 90 --jobs 6` |
| buscas automáticas | `trimargs.py`, `retype.py`, `structidx.py`, `bytearith.py`, `profile_sweep.py` |
| importar C do SDK de outro projeto | `tools/ext_import.py` ([docs/terceiros/](docs/terceiros/README.md)) |
| progresso | `python3 tools/progress.py --readme --staged` (README); `make report` + `objdiff_report.py --upload` (ByteMatch) |

---

## 6. Workflow prescritivo: tornar uma função byte-exact

1. **Escolher.** Priorize **bytes**, não quantidade de funções. Uma função de 400 B
   a 5 diferenças vale mais que dez de 20 B. Funções do CHESS: ver seção 8.
2. **Juntar as fontes de C**, na ordem:
   - `equiv/<alvo>/<f>.c`, o C funcional escrito à mão, que costuma ser o melhor
     ponto de partida;
   - as variações em `.cache/{xc,xc2,si,rt,tr2,gf}/`.
3. **Testar os 4 compiladores** (e `+g0fill` no SDK) antes de mexer no C. Muitas
   funções casam num compilador diferente do arquivo onde estão.
4. **Ler a diferença** (`align_diff -v` e `match.py`) e mudar **uma causa por vez**:
   - **largura:** `lh`/`lhu` → `s16`/`u16`;
   - **imediato no %lo:** aritmética em bytes → campo de struct tipado
     (`D[i].campo`);
   - **temporário a mais ou a menos:** reescrever a expressão. Exemplo: o original
     guarda `n<<1` num registrador e escolhe entre ele e o negativo, então use
     `x = n<<1; if (c) t = -x; else t = x;`;
   - **argumentos que o m2c inventa:** tirar da chamada;
   - **ordem/registrador:** permuter, por último.
5. **Permuter** só para o resíduo (até ~10 diferenças), no compilador certo,
   90–240 s. Desconfie de zero com `volatile pad`: confira com `match.py`.
6. **Posicionar.**
   - Se o compilador que casou não é o do arquivo, troque o perfil do arquivo
     inteiro, mas só se todas as funções C dele continuarem casando.
   - Senão, isole a função num TU próprio.
   - Em seguida: `rm -rf asm && make split && make`. A divisão sozinha tem de
     manter os 5 SHA-1.
7. **Integrar.** Ponha o C em `.cache/auto/<alvo>/<f>.c` com `.gcc` igual ao perfil
   do arquivo e rode `autodecomp.py <alvo> --apply`. Se o arquivo usa `.rodata`
   (switch, strings), use `rodata_migrate.py`.
8. **Validar:** `./run.sh make -j10`, com os 5 `[OK]`.
9. **Publicar:**

   ```bash
   git rm equiv/<alvo>/<f>.c
   git add <seus arquivos>
   ./run.sh python3 tools/progress.py --readme --staged && git add README.md
   git commit                       # mensagem em português + linha Co-Authored-By
   bash .cache/tmp/push.sh
   ./run.sh make report && python3 tools/objdiff_report.py --upload
   ```

---

## 7. Critérios objetivos de conclusão

- **Uma função está pronta** quando:
  - está em C em `src/` (sem `INCLUDE_ASM`);
  - o build tem os 5 SHA-1 corretos;
  - o `equiv/` dela foi removido;
  - o README foi recalculado no mesmo commit;
  - o commit está no GitHub e o relatório no ByteMatch.
- **Um lote está pronto** quando todas as funções dele estão prontas e
  `./run.sh make test` não piorou.
- **Uma ferramenta nova está pronta** quando está documentada no README (tabela de
  ferramentas) e tem uso registrado no commit.
- **O projeto está pronto** quando o ByteMatch marca 100% de código casado nos 5
  binários.
- **Não está pronto:**
  - um `[MATCH]` isolado;
  - um C que "compila";
  - um percentual copiado de log antigo.

---

## 8. Controle de escopo e coordenação entre as IAs

- **Divisão de áreas** (proposta, a confirmar na seção 11):
  - **Codex:** CHESS.
  - **Claude:** YUUGI, SLPM, RAISE e ETC.
  - **SDK PsyQ:** de quem chegar primeiro, avisando no commit.
- **Antes de começar:** `git pull --rebase`. Se uma função citada como pendente já
  está em C, não refaça.
- **Commits pequenos e frequentes**, cada um com seus 5 SHA-1. Não acumule horas de
  trabalho sem push: a outra IA pode estar no mesmo arquivo.
- **Mexa só no que a tarefa exige.** Não reformate arquivos, não renomeie símbolos
  em massa e não troque o perfil de arquivos fora do seu lote. Mudanças em
  ferramentas compartilhadas (`tools/match.py`, `psx_as.py`, Makefile,
  `include/*.h`) precisam de motivo no commit e não podem alterar o resultado dos
  outros.
- **Arquivos de outra IA ainda não commitados** não são seus.

---

## 9. Conhecimento acumulado (armadilhas já pagas)

- **Desempenho:** Docker no Windows lendo `C:\` é o gargalo. No WSL2, o build cai de
  5–10 min para 6 s e o `--apply` de 10 min para 1 s.
- **Git Bash → `wsl.exe`:** laços e variáveis inline se perdem na passagem. Use
  arquivos de script. Prefixe com `MSYS_NO_PATHCONV=1`.
- **Fim de linha:** listas geradas pelo Python do Windows têm CRLF; remova o `\r`
  antes de usá-las no bash.
- **Scripts com nome de módulo** (`queue.py`, `json.py`) quebram o Python. Use
  nomes únicos.
- **`$at` × destino:** parte do SDK expande `lbu $2,sym($4)` pelo registrador de
  destino, como o GNU as. Liste a função em `config/destload.<alvo>.txt`.
- **`lui $at` / `la`:** forma de macro gerada só pelo `2.7.2-psx`. O `cdk` sempre
  separa `%hi`/`%lo`. Uma função com macro no meio de código `cdk` precisa de TU
  próprio.
- **Declarações duplicadas** ao integrar (typedef repetido, global com tipos
  diferentes):
  - Unifique sem mudar o código gerado e confira todas as funções do arquivo.
  - Exemplo: `*D` com `D` declarado `s32[]` é a mesma leitura que `(s32)D` com `D`
    declarado ponteiro.
  - Trocar o tipo de um global pode mudar o código das outras funções do arquivo:
    um `volatile` ou alias a mais força recargas.
- **`split_tu.py`** leva para o novo TU os typedefs/externs do meio do arquivo.
  Arquivos novos não são rastreados: `git checkout` não os desfaz.
- **`va_start` do PsyQ** é `ap = (char *)&fmt + sizeof(fmt)`. Isso explica a
  gravação redundante de `fmt` no próprio slot.
- **Só o quadro de pilha difere:** ajuste o tamanho dos arrays locais.
- **Permuter:** a pontuação dele ignora o tamanho da pilha.
- **`profile_sweep.py`:** resultados valem só para o mesmo C e o mesmo perfil de TU
  (`fp=`); linhas antigas sem `fp` são refeitas.
- **objdiff:** o relatório ignora diferenças só de relocação; os endereços reais
  são provados pelo SHA-1.

### Formas de C que fecharam funções médias (reescrita manual)

Teste estas antes do permuter:

- **Campo de struct na própria instrução:** quando o original tem `lw 0x798(rX)` e o
  compilado dobra o deslocamento no endereço, declare o global como array de struct
  e acesse `D[i].campo`. Um cast `((S *)D)[i]` não basta: a declaração tem de ser do
  tipo struct.
- **Ponteiro temporário para o elemento:** `q = &D[i]; q->campo`. Muda a alocação de
  registradores; fechou uma família de três funções de ~460 B.
- **Campo matriz:** um endereço como `p + 0x48E + i*32 + j*2`, com a base da linha
  calculada fora do laço, é `p->g[i][j]` com `s16 g[][16]` em `0x48E`.
- **Fluxo natural em vez de `goto`:** o rascunho do m2c junta ramos com
  `var = X; goto block`. Reescrito como `if/else` com o comando em cada ramo, o
  compilador une os ramos sozinho e a ordem das instruções fica como no original.
- **Argumento faltando:** um global declarado e não usado no rascunho, cujo endereço
  o original carrega em `$a0` antes de um `jal`, é argumento de uma chamada.
- **Temporário separado:** `x = n<<1; if (c) t = -x; else t = x;` em vez de
  `t = n<<1; if (c) t = -t;`.
- **Tipos naturais do SDK:** parâmetros `short` (`s16`) e tabelas de ponteiros para
  struct, como em `_ss_score[sep][seq]`.
- **Um global com vários tipos no mesmo arquivo:** declare uma vez como struct (use
  `union` se o mesmo campo é lido com larguras diferentes). Nas funções antigas,
  `(u8 *)D` gera o mesmo código que o `u8[]`. Confira o arquivo inteiro com
  `.cache/tmp/funccmp2.py` ou com o build.

## 10. Quando parar uma abordagem

- **Permuter:** pontuação acima de ~500 depois de 120 s quase nunca chega a zero.
  Mude o C ou o compilador antes de rodar de novo, e nunca repita a mesma busca sem
  mudar nada.
- **Função a mais de ~0,5 diferença por instrução:** o C está estruturalmente longe.
  Reescreva a partir do assembly em vez de ajustar.
- **Três hipóteses seguidas sem reduzir as diferenças:** registre o que tentou (na
  ficha em `docs/wip/` ou no commit) e passe para a próxima da fila.
- **Algo que exige mexer em ambiente, licença ou área da outra IA:** pare e pergunte
  ao usuário.

---

## 11. Prioridades de cada IA (até chegarem a um acordo)

### [CLAUDE] O que é importante para mim

1. **Bytes antes de funções.** A métrica que importa é o código casado no
   ByteMatch. Quase todo o progresso que falta está em funções médias e grandes;
   fechar funções de 20 B é barato e não move a barra.
2. **Reescrever as funções médias olhando o assembly.** As ferramentas automáticas
   chegaram ao limite nelas (44% das diferenças são de estrutura). O caminho é uma
   fila priorizada por bytes ÷ diferenças, trabalhada uma a uma, com variantes do C
   testadas em lote. No WSL, centenas de compilações levam segundos.
3. **Compilador certo antes de tudo.** Cerca de metade dos casamentos desta rodada
   vieram de compilar no compilador certo e trocar o perfil ou dividir o TU.
4. **Publicar pouco e sempre:** um lote validado, um commit e um push, mais o
   ByteMatch. Nada de trabalho grande só local.
5. **Documentar a causa, não só o resultado.** Cada truque que fecha uma família
   (`va_start`, `destload`, struct no lugar de bytes) vai para a seção 9, para a
   outra IA não pagar o mesmo preço.
6. **Não quebrar o que a outra IA usa.** Mudanças em ferramentas e cabeçalhos
   compartilhados ficam compatíveis e testadas nos 5 binários.

### [CODEX] O que é importante para mim

*(a preencher pela outra IA)*

### Acordado pelas duas

*(itens que as duas IAs aprovarem entram aqui e passam a valer como regra)*
