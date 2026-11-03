#include "common.h"
#include "yuugi.h"

typedef struct {
    s16 x;
    s16 y;
    s32 f_4;
    u8 f_8[0x10];
} S_800637AC;
extern S_800637AC D_800637AC[];

void func_8001F918(void) {
    func_80012508();
}

void func_8001F938(void) {
    extern s32 D_80078BE0;
    extern u8 D_8008ED68[];
    extern s32 D_8008EDF0[];
    s32 n;

    n = func_8001FA10(D_80078BE0);
    if (M2C_GFIELD(D_8008ED68, s32, 0x88) & 0x4000) {
        func_80034AB0(0x84);
        D_80078BE0 = (u32)(D_80078BE0 + 1) % (u32)n;
    }
    if (M2C_GFIELD(D_8008ED68, s32, 0x88) & 0x1000) {
        func_80034AB0(0x84);
        if (--D_80078BE0 < 0) {
            D_80078BE0 = n - 1;
        }
    }
    if (D_8008EDF0[0] & 0x20) {
        func_80034AB0(0x48);
        func_8001FAD4(D_80078BE0);
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_8001FA10);

#include "common.h"
extern s8 D_80085429[];
s32 func_8001FAD4(s32 i)
{
  S_800637AC *new_var2;
  int new_var;
  new_var = 0;
  *D_80085429 = (int) new_var;
  new_var2 = D_800637AC;
  new_var2 = new_var2 + i;
  return func_80012200(new_var2->f_4);
}

#include "common.h"

typedef struct {
    s16 x, y, w, h;
} Rect;

extern Rect D_80078BE8[];
extern u8 D_8001033C[];
extern s32 DsControlB();

void func_8001FB18(void) {
    Rect r = (*D_80078BE8);
    u8 c[8];

    ResetCallback();
    ClearImage(&r, 0, 0, 0);
    DrawSync(0);
    c[0] = 0x80;
    while (DsControlB(0xE, c, 0) == 0) {
    }
    DsDataCallback(0);
    DsReadyCallback(0);
    while (DsControlB(9, 0, 0) == 0) {
    }
    StopRCnt(0xF2000000);
    StopRCnt(0xF2000001);
    StopRCnt(0xF2000002);
    StopRCnt(0xF2000003);
    PadStop();
    ResetGraph(3);
    StopCallback();
    func_8004FDEC();
    func_8004FDDC(D_8001033C, 0x801FF000, 0);
    _96_remove();
}

#include "common.h"

extern u16 D_8008EE44[];
extern u8 D_8001033C[];
extern s32 func_80012508(), _96_remove();
extern void ResetCallback(), ClearImage();
extern s32 DsControlB();
extern void DsDataCallback(), DsReadyCallback(), StopRCnt(), PadStop();
extern void StopCallback(), func_8004FDEC(), func_8004FDDC();

s32 func_8001FC30(void)
{
  Rect rect;
  u8 com[8];
  switch (*D_8008EE44)
  {
    case 0:
      return func_80012508();

    case 1:
      rect = *D_80078BE8;
      ResetCallback();
      ClearImage(&rect, 0, 0, 0);
      DrawSync(0);
      com[0] = 0x80;
      while (DsControlB(0xE, com, 0) == 0)
    {
    }

      DsDataCallback(0);
      DsReadyCallback(0);
      while (DsControlB((long) 9, 0, 0) == 0)
    {
    }

      StopRCnt(0xF2000000);
      StopRCnt(0xF2000001);
      StopRCnt(0xF2000002);
      StopRCnt(0xF2000003);
      PadStop();
      ResetGraph(3);
      StopCallback();
      func_8004FDEC();
      func_8004FDDC(D_8001033C, 0x801FF000, 0);
      return _96_remove();

    return (((u32) (&(*D_80078BE8))) + 0x8000) & 0xFFFF0000;
  }

}

#include "common.h"

extern void func_8002E4D0();

void func_8001FD74(void) {
    func_80012200(func_8002E4D0);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_8001FD98);

void func_8001FDFC(void) {
    extern u8 D_80085428[];
    extern u8 D_8008ED68[];
    extern u8 D_8009A0B8[];
    extern s32 func_80012508();

    switch (M2C_GFIELD(D_8008ED68, u16, 0xDC)) {
    case 0:
        D_80085428[0] = 1;
        M2C_GFIELD(D_80085428, s8, 1) = 1;
        func_80013668();
        func_80012508();
        break;
    case 1:
        func_8001A480(2, 0x80097800);
        func_80019F30(0x110002, func_80012508);
        *(u16 *)(D_80085428 + 0xA) = 0;
        func_80012508();
        break;
    case 2:
        M2C_GFIELD(D_80085428, u16, 0xA) += (M2C_GFIELD(D_8008ED68, u8, 0x103) < 2) ? 1 : M2C_GFIELD(D_8008ED68, u8, 0x103);
        func_80018F90(*(u16 *)(D_80085428 + 0xA), 2);
        break;
    case 3:
        M2C_GFIELD(D_80085428, u16, 0xA) += (M2C_GFIELD(D_8008ED68, u8, 0x103) < 2) ? 1 : M2C_GFIELD(D_8008ED68, u8, 0x103);
        func_80018F90(*(u16 *)(D_80085428 + 0xA), 2);
        func_80012200(D_8009A0B8);
        break;
    }
}

void func_8001FF48(void) {

}

void func_8001FF50(void) {
    extern u8 D_80085428[];
    extern u8 D_8008ED68[];
    extern u8 D_800A5E54[];
    extern s32 func_80012508();

    switch (M2C_GFIELD(D_8008ED68, u16, 0xDC)) {
    case 0:
        D_80085428[0] = 0;
        func_80013668();
        func_80012508();
        break;
    case 1:
        func_8001A480(3, 0x80097800);
        func_80019F30(0x110003, func_80012508);
        *(u16 *)(D_80085428 + 0xA) = 0;
        func_80012508();
        break;
    case 2:
        M2C_GFIELD(D_80085428, u16, 0xA) += (M2C_GFIELD(D_8008ED68, u8, 0x103) < 2) ? 1 : M2C_GFIELD(D_8008ED68, u8, 0x103);
        func_80018F90(*(u16 *)(D_80085428 + 0xA), 3);
        break;
    case 3:
        M2C_GFIELD(D_80085428, u16, 0xA) += (M2C_GFIELD(D_8008ED68, u8, 0x103) < 2) ? 1 : M2C_GFIELD(D_8008ED68, u8, 0x103);
        func_80018F90(*(u16 *)(D_80085428 + 0xA), 3);
        func_80012200(D_800A5E54);
        break;
    }
}

void func_80020094(void) {

}

#include "common.h"

extern u16 D_8005089C[];
extern s32 func_80033E5C();

s32 func_8002009C(s32 a) {
    s32 i;

    D_8005089C[0] = a != 0;
    for (i = 1; i < 11; i++) {
        D_8005089C[i] = 0xFFFF;
    }
    return func_80033E5C(D_8005089C, 1);
}

s32 func_800200F4(s32 cur, s32 max, s32 mode) {
    extern s32 D_8008EDF0[];

    if ((D_8008EDF0[0] & 0x1000) && mode != 1) {
        cur = (cur > 0) ? (cur - 1) : (max - 1);
        func_80034AB0(0x84);
    } else if ((D_8008EDF0[0] & 0x4000) && mode != 1) {
        cur = (cur < max - 1) ? (cur + 1) : 0;
        func_80034AB0(0x84);
    } else if ((D_8008EDF0[0] & 0x8000) && mode != 0) {
        cur = (cur > 0) ? (cur - 1) : (max - 1);
        func_80034AB0(0x84);
    } else if ((D_8008EDF0[0] & 0x2000) && mode != 0) {
        cur = (cur < max - 1) ? (cur + 1) : 0;
        func_80034AB0(0x84);
    }
    return cur;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_800201D8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_800202A4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80020304);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80020364);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_800203DC);

