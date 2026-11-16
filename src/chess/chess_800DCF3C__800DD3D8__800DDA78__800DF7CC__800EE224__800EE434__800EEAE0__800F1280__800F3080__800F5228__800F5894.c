#include "ghidra.h"
#include "common.h"


typedef struct {
    s16 vx, vy, vz, pad;
    s16 dx, dx_pad;
    s16 dz, dz_pad;
    s16 sx, sy;
    s32 p;
    s32 flag;
} S_800EFCF4_Work;

typedef struct { u8 b[4]; } U4_800DD;

extern u8 D_8008ED68[];
extern s32 func_800FF190();
extern s32 func_800202A4();
extern void func_80013920();

typedef struct {
    u8 pad0[0x10];
    u32 a;
    u32 b;
    u8 pad18[0x24];
} S_800DD_Tab;

typedef struct {
    u8 pad0[0x13];
    u8 f13;
    u8 pad14[0x28];
} S_800DD_Tab8;



typedef struct { u8 pad0[0x28]; u16 x28; u16 x2a; u16 x2c; u8 b2e, b2f, b30, pad31; u8 b32, b33, b34, pad35; u16 x36; u16 x38; } ChessObjA;





void func_800F5894(u8 *arg0) {
    extern u8 D_80119710[];
    extern u8 D_800906A0[];
    extern s32 GetTPage();
    extern s32 RotTransPers();
    extern void SetPolyG3();
    extern void SetSemiTrans();
    extern void AddPrim();
    extern void func_8002CEC0();
    extern void func_80018610();

    register u8 *p asm("s1") = arg0;
    u16 tpage;
    s32 xy;
    s32 b, c;
    s32 ot;
    s32 off;
    s32 sx, sy;
    s32 i;
    u8 *g;

    tpage = GetTPage(0, 1, 0, 0);
    g = D_8008ED68;
    if (D_80119710[0x3D] == 0) {
        func_8002CEC0(D_800906A0);
        D_80119710[0x3D] = 1;
    }
    ot = RotTransPers(p + 0x28, &xy, &b, &c);
    i = 0;
    off = ot * 4 + 0x70;
    sx = ((s16 *)&xy)[0];
    sy = ((s16 *)&xy)[1];
    for (; i < 4; i++) {
        u8 *poly = *(u8 **)(*(u8 **)g + 0x1090);
        u8 *next = 0;
        u8 *base = *(u8 **)g;
        if (poly != 0) {
            if ((u32)(poly + 0x1C) <= (u32)(base + 0x4594)) {
                next = poly + 0x1C;
            }
        }
        *(u8 **)(base + 0x1090) = next;
        SetPolyG3(poly);
        SetSemiTrans(poly, 1);
        poly[4] = p[0x30];
        poly[5] = p[0x31];
        poly[6] = p[0x32];
        poly[0xC] = 0;
        poly[0xD] = 0;
        poly[0xE] = 0;
        poly[0x14] = 0;
        poly[0x15] = 0;
        poly[0x16] = 0;
        *(s16 *)(poly + 0x18) = sx;
        *(s16 *)(poly + 0x10) = sx;
        *(s16 *)(poly + 8) = sx;
        *(s16 *)(poly + 0x1A) = sy;
        *(s16 *)(poly + 0x12) = sy;
        *(s16 *)(poly + 0xA) = sy;
        switch (i) {
        case 0:
            *(u16 *)(poly + 0x10) += *(u16 *)(p + 0x36);
            *(u16 *)(poly + 0x1A) -= *(u16 *)(p + 0x34);
            break;
        case 1:
            *(u16 *)(poly + 0x10) += *(u16 *)(p + 0x36);
            *(u16 *)(poly + 0x1A) += *(u16 *)(p + 0x34);
            break;
        case 2:
            *(u16 *)(poly + 0x10) -= *(u16 *)(p + 0x36);
            *(u16 *)(poly + 0x1A) += *(u16 *)(p + 0x34);
            break;
        case 3:
            *(u16 *)(poly + 0x10) -= *(u16 *)(p + 0x36);
            *(u16 *)(poly + 0x1A) -= *(u16 *)(p + 0x34);
            break;
        }
        AddPrim(*(u8 **)g + off, poly);
    }
    func_80018610(tpage, ot);
}




