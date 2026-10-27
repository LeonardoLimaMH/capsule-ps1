#include "common.h"

/* stub-ret: mixed */
extern u8 D_80091618[], D_800F19C8[];
extern s32 func_800B1260(s32);
extern void func_800A8E78(s32), func_800CCAA8(s32, s32, s32);

void func_800CD288(s32 a0, s32 a1) {
    u16 k = func_800B1260(a0);
    u8 *e = D_80091618 + k * 0x1A8;
    s32 *s2 = (s32 *)(D_800F19C8 + k * 12);
    s32 *s3 = s2 + 0x12;
    u16 n = *(u16 *)(e + 0x12);
    u16 i;
    for (i = 0; i < 3; i++) {
        if (a1 == 0) {
            if (i < n) {
                func_800A8E78(s2[i]);
                func_800A8E78(s3[i]);
            } else {
                s2[i] = 0;
                s3[i] = 0;
            }
        } else if (a1 == 1) {
            if (i >= n) {
                s2[i] = 0;
                s3[i] = 0;
            } else {
                u8 *o;
                func_800CCAA8(a0, i, *(u16 *)(e + 0x14 + i * 2));
                o = *(u8 **)(D_800F19C8 + (func_800B1260(a0) & 0xFFFF) * 12 + i * 4);
                *(s32 *)(o + 0x38) &= ~0x40;
            }
        }
    }
}
