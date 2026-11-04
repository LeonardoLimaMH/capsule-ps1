#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003F6E4", _spu_Fr_);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003F6E4", _spu_t);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003F6E4", _spu_Fw);

#include "common.h"

s32 _spu_Fr(s32 arg0, s32 arg1) {
    extern u16 D_800715B0[];
    extern s32 D_800715C0[];
    _spu_t(2, (*D_800715B0) << (*D_800715C0));
    _spu_t(0);
    _spu_t(3, arg0, arg1);
    return arg1;
}

#include "ghidra.h"
void _spu_FsetRXX(int param_1, uint param_2, int param_3)
{
  extern s32 D_80071598[];
  extern s32 D_800715C0[];
  if (param_3 == 0)
  {
    *((short *) ((param_1 * 2) + (*D_80071598))) = (short) param_2;
  }
  else
  {
    *((short *) ((param_1 * 2) + (*D_80071598))) = (short) (param_2 >> (*D_800715C0));
  }
  return;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003F6E4", _spu_FsetRXXa);

u32 _spu_FgetRXXa(s32 param_1, s32 param_2) {
    extern u16 *D_80071598;
    extern s32 D_800715C0;
    register u32 val asm("a0");
    val = D_80071598[param_1];
    if (param_2 == -1) {
        return val;
    }
    return val << D_800715C0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003F6E4", _spu_FsetPCR);

void func_8003FC70(void) {
    extern s32 * D_800715AC[];
    *(*D_800715AC) = (*(*D_800715AC) & 0xF0FFFFFF) | 0x20000000;
}

void func_8003FC98(void) {
    extern s32 * D_800715AC[];
    *(*D_800715AC) = (*(*D_800715AC) & 0xF0FFFFFF) | 0x22000000;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003F6E4", _spu_Fw1ts);
