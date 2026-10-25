#include "common.h"

/* stub-ret: mixed */
/* arg2: small */
extern s32 D_800F0C94[];
extern s32 func_800B1260(s32);
extern void func_800C17D8(s32);
extern s32 func_800E194C(s32, s32, s32, s32, s32);

s32 func_800C0EE8(s32 a0, s32 a1, s32 a2) {
    s32 k = func_800B1260(a0);
    s32 v;
    if ((u16)k == 0xFFFF) return 0xFFFF;
    switch ((s16)a1) {
    case 0:
        v = D_800F0C94[0];
        func_800C17D8(a0);
        break;
    case 1: case 2: case 3: case 4:
        v = D_800F0C94[(s16)a2 + 1];
        break;
    case 5:
        v = D_800F0C94[(s16)a2 + 0x17];
        func_800C17D8(a0);
        break;
    default:
        v = D_800F0C94[(s16)a2 + 0x25];
        break;
    }
    return func_800E194C(a0, (u16)k, (s16)a1, (s16)a2, v);
}
