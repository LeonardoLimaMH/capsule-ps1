#include "ghidra.h"
#include "matching.h"
#include "common.h"

#include "common.h"

void func_8009CD9C(void *arg0) {
    extern M2C_UNK D_8006388C[];
    extern M2C_UNK D_80063890[];
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_80100CE0[];
    M2C_UNK var_a2;
    M2C_UNK var_a2_2;

    if (M2C_GFIELD(D_80085428, s8, 0xBF7) == -1) {
        func_800185F8();
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x34) & 0x7F) {
        func_80020844(-0x48, -0x28, 0x90, 0x30, 0, 0, 0, 0, 4);
        func_8001F1A8(-0x3E, -0x20, 0, 1, 0, D_80100CE0, 1, 9, 3);
        var_a2 = 0;
        if (M2C_GFIELD(D_80085428, s8, 0xBF7) == 0) {
            var_a2 = 3;
        }
        func_8001F1A8(-0x28, -0xC, var_a2, 1, 0, D_8006388C, 0, 2, 3);
        var_a2_2 = 0;
        if (M2C_GFIELD(D_80085428, s8, 0xBF7) != 0) {
            var_a2_2 = 3;
        }
        func_8001F1A8(0, -0xC, var_a2_2, 1, 0, D_80063890, 0, 3, 3);
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009CEE8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009D0AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009D2AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009D750);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009DA94);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009DB7C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009DD64);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009DED8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009E024);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009E1BC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009E448);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009E798);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009EA04);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009EB3C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009EC40);
