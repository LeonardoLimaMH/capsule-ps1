#include "common.h"

extern volatile u32 *D_801333E4;
extern u8 *D_801333D4;
extern s32 D_801333F0, D_801333F4, D_801333F8, D_801333FC, D_80133400, D_80133404;
extern s32 D_80133408, D_8013340C, D_80133410;
extern u16 D_801333EC;
extern u16 D_80138650[];
extern u8 D_80133414[], D_80110B78[], D_80110B88[];
extern void slpm__spu_Fw1ts(), func_8011EC84();

#define REG(o) (*(u16 *)(D_801333D4 + (o)))

s32 slpm__spu_init(s32 mode) {
    s32 i;
    u16 *v;

    *D_801333E4 |= 0xB0000;
    D_801333F0 = 0;
    D_801333F4 = 0;
    D_801333EC = 0;
    REG(0x180) = 0;
    REG(0x182) = 0;
    REG(0x1AA) = 0;
    slpm__spu_Fw1ts();
    REG(0x180) = 0;
    REG(0x182) = 0;
    if (REG(0x1AE) & 0x7FF) {
        i = 1;
        while (1) {
            if (i >= 0xF01) {
                slpm_printf(D_80110B78, D_80110B88);
                break;
            }
            if (!(REG(0x1AE) & 0x7FF)) {
                break;
            }
            i++;
        }
    }
    D_801333F8 = 2;
    D_801333FC = 3;
    D_80133400 = 8;
    D_80133404 = 7;
    REG(0x1AC) = 4;
    REG(0x184) = 0;
    REG(0x186) = 0;
    REG(0x18C) = 0xFFFF;
    REG(0x18E) = 0xFFFF;
    REG(0x198) = 0;
    REG(0x19A) = 0;
    for (i = 0; i < 10; i++) {
        D_80138650[i] = 0;
    }
    if (mode == 0) {
        D_801333EC = 0x200;
        REG(0x190) = 0;
        REG(0x192) = 0;
        REG(0x194) = 0;
        REG(0x196) = 0;
        REG(0x1B0) = 0;
        REG(0x1B2) = 0;
        REG(0x1B4) = 0;
        REG(0x1B6) = 0;
        func_8011EC84(D_80133414, 0x10);
        v = (u16 *)D_801333D4;
        for (i = 0; i < 0x18; i++) {
            v[0] = 0;
            v[1] = 0;
            v[2] = 0x3FFF;
            v[3] = 0x200;
            v[4] = 0;
            v[5] = 0;
            v += 8;
        }
        REG(0x188) = 0xFFFF;
        REG(0x18A) = 0xFF;
        slpm__spu_Fw1ts();
        slpm__spu_Fw1ts();
        slpm__spu_Fw1ts();
        slpm__spu_Fw1ts();
        REG(0x18C) = 0xFFFF;
        REG(0x18E) = 0xFF;
        slpm__spu_Fw1ts();
        slpm__spu_Fw1ts();
        slpm__spu_Fw1ts();
        slpm__spu_Fw1ts();
    }
    D_80133408 = 1;
    REG(0x1AA) = 0xC000;
    D_8013340C = 0;
    D_80133410 = 0;
    return 0;
}
