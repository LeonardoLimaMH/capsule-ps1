#include "common.h"

void slpm__spu_Fr_(s32 arg0, s16 arg1, s32 arg2) {
    extern void * D_801333D4[];
    extern s32 * D_801333D8[];
    extern s32 * D_801333DC[];
    extern s32 * D_801333E0[];
    extern s32 D_80133424[];
    M2C_FIELD((*D_801333D4), s16 *, 0x1A6) = arg1;
    slpm__spu_Fw1ts();
    M2C_FIELD((*D_801333D4), u16 *, 0x1AA) = (u16) (M2C_FIELD((*D_801333D4), u16 *, 0x1AA) | 0x30);
    slpm__spu_Fw1ts();
    func_8011F4B4();
    *(*D_801333D8) = arg0;
    *(*D_801333DC) = (arg2 << 0x10) | 0x10;
    (*D_80133424) = 1;
    *(*D_801333E0) = 0x01000200;
}
