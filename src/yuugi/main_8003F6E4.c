#include "common.h"
#include "yuugi.h"

void _spu_Fw1ts(void);
void func_8003FC98(void);
void _spu_Fr_(s32 addr, u16 a1, s32 size) {
    extern volatile u16 *D_80071598;
    extern volatile s32 *D_8007159C;
    extern volatile s32 *D_800715A0;
    extern volatile s32 *D_800715A4;
    extern s32 D_800715E8;
    D_80071598[0xD3] = a1;
    _spu_Fw1ts();
    D_80071598[0xD5] |= 0x30;
    _spu_Fw1ts();
    func_8003FC98();
    *D_8007159C = addr;
    *D_800715A0 = (size << 16) | 0x10;
    D_800715E8 = 1;
    *D_800715A4 = 0x01000200;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003F6E4", _spu_t);

s32 _spu_Fw(s32 arg0, s32 arg1) {
    extern u16 D_800715B0[];
    extern s32 D_800715B4[];
    extern s32 D_800715C0[];
    if (*D_800715B4 == 0) {
        _spu_t(2, (*D_800715B0) << (*D_800715C0));
        _spu_t(1);
        _spu_t(3, arg0, arg1);
    } else {
        func_8003F468(arg0, arg1);
    }
    return arg1;
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

u32 _spu_FsetRXXa(s32 reg, u32 addr) {
    extern s32 D_800715BC;
    extern u32 D_800715C4;
    extern u32 D_800715C8;
    extern s32 D_800715C0;
    extern u16 *D_80071598;
    register u32 c4 asm("a0");
    u32 s;
    s32 ret;
    if (D_800715BC != 0) {
        c4 = D_800715C4;
        if (addr % c4 != 0) {
            addr += c4;
            addr &= ~D_800715C8;
        }
    }
    s = addr >> D_800715C0;
    if (reg == -2) {
        ret = (s32)addr;
    } else if (reg == -1) {
        ret = (u16)s;
    } else {
        D_80071598[reg] = s;
        ret = addr;
    }
    return ret;
}

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

void _spu_FsetPCR(s32 arg0) {
    extern u32 *D_800715A8;

    *D_800715A8 &= 0xFFF8FFFF;
    if (arg0 != 0) {
        *D_800715A8 |= 0x30000;
    } else {
        *D_800715A8 |= 0x50000;
    }
}

void func_8003FC70(void) {
    extern s32 * D_800715AC[];
    *(*D_800715AC) = (*(*D_800715AC) & 0xF0FFFFFF) | 0x20000000;
}

void func_8003FC98(void) {
    extern s32 * D_800715AC[];
    *(*D_800715AC) = (*(*D_800715AC) & 0xF0FFFFFF) | 0x22000000;
}

void _spu_Fw1ts(void) {
    volatile s32 i;
    volatile s32 x;

    x = 13;
    i = 0;
    while (i < 60) {
        x *= 13;
        i = i + 1;
    }
}
