/* compiler: 2.8.1-psx */
/* stub-ret: mixed */
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* max-insns: 100000 */
#include "common.h"

/* anima um objeto (s2) que se move até a posição do jogador atual e projeta na tela */
extern u8 D_80101104[], D_8008ED68[], D_800900C0[];
extern s16 D_800F2CA8[];
extern u16 D_8006AF80, D_8006B00A;
extern s32 func_8009BB30(s16 *, s32, s32), func_80020304(s32), func_800E16AC(s32);
extern s32 func_80019F30(s32, s32), func_80015CD0(void *, s32, s32), func_80034AB0(s32);
extern s32 func_800337EC(s32), func_800E3810(s32), func_800185F8(void *);
extern s32 RotTransPers(void *, void *, void *, void *);
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
#define APPROACH(c, t, st, r)     r = 1;     if ((c) < (t)) {         (c) += (st);         if ((c) < (t)) r = 0;         else (c) = (t);     } else if ((t) < (c)) {         (c) -= (st);         if ((t) < (c)) r = 0;         else (c) = (t);     }

static s32 off_screen(u8 *o_) {
    return (u16)(U16(0x46) + 0xA0) > 0x140 || S16(0x4A) < -0x78 || S16(0x4A) >= 0x79;
}

s32 func_8009BE98(u8 *o_) {
#define tg ((s16 *)(D_80101104 + D_8006AF80 * 0x79C))
    L l;
    s32 s, z, n;
    if (D_8008ED68[0x99A] != 0) {
        if (U16(0x7A) != 4) return 4;
        return func_8009BB30(D_800F2CA8, S32(0x3C), S32(0x34) & 0x7F);
    }
    if (D_8008ED68[0x103] < 2) S32(0x3C) += 1;
    else S32(0x3C) += D_8008ED68[0x103];
    switch (U16(0x7A)) {
    case 0:
        D_800F2CA8[1] = -300;
        D_800F2CA8[0] = S32(0x7C) * 450;
        D_800F2CA8[2] = S32(0x7C) * 450;
        U16(0x7A) += 1;
        break;
    case 1:
        D_800F2CA8[0] += func_80020304(8) * -S32(0x7C);
        D_800F2CA8[2] += func_80020304(8) * -S32(0x7C);
        s = D_800F2CA8[0];
        if (s < 0) s = -s;
        if (s < 50) {
            if (func_800E16AC(D_8006AF80) == 0) U16(0x7A) += 1;
            else U16(0x7A) = 5;
        }
        break;
    case 3:
        APPROACH(D_800F2CA8[0], tg[0], 4, n);
        APPROACH(D_800F2CA8[2], tg[2], 4, z);
        n += z;
        if (n != 2) break;
        S32(0x3C) = 0;
        func_80015CD0(o_ + 0x14, func_80019F30(0x7000E, (S32(0x34) & 0x7F) + 0xA6), 0);
        func_80034AB0(0x8006);
        /* fallthrough */
    case 2:
        U16(0x7A) += 1;
        break;
    case 4:
        APPROACH(D_800F2CA8[0], tg[0], 8, n);
        APPROACH(D_800F2CA8[2], tg[2], 8, n);
        func_8009BB30(D_800F2CA8, S32(0x3C), S32(0x34) & 0x7F);
        if ((u32)S32(0x3C) >= 0x65 && !(func_800337EC(1) & 4)) {
            S32(0x18) = func_80019F30(0x6000E, (S32(0x34) & 0x7F) * 2 + 0x23C);
            U16(0x7A) += 1;
        }
        break;
    case 5:
        D_800F2CA8[0] += S32(0x7C) * 8;
        D_800F2CA8[2] += S32(0x7C) * 8;
        break;
    }
    s = func_800E3810(1);
    PushMatrix();
    func_8002CEC0(D_800900C0 + s * 0xBC);
    z = RotTransPers(D_800F2CA8, &l.sxy, &l.p, &l.flag);
    U16(0x46) = l.sxy[0] - *(s32 *)(D_8008ED68 + 0x108) / 2;
    U16(0x4A) = l.sxy[1] - *(s32 *)(D_8008ED68 + 0x10C) / 2;
    PopMatrix();
    S16(0x4E) = z;
    if (U16(0x7A) == 5 && off_screen(o_)) {
        D_8006B00A = 0;
        return func_800185F8(o_);
    }
    if ((u32)S32(0x3C) % 15 != 0) return (u32)S32(0x3C) / 15 * 15;
    if (off_screen(o_)) n = 0x6B;
    else if ((u16)(U16(0x7A) - 2) < 3) n = 0x6E;
    else n = 0x6D;
    return func_80034AB0(n);
}
