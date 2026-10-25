#include "common.h"

void func_800C23A8(void *arg0) {
    extern u8 D_8008ED68[];
    extern u16 D_8008EE50[];
    s32 temp_s0_2;
    s32 temp_v1_2;
    s32 var_v0;
    u16 temp_v1;
    u16 var_v0_2;
    u8 temp_s0;
    void *temp_a0;

    temp_a0 = arg0 + 0x5D0;
    temp_s0 = M2C_FIELD(temp_a0, u8 *, 0x5FA);
    switch ((*D_8008EE50)) {
    case 0:
        if (func_800B09B0(arg0) != 0) {
            func_80034AB0(0x57);
block_4:
            func_80012628();
            return;
        }
    default:
        return;
    case 1:
        temp_s0_2 = func_800B7F34(arg0);
        func_800220B8(arg0);
        func_8009FDAC(arg0, temp_s0_2);
        M2C_FIELD(arg0, u16 *, 0xC) = 0U;
        goto block_4;
    case 2:
        var_v0 = func_800212AC(arg0, 1, 2, 1);
block_18:
        if (var_v0 != 0) {
            goto block_4;
        }
        break;
    case 3:
        if (M2C_FIELD((temp_a0 + temp_s0), u8 *, 0x10) != 0) {
            temp_v1 = M2C_FIELD(arg0, u16 *, 0xC);
            if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                var_v0_2 = temp_v1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
            } else {
                var_v0_2 = temp_v1 + 1;
            }
            M2C_FIELD(arg0, u16 *, 0xC) = var_v0_2;
            if ((u32) (var_v0_2 & 0xFFFF) >= 0x1FU) {
                func_800AECC4(temp_a0, temp_s0);
            }
        }
        temp_v1_2 = M2C_FIELD(((temp_s0 * 0x10) + D_8008ED68), s32 *, 0x88);
        if (!(temp_v1_2 & 0x20)) {
            if (temp_v1_2 & 0x40) {
                goto block_4;
            }
        } else {
            goto block_4;
        }
        break;
    case 4:
        var_v0 = func_800B0D70(arg0);
        goto block_18;
    case 5:
        func_80012604(9);
        break;
    }
}
