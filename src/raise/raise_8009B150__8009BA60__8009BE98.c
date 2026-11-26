#include "common.h"


extern u8 D_800900C0[], D_8008ED68[];
extern s32 func_800E3810(s32);
extern void PushMatrix(void), PopMatrix(void);
extern void func_8002CEC0(void *);
extern s32 RotTransPers(void *, s32 *, s32 *, s32 *);

extern u8 D_80101104[], D_8008ED68[], D_800900C0[];
extern s16 D_800F2CA8[];
extern u16 D_8006AF80[], D_8006B00A[];
extern s16 D_800F2CAC[];
extern s32 func_80020304(s32), func_800E16AC(s32);
extern s32 func_80019F30(s32, s32), func_80015CD0(void *, s32, s32), func_80034AB0(s32);
extern s16 func_800337EC(void);
extern s32 func_800E3810(s32), func_800185F8(void *);
extern void PushMatrix(void), PopMatrix(void), func_8002CEC0(void *);

#define U16(o) (*(u16 *)(o_ + (o)))
#define S16(o) (*(s16 *)(o_ + (o)))
#define S32(o) (*(s32 *)(o_ + (o)))

typedef struct {
    s16 sxy[2];
    s32 p;
    s32 flag;
} L;

/* aproxima c de t em passos de st; r = 1 quando chegou */
#define APPROACH(c, t, st, r) \
    r = 0; \
    if ((c) < (t)) { \
        (c) += (st); \
        if ((c) >= (t)) { (c) = (t); r = 1; } \
    } else if ((t) < (c)) { \
        (c) -= (st); \
        if ((t) >= (c)) { (c) = (t); r = 1; } \
    } else r = 1;

