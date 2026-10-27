/* arg0: small */
/* arg1: small */
/* stub-ret: mixed */
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* arg2: small */
#include "common.h"

extern u8 D_80091618[];
extern s32 D_8006AFCC[];
extern s32 D_8006AF84;
extern u16 D_8006AF80;
extern void func_800A8AE0(s32, s32, s32), func_800B0A94(s32, s32), func_800E10BC(s32), func_800C834C(s32, s32, s32);
extern s32 func_800E16AC(s32), func_800E1674(s32), func_800E1140(s32), func_800E1388(s32);
extern s32 func_800E1594(s32), func_800E1624(s32), func_800E14C4(s32);

#define E(i) (D_80091618 + (i) * 0x1A8)

s32 func_800B0740(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 t = D_8006AF84;
    s32 i, j;
    __asm__("" :: "r"(&a3)); /* o original guarda a3 no slot de argumento */
    for (i = 0; i < 5; i++)
        if (D_8006AFCC[2 + i] == -1) break;
    if (i == 5) {
        for (i = 0; i < 4; i++) {
            D_8006AFCC[2 + i] = D_8006AFCC[3 + i];
            D_8006AFCC[7 + i] = D_8006AFCC[8 + i];
        }
    }
    D_8006AFCC[2 + i] = (u16)a2;
    D_8006AFCC[7 + i] = t;
    if ((u16)a2 >= 4) {
        u16 s6 = a2;
        s32 s5 = (u16)(a2 - 7) < 2;
        for (i = 0; i < 6; i++) {
            u16 k = i;
            s32 r;
            if (*(u16 *)(E(k) + 0x10) == 0xFFFF) r = -1;
            else if (k == D_8006AF80) r = 1;
            else r = (k != *(u16 *)(E(D_8006AF80) + 0x8A)) * 2;
            if (r == -1) continue;
            func_800A8AE0(k, s6, a3);
            if (r == 2) continue;
            if (func_800E16AC(k) == 1) continue;
            if (func_800E1674(k) == 1) continue;
            if (func_800E1140(k) == 0) continue;
            if (func_800E1388(k) == 0) continue;
            if (func_800E1594(k) == 1) continue;
            if (func_800E1624(k) == 1) continue;
            if (func_800E14C4(k) == 1) {
                if (!s5) continue;
                func_800B0A94(k, 0);
            }
            if (s5) func_800E10BC(k);
            func_800C834C(*(s32 *)(E(i) + 0x178), r, s6);
        }
        return *(u16 *)((u8 *)D_8006AFCC + 0x6C + (u16)a2 * 2) += 1;
    }
    for (j = 1; j >= 0; j--) {
        u16 kk = j == 1 ? (u16)a0 : (u16)a1;
        u8 *e;
        if (kk == 0xFFFF) continue;
        func_800A8AE0(kk, (u16)a2, a3);
        e = E(kk);
        *(u16 *)(e + 0x7C + (u16)a2 * 2) += 1;
        func_800C834C(*(s32 *)(e + 0x178), j, (u16)a2);
    }
    return 1;
}
