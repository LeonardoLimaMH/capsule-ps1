#include "common.h"

extern u8 D_80100F38[];

s32 func_800C3210(s32 unused, s32 ctx) {
    u8 *obj = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s32 pc = *(s32 *)(obj + 0x2BC) + 1;
    u16 count = *(u16 *)(obj + 0x2CC) - 1;

    *(u16 *)(obj + 0x2CC) = count;
    *(s32 *)(obj + 0x2BC) = pc;
    return pc;
}
