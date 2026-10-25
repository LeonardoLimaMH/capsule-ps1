#include "common.h"

/* rand-u16: 0x8006AF90 1 0,1,2,3 */
extern u8 D_80100F38[], D_80091618[];
extern u16 D_8006AF90[];
extern s32 D_800EEB64;
extern s32 func_800B1260(s32);
extern void func_800D1CC4(s32, s32, s32, s32);

s32 func_800D9930(s32 a0, s32 a1) {
    s32 k = func_800B1260(a1);
    u8 *p = D_80100F38 + (u16)k * 0x79C;
    if (a1 == 1) {
        D_800EEB64 = a1;
        if (((s16 *)D_8006AF90)[10] == 0)
            func_800D1CC4(D_8006AF90[((s16 *)D_8006AF90)[0]], 0x26, 4, 1);
    }
    *(u16 *)(D_80091618 + (u16)k * 0x1A8 + 0x64) = 0;
    return *(s32 *)(p + 0x2BC) += 1;
}
