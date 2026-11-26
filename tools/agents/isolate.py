# isolate.py <alvo> <função> <perfil>: põe a função numa TU própria compilada com <perfil>
# (ex.: 2.7.2-cdk, 2.7.2-psx+g0fill+spfill); o resto do arquivo mantém o perfil original.
# Só mexe em src/, config/<alvo>.yaml e nas listas de config; depois: rm -rf asm && make split.
import pathlib, re, sys
sys.path.insert(0, "tools")
import split_tu

t, f, prof = sys.argv[1:4]
root = pathlib.Path(".")
F = next(p for p in sorted((root / "src" / t).glob("*.c"))
         if re.search(rf'INCLUDE_ASM\("[^"]+", {f}\);', p.read_text(errors="ignore")))
stem, key = F.stem, f"src/{t}/{F.stem}.c"
comp = {l.split()[0]: l.split()[1] for l in open("config/compilers.txt") if len(l.split()) >= 2 and not l.startswith("#")}
lines = lambda n: [l.strip() for l in open(f"config/{n}.txt") if l.strip() and not l.startswith("#")]
orig = comp.get(key, "2.7.2-psx") + ("+g0fill" if key in lines("g0fill") else "")
orig_sp = key in lines("spfill")


def set_sp(name, on):
    k = f"src/{t}/{name}.c"
    cur = open("config/spfill.txt").read().splitlines()
    cur = [l for l in cur if l != k] + ([k] if on else [])
    open("config/spfill.txt", "w", newline="\n").write("\n".join(cur) + "\n")


text = F.read_text(errors="ignore")
names = [m.group(2) or m.group(3) for m in split_tu.FUNC_START.finditer(text)]
i = names.index(f)
tag = f[5:] if f.startswith("func_") else f
if i + 1 < len(names):  # o que vem depois fica com o perfil original
    nxt = names[i + 1]
    ntag = nxt[5:] if nxt.startswith("func_") else nxt
    split_tu.split(t, stem, f"{stem}__{ntag}", nxt, orig)
    set_sp(f"{stem}__{ntag}", orig_sp)
base, sp = prof.replace("+spfill", ""), "+spfill" in prof
if i == 0:  # a função já é a primeira: o arquivo inteiro (agora só ela) muda de perfil
    split_tu.set_compiler(t, stem, base)
    set_sp(stem, sp)
    print(f"{f}: {key} -> {prof}")
else:
    split_tu.split(t, stem, f"{stem}__{tag}", f, base)
    set_sp(f"{stem}__{tag}", sp)
    print(f"{f}: src/{t}/{stem}__{tag}.c ({prof})")
