#include "common.h"

extern s16 D_80131B38, D_80131B3A;
extern u32 func_80114FC0(), func_80115058(), func_801150F0(), func_80114FA0(), func_8011510C();

s32 slpm_SetDrawEnv(u32 *dr, u8 *env) {
    s16 r[4];
    s32 n;
    s16 w;

    dr[1] = func_80114FC0(*(s16 *)env, *(s16 *)(env + 2));
    dr[2] = func_80115058((s16)(*(u16 *)(env + 4) + *(u16 *)env - 1),
                          (s16)(*(u16 *)(env + 2) + *(u16 *)(env + 6) - 1));
    dr[3] = func_801150F0(*(s16 *)(env + 8), *(s16 *)(env + 0xA));
    dr[4] = func_80114FA0(env[0x17], env[0x16], *(u16 *)(env + 0x14));
    dr[5] = func_8011510C(env + 0xC);
    dr[6] = 0xE6000000;
    n = 7;
    if (env[0x18] != 0) {
        r[0] = *(u16 *)env;
        r[1] = *(u16 *)(env + 2);
        r[2] = *(u16 *)(env + 4);
        r[3] = *(u16 *)(env + 6);
        w = r[2];
        if (w < 0) {
            w = 0;
        } else if (D_80131B38 - 1 < w) {
            w = D_80131B38 - 1;
        }
        r[2] = w;
        w = r[3];
        if (w < 0) {
            w = 0;
        } else if (D_80131B3A - 1 < w) {
            w = D_80131B3A - 1;
        }
        r[3] = w;
        r[0] -= *(u16 *)(env + 8);
        r[1] -= *(u16 *)(env + 0xA);
        dr[7] = (env[0x1B] << 16) | ((env[0x1A] << 8) | 0x60000000) | env[0x19];
        dr[8] = *(u32 *)&r[0];
        dr[9] = *(u32 *)&r[2];
        n = 10;
    }
    ((u8 *)dr)[3] = n - 1;
    return n - 1;
}