s32 func_80020458(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x5C9) & 1;
}

s32 func_80020464(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x5CA) & 0x10;
}

void func_80020470(s32 x, s32 y, s32 ang, s16 *ox, s16 *oy) {
    s32 t = ((s16)ang << 12) / 360;

    *ox = ((s16)x * rcos(t) - (s16)y * rsin(t)) / 4096;
    *oy = ((s16)x * rsin(t) + (s16)y * rcos(t)) / 4096;
}

void func_80020578(s32 x, s32 y, s32 ang, s16 *ox, s16 *oy) {
    s16 t = (s16)ang % 4096;

    *ox = ((s16)x * rcos(t) - (s16)y * rsin(t)) / 4096;
    *oy = ((s16)x * rsin(t) + (s16)y * rcos(t)) / 4096;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80020688);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80020844);

void func_80020A50(s32 x, s32 y, s32 w, s32 h, u8 *c0, u8 *c1, u8 *c2, u8 *c3, u8 tp, s32 ot) {
    struct PolyG4 {
        u32 tag;
        u8 r0, g0, b0, code;
        s16 x0, y0;
        u8 r1, g1, b1, pad1;
        s16 x1, y1;
        u8 r2, g2, b2, pad2;
        s16 x2, y2;
        u8 r3, g3, b3, pad3;
        s16 x3, y3;
    };
    struct S_ED68 {
        u8 *base;
        u8 pad[0x104];
        s32 hx;
        s32 hy;
    };
    extern u8 D_8008ED68[];
    extern void SetPolyG4(), SetSemiTrans(), AddPrim(), func_80018610();
    extern u16 GetTPage();
    u8 *base = ((struct S_ED68 *)D_8008ED68)->base;
    struct PolyG4 *p = *(struct PolyG4 **)(base + 0x1090);
    struct PolyG4 *nx = 0;

    if (p != 0 && !(base + 0x4594 < (u8 *)p + 0x24)) {
        nx = (struct PolyG4 *)((u8 *)p + 0x24);
    }
    *(struct PolyG4 **)(base + 0x1090) = nx;
    SetPolyG4(p);
    SetSemiTrans(p, 1);
    p->r0 = c0[0];
    p->g0 = c0[1];
    p->b0 = c0[2];
    p->r1 = c1[0];
    p->g1 = c1[1];
    p->b1 = c1[2];
    p->r2 = c2[0];
    p->g2 = c2[1];
    p->b2 = c2[2];
    p->r3 = c3[0];
    p->g3 = c3[1];
    p->b3 = c3[2];
    p->x0 = x + ((struct S_ED68 *)D_8008ED68)->hx / 2;
    p->y0 = y + ((struct S_ED68 *)D_8008ED68)->hy / 2;
    p->x1 = w + (x + ((struct S_ED68 *)D_8008ED68)->hx / 2);
    p->y1 = y + ((struct S_ED68 *)D_8008ED68)->hy / 2;
    p->x2 = x + ((struct S_ED68 *)D_8008ED68)->hx / 2;
    p->y2 = h + (y + ((struct S_ED68 *)D_8008ED68)->hy / 2);
    p->x3 = w + (x + ((struct S_ED68 *)D_8008ED68)->hx / 2);
    p->y3 = h + (y + ((struct S_ED68 *)D_8008ED68)->hy / 2);
    AddPrim(((struct S_ED68 *)D_8008ED68)->base + 0x70 + ot * 4, p);
    func_80018610(GetTPage(0, tp, 0, 0) & 0xFFFF, ot);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80020CE4);

