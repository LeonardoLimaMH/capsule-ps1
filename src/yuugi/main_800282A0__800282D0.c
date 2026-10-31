#include "common.h"
#include "yuugi.h"

s32 func_800282D0(void) {
    extern s32 D_80078C3C;
    extern s32 D_80078C40;
    D_80078C40 = 0;
    D_80078C3C = 0;
    return 0;
}

s32 func_800282E0(void)
{
  extern u16 D_80078C34;
  extern s32 D_80078C3C;
  extern s32 D_80078C40;
  switch (D_80078C40)
  {
    case 0:
 do { func_800338DC(D_80078C34); D_80078C40 += 1; } while (0);
      return 0;

    case 1:
      if (func_80019654() != 0)
    {
      D_80078C40 = 0;
      D_80078C3C = 0;
      return 1;
    }
      return 0;

    default:
      return 0;

  }

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002835C);

#include "common.h"

typedef struct {
    u32 mode;
    void *crect;
    u32 *caddr;
    void *prect;
    u32 *paddr;
} Tim;

extern s32 ReadTIM();
extern s32 func_80019F30();

void func_8002840C(s32 a) {
    u8 *p;

    Tim t;
    u32 packed;

    p = (u8 *)func_80019F30(a | 0xF0000) + 4;
    OpenTIM(p);
    packed = *(u32 *)(p - 4) & 0x100;
    if (ReadTIM(&t) == 0) {
        return;
    }
    if (t.caddr != 0) {
        LoadImage(t.crect, t.caddr);
    }
    if (t.paddr == 0) {
        return;
    }
    if (packed) {
        func_8001A8C0(t.paddr, 0x801CC000);
        LoadImage(t.prect, 0x801CC000);
        DrawSync(0);
    } else {
        LoadImage(t.prect, t.paddr);
    }
}

void func_800284C8(s32 a) {
    u8 *p;

    Tim t;
    u32 packed;

    p = (u8 *)func_80019F30(a | 0xF0000);
    if (p == 0) {
        return;
    }
    p += 4;
    OpenTIM(p);
    packed = *(u32 *)(p - 4) & 0x100;
    if (ReadTIM(&t) == 0) {
        return;
    }
    if (t.caddr != 0) {
        LoadImage(t.crect, t.caddr);
    }
    if (t.paddr == 0) {
        return;
    }
    if (packed) {
        func_8001A8C0(t.paddr, 0x801CC000);
        LoadImage(t.prect, 0x801CC000);
        DrawSync(0);
    } else {
        LoadImage(t.prect, t.paddr);
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002858C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_800293E8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_800294AC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_800296C0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_80029784);

void func_80029A9C(void *arg0) {
    extern s32 D_80069B28[];
    extern s32 D_80069EB8[];
    s32 temp_s2;
    s32 var_s0;
    s32 var_s1;

    if (((*D_80069B28) != 0) && ((*D_80069EB8) == 0)) {
        temp_s2 = M2C_FIELD(arg0, s32 *, 0xC);
        var_s1 = M2C_FIELD(arg0, s32 *, 0xA0);
        var_s0 = 0;
        if (temp_s2 > 0) {
            do {
                func_800D87E8(arg0, var_s0, var_s1);
                var_s0 += 1;
                var_s1 += 0x2C;
            } while (var_s0 < temp_s2);
        }
    }
}

#include "common.h"

void func_80029B28(void *arg0) {
    extern s32 D_80069B28[];
    extern s32 D_80069EB8[];
    s32 temp_s2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;

    if (((*D_80069B28) != 0) && ((*D_80069EB8) == 0)) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 8);
        temp_s2 = M2C_FIELD(arg0, s32 *, 0xC);
        switch (temp_v1) {                          /* irregular */
        case 0:
            var_s1 = M2C_FIELD(arg0, s32 *, 0xA0);
            var_s0 = 0;
            if (temp_s2 > 0) {
                do {
                    func_80023C74(arg0, var_s0, var_s1);
                    var_s0 += 1;
                    var_s1 += 0x2C;
                } while (var_s0 < temp_s2);
                return;
            }
            break;
        case 1:
            var_s1_2 = M2C_FIELD(arg0, s32 *, 0xA0);
            var_s0_2 = 0;
            if (temp_s2 > 0) {
                do {
                    func_80023C74(arg0, var_s0_2, var_s1_2);
                    var_s0_2 += 1;
                    var_s1_2 += 0x2C;
                } while (var_s0_2 < temp_s2);
                return;
            }
            break;
        case 2:
            var_s1_3 = M2C_FIELD(arg0, s32 *, 0xA0);
            var_s0_3 = 0;
            if (temp_s2 > 0) {
                do {
                    func_80023C74(arg0, var_s0_3, var_s1_3);
                    var_s0_3 += 1;
                    var_s1_3 += 0x50;
                } while (var_s0_3 < temp_s2);
                return;
            }
            break;
        case 3:
            var_s1_4 = M2C_FIELD(arg0, s32 *, 0xA0);
            var_s0_4 = 0;
            if (temp_s2 > 0) {
                do {
                    func_80023C74(arg0, var_s0_4, var_s1_4);
                    var_s0_4 += 1;
                    var_s1_4 += 0x50;
                } while (var_s0_4 < temp_s2);
            }
            break;
        }
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_80029C90);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_80029E90);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002A090);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002A290);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002A490);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002A734);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002A934);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002AB68);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002AD68);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002AF9C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002B138);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002B334);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002B4D0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002B66C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002B7E8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002B964);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002BD08);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002BD94);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002BE20);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002BEAC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002C000);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002C214);

