/* rand-mem: 0x8008EE44 1 0xA */
/* rand-mem: 0x8008EE48 1 3 */
/* rand-mem: 0x800B3B28 1 0x50 */
#include "common.h"

/* anel 3D de POLY_G4 */
extern u8 D_8008ED68[];
extern u16 D_8008EE44;
extern s32 D_800B3B24, D_800B3B28;
extern s32 rsin(s32), rcos(s32);
extern void PushMatrix(void), PopMatrix(void);
extern void SetPolyG4(u8 *), SetSemiTrans(u8 *, s32);
extern u16 GetTPage(s32, s32, s32, s32);
extern void AddPrim(void *, void *);
extern void func_80018610(s32, s32);

static s32 mulhi(s32 a, s32 b) {
    s32 hi;
    __asm__ volatile("mult %1,%2\n\tmfhi %0" : "=r"(hi) : "r"(a), "r"(b));
    return hi;
}

#define D16(o) (*(u16 *)(D_8008ED68 + (o)))

void func_8009C324(s32 x, s32 y, s16 ot) {
    s16 q[8];
    s16 ang[8][2];
    s16 X[8][4][2], Y[8][4][2];
    s16 R[4];
    s16 cx = x + 0xA0, cy = y + 0x78;
    s32 i, j, k, s, v;
    s16 a;

    if (D16(0xDC) == 7) {
        v = D_800B3B28 * D_800B3B28;
        R[0] = v < 0x1001 ? v : 0x1000;
        v = (s16)R[0] * 2;
        v = v < 0x1001 ? v : 0x1000;
        R[1] = v;
        R[3] = v;
    } else {
        s32 t = D_800B3B24 * 16;
        s32 qq = (mulhi(t, 0x7F807F81) >> 11) - (t >> 31);
        v = t - qq * 0x1010;
        R[3] = 0x1400;
        R[0] = v;
        R[1] = v + 0x200;
        v += 0x400;
    }
    R[2] = v;
    a = D_800B3B24 * 4;
    for (i = 0; i < 8; i++, a += 0x200) {
        v = a - 0x60;
        ang[i][0] = v - ((v / 4096) << 12);
        v = a + 0x60;
        ang[i][1] = v - ((v / 4096) << 12);
        for (s = 0; s < 2; s++) {
            for (j = 0; j < 4; j++) {
                v = rsin(ang[i][s]);
                X[i][j][s] = ((R[j] * 220) / 4096 * v) / 4096;
                v = rcos(ang[i][s]);
                Y[i][j][s] = ((R[j] * 220) / 4096 * v) / 4096;
            }
        }
    }
    PushMatrix();
    for (i = 0; i < 8; i++) {
        for (s = 0; s < 4; s++) {
            u8 *w, *p, *next;
            u16 tp;
            if (s == 0) {
                q[0] = cx;
                q[1] = cy;
                q[2] = q[0];
                q[3] = q[1];
            } else {
                k = s - 1;
                q[0] = cx + X[i][k][0];
                q[1] = cy + Y[i][k][0];
                q[2] = cx + X[i][k][1];
                q[3] = cy + Y[i][k][1];
            }
            q[4] = cx + X[i][s][0];
            q[5] = cy + Y[i][s][0];
            q[6] = cx + X[i][s][1];
            q[7] = cy + Y[i][s][1];
            w = *(u8 **)D_8008ED68;
            p = *(u8 **)(w + 0x1090);
            next = 0;
            if (p && !(w + 0x4594 < p + 0x24)) next = p + 0x24;
            *(u8 **)(w + 0x1090) = next;
            SetPolyG4(p);
            SetSemiTrans(p, 1);
            tp = GetTPage(0, 1, 0, 0);
            p[5] = 0x90; p[6] = 0xFF;
            p[0xD] = 0x90; p[0xE] = 0xFF;
            p[0x15] = 0x90; p[0x16] = 0xFF;
            p[0x1D] = 0x90;
            p[4] = 0; p[0xC] = 0; p[0x14] = 0; p[0x1C] = 0;
            p[0x1E] = 0xFF;
            if (s == 1) {
                u8 c = D_8008EE44 == 7 ? 0 : 0xC0;
                p[0x14] = c; p[0x15] = c; p[0x16] = c;
                p[0x1C] = c; p[0x1D] = c; p[0x1E] = c;
            }
            if (s == 2) {
                p[4] = 0xC0; p[5] = 0xC0; p[6] = 0xC0;
                p[0xC] = 0xC0; p[0xD] = 0xC0; p[0xE] = 0xC0;
            }
            *(s16 *)(p + 0x8) = q[0];
            *(s16 *)(p + 0xA) = q[1];
            *(s16 *)(p + 0x10) = q[2];
            *(s16 *)(p + 0x12) = q[3];
            *(s16 *)(p + 0x18) = q[4];
            *(s16 *)(p + 0x1A) = q[5];
            *(s16 *)(p + 0x20) = q[6];
            *(s16 *)(p + 0x22) = q[7];
            AddPrim(*(u8 **)D_8008ED68 + ot * 4 + 0x70, p);
            func_80018610(tp, ot);
        }
    }
    PopMatrix();
    if (D16(0xDC) == 7 && D16(0xE0) != 0) D_800B3B28++;
    else D_800B3B24++;
}
