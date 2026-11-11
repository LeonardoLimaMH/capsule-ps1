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

s32 func_800C69B0(s32 a0, s32 a1) {
    extern u8 D_80100F38[];
    extern s32 D_8006AF84[];
    extern struct { u8 pad[0x38]; s32 values[2]; } D_8006AFCC;
    extern s32 func_800B1260(s32);
    extern s32 func_800B46EC(s32);
    s32 t = D_8006AF84[0];
    u8 *p = D_80100F38 + (func_800B1260(a1) & 0xFFFF) * 0x79C;
    register u8 *pc asm("a0");
    s32 c;

    t -= D_8006AFCC.values[*(s16 *)(p + 0x2BA)];
    if (!(t < func_800B46EC(*(s16 *)(p + 0x36A)))) {
        c = 0x21;
        pc = *(u8 **)(p + 0x2BC);
        if (*pc != c) {
            register u8 *n asm("v0");
            register u8 *old asm("v1");
            do {
                n = pc + 1;
                old = pc;
                *(u8 **)(p + 0x2BC) = n;
                pc = n;
            } while (old[1] != c);
        }
        return *(s32 *)(p + 0x2BC);
    }
    c = 0x20;
    pc = *(u8 **)(p + 0x2BC);
    if (*pc != c) {
        register u8 *n asm("v0");
        register u8 *old asm("v1");
        do {
            n = pc - 1;
            old = pc;
            *(u8 **)(p + 0x2BC) = n;
            pc = n;
        } while (old[-1] != c);
    }
    *(s32 *)(p + 0x2BC) += 1;
    return *(s32 *)(p + 0x2BC);
}
