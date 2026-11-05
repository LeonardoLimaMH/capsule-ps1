#include "common.h"

s32 func_800DEA54(s32 a0, s32 a1) {
    extern u8 D_80100F38[];
    extern s32 func_800B1260(s32);
    s32 res = 0;
    s32 i;
    u8 *p;
    s16 *ptr;

    p = D_80100F38 + (func_800B1260(a0) & 0xFFFF) * 0x79C;
    ptr = (s16 *)((s16)a1 * 16 + (s32)p + 0x746);
    for (i = 0; i < 7; i++) {
        res |= ptr[i];
    }

    return (s16)res;
}
