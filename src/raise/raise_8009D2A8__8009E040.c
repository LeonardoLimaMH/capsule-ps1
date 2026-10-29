#include "common.h"

void func_8009E040(void) {

}

void func_8009E048(void) {
    func_8009E23C();
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009E068);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009E12C);

#include "common.h"

s32 func_8009E1C4(void) {
    extern s16 D_800ED88C[];
    extern s32 D_800F0550[];
    extern s32 D_800F0578[];
    s32 temp_v0;

    temp_v0 = func_8009DFAC();
    if (temp_v0 == -1) {
        (*D_800ED88C) = 0;
        func_800BCF98(1);
        (*D_800F0550) = (*D_800F0578);
    }
    return temp_v0;
}

void func_8009E21C(void) {
    func_8009DFAC();
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009E23C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009E3A8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009E508);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009E568);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009E598);

void func_8009E72C(void) {
    func_8009F3D4();
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009E74C);

void func_8009ED34(void) {
    func_8009ED54();
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009ED54);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009EDA0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009F00C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009F1C4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009F3D4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_800A0014);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_800A00E4);

void func_800A0214(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_800A021C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_800A0424);

#include "common.h"

void func_800A04B8(void) {
    func_80025CEC(1, 7, 7, 1);
    func_80025E54(1, 7, 7);
}
