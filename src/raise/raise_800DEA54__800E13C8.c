#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800E13C8", func_800E13C8);

typedef struct { u8 pad[0x110]; u16 field; u8 tail[0x96]; } Record_800E1388;
extern Record_800E1388 D_80091618[];

s32 func_800E1450(u32 a) {
    extern u8 D_80100F38[];
    u8 *w = D_80100F38 + (a & 0xFFFF) * 0x79C;
    u16 s;

    if (*(s16 *)(w + 0x2B8) != 2) {
        goto ret0;
    }
    s = *(u16 *)(w + 0x2BA);
    if ((u32)(s - 10) < 2) {
        return 1;
    }
    if ((s16)s != 14) {
        goto ret0;
    }
    return 1;

ret0:
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800E13C8", func_800E14C4);
