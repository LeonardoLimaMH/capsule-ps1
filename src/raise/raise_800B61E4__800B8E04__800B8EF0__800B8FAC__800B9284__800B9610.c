#include "common.h"

typedef struct {
    u8 _p0[0xA4];
    u16 f_A4;
    u8 _pA6[0x2];
    u16 f_A8;
    u8 _pAA[0xE2];
    s32 f_18C;
    u8 _p190[0x18];
} S_80091618;
extern S_80091618 D_80091618[];

typedef struct {
    u8 _p0[0x332];
    u16 f_332;
    u16 f_334;
    u16 f_336;
    u16 f_338;
    u8 _p33A[0x8];
    s16 f_342;
    s16 f_344;
    u8 _p346[0x456];
} S_80100F38;
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* rand-u16: 0x800EF2D8 1 0,1,2,3 */
extern u16 D_800EF2D8;
extern s32 func_800D1548(void);
extern void func_800D1CC4(s32, s32, s32, s32);

s32 func_800B9610(void) {
    extern u16 D_8006AF80[];
    extern s16 D_800EFA4A[];
    extern s16 D_800EFA4C[];
    s32 temp_s0;
    s32 var_s1;

    var_s1 = 1;
    (*D_800EFA4A) = 0;
    (*D_800EFA4C) = 0;
    do {
        temp_s0 = func_800B1260(var_s1) & 0xFFFF;
        if (temp_s0 != 0xFFFF) {
            func_800B4860(var_s1, temp_s0);
            func_800B4AAC(temp_s0);
        }
        var_s1 -= 1;
    } while (var_s1 >= 0);
    func_800B6FA0();
    if (func_800D1548() != 0) {
        func_800D1CC4((*D_8006AF80), 0xA, 0, 0);
    }
    func_800ABF7C(1);
    return 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04__800B8EF0__800B8FAC__800B9284__800B9610", func_800B96C0);

void func_800B980C(void) {
    extern u16 D_8006AF80[];
    extern s16 D_800EFA4A[];
    extern s16 D_800EFA4C[];
    func_800B8BF0(1);
    func_800B8BF0(0);
    func_800A8E48();
    func_800D1CC4((*D_8006AF80), 0xB, 0, 0);
    (*D_800EFA4C) = 0;
    if ((*D_800EFA4A) != 0) {
        func_80024990(D_80091618[(*D_8006AF80)].f_18C, 1, 0x32, 0);
    }
}

extern u8 D_800900C0[];

s32 func_800B98AC(void)
{
  u8 *new_var;
  u16 i;
  new_var = D_800900C0;
  if (((struct 
  {
    u8 _p[0x268];
    s32 v;
  } *) new_var)->v == (-0x640))
  {
    return 1;
  }
  for (i = 3; i < 6; i++)
  {
    *((s32 *) ((new_var + (i * 0xBC)) + 0x34)) -= 0x14;
  }

  return 0;
}
