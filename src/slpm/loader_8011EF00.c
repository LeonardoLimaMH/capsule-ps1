#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011EF00", slpm__spu_Fr_);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011EF00", slpm__spu_t);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011EF00", slpm__spu_Fw);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011EF00", slpm__spu_Fr);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011EF00", slpm__spu_FsetRXX);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011EF00", slpm__spu_FsetRXXa);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011EF00", slpm__spu_FgetRXXa);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011EF00", slpm__spu_FsetPCR);

void func_8011F48C(void) {
    extern s32 * D_801333E8[];
    *(*D_801333E8) = (*(*D_801333E8) & 0xF0FFFFFF) | 0x20000000;
}

void func_8011F4B4(void) {
    extern s32 * D_801333E8[];
    *(*D_801333E8) = (*(*D_801333E8) & 0xF0FFFFFF) | 0x22000000;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011EF00", slpm__spu_Fw1ts);