#include "common.h"

extern u8 *func_80015B3C();
extern void func_80018600();

u8 *func_80020E50(u8 *src, s32 a1) {
    u8 *obj = func_80015B3C(a1, func_80018600);

    func_8001602C(obj);
    *(s32 *)(obj + 0xC) = *(s32 *)(src + 0xC);
    func_8001AA70(obj + 0x18, src + 0x18, 0x34);
    return obj;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80020EB4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80020F0C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80021064);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_800212AC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_800214B0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80021584);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80021618);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80021870);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80021910);

s32 func_80021A4C(s32 arg0, s32 arg1) {
    s32 var_a2;
    s32 temp_v1;
    void *temp_a0;

    var_a2 = 0;
    temp_a0 = arg0 + 0x10;
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0xE);
    M2C_FIELD(temp_a0, s8 *, 2) = 1;
    M2C_FIELD(temp_a0, s16 *, 0xC) = (s16) (temp_v1 * 3);
    if (arg1 == 0) {
        var_a2 = M2C_FIELD(temp_a0, u16 *, 0xE) == 0;
    } else if ((u16) M2C_FIELD(temp_a0, u16 *, 0xE) >= 0x20U) {
        var_a2 = 1;
    }
    return var_a2;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80021A9C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80021BB4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80021EA8);

