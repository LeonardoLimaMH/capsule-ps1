#include "common.h"

s32 slpm_SetDispMask(s32 mask) {
    extern u8 D_80131B36[];
    extern void (*D_80131B30[])();
    extern char D_8011047C[];
    extern s32 (**D_80131B2C[])();
    extern void func_80116878(void *, s32, s32);
    u8 *p = D_80131B36;
    s32 (**f)();

    if (p[0] >= 2) {
        (*D_80131B30)(D_8011047C, mask);
    }
    if (mask == 0) {
        func_80116878(p + 0x6A, -1, 0x14);
    }
    f = *D_80131B2C;
    return f[4](mask != 0 ? 0x3000000 : 0x3000001);
}
