#include "common.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C23A8);

void func_800C2524(u8 *arg0) {
    struct UnitGroups {
        u8 pad[0x18];
        u8 units[2][6][0x7C];
        struct {
            u8 pad[5];
            u8 mode;
        } state[2];
        u8 pad5F4[6];
        u8 side;
        u8 selection[2];
    };
    extern u8 D_801010B0[];
    u8 *base;
    u8 *unit;
    u8 *table;
    u8 *selection;
    s32 side;
    s32 value;

    base = arg0 + 0x5D0;
    side = base[0x5FA];
    selection = (u8 *)((s32)base + side);
    unit = ((struct UnitGroups *)base)->units[side][selection[0x5FB]];
    table = *(u8 **)(D_801010B0 + base[9] * 0x34);
    func_8001A998(arg0 + 0xCE6, 3);
    if (unit[0] == 0x17 && unit[0x29] == 1) {
        unit[0x29] = 2;
        value = 0xFF;
    } else {
        value = ((struct UnitGroups *)base)->state[side].mode;
        if (value != 0 && value != 4) {
            value = *(u32 *)(table + unit[0x15] * 0x34 + unit[0x16] * 4) & 0x3F;
        } else {
            value = 2;
        }
    }
    base[0x716] = value;
    switch (value) {
    case 3:
        func_80034AB0(0x58);
        func_800125AC(5);
        break;
    case 4:
        func_80034AB0(0x3A);
        func_800125AC(5);
        break;
    case 5:
        func_80034AB0(0x65);
        func_800125AC(5);
        break;
    case 6:
        func_80034AB0(0xA);
        func_800125AC(5);
        break;
    case 0xFF:
        func_80012604(3);
        break;
    default:
        func_80012604(4);
        break;
    }
}
