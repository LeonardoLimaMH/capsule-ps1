#include "common.h"


extern u8 D_800900C0[], D_8008ED68[];
extern s32 func_800E3810(s32);
extern void PushMatrix(void), PopMatrix(void);
extern void func_8002CEC0(void *);
extern s32 RotTransPers(void *, s32 *, s32 *, s32 *);

void func_8009BB30(s16 *pos, s32 param_2, s32 param_3) {
    extern void func_80020578();
    extern void SetPolyG4();
    extern void SetSemiTrans();
    extern s32 RotTransPers4();
    extern u16 GetTPage();
    extern void func_80018610();

    struct {
        s16 vx, vy, vz, pad;
    } vec[4];
    s16 vals[2];
    s32 pad_4c;
    s16 sxy[4][2];
    s16 p;
    s32 flag;
    u8 **g = (u8 **)D_8008ED68;
    s32 i;
    register s32 j asm("a1");
    s32 angle_base;
    s32 ot;
    u8 *b;
    u8 *next;
    u8 *poly;
    u8 *candidate;
    u32 *ot_entry;
    register u8 color asm("v0");
    register s16 *v asm("a0");
    s16 *vec_base;
    s32 color80;
    s32 a;
    s16 a0, a1;

    PushMatrix();
    func_8002CEC0(D_800900C0 + func_800E3810(1) * 0xBC);

    vals[0] = (param_3 != 0) ? 0x28 : 0x14;
    vals[1] = 100;

    i = 0;
    vec_base = &vec[0].vx;
    color80 = 0x80;
    angle_base = 0x1000;

    do {
        a = angle_base - param_2 * 0x50;
        a0 = (s16)a;
        func_80020578(vals[0], 0, a0, &vec[0].vx, &vec[0].vz);
        a1 = (s16)(a + 0x100);
        func_80020578(vals[0], 0, a1, &vec[1].vx, &vec[1].vz);
        func_80020578(vals[1], 0, a0, &vec[2].vx, &vec[2].vz);
        func_80020578(vals[1], 0, a1, &vec[3].vx, &vec[3].vz);

        j = 0;
        vec[0].vy = vec[1].vy = pos[1];
        v = vec_base;
        vec[3].vy = 0;
        vec[2].vy = 0;

        for (; j < 4; j++, v += 4) {
            v[0] += pos[0];
            v[2] += pos[2];
        }

        next = 0;
        poly = *(u8 **)(*g + 0x1090);
        b = *g;
        if (poly != 0) {
            candidate = poly + 0x24;
            if ((u32)(b + 0x4594) >= (u32)candidate) {
                next = candidate;
            }
        }
        *(u8 **)(b + 0x1090) = next;

        SetPolyG4(poly);
        SetSemiTrans(poly, 1);

        ot = RotTransPers4(&vec[0], &vec[1], &vec[2], &vec[3],
                           &sxy[0], &sxy[1], &sxy[2], &sxy[3],
                           &p, &flag);

        if (i & 1) {
            color = 0x50;
            poly[6] = color;
            poly[0x16] = color;
            color = 0x20;
        } else {
            color = 0x20;
            poly[6] = color;
            poly[0x16] = color;
            color = 0x50;
        }

        poly[4] = color80;
        poly[5] = color80;
        poly[0x14] = color80;
        poly[0x15] = color80;
        poly[0xC] = color80;
        poly[0xD] = color80;
        poly[0xE] = color;
        poly[0x1C] = color80;
        poly[0x1D] = color80;
        poly[0x1E] = color;

        *(s16 *)(poly + 0x08) = sxy[0][0];
        *(s16 *)(poly + 0x0A) = sxy[0][1];
        *(s16 *)(poly + 0x10) = sxy[1][0];
        *(s16 *)(poly + 0x12) = sxy[1][1];
        *(s16 *)(poly + 0x18) = sxy[2][0];
        *(s16 *)(poly + 0x1A) = sxy[2][1];
        *(s16 *)(poly + 0x20) = sxy[3][0];
        *(s16 *)(poly + 0x22) = sxy[3][1];

        {
            register u32 mask asm("a1") = 0xFFFFFF;
            register s32 ot4 asm("a0") = ot * 4;
            register u32 himask asm("a2") = 0xFF000000;
            *(u32 *)poly = (*(u32 *)poly & himask) | (*(u32 *)(ot4 + (u32)*g + 0x70) & mask);
            ot_entry = (u32 *)(ot4 + (u32)*g);
            ot_entry[0x70 / 4] = (ot_entry[0x70 / 4] & himask) | ((u32)poly & mask);
        }

        angle_base += 0x100;
        i++;
    } while (i < 16);

    func_80018610(GetTPage(0, 0, 0, 0) & 0xFFFF, ot);
    PopMatrix();
}

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

