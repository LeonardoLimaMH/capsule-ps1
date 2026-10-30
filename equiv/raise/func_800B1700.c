#include "common.h"

s32 func_800B1700(void) {
    extern u16 D_8006AF80[];
    extern s16 D_80078C28[];
    extern M2C_UNK D_80091618[];
    extern s32 D_800EEB70[];
    extern u16 D_800EF2D8[];
    extern u16 D_800EFA4A[];
    extern u16 D_800EFA4C[];
    extern M2C_UNK D_800F2D30[];
    extern M2C_UNK D_800F2D98[];
    extern s16 D_80103D38[];
    s16 temp_s0;
    s32 temp_a1;
    s32 var_a0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v1;
    u16 temp_a3;
    u8 *temp_v0;
    u8 temp_v1;
    void *temp_v0_2;

    if ((*D_80078C28) != 0) {
        return 0;
    }
    var_s0 = 1;
    (*D_800EFA4A) = (*D_800EFA4C);
    do {
        if (var_s0 != (*D_80103D38)) {
            func_800B8BF0(var_s0);
        }
        var_s0 -= 1;
    } while (var_s0 >= 0);
    if ((*D_800EEB70) == 0) {
        if ((*D_80103D38) != 1) {
            var_s0_2 = M2C_FIELD((((*D_8006AF80) * 0x1A8) + (u8 *)D_80091618), u16 *, 0x8A) & 0xFFFF;
        } else {
            goto block_10;
        }
    } else if ((*D_80103D38) == 1) {
block_10:
        var_s0_2 = (*D_8006AF80) & 0xFFFF;
    } else {
        var_s0_2 = (*D_800EF2D8) & 0xFFFF;
    }
    func_80027C14(var_s0_2);
    var_v1 = 0;
    temp_a3 = *(M2C_UNK *)((var_s0_2 * 0x1A8) + (u8 *)D_80091618);
    temp_a1 = temp_a3 & 0xFFFF;
    var_a0 = 0 & 0xFFFF;
loop_13:
    if ((var_a0 == var_s0_2) || (var_a0 = (s32) ((var_a0 * 0x1A8) + (u8 *)D_80091618), (M2C_FIELD(var_a0, u16 *, 0x10) == 0xFFFF)) || (M2C_FIELD(var_a0, u16 *, 0) != temp_a1)) {
        var_v1 += 1;
        var_a0 = var_v1 & 0xFFFF;
        if ((u32) (var_v1 & 0xFFFF) < 6U) {
            goto loop_13;
        }
    }
    if ((var_v1 & 0xFFFF) == 6) {
        temp_v0 = temp_a3 + (u8 *)D_800F2D30;
        temp_v1 = *temp_v0;
        var_a0 = 0xFF;
        *temp_v0 = 0xFF;
        *(u8 *)(temp_v1 + (u8 *)D_800F2D98) = 0xFF;
    }
    temp_s0 = (*D_80103D38);
    if (temp_s0 == 1) {
        func_800E1B30(var_a0, temp_a1, D_80091618, temp_a3);
        (*D_800EEB70) = (s32) temp_s0;
        temp_v0_2 = ((*D_8006AF80) * 0x1A8) + (u8 *)D_80091618;
        (*D_800EF2D8) = (s32) M2C_FIELD(temp_v0_2, u16 *, 0x8A);
        M2C_FIELD(temp_v0_2, u16 *, 0x8A) = 0xFFFFU;
        func_800CD418(0, 0);
    }
    return 1;
}
