#include "common.h"

s32 func_800B09B0(void *arg0) {
    extern u8 D_80069AD4[];
    extern u16 D_8008EE54[];
    extern u8 D_801010B0[];
    u8 *var_a0;
    u8 *var_s2;
    s16 var_v0;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s4;
    s32 var_v0_2;
    s32 var_v1_2;
    u16 temp_v0_2;
    u8 temp_s0;
    void *var_s0;
    void *var_v1;

    temp_s0 = M2C_FIELD(arg0, u8 *, 0x5D9);
    var_s4 = 0;
    switch ((*D_8008EE54)) {                           /* irregular */
    case 0:
        var_s1 = 0;
        var_a0 = D_80069AD4;
        M2C_FIELD(arg0, s8 *, 0xBEA) = 3;
        M2C_FIELD(arg0, u16 *, 0xC) = 0U;
        M2C_FIELD(D_80069AD4, s16 *, 0x148) = 0x400;
        var_v1 = arg0;
        M2C_FIELD(D_80069AD4, s32 *, 0x140) = (s32) M2C_FIELD(((temp_s0 * 0x34) + D_801010B0), u16 *, 0x30);
        do {
            temp_v0 = M2C_FIELD(var_a0, s32 *, 0x44);
            var_a0 += 4;
            var_s1 += 1;
            M2C_FIELD(var_v1, s32 *, 0xD5C) = temp_v0;
            var_v1 += 4;
        } while (var_s1 < 3);
        func_80012668(var_a0);
        /* fallthrough */
    case 1:
        if (M2C_FIELD(D_80069AD4, s16 *, 0xE8) == M2C_FIELD(D_80069AD4, s16 *, 0x148)) {
            M2C_FIELD(arg0, s8 *, 0xBEA) = 5;
            var_s4 = 1;
        } else {
            M2C_FIELD(D_80069AD4, s16 *, 0xE8) = (s16) ((u16) M2C_FIELD(D_80069AD4, s16 *, 0xE8) + 0x90);
            temp_v0_2 = M2C_FIELD(((temp_s0 * 0x34) + D_801010B0), u16 *, 0x30);
            var_v1_2 = temp_v0_2 - 0x660;
            if (var_v1_2 < 0) {
                var_v1_2 = temp_v0_2 - 0x65D;
            }
            M2C_FIELD(D_80069AD4, s32 *, 0xE0) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xE0) + (var_v1_2 >> 2));
        }
        var_v0 = M2C_FIELD(D_80069AD4, s16 *, 0xE8);
        if (M2C_FIELD(D_80069AD4, s16 *, 0xE8) < 0) {
            var_v0 = M2C_FIELD(D_80069AD4, s16 *, 0xE8) + 0xFFF;
        }
        M2C_FIELD(D_80069AD4, s16 *, 0xE8) = (s16) (M2C_FIELD(D_80069AD4, s16 *, 0xE8) - ((var_v0 >> 0xC) << 0xC));
        var_v0_2 = M2C_FIELD(D_80069AD4, s32 *, 0xE0);
        if (M2C_FIELD(D_80069AD4, s32 *, 0xE0) < 0) {
            var_v0_2 = M2C_FIELD(D_80069AD4, s32 *, 0xE0) + 0xFFF;
        }
        M2C_FIELD(D_80069AD4, s32 *, 0xE0) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xE0) - ((var_v0_2 >> 0xC) << 0xC));
        var_s1_2 = 0;
        var_s2 = D_80069AD4;
        var_s0 = arg0;
        do {
            temp_a0 = M2C_FIELD(var_s0, s32 *, 0xD5C);
            var_s0 += 4;
            var_s1_2 += 1;
            M2C_FIELD(var_s2, s32 *, 0x44) = func_800CB960(temp_a0, 0, M2C_FIELD(arg0, u16 *, 0xC), 4, 0);
            var_s2 += 4;
        } while (var_s1_2 < 3);
        M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) + 1);
        func_8002CC74();
        func_8002CD50();
        return var_s4;
    default:
        return 0;
    }
}
