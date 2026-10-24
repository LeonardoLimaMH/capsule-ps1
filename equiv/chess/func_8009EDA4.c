#include "common.h"

void func_8009EDA4(s32 arg0) {
    extern u16 D_8008EE50[];
    s32 sp10;
    s32 sp14;
    s32 temp_t0;
    u8 temp_a0;
    u8 temp_s0;
    void *temp_s1;
    void *temp_v1;

    temp_s1 = arg0 + 0x5D0;
    temp_s0 = M2C_FIELD(temp_s1, u8 *, 0x5FA);
    switch ((*D_8008EE50)) {
    case 0:
        M2C_FIELD(temp_s1, s8 *, 0x624) = 0;
        func_800AFCE0(arg0);
        func_800AF9D4(arg0);
        if (func_800A062C(arg0, temp_s0) == 0) {
            func_8001264C(2);
            return;
        }
block_7:
        func_800220B8(arg0);
        func_80012628();
        return;
    case 1:
        if (func_800220D4(arg0, 1, temp_s0, 0) != 0) {
block_8:
            func_8001264C(4);
            return;
        }
    default:
        return;
    case 2:
        if (func_800A062C(arg0, 1 - temp_s0) != 0) {
            goto block_7;
        }
        goto block_8;
    case 3:
        if (func_800220D4(arg0, 1, 1 - temp_s0, 0) != 0) {
            func_80012628();
            return;
        }
        break;
    case 4:
        temp_v1 = temp_s1 + temp_s0;
        temp_a0 = M2C_FIELD(temp_v1, u8 *, 0x16);
        if (temp_a0 != 7) {
            M2C_FIELD(temp_v1, u8 *, 0x16) = (u8) (temp_a0 - 1);
        }
        if (M2C_FIELD(temp_v1, u8 *, 0x10) == 0) {
            M2C_FIELD((temp_s1 + (temp_s0 * 6)), s8 *, 0x5ED) = 0;
        }
        func_800CA730(arg0, temp_s0, &sp10, &sp14);
        if ((sp10 == temp_s0) && (sp14 != -1) && (sp14 != 5)) {
            temp_t0 = temp_s0 * 0x2E8;
            M2C_FIELD((temp_s1 + ((sp14 * 0x7C) + temp_t0)), s8 *, 0x2F) = 1;
            func_800A84A0(temp_s1 + (temp_t0 + 0x18) + (sp14 * 0x7C), temp_s0, sp14, 0);
        }
        M2C_FIELD(temp_s1, s8 *, 0x61B) = 0;
        func_800125AC(0xA);
        break;
    }
}
