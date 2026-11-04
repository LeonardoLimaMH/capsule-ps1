#include "common.h"

void slpm__spu_Fr_(s32 addr, u16 a1, s32 size) {
    extern volatile u16 *D_801333D4;
    extern volatile s32 *D_801333D8;
    extern volatile s32 *D_801333DC;
    extern volatile s32 *D_801333E0;
    extern s32 D_80133424;
    D_801333D4[0xD3] = a1;
    slpm__spu_Fw1ts();
    D_801333D4[0xD5] |= 0x30;
    slpm__spu_Fw1ts();
    func_8011F4B4();
    *D_801333D8 = addr;
    *D_801333DC = (size << 16) | 0x10;
    D_80133424 = 1;
    *D_801333E0 = 0x01000200;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011EF00", slpm__spu_t);

s32 slpm__spu_Fw(s32 arg0, s32 arg1) {
    extern u16 D_801333EC[];
    extern s32 D_801333F0[];
    extern s32 D_801333FC[];
    if (*D_801333F0 == 0) {
        slpm__spu_t(2, (*D_801333EC) << (*D_801333FC));
        slpm__spu_t(1);
        slpm__spu_t(3, arg0, arg1);
    } else {
        func_8011EC84(arg0, arg1);
    }
    return arg1;
}

#include "common.h"

s32 slpm__spu_Fr(s32 arg0, s32 arg1) {
    extern u16 D_801333EC[];
    extern s32 D_801333FC[];
    slpm__spu_t(2, (*D_801333EC) << (*D_801333FC));
    slpm__spu_t(0);
    slpm__spu_t(3, arg0, arg1);
    return arg1;
}

#include "ghidra.h"
void slpm__spu_FsetRXX(int param_1, uint param_2, int param_3)
{
  extern s32 D_801333D4[];
  extern s32 D_801333FC[];
  if (param_3 == 0)
  {
    *((short *) ((param_1 * 2) + (*D_801333D4))) = (short) param_2;
  }
  else
  {
    *((short *) ((param_1 * 2) + (*D_801333D4))) = (short) (param_2 >> (*D_801333FC));
  }
  return;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011EF00", slpm__spu_FsetRXXa);

u32 slpm__spu_FgetRXXa(s32 param_1, s32 param_2) {
    extern u16 *D_801333D4;
    extern s32 D_801333FC;
    register u32 val asm("a0");
    val = D_801333D4[param_1];
    if (param_2 == -1) {
        return val;
    }
    return val << D_801333FC;
}

void slpm__spu_FsetPCR(s32 arg0) {
    extern u32 *D_801333E4;

    *D_801333E4 &= 0xFFF8FFFF;
    if (arg0 != 0) {
        *D_801333E4 |= 0x30000;
    } else {
        *D_801333E4 |= 0x50000;
    }
}

void func_8011F48C(void) {
    extern s32 * D_801333E8[];
    *(*D_801333E8) = (*(*D_801333E8) & 0xF0FFFFFF) | 0x20000000;
}

void func_8011F4B4(void) {
    extern s32 * D_801333E8[];
    *(*D_801333E8) = (*(*D_801333E8) & 0xF0FFFFFF) | 0x22000000;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011EF00", slpm__spu_Fw1ts);
