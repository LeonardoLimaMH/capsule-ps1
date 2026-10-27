#include "common.h"

extern u8 D_800EFF58[], D_8008ED68[], D_800F05C8[];
extern u16 D_8008EE44;
extern s32 D_800EEBA8;
extern void func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);
extern void func_800A0780(s32), func_800A0618(s32);
extern s32 func_80013920(u8 *);

s32 func_800BC7B0(u8 *o) {
    u8 *f = D_800EFF58;
    u8 *w = D_8008ED68;
    u16 v;
    if (o == *(u8 **)(f + 0x30C))
        func_8001F1A8(*(s16 *)(o + 0x46), (s16)(*(u16 *)(o + 0x4A) + 0x20), 0, 1, 0, D_800F05C8, 1, 0xF, 4);
    if (o == *(u8 **)(f + 0x118) && w[0x99A] != 0) {
        v = *(u16 *)(w + 0xDC);
        if ((u16)(v - 0x1D) < 4 || (v == 0x30 && D_800EEBA8 >= 0x15 && D_800EEBA8 < 0x19)) {
            func_800A0780(1);
            func_800A0618(1);
        }
    }
    v = D_8008EE44;
    if ((u16)(v - 0x1C) < 5 || (v == 0x30 && D_800EEBA8 < 0x21)) return 1;
    return func_80013920(o);
}