#include "ghidra.h"
uint func_8002C438(undefined2 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((param_4 & 0xffff) * 8 + param_2);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  func_8002C4E8(param_1,param_3);
  return param_4 & 0xffff;
}

#include "ghidra.h"
uint func_8002C490(undefined2 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((param_4 & 0xffff) * 8 + param_2);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  func_8002C4E8(param_1,param_3);
  return param_4 & 0xffff;
}

void func_8002C4E8(void *arg0, void *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) + M2C_FIELD(arg1, u16 *, 0));
        M2C_FIELD(arg0, u16 *, 2) = (u16) (M2C_FIELD(arg0, u16 *, 2) + M2C_FIELD(arg1, u16 *, 2));
        M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) + M2C_FIELD(arg1, u16 *, 4));
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002C534);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002C610);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002C728);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002C768);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002C93C);

extern u8 D_8008ED68[];
extern u8 D_800859F3[];
extern s32 func_800248E8();
extern void func_80029784();
extern void func_8002453C();
extern void func_800A9744();

void func_8002CA80(u8 *p)
{
  u8 *s2 = D_8008ED68;
  u8 *s1 = *((u8 **) (p + 0x18));
  int new_var;
  u8 m = *D_800859F3;
  if (m == 1)
  {
    *((u32 *) (p + 0x50)) |= 1;
  }
  else
    if (m == 3)
  {
    *((u32 *) (p + 0x50)) &= ~1;
  }
  new_var = (*((u32 *) (p + 0x50))) & 1;
  if (new_var == 1)
  {
    return;
  }
  if ((s2[0x99A] == 0) && ((*((u16 *) (p + 0x4E))) != 0))
  {
    if (func_800248E8(p) != 0)
    {
      return;
    }
  }
  if (s2[0xA66] != 0)
  {
    *((u16 *) (p + 0x4E)) = 1;
  }
  if ((*((s32 *) (s1 + 4))) == 1)
  {
    func_800A9744();
  }
  switch (*((u16 *) (p + 0x4E)))
  {
    case 1:

    case 2:
      func_80029784(0, s1, s2, func_8002453C);

    case 0:
      *((u16 *) (p + 0x4E)) += 1;
      break;

    case 3:
      func_80029784(1, s1, s2, 0);
      break;

    case 4:
      break;

  }

}

#include "common.h"
