#include "common.h"

void func_800A2660(s32 arg0) {
    extern u8 D_80069AD4[];
    extern u16 D_8008EE50[];
    extern u8 D_801010B0[];
    s16 temp_a0_2;
    s16 var_v0;
    s16 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    u16 temp_a0;
    void *temp_a1;

    temp_a1 = arg0 + 0x5D0;
    switch ((*D_8008EE50)) {                           /* irregular */
    case 0:
        if (M2C_FIELD(temp_a1, u8 *, 0x61A) == 5) {
            func_80012628(temp_a1);
            return;
        }
    case 3:
        func_800125D8(temp_a1);
        return;
    case 1:
        M2C_FIELD(temp_a1, u8 *, 0x61A) = 4U;
        M2C_FIELD(D_80069AD4, s16 *, 0x148) = 0x1C0;
        M2C_FIELD(D_80069AD4, s32 *, 0x140) = 0x660;
        func_80012628(temp_a1);
        return;
    case 2:
        if (M2C_FIELD(D_80069AD4, s16 *, 0xE8) == M2C_FIELD(D_80069AD4, s16 *, 0x148)) {
            M2C_FIELD(temp_a1, u8 *, 0x61A) = 0U;
            func_80012628((void *) (u16) M2C_FIELD(D_80069AD4, s16 *, 0xE8), temp_a1, D_80069AD4);
        } else {
            M2C_FIELD(D_80069AD4, s16 *, 0xE8) = (s16) ((u16) M2C_FIELD(D_80069AD4, s16 *, 0xE8) + 0xF70);
            temp_a0 = M2C_FIELD(((M2C_FIELD(temp_a1, u8 *, 9) * 0x34) + D_801010B0), u16 *, 0x30);
            var_v1 = temp_a0 - 0x660;
            if (var_v1 < 0) {
                var_v1 = temp_a0 - 0x65D;
            }
            M2C_FIELD(D_80069AD4, s32 *, 0xE0) = (s32) ((M2C_FIELD(D_80069AD4, s32 *, 0xE0) + 0x1000) - (var_v1 >> 2));
        }
        var_v0 = M2C_FIELD(D_80069AD4, s16 *, 0xE8);
        if (M2C_FIELD(D_80069AD4, s16 *, 0xE8) < 0) {
            var_v0 = M2C_FIELD(D_80069AD4, s16 *, 0xE8) + 0xFFF;
        }
        temp_a0_2 = M2C_FIELD(D_80069AD4, s16 *, 0xEA);
        M2C_FIELD(D_80069AD4, s16 *, 0xE8) = (s16) (M2C_FIELD(D_80069AD4, s16 *, 0xE8) - ((var_v0 >> 0xC) << 0xC));
        var_v0_2 = temp_a0_2;
        if (temp_a0_2 < 0) {
            var_v0_2 = temp_a0_2 + 0xFFF;
        }
        M2C_FIELD(D_80069AD4, s16 *, 0xEA) = (s16) (temp_a0_2 - ((var_v0_2 >> 0xC) << 0xC));
        var_v0_3 = M2C_FIELD(D_80069AD4, s32 *, 0xE0);
        if (M2C_FIELD(D_80069AD4, s32 *, 0xE0) < 0) {
            var_v0_3 = M2C_FIELD(D_80069AD4, s32 *, 0xE0) + 0xFFF;
        }
        M2C_FIELD(D_80069AD4, s32 *, 0xE0) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xE0) - ((var_v0_3 >> 0xC) << 0xC));
        func_8002CC74(temp_a0_2, D_80069AD4);
        func_8002CD50();
        return;
    }
}
