#include "common.h"
#include "yuugi.h"

#include "common.h"

extern u16 *D_80071598[];
extern volatile s32 *D_8007159C[];
extern volatile s32 *D_800715A0[];
extern volatile s32 *D_800715A4[];
extern s32 D_800715E8[];

void _spu_Fr_(s32 addr, s16 tsa, s32 size) {
    *(volatile s16 *)((u8 *)D_80071598[0] + 0x1A6) = tsa;
    _spu_Fw1ts();
    *(volatile u16 *)((u8 *)D_80071598[0] + 0x1AA) |= 0x30;
    _spu_Fw1ts();
    func_8003FC98();
    *D_8007159C[0] = addr;
    *D_800715A0[0] = (size << 0x10) | 0x10;
    D_800715E8[0] = 1;
    *D_800715A4[0] = 0x01000200;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003F6E4", _spu_t);

#include "common.h"

extern u16 D_800715B0[];
extern s32 D_800715B4[];
extern s32 D_800715C0[];

s32 _spu_Fw(s32 addr, s32 size) {
    if (D_800715B4[0] == 0) {
        _spu_t(2, D_800715B0[0] << D_800715C0[0]);
        _spu_t(1);
        _spu_t(3, addr, size);
    } else {
        func_8003F468(addr, size);
    }
    return size;
}

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
  extern s32 D_800715C0[];
  if (param_3 == 0)
  {
    *((short *) ((param_1 * 2) + ((s32) D_80071598[0]))) = (short) param_2;
  }
  else
  {
    *((short *) ((param_1 * 2) + ((s32) D_80071598[0]))) = (short) (param_2 >> (*D_800715C0));
  }
  return;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003F6E4", _spu_FsetRXXa);

#include "common.h"

extern u16 *D_80071598[];
extern s32 D_800715C0[];

s32 _spu_FgetRXXa(s32 offset, s32 mode) {
    u16 v = D_80071598[0][offset];

    if (mode == -1) {
        return v;
    }
    return v << D_800715C0[0];
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
