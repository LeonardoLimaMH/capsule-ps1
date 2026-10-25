#include "common.h"

/* stub-ret: mixed */
extern u8 D_80091618[], D_800F19C8[];
extern s32 func_800B1350(s32);
extern void func_800A8E78(s32);

s32 func_800CD418(s32 a0) {
    u16 k = func_800B1350(a0);
    u8 *e = D_80091618 + k * 0x1A8;
    u8 *s3 = D_800F19C8 + k * 12;
    u8 *s4 = s3 + 0x48;
    u16 n = *(u16 *)(e + 0x12);
    u16 i;
    for (i = 0; i < 3; i++) {
        if (i >= n) {
            *(s32 *)(s3 + i * 4) = 0;
            *(s32 *)(s4 + i * 4) = 0;
        } else {
            u8 **a = (u8 **)(s3 + i * 4), **b = (u8 **)(s4 + i * 4);
            func_800A8E78((s32)*a);
            func_800A8E78((s32)*b);
            *(s32 *)(*a + 0x38) &= ~1;
            *(s32 *)(*b + 0x38) &= ~1;
        }
    }
    return 0;
}
