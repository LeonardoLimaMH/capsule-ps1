#include "common.h"

extern s32 D_80134EF0, D_80134EF4;
extern u8 *D_80134EF8;
extern u8 D_8011084C[], D_80110744[], D_80110754[];
extern u8 *D_80131D44[], *D_80131DC4[];
extern u8 D_80131D3D, D_80131FFC[];
extern volatile u32 *D_80132028;
extern s32 slpm_VSync();
extern void slpm_CD_flush();

s32 slpm_CD_datasync(s32 mode) {
    s32 r, n;

    D_80134EF0 = slpm_VSync(-1) + 0x3C0;
    D_80134EF4 = 0;
    D_80134EF8 = D_8011084C;
    do {
        if (D_80134EF0 < slpm_VSync(-1)) {
            goto timeout;
        }
        n = D_80134EF4;
        D_80134EF4 = n + 1;
        if (n > 0x3C0000) {
        timeout:
            slpm_puts(D_80110744);
            slpm_printf(D_80110754, D_80134EF8, D_80131D44[D_80131D3D], D_80131DC4[D_80131FFC[0]],
                   D_80131DC4[D_80131FFC[1]]);
            slpm_CD_flush();
            r = -1;
        } else {
            r = 0;
        }
        if (r != 0) {
            return -1;
        }
        if (!(*D_80132028 & 0x1000000)) {
            return 0;
        }
    } while (mode == 0);
    return 1;
}
