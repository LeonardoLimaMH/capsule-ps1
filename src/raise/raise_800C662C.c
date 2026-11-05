#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C662C", func_800C662C);

s32 func_800C675C(s32 a0, s32 a1) {
    extern u8 D_80100F38[];
    extern s32 func_800B1260(s32);
    u8 *p = D_80100F38 + (func_800B1260(a1) & 0xFFFF) * 0x79C;
    s16 count = *(s16 *)(p + 0x376) - 1;
    *(s16 *)(p + 0x376) = count;
    if (count == 0) {
        u8 *q = p;
        q += *(s16 *)(p + 0x2CC) * 4;
        *(s32 *)(p + 0x2BC) = *(s32 *)(q + 0x2F0);
    } else {
        *(s32 *)(p + 0x2BC) = *(s32 *)(p + 0x2DC + *(s16 *)(p + 0x2CC) * 4);
    }
    return *(s32 *)(p + 0x2BC);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C662C", func_800C6800);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C662C", func_800C69B0);
