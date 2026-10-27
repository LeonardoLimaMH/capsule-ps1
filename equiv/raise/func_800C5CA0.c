/* stub-ret: mixed */
#include "common.h"

extern u8 D_80091618[], D_80063940[];
extern s32 D_800EE650[], D_800EE670[], D_800EE690[];
extern s32 func_800B1260(s32);
extern u8 *func_800B6D98(s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32);

u8 *func_800C5CA0(s32 a0, u32 a1) {
    u16 c = *(u16 *)(D_80091618 + (func_800B1260(a0) & 0xFFFF) * 0x1A8);
    u8 *d = D_80063940 + c * 60;
    s32 t = (*(u32 *)(d + 0x20) >> 15) & 0xF;
    s32 *T;
    s32 s = 0;
    if (t == 1) T = D_800EE670;
    else if (t == 0) T = D_800EE650;
    else T = D_800EE690;
    switch (a1) {
    case 0: s = (*(u32 *)(d + 0x1C) >> 15) & 0x3F; break;
    case 1: s = (*(u32 *)(d + 0x1C) >> 21) & 0x3F; break;
    case 2: s = ((*(u32 *)(d + 0x20) & 1) << 5) | (*(u32 *)(d + 0x1C) >> 27); break;
    case 3: s = 0xC; break;
    case 4: s = 0xB; break;
    case 5: s = (*(u32 *)(d + 0x20) >> 1) & 0x3F; break;
    case 6:
        switch ((*(u32 *)(d + 0x20) >> 15) & 0xF) {
        case 0: s = 0x11; break;
        case 1: s = 0xE; break;
        case 2: s = 0xD; break;
        }
        break;
    }
    return func_800B6D98(5, 0, 0, 4, 0, T, s, 0, 1, 0, 1, 0);
}
