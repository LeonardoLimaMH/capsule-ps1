/* arg1: small */
#include "common.h"

extern u8 D_80091618[];
extern void func_800A7730(s32), func_800A79D8(s32), func_800A7C7C(s32), func_800A7F20(s32);
extern void func_800A8484(s32), func_800A7600(s32);
extern s32 func_800A76C0(s32);

s32 func_800B1088(s32 a0, s32 a1, s32 a2) {
    u8 *e = D_80091618 + (u16)a1 * 0x1A8;
    s32 c;
    u16 k;
    if (*(u16 *)(e + 0x10) == 0xFFFF) c = 1;
    else c = *(u16 *)e == 0xFFFF;
    if (c == 1) return 1;
    k = a1;
    if (a2 == 0) {
        func_800A7730(k);
        func_800A79D8(k);
        func_800A7C7C(k);
        func_800A7F20(k);
        func_800A8484(k);
    }
    func_800A7600(k);
    return func_800A76C0(k);
}
