# decomp.anything (bancada de agentes) neste projeto

[decomp.anything](https://github.com/giveen/decomp.anything) (MIT) é uma bancada de
decompilação com agentes de IA. No modo *fork*, ele trabalha sobre um repositório que já
existe:

- clona o projeto, numa branch `decomp-wtf`;
- os agentes reservam funções (*claims*), escrevem C no arquivo-fonte e compilam com o
  build do próprio projeto;
- o objdiff julga cada tentativa; cada match vira um commit na `decomp-wtf`;
- notas e o cabeçalho compartilhado ficam disponíveis para todos os agentes.

O que ele resolve aqui: **coordenação entre as duas IAs**. Com os *claims*, ninguém pega a
mesma função, e cada tentativa fica registrada com pontuação e notas.

O que ele **não** muda: escrever o C que casa continua sendo o trabalho difícil (veja o
AGENTS.md, seções 6 e 9).

## Instalação nesta máquina (2026-11-03)

A instância usada é a **desktop**, instalada pelo usuário, numa distribuição WSL própria:

| O quê | Onde |
|---|---|
| distribuição WSL | `decomp-wtf` (Debian 13, usuário `decomp`) |
| app | `http://127.0.0.1:6464`, a porta padrão (o link com a chave de acesso é impresso por `decomp url`) |
| executável | `/home/decomp/.local/bin/decomp` |
| cópia do projeto (a única na `decomp-wtf`) | `/home/decomp/Decomp/capsule-ps1`, branch `decomp-wtf`, origem no GitHub; tem `disc/`, `orig/` e `.cache/bin/objdiff-cli` |
| Node | 22.23.4 em `/usr/local`. A atualização do REA exige Node ≥ 22.23.4; o Debian trazia o 20.19 |
| Docker | integração do Docker Desktop ligada também para a `decomp-wtf` (`IntegratedWslDistros`) |
| Java | OpenJDK 21 do Debian (`openjdk-21-jdk-headless`), para o Ghidra do app. O JDK instalado no Windows não vale: o app roda no Linux da `decomp-wtf` |

Notas:

- Na cópia da `decomp-wtf`, `./run.sh make split` e `make` dão os 5 SHA-1, e o relatório
  dá o mesmo número do ByteMatch.
- A instalação de teste no Ubuntu foi apagada; só existe a da `decomp-wtf`. O código-fonte
  do decomp.anything baixado do GitHub fica em
  `C:\Users\leonardo.queiroz\Documents\Projects\RECOMP\decomp.anything`, só para consulta.
- Para atualizar a cópia dos agentes com o `main`: `git fetch origin && git merge origin/main`
  (na branch `decomp-wtf`).
- `objdiff_report.py` aceita os objetos que o app pede (`build/objdiff/base/<alvo>/<arquivo>.o`)
  e recompila só esses.
- As distribuições do WSL compartilham a rede: a porta de uma aparece também nas outras.
  O app só esteve na 6465 porque a instância de teste ocupava a 6464.
- **Docker dentro do app:** a integração do Docker põe o usuário `decomp` no grupo
  `docker`. Um app aberto antes disso não tem o grupo e falha com `permission denied ...
  docker.sock`. Reinicie o app: `decomp stop` e `decomp url`.

### Preparação: o manifesto `.decomp.wtf.json`

Sem manifesto, o app trata o projeto como splat de um binário só. Ele pega o primeiro YAML
(`chess.yaml`), pede apenas o `CHESS.BIN` e não o acha na raiz da imagem do disco, porque
o arquivo fica em `MASTER/PSF/`.

O manifesto na raiz do repositório resolve isso:
- pede a **imagem `.bin` inteira do disco**, conferida pelo SHA-1 do dump do usuário;
- guarda o arquivo em `orig/SLPM-86096.bin` (fora do git);
- roda `tools/extract_disc.py`, `make split`, `make` (que confere os 5 SHA-1) e
  `objdiff_report.py --objects`.

Para outro dump do mesmo jogo, troque o `sha1` do manifesto.

Para MCP, o modo recomendado é o **stdio** (`wsl.exe ... decomp mcp`): não usa token, sobe
o app sozinho e não passa pela porta HTTP. O modo HTTP (`/mcp` com token Bearer) só serve
para clientes que não executam comandos. O token desse modo é uma senha: não vai para o
git nem para documentos.

### Como o build é chamado

O decomp.anything compila pelo `custom_make`/`custom_args` do `objdiff.json`. Aqui isso é:

```
./run.sh python3 tools/objdiff_report.py --objects
```

O comando refaz só os objetos que mudaram (2–3 s). O `objdiff.json` é gerado por
`tools/objdiff_report.py`; não edite à mão.

### Conectar um agente

```bash
# Claude Code no Windows (já feito; config em %USERPROFILE%\.claude.json)
claude mcp add decomp -s user -- wsl.exe -d decomp-wtf --cd "~" --exec /usr/local/bin/decomp mcp --name claude-code

# Codex (a outra IA): dentro da distribuição decomp-wtf
wsl -d decomp-wtf
decomp connect codex
```

O app sobe sozinho quando um agente conecta (`decomp mcp`).

## Fluxo

1. Os agentes trabalham em `/home/decomp/Decomp/capsule-ps1` (branch `decomp-wtf`). Cada
   match é um commit ali.
2. Os commits voltam para a cópia principal (`~/capsule-ps1` no Ubuntu), onde a prova final
   é feita. As duas distribuições não se enxergam, então a ponte é um *bundle* do git numa
   pasta do Windows:

   ```bash
   # na decomp-wtf
   cd ~/Decomp/capsule-ps1 && git fetch origin
   git bundle create /mnt/c/<pasta>/agents.bundle origin/main..decomp-wtf
   # no Ubuntu
   cd ~/capsule-ps1
   git fetch /mnt/c/<pasta>/agents.bundle decomp-wtf:agents
   git merge --no-ff agents
   ```

3. **Confira cada função dos arquivos alterados**, não só o build:

   ```bash
   ./run.sh bash .cache/tmp/chk_merge.sh            # funções C que não casam no perfil do arquivo
   python3 tools/revert_to_asm.py src/<alvo>/<arquivo>.c <função>...   # devolve ao assembly
   ./run.sh make -j10                               # os 5 SHA-1
   ```

   O app commita também as mudanças de structs e tipos. Com elas pode ir o C de uma função
   ainda em andamento, que não casa e quebra o build completo. Na primeira importação
   (2026-11-03), entraram 12 matches e 5 funções em andamento voltaram ao assembly.

4. Depois: `git rm` dos `equiv/` das funções casadas, `progress.py --readme --staged`,
   commit, push e ByteMatch (AGENTS.md, seção 6).

5. **Não faça merge do `main` de volta na `decomp-wtf` enquanto um agente estiver numa função
   devolvida ao assembly:** o merge apagaria o trabalho em andamento dele.

## Limites que importam neste projeto

- **Configuração e layout:** os agentes do decomp.anything só escrevem C e cabeçalhos. Não
  mudam `config/compilers.txt` nem o YAML do splat, e não dividem TUs. Boa parte dos matches
  deste projeto depende de trocar o compilador do arquivo ou de isolar a função num TU
  próprio (AGENTS.md, seção 6, passo 6). Isso continua sendo feito na cópia principal, com
  as ferramentas daqui (`split_tu.py`, `place2.py`, `rodata_migrate.py`).
- **Prova:** o objdiff dele ignora relocações, do mesmo jeito que o nosso relatório. A prova
  continua sendo o build com os 5 SHA-1, na cópia principal.
- **Escopo:** as regras do AGENTS.md valem também para os agentes que trabalham por ele.
