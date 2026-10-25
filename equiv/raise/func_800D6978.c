#include "common.h"

extern u8 D_80100F38[];
extern void func_800D0730(s16 *, s32, s32, s32);
extern s32 func_800D6A2C(s32, s32, s32, s32, s32, s32);

s32 func_800D6978(s32 a0, s32 a1, s32 a2) {
    s16 b[4];
    u16 k = a0;
    u8 *p = D_80100F38 + k * 0x79C;
    func_800D0730(b, (s16)(*(u16 *)(p + 0x332) - 1), (s16)(*(u16 *)(p + 0x334) - 1), 0);
    return func_800D6A2C(k, b[0], b[2], 3, (u8)a1, (u16)a2);
}
