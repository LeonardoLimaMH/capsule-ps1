# Yu-Gi-Oh! Monster Capsule Breed & Battle (SLPM-86096) - decompilação
# Executar dentro do container do toolchain:  ./run.sh make [alvo]

BUILD_DIR   := build
CROSS       := mips-linux-gnu-
AS          := $(CROSS)as
LD          := $(CROSS)ld
OBJCOPY     := $(CROSS)objcopy
CPP         := $(CROSS)cpp
PYTHON      := python3
SPLAT       := splat split

# Compilador original: GCC 2.7.2 (cc1 do PsyQ) + maspsx (emula o ASPSX)
GCC_VERSION ?= 2.7.2-psx
CC1         := /opt/gcc-$(GCC_VERSION)/cc1
# compilador por arquivo (config/compilers.txt: "src/x/y.c 2.8.1-psx"); padrão: GCC_VERSION
cc1_for      = /opt/gcc-$(or $(shell awk '$$1=="$(1)"{print $$2}' config/compilers.txt 2>/dev/null),$(GCC_VERSION))/cc1
MASPSX      := $(PYTHON) /opt/maspsx/maspsx.py
MASPSX_FLAGS:= --aspsx-version=2.79 --expand-div --use-comm-section --dont-force-G0 --run-assembler --gnu-as-path $(AS) \
               -EL -Iinclude -march=r3000 -mtune=r3000 -no-pad-sections -O1 -G8

CPP_FLAGS   := -Iinclude -Iinclude/psyq -undef -Wall -lang-c -nostdinc \
               -D__GNUC__=2 -D__OPTIMIZE__ -Dmips -D__mips__ -D__mips -Dpsx -D__psx__ -D__psx \
               -D_PSYQ -D__EXTENSIONS__ -D_MIPSEL -D_LANGUAGE_C -DLANGUAGE_C -DUSE_INCLUDE_ASM
CC_FLAGS    := -O2 -G8 -quiet -mcpu=3000 -fgnu-linker -mgas -msoft-float -gcoff
AS_FLAGS    := -EL -Iinclude -march=r3000 -mtune=r3000 -no-pad-sections -O1 -G0

# --- executáveis: nome -> arquivo original ------------------------------------
TARGETS     := yuugi slpm chess raise etc
yuugi_ORIG  := disc/YUUGI.EXE
slpm_ORIG   := disc/SLPM_860.96
chess_ORIG  := disc/MASTER/PSF/CHESS.BIN
raise_ORIG  := disc/MASTER/PSF/RAISE.BIN
etc_ORIG    := disc/MASTER/PSF/ETC.BIN

.PHONY: all clean split check progress test bench wip catalog
.SECONDEXPANSION:

all: check

define TARGET_RULES
$(1)_C_SRCS   := $$(shell find src/$(1) -name '*.c' 2>/dev/null)
$(1)_S_SRCS   := $$(shell find asm/$(1) -name '*.s' -not -path '*/nonmatchings/*' 2>/dev/null)
$(1)_OBJS     := $$(patsubst %,$(BUILD_DIR)/%.o,$$($(1)_C_SRCS) $$($(1)_S_SRCS))

$(BUILD_DIR)/$(1).elf: $$($(1)_OBJS) $(BUILD_DIR)/$(1).ld config/extra_syms.$(1).ld
	$(LD) -EL -nostdlib --no-check-sections -Map $(BUILD_DIR)/$(1).map \
	    -T $(BUILD_DIR)/$(1).ld \
	    -T config/undefined_syms_auto.$(1).txt -T config/undefined_funcs_auto.$(1).txt \
	    -T config/extra_syms.$(1).ld \
	    -o $$@

$$($(1)_OBJS): | $(BUILD_DIR)/$(1).ld

$(BUILD_DIR)/$(1).exe: $(BUILD_DIR)/$(1).elf
	$(OBJCOPY) -O binary $$< $$@
endef
$(foreach t,$(TARGETS),$(eval $(call TARGET_RULES,$(t))))

$(BUILD_DIR)/%.ld: config/%.yaml
	$(SPLAT) $<
	$(PYTHON) tools/postsplit.py asm
	$(PYTHON) tools/ldpad.py $*

# Um .c depende de todos os .s que ele inclui via INCLUDE_ASM
# (src/<alvo>/<arq>.c -> asm/<alvo>/nonmatchings/<arq>/*.s)
C_ASM_DEPS = $$(wildcard asm/$$(dir $$*)nonmatchings/$$(notdir $$*)/*.s)

$(BUILD_DIR)/src/%.c.o: src/%.c $(C_ASM_DEPS) include/macro.inc $$(wildcard include/*.h) $$(wildcard config/compilers.txt)
	@mkdir -p $(dir $@)
	$(CPP) $(CPP_FLAGS) $< | $(call cc1_for,$<) $(CC_FLAGS) | $(MASPSX) $(MASPSX_FLAGS) -o $@

$(BUILD_DIR)/%.s.o: %.s include/macro.inc
	@mkdir -p $(dir $@)
	$(AS) $(AS_FLAGS) -o $@ $<

check: $(foreach t,$(TARGETS),$(BUILD_DIR)/$(t).exe)
	@$(PYTHON) tools/check.py $(foreach t,$(TARGETS),$(BUILD_DIR)/$(t).exe:$($(t)_ORIG))

split:
	$(foreach t,$(TARGETS),$(SPLAT) config/$(t).yaml;)
	$(PYTHON) tools/postsplit.py asm
	$(PYTHON) tools/ldpad.py $(TARGETS)

progress:
	@$(PYTHON) tools/progress.py

test:
	@$(PYTHON) -m pytest -q tests

# bancada fixa do pipeline automático (docs/PROCESS.md); ex.: make bench LABEL=teste
bench:
	$(PYTHON) tools/full_asm.py
	$(PYTHON) tools/bench.py --run $(or $(LABEL),manual)

# recompila as hipóteses do trabalho manual e atualiza docs/wip/STATUS.md
wip:
	$(PYTHON) tools/wip.py check

# confere o disco extraído contra config/disc_files.txt
catalog:
	$(PYTHON) tools/disc_catalog.py --check

clean:
	rm -rf $(BUILD_DIR)
