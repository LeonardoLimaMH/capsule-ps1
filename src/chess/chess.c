#include "ghidra.h"
#include "matching.h"
#include "common.h"

void func_80099B40(void) {

}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_80099B48);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_80099D38);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009A0B8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009A30C);

void func_8009A48C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xF) = 3;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009A498);
