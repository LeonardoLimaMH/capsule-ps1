#include "common.h"

extern volatile u32 *D_800715A8;
extern u8 *D_80071598;
extern s32 D_800715B4, D_800715B8, D_800715BC, D_800715C0, D_800715C4, D_800715C8;
extern s32 D_800715CC, D_800715D0, D_800715D4;
extern u16 D_800715B0;
extern u16 D_80094A30[];
extern u8 D_800715D8[], D_80010C10[], D_80010C20[];
extern void _spu_Fw1ts(), func_8003F468();

#define REG(o) (*(u16 *)(D_80071598 + (o)))

s32 _spu_init(s32 mode) {
    s32 i;
    u16 *v;

    *D_800715A8 |= 0xB0000;
    D_800715B4 = 0;
    D_800715B8 = 0;
    D_800715B0 = 0;
    REG(0x180) = 0;
    REG(0x182) = 0;
    REG(0x1AA) = 0;
    _spu_Fw1ts();
    REG(0x180) = 0;
    REG(0x182) = 0;
    if (REG(0x1AE) & 0x7FF) {
        i = 1;
        while (1) {
            if (i >= 0xF01) {
                printf(D_80010C10, D_80010C20);
                break;
            }
            if (!(REG(0x1AE) & 0x7FF)) {
                break;
            }
            i++;
        }
    }
    D_800715BC = 2;
    D_800715C0 = 3;
    D_800715C4 = 8;
    D_800715C8 = 7;
    REG(0x1AC) = 4;
    REG(0x184) = 0;
    REG(0x186) = 0;
    REG(0x18C) = 0xFFFF;
    REG(0x18E) = 0xFFFF;
    REG(0x198) = 0;
    REG(0x19A) = 0;
    for (i = 0; i < 10; i++) {
        D_80094A30[i] = 0;
    }
    if (mode == 0) {
        D_800715B0 = 0x200;
        REG(0x190) = 0;
        REG(0x192) = 0;
        REG(0x194) = 0;
        REG(0x196) = 0;
        REG(0x1B0) = 0;
        REG(0x1B2) = 0;
        REG(0x1B4) = 0;
        REG(0x1B6) = 0;
        func_8003F468(D_800715D8, 0x10);
        v = (u16 *)D_80071598;
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
        _spu_Fw1ts();
        _spu_Fw1ts();
        _spu_Fw1ts();
        _spu_Fw1ts();
        REG(0x18C) = 0xFFFF;
        REG(0x18E) = 0xFF;
        _spu_Fw1ts();
        _spu_Fw1ts();
        _spu_Fw1ts();
        _spu_Fw1ts();
    }
    D_800715CC = 1;
    REG(0x1AA) = 0xC000;
    D_800715D0 = 0;
    D_800715D4 = 0;
    return 0;
}
