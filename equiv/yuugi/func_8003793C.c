#include "common.h"

void func_8003793C(void *arg0) {
    s32 var_v0_2;
    s8 temp_v0;
    s8 temp_v1_3;
    s8 temp_v1_4;
    s8 var_a1;
    s8 var_a1_2;
    u16 temp_a1;
    u16 var_v0;
    u8 temp_v1;
    u8 temp_v1_2;

    temp_a1 = M2C_FIELD(arg0, u16 *, 0x26);
    if (temp_a1 != 0) {
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x22);
        if (temp_v1 != M2C_FIELD(arg0, u8 *, 0x29)) {
            M2C_FIELD(arg0, u8 *, 0x22) = (u8) (temp_v1 + 1);
            return;
        }
        temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x28);
        if (temp_v1_2 >= (u8) M2C_FIELD(arg0, u8 *, 0x2A)) {
            M2C_FIELD(arg0, u16 *, 0x24) = temp_a1;
        } else {
            if (temp_v1_2 != 0) {
                var_v0 = M2C_FIELD(arg0, u16 *, 0x24) + M2C_FIELD(arg0, u16 *, 0x2C);
            } else {
                var_v0 = M2C_FIELD(arg0, u16 *, 0x2C);
            }
            M2C_FIELD(arg0, u16 *, 0x24) = var_v0;
            M2C_FIELD(arg0, u8 *, 0x28) = (u8) (M2C_FIELD(arg0, u8 *, 0x28) + 1);
        }
        M2C_FIELD(arg0, u8 *, 0x23) = (u8) (M2C_FIELD(arg0, u8 *, 0x23) + M2C_FIELD(arg0, u8 *, 0x2B));
        temp_v0 = (s8) M2C_FIELD(arg0, u8 *, 0x23);
        M2C_FIELD(arg0, s8 *, 0x21) = 0;
        if (temp_v0 < 0) {
            temp_v1_3 = temp_v0 * -2;
            var_a1 = temp_v1_3;
            if ((temp_v0 * -0x02000000) < 0) {
                var_a1 = -temp_v1_3;
            }
            var_v0_2 = M2C_FIELD(arg0, u16 *, 0x24) * var_a1;
            if (var_v0_2 > 0) {
                var_v0_2 = -var_v0_2;
            }
        } else {
            temp_v1_4 = temp_v0 * 2;
            var_a1_2 = temp_v1_4;
            if (temp_v0 & 0x40) {
                var_a1_2 = -temp_v1_4;
            }
            var_v0_2 = M2C_FIELD(arg0, u16 *, 0x24) * var_a1_2;
            if (var_v0_2 < 0) {
                var_v0_2 = -var_v0_2;
            }
        }
        if (var_v0_2 != 0) {
            if (var_v0_2 < 0) {
                var_v0_2 += 0x3FF;
            }
            M2C_FIELD(arg0, s16 *, 0x2E) = (s16) (var_v0_2 >> 0xA);
            return;
        }
        M2C_FIELD(arg0, s16 *, 0x2E) = 0;
    }
}