void func_8009BE98(u8 *o_) {
    extern int abs(int);
    extern s16 func_800337EC(void);
    s16 *tg = (s16 *)(D_80101104 + *D_8006AF80 * 0x79C);
    s32 z, se;
    if (D_8008ED68[0x99A] != 0) {
        if (U16(0x7A) != 4) return;
        func_8009BB30(D_800F2CA8, S32(0x3C), S32(0x34) & 0x7F);
        return;
    }
    {
        register s32 count asm("v1") = S32(0x3C);
        register s32 next asm("v0");
        if (D_8008ED68[0x103] >= 2) next = count + D_8008ED68[0x103];
        else next = count + 1;
        S32(0x3C) = next;
    }
    switch (U16(0x7A)) {
    case 0: {
        s32 speed = S32(0x7C);
        D_800F2CA8[1] = -300;
        D_800F2CA8[0] = speed * 450;
        D_800F2CA8[2] = S32(0x7C) * 450;
        U16(0x7A) += 1;
        break;
    }
    case 1:
        D_800F2CA8[0] += func_80020304(8) * -S32(0x7C);
        D_800F2CA8[2] += func_80020304(8) * -S32(0x7C);
        if (abs(D_800F2CA8[0]) < 50) {
            if (func_800E16AC(*D_8006AF80) == 0) U16(0x7A) += 1;
            else U16(0x7A) = 5;
        }
        break;
    case 3: {
        register s32 n asm("t0");
        {
        s32 target = tg[0];
        s32 current = D_800F2CA8[0];
        register s32 arrived asm("a2") = 0;
        if (current < target) {
            D_800F2CA8[0] += 4;
            if (D_800F2CA8[0] >= tg[0]) { D_800F2CA8[0] = tg[0]; arrived = 1; }
        } else if (target < current) {
            D_800F2CA8[0] -= 4;
            if (tg[0] >= D_800F2CA8[0]) { D_800F2CA8[0] = tg[0]; arrived = 1; }
        } else arrived = 1;
        n = arrived;
        }
        {
        s32 target = tg[2];
        s32 current = *D_800F2CAC;
        register s32 arrived asm("a2") = 0;
        if (current < target) {
            *D_800F2CAC += 4;
            if (*D_800F2CAC >= tg[2]) { *D_800F2CAC = tg[2]; arrived = 1; }
        } else if (target < current) {
            *D_800F2CAC -= 4;
            if (tg[2] >= *D_800F2CAC) { *D_800F2CAC = tg[2]; arrived = 1; }
        } else arrived = 1;
        n += arrived;
        }
        if (n != 2) break;
    }
        S32(0x3C) = 0;
        func_80015CD0(o_ + 0x14, func_80019F30(0x7000E, (S32(0x34) & 0x7F) + 0xA6), 0);
        func_80034AB0(0x8006);
        /* fallthrough */
    case 2:
        U16(0x7A) += 1;
        break;
    case 4:
        {
        s32 target = tg[0];
        s32 current = D_800F2CA8[0];
        if (current < target) {
            D_800F2CA8[0] += 8;
            if (D_800F2CA8[0] >= tg[0]) { D_800F2CA8[0] = tg[0]; }
        } else if (target < current) {
            D_800F2CA8[0] -= 8;
            if (tg[0] >= D_800F2CA8[0]) { D_800F2CA8[0] = tg[0]; }
        }
    }
        {
        s32 target = tg[2];
        s32 current = *D_800F2CAC;
        if (current < target) {
            *D_800F2CAC += 8;
            if (*D_800F2CAC >= tg[2]) { *D_800F2CAC = tg[2]; }
        } else if (target < current) {
            *D_800F2CAC -= 8;
            if (tg[2] >= *D_800F2CAC) { *D_800F2CAC = tg[2]; }
        }
    }
        func_8009BB30(D_800F2CA8, S32(0x3C), S32(0x34) & 0x7F);
        if ((u32)S32(0x3C) > 100) {
            if (func_800337EC() & 4) break;
            S32(0x18) = func_80019F30(0x6000E, (S32(0x34) & 0x7F) * 2 + 0x23C);
            U16(0x7A) += 1;
        }
        break;
    case 5:
        D_800F2CA8[0] += S32(0x7C) * 8;
        D_800F2CA8[2] += S32(0x7C) * 8;
        break;
    }
    {
        struct { s16 sx, sy; s32 p, f; } t;
        s16 *v = D_800F2CA8;
        s32 m = func_800E3810(1);
        PushMatrix();
        func_8002CEC0(D_800900C0 + m * 0xBC);
        z = RotTransPers(v, (s32 *)&t.sx, &t.p, &t.f);
        S16(0x46) = (u16)t.sx - M2C_GFIELD(D_8008ED68, s32, 0x108) / 2;
        S16(0x4A) = (u16)t.sy - M2C_GFIELD(D_8008ED68, s32, 0x10C) / 2;
        PopMatrix();
    }
    S16(0x4E) = z;
    if (U16(0x7A) == 5 &&
        ((u16)(U16(0x46) + 0xA0) > 0x140 || S16(0x4A) < -0x78 || S16(0x4A) >= 0x79)) {
        *D_8006B00A = 0;
        func_800185F8(o_);
        return;
    }
    if ((u32)S32(0x3C) % 15 != 0) return;
    if ((u16)(U16(0x46) + 0xA0) > 0x140 || S16(0x4A) < -0x78 || S16(0x4A) >= 0x79) {
        se = 0x6B;
    } else if ((u16)(U16(0x7A) - 2) < 3) {
        se = 0x6E;
    } else {
        se = 0x6D;
    }
    func_80034AB0(se);
}
#undef U16
#undef S16
#undef S32
#undef APPROACH


extern u8 D_8008ED68[];
extern s32 func_80019F30(s32, s32);
extern void func_80012A20(s32, s32, s32, s32);
extern u8 *func_80015B3C(void *, void *, s32);
extern void func_80015EF8(u8 *);
extern s32 func_80020304(s32), func_800374E8(s32);
extern void func_8009BE98(u8 *), func_800161C4(void);