void func_800220B8(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E) = 0;
    M2C_FIELD(arg0, s8 *, 0x11) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_800220D4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_8002243C);

#include "common.h"

extern u8 D_80085428[];

void func_80022700(u8 *o) {
    u16 v;

    if (M2C_GFIELD(D_80085428, s32, 0x14) == 0) {
        func_800185F8(o);
        return;
    }
    if (D_80085428[0x12] != 0) {
        *(s32 *)(o + 0x38) &= ~1;
        v = M2C_GFIELD(D_80085428, u16, 0x1C);
        *(s16 *)(o + 0x4A) = v + 0x26;
        if (M2C_GFIELD(D_80085428, s32, 0x18) != 0) {
            func_8001F1A8(0x3F, (s16)(v + 0x5D), 1, 0, 0, M2C_GFIELD(D_80085428, s32, 0x18), 0, 8,
                          *(s16 *)(o + 0x4E) - 1);
        }
    } else {
        *(s32 *)(o + 0x38) |= 1;
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_800227D4);

#include "common.h"

extern u8 *func_80015B3C();
extern void func_80015EF8(), func_800227D4(), func_800161C4();
extern s32 func_80019F30();

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

void func_80022C34(s32 f, s32 a1, s32 a2)
{
  u8 *obj;
  u32 new_var;
  u32 t;
  obj = func_80015B3C(func_800227D4, func_800161C4, 4);
  func_80015EF8(obj);
  *((u32 *) (obj + 0x18)) = (f != 0) ? (func_80019F30(0x60013, 0xD7)) : (func_80019F30(0x6000E, 0x2B7));
  *((s16 *) (obj + 0x46)) = -0x58;
  *((s16 *) (obj + 0x4A)) = -0x1E8;
  *((s16 *) (obj + 0x6E)) = 6;
  *((s16 *) (obj + 0x4E)) = 4;
  *((u32 *) (obj + 0x34)) = ((*((u32 *) (obj + 0x34))) & (~0x7F)) | 1;
  obj = func_80015B3C(func_800227D4, func_800161C4, 4);
  func_80015EF8(obj);
  *((u32 *) (obj + 0x18)) = (f != 0) ? (func_80019F30(0x60013, 0xD8)) : (func_80019F30(0x6000E, 0x2B8));
  *((s16 *) (obj + 0x46)) = -0x1D8;
  new_var = *((u32 *) (obj + 0x34));
  *((s16 *) (obj + 0x6A)) = 6;
  *((s16 *) (obj + 0x4A)) = -0x30;
  t = new_var;
  *((s16 *) (obj + 0x4E)) = 4;
  *((u32 *) (obj + 0x7C)) = a2;
  *((u32 *) (obj + 0x34)) = (t & (~0x7F)) | 2;
  obj = func_80015B3C(func_800227D4, func_800161C4, 4);
  func_80015EF8(obj);
  t = *((u32 *) (obj + 0x34));
  *((s16 *) (obj + 0x46)) = 0x1C0;
  *((s16 *) (obj + 0x6A)) = -6;
  *((s16 *) (obj + 0x4A)) = 8;
  *((s16 *) (obj + 0x4E)) = 4;
  *((u32 *) (obj + 0x7C)) = a2;
  *((u32 *) (obj + 0x34)) = t & (~0x7F);
  obj = func_80015B3C(func_800227D4, func_800161C4, 4);
  func_80015EF8(obj);
  *((u32 *) (obj + 0x18)) = (f != 0) ? (func_80019F30(0x60013, 0xD9)) : (func_80019F30(0x6000E, 0x2B9));
  *((s16 *) (obj + 0x46)) = 0x1A0;
  *((s16 *) (obj + 0x6A)) = -6;
  *((s16 *) (obj + 0x4A)) = -0x30;
  *((s16 *) (obj + 0x4E)) = 4;
  *((u32 *) (obj + 0x34)) = ((*((u32 *) (obj + 0x34))) & (~0x7F)) | 3;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80022E64);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80022F80);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80023050);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80023120);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_800231C4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_800232F4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_8002367C);

void func_800238DC(void) {
    func_80020094();
}

#include "common.h"

extern s32 (*D_80069AA4[])(void);
extern u16 D_8008EE44[];

s32 func_800238FC(void) {
    return D_80069AA4[(*D_8008EE44)]();
}
