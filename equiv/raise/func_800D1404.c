#include "common.h"

extern s32 D_8008ED80, D_800F1CC4, D_800F1C78;
extern s32 D_80103ED0[];
extern u8 D_800F1AA0[], D_800EFF58[];
extern s32 D_800F1C2C[], D_800F1C40[], D_800F1C5C[], D_800F1C7C[];
extern u16 D_800ED886;
extern s32 func_800202A4(s32), func_800D1558(void);

s32 func_800D1404(void) {
    s32 r = func_800202A4(100) + D_8008ED80;
    u8 *f;
    D_80103ED0[0] = 0x10;
    D_80103ED0[1] = (s32)D_800F1AA0;
    D_80103ED0[2] = D_800F1C2C[r % 5];
    D_80103ED0[3] = D_800F1C40[r % 7];
    D_800ED886 = 0;
    D_80103ED0[4] = D_800F1C5C[r % 7];
    D_800F1CC4 = r;
    D_80103ED0[5] = D_800F1C78;
    f = D_800EFF58;
    *(s32 *)(f + 0x1C) = 1;
    *(s32 *)(f + 0x344) = 0;
    *(s32 *)(f + 0x114) = 0;
    *(s32 *)(f + 0x28C) = 0;
    *(s32 *)(f + 0x32C) = 0;
    *(s32 *)(f + 0x330) = 4;
    D_80103ED0[6] = D_800F1C7C[r % 7];
    return func_800D1558();
}
