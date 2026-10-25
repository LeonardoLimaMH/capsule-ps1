/* rand-mem: 0x800B3B24 1 0x80 */
#include "common.h"

/* grade em perspectiva (POLY_G4 com degradê) */
typedef struct { u8 b[12]; } Z12;
extern Z12 D_80097838;
extern u8 D_80097844, D_80097845, D_80097846;
extern u8 D_8008ED68[];
extern s32 D_800B3B24;
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

static s32 sdiv(s32 a, s32 b) {
    s32 q;
    __asm__ volatile("div $0,%1,%2\n\tmflo %0" : "=r"(q) : "r"(a), "r"(b));
    return q;
}

#define DIVA(x) ((mulhi((x), 0x6DAF05C9) >> 9) - ((x) >> 31))
#define DIVB(x) ((mulhi((x), 0x1B71A285) >> 6) - ((x) >> 31))

static u8 scale(u32 c, s32 v) {
    s32 x = c * v;
    if (x < 0) x += 0xFF;
    return (u32)x >> 8;
}

void func_8009BDD8(s16 h0, s32 base, s16 ot) {
    s16 q[8];
    s16 X[3][2];
    s16 Y[3];
    s16 A[3];
    s16 Z[6];
    s32 v, a2, i, j, k;
    s16 a0, b, t2;
    *(Z12 *)Z = D_80097838;
    Y[2] = Y[1] = Y[0] = -0x78;
    A[2] = A[1] = A[0] = 0;
    b = base;
    v = D_800B3B24;
    a2 = v * 6;
    a0 = v * 6;
    if (a0 < b + 0x778) {
        s32 x = ((b + 0x78) - (a0 - 0x700)) << 8;
        Y[0] = base - a2 + 0x700;
        A[2] = A[1] = DIVA(x);
    }
    if (a0 < 0x700) {
        s32 x = (0x700 - a0) << 8;
        Y[0] = base;
        A[0] = DIVA(x);
    }
    if (a0 < b + 0x2CD) {
        s32 x = (a0 - b - 0x78) << 8;
        Y[2] = base - a2 + 0x255;
        A[2] = 0x100;
        A[1] = DIVB(x);
    }
    if (a0 < 0x255) {
        s32 x = a0 << 8;
        Y[2] = base;
        A[2] = A[0] = DIVB(x);
    }
    if (a0 < b + 0x78) {
        Y[1] = base - a2;
        A[1] = 0;
    }
    PushMatrix();
    t2 = base;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            for (k = 0; k < 2; k++)
                X[j][k] = h0 - sdiv((Y[j] - t2) * (Z[i * 2 + k] - h0), -0x78 - t2);
        for (j = 0; j < 2; j++) {
            u8 *w, *p, *next;
            u16 tp;
            u8 r, g, bl;
            q[0] = X[j][0] + 0xA0;
            q[1] = Y[j] + 0x78;
            q[2] = X[j][1] + 0xA0;
            q[4] = X[2][0] + 0xA0;
            q[6] = X[2][1] + 0xA0;
            q[5] = q[7] = Y[2] + 0x78;
            q[3] = Y[j] + 0x78;
            w = *(u8 **)D_8008ED68;
            p = *(u8 **)(w + 0x1090);
            next = 0;
            if (p && !(w + 0x4594 < p + 0x24)) next = p + 0x24;
            *(u8 **)(w + 0x1090) = next;
            SetPolyG4(p);
            SetSemiTrans(p, 1);
            tp = GetTPage(0, 1, 0, 0);
            r = scale(D_80097844, (u16)A[j]);
            g = scale(D_80097845, (u16)A[j]);
            bl = scale(D_80097846, (u16)A[j]);
            p[4] = r; p[5] = g; p[6] = bl;
            p[0xC] = r; p[0xD] = g; p[0xE] = bl;
            r = scale(D_80097844, (u16)A[2]);
            g = scale(D_80097845, (u16)A[2]);
            bl = scale(D_80097846, (u16)A[2]);
            p[0x14] = r; p[0x15] = g; p[0x16] = bl;
            p[0x1C] = r; p[0x1D] = g; p[0x1E] = bl;
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
    D_800B3B24++;
}
