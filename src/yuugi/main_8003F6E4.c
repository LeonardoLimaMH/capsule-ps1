#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003F6E4", _spu_Fr_);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003F6E4", _spu_t);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003F6E4", _spu_Fw);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003F6E4", _spu_Fr);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003F6E4", _spu_FsetRXX);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003F6E4", _spu_FsetRXXa);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003F6E4", _spu_FgetRXXa);

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
