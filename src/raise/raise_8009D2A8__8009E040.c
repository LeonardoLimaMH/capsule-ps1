#include "common.h"

void func_8009E040(void) {

}

void func_8009E048(void) {
    func_8009E23C();
}

#include "common.h"

/* rand-u16: 0x8006AF80 1 0,1,2,3,5,9 */
/* rand-mem: 0x800EFF74 4 8 */
extern u8 D_80091618[], D_800EFF58[], D_800EC084[];
extern u16 D_8006AF80[];
extern s32 func_800A8CD0(s32, void *);
extern void func_800BAD64(s32);
extern s32 func_800E1B30(void);

s32 func_8009E068(void)
{
  s32 v;
  u8 (*new_var)[];
  new_var = &D_80091618;
  *((u16 *) (((*new_var) + ((*D_8006AF80) * 0x1A8)) + 0x10)) = ((struct 
  {
    u8 _p[0x1C];
    u16 v;
  } *) D_800EFF58)->v;
  v = func_800A8CD0(6, D_800EC084 + (((struct 
  {
    u8 _p[0x1C];
    s32 v;
  } *) D_800EFF58)->v * 12));
  *((u16 *) (((*new_var) + ((*D_8006AF80) * 0x1A8)) + 0x92)) = v;
  func_800BAD64(2);
  return func_800E1B30();
}

extern s16 D_800ED880[];
extern void func_800E2AA0(s32, s32, s32);
s32 func_8009E12C(void)
{
  u8 (*new_var)[];
  new_var = &D_80091618;
  if (*D_800ED880 > 0)
  {
    if (*D_800ED880 == 8)
    {
      func_800E2AA0(*((u16 *) (((*new_var) + (*D_8006AF80) * 0x1A8) + 0x10)), 1, 0);
    }
    *D_800ED880 = *D_800ED880 - 1;
    return 0;
  }
  *D_800ED880 = 0x10;
  return 1;
}

#include "common.h"

s32 func_8009E1C4(void) {
    extern s16 D_800ED88C[];
    extern s32 D_800F0550[];
    extern s32 D_800F0578[];
    s32 temp_v0;

    temp_v0 = func_8009DFAC();
    if (temp_v0 == -1) {
        (*D_800ED88C) = 0;
        func_800BCF98(1);
        (*D_800F0550) = (*D_800F0578);
    }
    return temp_v0;
}

void func_8009E21C(void) {
    func_8009DFAC();
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009E23C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009E3A8);

void func_8009E508(s32 a)
{
  extern s16 D_800EEA78[];
  extern s32 D_8008ED68[];
  s32 *d = D_8008ED68;
  s32 v = d[D_800EEA78[a] + 0x29];
  if (v != 7 && (v & 7) == 7)
  {
    func_8009E3A8(a);
  }
}

void func_8009E568(void) {
    extern s16 D_800ED88C[];
    func_800BBF9C();
    (*D_800ED88C) = 0;
    func_800BBC28(1);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009E598);

void func_8009E72C(void) {
    func_8009F3D4();
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009E74C);

void func_8009ED34(void) {
    func_8009ED54();
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009ED54);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009EDA0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009F00C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009F1C4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009F3D4);

#include "common.h"

/* rand-u16: 0x8006AF80 1 0,1,2,3 */
extern u8 D_800EFF58[], D_80091618[];
extern u16 D_8006AF80[];
extern void func_800A0540(s32), func_800A04F4(void), func_800A0780(s32);
extern s32 func_800A0618(s32);

s32 func_800A0014(s32 a0, s32 a1, s32 a2)
{
  u8 *f = D_800EFF58;
  s32 n = *((s32 *) (f + 0x114));
  u8 *new_var;
  s32 m;
  s32 k;
  if (a2 != 0)
  {
    m = *((s32 *) (f + 0x32C));
    if (n < m)
    {
      k = 0;
    }
    else
      if ((*((s32 *) (f + 0x330))) < n)
    {
      k = 1;
    }
    else
    {
      new_var = D_80091618;
      if ((*((u16 *) ((new_var + ((*D_8006AF80) * 0x1A8)) + 0x10))) != 0)
      {
        goto done;
      }
      if (m != 1)
      {
        goto done;
      }
      k = -1;
    }
    func_800A0540(k);
  }
  func_800A04F4();
  done:
  func_800A0780(a0);

  return func_800A0618(a0);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_800A00E4);

void func_800A0214(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_800A021C);

void func_800A0424(void)
{
  extern s32 D_800EE5F0[];
  extern u8 D_800EFF58[];
  u8 *w = D_800EFF58;
  u8 *p = D_80091618;
  s32 t = D_800EE5F0[3] + *((s32 *) (w + 0x318)) + 3;
  s32 r = func_80019F30(D_800EE5F0[0] | 0x60000, t - *((u16 *) (p + (*D_8006AF80) * 0x1A8 + 0x12)));
  *((s32 *) (*((s32 *) (w + 0x314)) + 0x18)) = r;
}

#include "common.h"

void func_800A04B8(void) {
    func_80025CEC(1, 7, 7, 1);
    func_80025E54(1, 7, 7);
}
