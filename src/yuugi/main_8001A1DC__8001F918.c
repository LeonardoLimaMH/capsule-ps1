#include "common.h"
#include "yuugi.h"

void func_8001F918(void) {
    func_80012508();
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_8001F938);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_8001FA10);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_8001FAD4);

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_8001FDFC);

void func_8001FF48(void) {

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_8001FF50);

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_800200F4);

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80020470);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80020578);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80020688);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80020844);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80020A50);

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918", func_80021A4C);

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
