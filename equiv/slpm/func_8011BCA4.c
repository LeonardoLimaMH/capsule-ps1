#include "common.h"

void func_8011BCA4(s32 arg0) {
    extern u8 D_80133338[];
    extern u8 D_80133344[];
    extern int func_8011BF14();
    extern int func_8011BF60();
    u8 *var_a1;
    u8 *var_a1_2;
    M2C_UNK var_s2;
    s32 var_a0;
    s32 var_s1;
    s32 var_v0;
    s8 temp_a0;

    var_a0 = arg0;
    var_v0 = 0x3E6;
    do {
        var_v0 -= 1;
    } while (var_v0 >= 0);
    var_s2 = 0xF2000002;
    var_s1 = 0x44E8;
    var_a1 = D_80133344;
    M2C_FIELD(D_80133344, s8 *, 2) = 6;
    M2C_FIELD(D_80133344, s8 *, 0) = 0;
    M2C_FIELD(D_80133344, s8 *, 1) = 0;
    M2C_FIELD(D_80133344, s32 *, -4) = 0;
    switch (M2C_FIELD(D_80133344, s32 *, -0x10)) { /* irregular */
    case 0:
        M2C_FIELD(D_80133344, s8 *, 2) = 0x7F;
        return;
    case 5:
        M2C_FIELD(D_80133344, s8 *, 2) = 0;
        if (var_a0 == 0) {
            M2C_FIELD(D_80133344, s8 *, 0) = 1;
        } else {
            var_s2 = 0xF2000003;
            var_s1 = 1;
        }
    case 2:
block_18:
        if (M2C_FIELD(D_80133344, s8 *, 0) != 0) {
            func_80112014(var_a0, var_a1);
            slpm_VSyncCallback(M2C_FIELD(D_80133344, u8 **, -8));
        } else {
            func_80112014(var_a0, var_a1);
            slpm_ResetRCnt(var_s2);
            slpm_SetRCnt(var_s2, var_s1 & 0xFFFF, 0x1000);
            temp_a0 = M2C_FIELD(D_80133344, s8 *, 2);
            if (temp_a0 == 0) {
                var_a1_2 = &func_8011BF14;
                M2C_FIELD(D_80133344, s32 *, -4) = slpm_InterruptCallback(0, NULL);
            } else {
                var_a1_2 = &func_8011BF60;
                if (M2C_FIELD(D_80133344, s8 *, 1) == 0) {
                    var_a1_2 = M2C_FIELD(D_80133344, u8 **, -8);
                }
            }
            slpm_InterruptCallback(temp_a0, var_a1_2);
        }
        func_80112024();
        return;
    case 3:
        var_s1 = 0x89D0;
        goto block_18;
    default:
        if (M2C_FIELD(D_80133338, s32 *, 0) == 0) {
            var_a0 = M2C_FIELD(D_80133338, s32 *, -4);
            var_a1 = D_80133338 - 4;
            if (var_a0 < 0x46) {
                M2C_FIELD(var_a1, u8 *, 0x11) = (u8) (M2C_FIELD(var_a1, u8 *, 0x11) + 1);
                var_s1 = 0x204CC0 / var_a0;
            } else {
                var_s1 = 0x409980 / var_a0;
            }
            goto block_18;
        }
        break;
    }
}
