#include "common.h"

extern s32 D_80094C30, D_80094C34;
extern u8 *D_80094C38;
extern u8 D_800111A4[], D_8001109C[], D_800110AC[];
extern u8 *D_800730AC[], *D_8007312C[];
extern u8 D_800730A5, D_80073364[];
extern volatile u32 *D_80073390;
extern s32 VSync();
extern void CD_flush();

s32 CD_datasync(s32 mode) {
    s32 r, n;

    D_80094C30 = VSync(-1) + 0x3C0;
    D_80094C34 = 0;
    D_80094C38 = D_800111A4;
    do {
        if (D_80094C30 < VSync(-1)) {
            goto timeout;
        }
        n = D_80094C34;
        D_80094C34 = n + 1;
        if (n > 0x3C0000) {
        timeout:
            puts(D_8001109C);
            printf(D_800110AC, D_80094C38, D_800730AC[D_800730A5], D_8007312C[D_80073364[0]],
                   D_8007312C[D_80073364[1]]);
            CD_flush();
            r = -1;
        } else {
            r = 0;
        }
        if (r != 0) {
            return -1;
        }
        if (!(*D_80073390 & 0x1000000)) {
            return 0;
        }
    } while (mode == 0);
    return 1;
}
