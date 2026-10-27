/* stub-ret: mixed */
#include "common.h"

extern u8 D_80100F38[], D_80091618[], D_80063940[], D_800F07D4[];
extern s32 D_800EE650[], D_800EE670[], D_800EE690[];
extern s32 func_800B1260(s32), func_80019F30(s32, s32);
extern void func_80015CD0(void *, s32, s32), func_800C5850(s32, u8 *, s32, s32, s32), func_80034AB0(s32);

s32 func_800C9590(s32 a0, s32 a1) {
    s32 k = func_800B1260(a1);
    u8 *p = D_80100F38 + (u16)k * 0x79C;
    s32 n = 5 - *(s16 *)(p + 0x376);
    u16 c = *(u16 *)(D_80091618 + (u16)k * 0x1A8);
    if (*(s16 *)(p + 0x366) < n) n = -1;
    if (n != -1) {
        s32 t = (*(u32 *)(D_80063940 + c * 60 + 0x20) >> 15) & 0xF;
        s32 *T, s;
        u8 *o;
        if (t == 1) { T = D_800EE670; s = 0xE; }
        else if (t == 0) { T = D_800EE650; s = 0x11; }
        else { T = D_800EE690; s = 0xD; }
        s += n;
        o = *(u8 **)(p + 0x290);
        func_80015CD0(o + 0x14, func_80019F30(T[0] | 0x70000, T[6] + s), 0);
        *(u16 *)(o + 0x66) = 0;
        *(s32 *)(o + 0x7C) = s;
        *(s32 *)(o + 0x30) = ((*(s32 *)(o + 0x30) & ~0x1C0) & ~0x30) | 0x10;
        func_800C5850(*(s32 *)(D_80091618 + (u16)k * 0x1A8 + 0x178), *(u8 **)(p + 0x290), 0, D_800F07D4[t * 5 + 3], -4);
    }
    func_80034AB0(0x87);
    return *(s32 *)(p + 0x2BC) += 1;
}
