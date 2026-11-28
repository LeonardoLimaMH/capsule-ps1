#include "ghidra.h"
#include "matching.h"
#include "common.h"

s32 func_800A7CBC(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    extern u32 D_80063940[][15];
    s32 result = 0;
    register u8 *p asm("t1") = arg1 + 0x14;
    s32 value;

    if (arg4 == 6) {
        value = D_80063940[(arg0 + (arg2 * 0x2E8 + arg3 * 0x7C))[0x5E8]][8] >> 7;
    } else {
        value = D_80063940[(arg0 + (arg2 * 0x2E8 + arg3 * 0x7C))[0x5E8]][8] >> 11;
    }
    value &= 0xF;
    if (*(s16 *)(p + 0x10) < 0 || value < 2) {
        result = 3;
    } else if (*(s16 *)(p + 0x10) == 0 && *(s32 *)(p + 0xC) == value - 2) {
        result = 1;
        if (*(u16 *)(p + 0x12) != 0) {
            result = 2;
        }
    }
    return result;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A77E8__800A7CBC", func_800A7DCC);

void func_800A81D8(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    typedef struct {
        u8 pad[0x26];
        u8 unk26;
        u8 pad2[0x7C - 0x27];
    } Unk7C;
    extern u16 D_80100BC4[];

    register u8 *p asm("a0");
    register s32 offset asm("v0");

    offset = 0x280 - D_80100BC4[0];
    *(s16 *)(arg1 + 0x28) = offset;
    offset = (arg2 << 7) - D_80100BC4[1];
    *(s16 *)(arg1 + 0x2A) = offset;

    offset = arg2 * 0x2E8 + 0x5E8;
    p = arg0 + offset;
    offset = arg3 * sizeof(Unk7C);
    p += offset;
    switch (((Unk7C *)p)->unk26) {
    case 0:
        *(s16 *)(arg1 + 0x28) -= 0x40;
        break;
    case 1:
        *(s16 *)(arg1 + 0x28) -= 0x80;
        break;
    case 2:
        *(s16 *)(arg1 + 0x28) -= 0xC0;
        break;
    case 3:
        *(s16 *)(arg1 + 0x28) -= 0xC0;
        *(s16 *)(arg1 + 0x28) += arg3 << 5;
        break;
    case 4:
        break;
    }
}
