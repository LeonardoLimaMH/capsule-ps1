/* arg0: small */
#include "common.h"

extern s16 D_800EEB94[];
extern s32 D_800EE5D0[], D_800EEC64;
extern u16 D_8006AF80;
extern void func_800B4E08(s32, s32);
extern s32 func_800B6D98(s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32);

s32 func_800B4D60(s32 a0) {
    s32 x;
    func_800B4E08(a0, D_800EEB94[1]);
    if (a0 == D_8006AF80) x = D_800EEC64;
    else x = D_800EE5D0[2] - 2;
    return func_800B6D98(1, 0x2C, 0x38, D_800EEB94[0], 0, D_800EE5D0, x, 1, 1, 0, 2, 1);
}
