#include "common.h"

extern u8 D_80085428[], D_80091618[], D_801010B0[];
extern u16 D_8006AF80;
extern u8 D_80069E58, D_80069E59;
extern s16 D_80078C30;
extern s32 D_8006AF70[];
extern s32 D_800EF998;
extern void func_80025000(), func_80025C48(), func_800255FC();

/* divisão sem as verificações de zero/estouro (o original usa div direto) */
static s32 sdiv(s32 a, s32 b) {
    s32 q;
    __asm__ volatile("div $0,%1,%2
	mflo %0" : "=r"(q) : "r"(a), "r"(b));
    return q;
}

void func_80025764(s32 a0, s32 a1, s32 a2, s32 a3, s32 t0, u16 t5, u16 t6, u16 t4, s32 *out, s32 div) {
    s32 x = t0;
    s32 y = a3;
    s32 s0, s1, sx, sy, A, B, C;
    u8 *e;
    u8 m = D_80085428[0];

    if (m == 0) {
        if (D_8006AF80 < 7 && *(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x8A) < 7
            && *(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x90) != 0) {
            x = t0 - D_80069E58;
        } else {
            x += D_80069E58;
        }
        y += D_80069E59;
        if ((s16)x < 5) {
            s1 = x;
        } else if ((s16)x < 0xB) {
            s1 = 5;
        } else {
            s1 = x - 5;
        }
        if ((s16)y < 5) {
            s0 = y;
        } else if ((s16)y < 0xB) {
            s0 = 5;
        } else {
            s0 = y - 5;
        }
    } else if (m == 1) {
        if (D_80078C30 != 0) {
            s0 = a3 + 1;
            s1 = t0 + 1;
        } else {
            sx = (s16)t0;
            if (!(D_80069E58 & 1)) {
                if (sx == 0) {
                    s1 = t0 + 2;
                } else if (sx == 1) {
                    s1 = t0 + 3;
                } else if (sx == 2) {
                    s1 = t0 + 4;
                } else if (sx < 10) {
                    s1 = 7;
                } else if (sx == 10) {
                    s1 = t0 - 2;
                } else if (sx == 11) {
                    s1 = t0 - 1;
                } else {
                    s1 = t0;
                }
            } else {
                if (sx == 0) {
                    s1 = t0 + 2;
                } else if (sx == 1) {
                    s1 = t0 + 3;
                } else if (sx == 2) {
                    s1 = t0 + 4;
                } else if (sx < 9) {
                    s1 = 7;
                } else if (sx == 9) {
                    s1 = t0 - 1;
                } else if (sx == 10) {
                    s1 = t0;
                } else {
                    s1 = t0 + 1;
                }
            }
            sy = (s16)a3;
            if (!(D_80069E59 & 1)) {
                if (sy == 0) {
                    s0 = a3 + 2;
                } else if (sy == 1) {
                    s0 = a3 + 3;
                } else if (sy == 2) {
                    s0 = a3 + 4;
                } else if (sy < 10) {
                    s0 = 7;
                } else if (sy == 10) {
                    s0 = a3 - 2;
                } else if (sy == 11) {
                    s0 = a3 - 1;
                } else {
                    s0 = a3;
                }
            } else {
                if (sy == 0) {
                    s0 = a3;
                } else if (sy == 1) {
                    s0 = a3 + 1;
                } else if (sy == 2) {
                    s0 = a3 + 2;
                } else if (sy == 3) {
                    s0 = a3 + 3;
                } else if (sy < 10) {
                    s0 = 7;
                } else if (sy == 10) {
                    s0 = a3 - 2;
                } else if (sy == 11) {
                    s0 = a3 - 1;
                } else {
                    s0 = a3;
                }
            }
        }
    } else {
        return;
    }
    A = ((s16)t4 + 1 - (s16)s1) * 100;
    B = ((s16)t5 - (s16)a2) * 50;
    C = ((s16)s0 - ((s16)t6 + 1)) * 100;
    out[1] = sdiv(B, div);
    out[0] = sdiv(A, div);
    out[2] = sdiv(C, div);
    if (D_80085428[0] == 1) {
        D_8006AF70[0] = A - out[0] * div;
        D_8006AF70[1] = B - out[1] * div;
        D_8006AF70[2] = C - out[2] * div;
    }
    if (out[0] == 0 && out[2] == 0 && out[1] == 0) {
        m = D_80085428[0];
        if (m == 0) {
            e = D_80091618 + D_8006AF80 * 0x1A8;
            if (*(u16 *)(e + 0x10) != 0xFFFF) {
                func_80025000(*(s32 *)(e + 0x18C));
            } else {
                func_80025000(D_800EF998);
            }
        } else if (m == 1) {
            func_80025000(*(s32 *)(*(u8 **)(D_801010B0 + D_80085428[0x5D9] * 0x34 + 4) + 0x98));
        }
    }
    func_80025C48(1, (s16)s0, (s16)s1);
    func_800255FC(1);
}
