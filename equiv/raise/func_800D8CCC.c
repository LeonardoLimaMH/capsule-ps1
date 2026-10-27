/* arg0: small */
#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[], D_80091618[], D_800EF364[];
extern s32 D_800EE9B8[];
extern s32 func_800B1260(s32), func_800B12D8(s32);
extern void func_800DCC94(s32), func_800D0730(void *, s32, s32, s32);

void func_800D8CCC(s32 a0) {
    s32 k = func_800B1260(a0);
    u8 *p = D_80100F38 + (u16)k * 0x79C;
    u16 x = *(u16 *)(p + 0x336), y = *(u16 *)(p + 0x338);
    u8 *e;
    *(u16 *)(p + 0x332) = x;
    *(u16 *)(p + 0x334) = y;
    func_800DCC94(a0);
    *(u16 *)(p + 0x32A) = *(u16 *)(p + 0x32C);
    *(u16 *)(p + 0x324) = *(u16 *)(p + 0x326);
    D_800EE9B8[1 - a0] = 0;
    func_800D0730(p + 0x1CC, (s16)(x - 1), (s16)(y - 1), 0);
    e = D_80091618 + (u16)k * 0x1A8;
    if (*(u16 *)(e + 0x90) != 0) e = D_80091618 + (func_800B12D8(a0) & 0xFFFF) * 0x1A8;
    if (D_800EF364[*(u16 *)(e + 0x10) * 64 + (s16)x * 8 + (s16)y - 9] != 0xFF) {
        *(s32 *)(D_80091618 + (u16)k * 0x1A8 + 0xA4) = (s16)x;
        *(s32 *)(D_80091618 + (u16)k * 0x1A8 + 0xA8) = (s16)y;
    }
}
