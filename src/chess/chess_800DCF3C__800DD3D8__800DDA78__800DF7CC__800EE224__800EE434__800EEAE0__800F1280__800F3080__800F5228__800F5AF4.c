#include "ghidra.h"
#include "common.h"

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

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800F5AF4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800F6320);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800F68C8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800F6E88);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800F71B4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800F7484);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800F77D4);

void func_800F7AB4(u8 *arg0) {
    extern u8 *D_8008ED68[];
    extern void SetPolyF4();
    extern void AddPrim();
    extern void func_80013920();

    u8 **g = D_8008ED68;
    u16 a0 = *(u16 *)(arg0 + 0x42);
    s32 s2 = *(s16 *)(arg0 + 0x2A);
    s32 s3 = *(s16 *)(arg0 + 0x2E);
    s32 s4;
    s32 s5;
    s32 tmp;
    register u8 *poly asm("s0");

    if (arg0[0x4D] < (a0 >> 1)) {
        tmp = arg0[0x4D] * 2;
        s4 = (*(u16 *)(arg0 + 0x40) * tmp) / a0 + 2;
    } else {
        tmp = (a0 - arg0[0x4D]) * 2;
        s4 = (*(u16 *)(arg0 + 0x40) * tmp) / a0 + 2;
    }
    s5 = 2;

    {
        u8 *next = 0;
        u8 *base;
        s32 off;
        poly = *(u8 **)(*g + 0x1090);
        base = *g;
        if (poly != 0 && poly + 0x18 <= base + 0x4594) {
            next = poly + 0x18;
        }
        *(u8 **)(base + 0x1090) = next;
        SetPolyF4(poly);
        poly[4] = arg0[0x44];
        poly[5] = arg0[0x45];
        poly[6] = arg0[0x46];
        *(s16 *)(poly + 0x8) = s2;
        *(s16 *)(poly + 0xA) = s3 - s4;
        *(s16 *)(poly + 0xC) = s5 + s2;
        *(s16 *)(poly + 0xE) = s3;
        *(s16 *)(poly + 0x10) = s2 - s5;
        *(s16 *)(poly + 0x12) = s3;
        *(s16 *)(poly + 0x14) = s2;
        *(s16 *)(poly + 0x16) = s4 + s3;
        off = *(s16 *)(arg0 + 0x32) * 4 + 0x70;
        AddPrim(*g + off, poly);
    }

    {
        u8 *next = 0;
        u8 *base;
        s32 off;
        poly = *(u8 **)(*g + 0x1090);
        base = *g;
        if (poly != 0 && poly + 0x18 <= base + 0x4594) {
            next = poly + 0x18;
        }
        *(u8 **)(base + 0x1090) = next;
        SetPolyF4(poly);
        poly[4] = arg0[0x44];
        poly[5] = arg0[0x45];
        poly[6] = arg0[0x46];
        *(s16 *)(poly + 0x8) = s2;
        *(s16 *)(poly + 0xA) = s3 - s5;
        *(s16 *)(poly + 0xC) = s4 + s2;
        *(s16 *)(poly + 0xE) = s3;
        *(s16 *)(poly + 0x10) = s2 - s4;
        *(s16 *)(poly + 0x12) = s3;
        *(s16 *)(poly + 0x14) = s2;
        *(s16 *)(poly + 0x16) = s5 + s3;
        off = *(s16 *)(arg0 + 0x32) * 4 + 0x70;
        AddPrim(*g + off, poly);
    }

    arg0[0x4D] += 1;
    if (arg0[0x4D] >= *(u16 *)(arg0 + 0x42)) {
        if (arg0[0x4C] != 0) {
            func_80013920(arg0);
        } else {
            arg0[0x4D] = arg0[0x4D] % *(u16 *)(arg0 + 0x42);
        }
    }
}

void func_800F7D1C(void *arg0) {
    typedef struct {
        u16 x50;
        u16 x52;
        s16 x54;
        s16 x56;
    } SubF7D1C;
    typedef struct {
        u8 pad0[0x28];
        u8 *ptr28;
        u8 count2C;
        u8 pad2D[0x50 - 0x2D];
        SubF7D1C sub[1];
    } ObjF7D1C;
    ObjF7D1C *obj = (ObjF7D1C *)arg0;
    u8 *s1 = obj->ptr28;
    s32 i;

    for (i = 0; i < obj->count2C; i++) {
        if (obj->sub[i].x56 == 0) {
            s16 tmp;
            *(u16 *)(s1 + 0x46) = obj->sub[i].x50;
            *(u16 *)(s1 + 0x4A) = obj->sub[i].x52;
            *(s16 *)(s1 + 0x4E) = obj->sub[i].x54;
            tmp = 0x78000 / (obj->sub[i].x54 - 0x96);
            *(s16 *)(s1 + 0x52) = tmp;
            *(s16 *)(s1 + 0x50) = tmp;
            *(s16 *)(s1 + 0x54) = func_800202A4(0x1000);
            func_800161C4(s1);
        }
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800F7DE4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800F8374);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800F865C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800F8B48);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800F9154);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800F97FC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800F9E50);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800FA548);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800FAC74);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800FB0A0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800FB368);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800FB650);

#include "common.h"

#include "ghidra.h"
void func_800FBB90(undefined2 param_1)

{
    extern u8 D_80018600[];
    extern int func_800F52C4();
  int iVar1;

  iVar1 = func_80015B3C(D_80018600,func_800F52C4,1);
  *(undefined1 *)(iVar1 + 0x28) = 0xff;
  *(undefined1 *)(iVar1 + 0x29) = 0xff;
  *(undefined1 *)(iVar1 + 0x2a) = 0xff;
  *(undefined1 *)(iVar1 + 0x2c) = 0;
  *(undefined1 *)(iVar1 + 0x2d) = 0;
  *(undefined1 *)(iVar1 + 0x2e) = 0;
  *(undefined1 *)(iVar1 + 0x30) = 1;
  *(undefined2 *)(iVar1 + 0x32) = param_1;
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800FBBF4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800FBF40);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800FC42C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800FCB5C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434__800EEAE0__800F1280__800F3080__800F5228__800F5AF4", func_800FDA08);
