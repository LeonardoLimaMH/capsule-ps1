#include "common.h"

extern s16 D_80131B38, D_80131B3A;
extern u32 D_80133540[], D_80133568[];
extern volatile u32 *D_80131C3C;
extern u32 func_80115A30();
extern void func_801159E8();

s32 func_80115284(s16 *r, u32 c) {
    u32 *q = D_80133540;
    u32 *s = D_80133568;
    s16 w;
    u32 st;

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
    if ((r[0] & 0x3F) || (r[2] & 0x3F)) {
        q[0] = ((u32)s & 0xFFFFFF) | 0x8000000;
        q[4] = 0xE6000000;
        q[1] = 0xE3000000;
        q[2] = 0xE4FFFFFF;
        q[3] = 0xE5000000;
        st = *D_80131C3C;
        q[6] = (c & 0xFFFFFF) | 0x60000000;
        q[5] = (st & 0x7FF) | ((c >> 31) << 10) | 0xE1000000;
        q[7] = *(u32 *)r;
        s[0] = 0x3FFFFFF;
        q[8] = *(u32 *)(r + 2);
        s[1] = func_80115A30(3) | 0xE3000000;
        s[2] = func_80115A30(4) | 0xE4000000;
        s[3] = func_80115A30(5) | 0xE5000000;
    } else {
        q[0] = 0x5FFFFFF;
        q[1] = 0xE6000000;
        st = *D_80131C3C;
        q[3] = (c & 0xFFFFFF) | 0x2000000;
        q[2] = (st & 0x7FF) | ((c >> 31) << 10) | 0xE1000000;
        q[4] = *(u32 *)r;
        q[5] = *(u32 *)(r + 2);
    }
    func_801159E8(D_80133540);
    return 0;
}
