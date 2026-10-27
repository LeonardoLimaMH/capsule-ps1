/* stub-ret: mixed */
/* rand-u16: 0x80105990 1 0,1,2,3,0xFFFF */
#include "common.h"

extern s16 D_80105990[];
extern u16 D_800F1FA0[];
extern s32 D_8008ED80, D_800F2D24;
extern s32 func_800202A4(s32);

void func_800E4838(s32 a0, s32 a1) {
    u8 *s5;
    u16 fp, h;
    s16 r, c;
    D_80105990[1] = a0;
    D_80105990[2] = a1;
    if (a0 == 0) return;
    s5 = (u8 *)D_80105990 + 0x10;
    if (a1 == 1) {
        D_80105990[3] = 0x3C;
        return;
    }
    fp = D_800F1FA0[D_80105990[0] * 2];
    h = D_800F1FA0[D_80105990[0] * 2 + 1];
    for (r = 0; r < 8; r++) {
        u8 *s7 = (u8 *)D_80105990 + r * 8 + 0x810;
        for (c = 0; c < 8; c++) {
            s32 s1 = (r - 4) * 100;
            s32 s0 = (c - 4) * 100;
            s32 v = func_800202A4(100) + D_8008ED80;
            s32 y;
            s16 *q = (s16 *)(s5 + r * 256 + c * 32);
            D_800F2D24 = v;
            y = -((v % 16) * 100 + 0x320);
            q[0] = s0;
            q[1] = y;
            q[2] = s1;
            q[4] = s0 + fp;
            q[5] = y;
            q[6] = s1 + (s16)fp / 2;
            q[8] = s0;
            q[10] = s1;
            q[9] = y + h;
            q[12] = s0 + fp;
            q[13] = y + h;
            q[14] = s1 + (s16)fp / 2;
            if (*(s16 *)(s5 - 0x10) == 0) s7[c] = func_800202A4(100) % 2;
            else if (*(s16 *)(s5 - 0x10) > 0 && *(s16 *)(s5 - 0x10) < 3) s7[c] = func_800202A4(100) % 3;
        }
    }
}
