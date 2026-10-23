#include "common.h"

s32 func_800B0D70(void *arg0) {
    extern M2C_UNK D_80069AD4[];
    extern u16 D_8008EE54[];
    extern M2C_UNK D_801010B0[];
    M2C_UNK *var_s1;
    s16 var_v0;
    s32 temp_a1;
    s32 var_s2;
    s32 var_s4;
    s32 var_v0_2;
    s32 var_v1;
    u16 temp_a0;
    u8 temp_s0;
    void *var_s0;

    temp_s0 = M2C_FIELD(arg0, u8 *, 0x5D9);
    var_s4 = 0;
    switch ((*D_8008EE54)) {                           /* irregular */
    case 0:
        M2C_FIELD(arg0, s8 *, 0xBEA) = 4;
        M2C_FIELD(arg0, u16 *, 0xC) = 0U;
        M2C_FIELD(D_80069AD4, s16 *, 0x148) = 0x1C0;
        M2C_FIELD(D_80069AD4, s32 *, 0x140) = 0x660;
        func_80012668();
        /* fallthrough */
    case 1:
        if (M2C_FIELD(D_80069AD4, s16 *, 0xE8) == M2C_FIELD(D_80069AD4, s16 *, 0x148)) {
            M2C_FIELD(arg0, s8 *, 0xBEA) = 0;
            var_s4 = 1;
        } else {
            M2C_FIELD(D_80069AD4, s16 *, 0xE8) = (s16) ((u16) M2C_FIELD(D_80069AD4, s16 *, 0xE8) + 0xF70);
            temp_a0 = M2C_FIELD(((temp_s0 * 0x34) + D_801010B0), u16 *, 0x30);
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
        M2C_FIELD(D_80069AD4, s16 *, 0xE8) = (s16) (M2C_FIELD(D_80069AD4, s16 *, 0xE8) - ((var_v0 >> 0xC) << 0xC));
        var_v0_2 = M2C_FIELD(D_80069AD4, s32 *, 0xE0);
        if (M2C_FIELD(D_80069AD4, s32 *, 0xE0) < 0) {
            var_v0_2 = M2C_FIELD(D_80069AD4, s32 *, 0xE0) + 0xFFF;
        }
        M2C_FIELD(D_80069AD4, s32 *, 0xE0) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xE0) - ((var_v0_2 >> 0xC) << 0xC));
        var_s2 = 0;
        var_s1 = D_80069AD4;
        var_s0 = arg0;
        do {
            temp_a1 = M2C_FIELD(var_s0, s32 *, 0xD5C);
            var_s0 += 4;
            var_s2 += 1;
            M2C_FIELD(var_s1, s32 *, 0x44) = func_800CB960(0, temp_a1, M2C_FIELD(arg0, u16 *, 0xC), 4, 0);
            var_s1 += 4;
        } while (var_s2 < 3);
        M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) + 1);
        func_8002CC74();
        func_8002CD50();
        return var_s4;
    default:
        return 0;
    }
}
