#include "common.h"

void func_800C5300(void *arg0) {
    extern s8 D_8008610C[];
    extern u8 D_8008ED68[];
    s16 var_s0;
    s16 var_s2;
    s16 var_v0;
    s32 temp_a1;
    u32 temp_a0_2;
    u32 temp_v1;
    u32 temp_v1_2;
    u32 var_v0_2;
    void *temp_a0;
    void *temp_s0;
    void *var_a2;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x5C);
    temp_v1 = M2C_FIELD(arg0, u32 *, 0x54);
    temp_a0 = M2C_FIELD(arg0, void **, 0x60);
    var_s0 = temp_a1 << 8;
    if (temp_v1 != 0x19) {
        if (temp_v1 >= 0x3DU) {
            (*D_8008610C) = 1;
            func_800185F8(arg0, temp_a1);
            return;
        }
        goto block_4;
    }
    M2C_FIELD(temp_a0, s8 *, 0x20) = 2;
    M2C_FIELD(temp_a0, s8 *, 0x21) = 4;
    M2C_FIELD(temp_a0, s32 *, 0x18) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x18) | 0x200000);
block_4:
    temp_a0_2 = M2C_FIELD(arg0, u32 *, 0x54);
    if (temp_a0_2 >= 0x1AU) {
        var_s0 = (var_s0 + 0x1000) - (temp_a0_2 * 0x50);
        var_s2 = 0x1F4;
    } else {
        var_s2 = temp_a0_2 * 0x14;
        if (temp_a0_2 == 0x19) {
            if (temp_a1 == 0) {
                func_80034AB0(7, temp_a1);
            }
        }
    }
    func_80020578(0x32, 0, var_s0, arg0 + 0x18, arg0 + 0x1C);
    temp_s0 = arg0 + 0x20;
    func_80020578(0x32, 0, (s16) (var_s0 + 0x100), temp_s0, arg0 + 0x24);
    var_a2 = arg0;
    M2C_FIELD(arg0, u16 *, 0x28) = (u16) M2C_FIELD(arg0, u16 *, 0x18);
    M2C_FIELD(arg0, u16 *, 0x2C) = (u16) M2C_FIELD(arg0, u16 *, 0x1C);
    M2C_FIELD(arg0, u16 *, 0x30) = (u16) M2C_FIELD(arg0, u16 *, 0x20);
    M2C_FIELD(arg0, u16 *, 0x34) = (u16) M2C_FIELD(arg0, u16 *, 0x24);
    do {
        M2C_FIELD(var_a2, u16 *, 0x18) = (u16) (M2C_FIELD(var_a2, u16 *, 0x18) + subroutine_arg6);
        if ((s32) var_a2 >= (s32) (arg0 + 0x10)) {
            var_v0 = subroutine_arg6 - 0x1F4 + var_s2;
        } else {
            var_v0 = subroutine_arg6 - 0x1F4 + (var_s2 * 0);
        }
        M2C_FIELD(var_a2, s16 *, 0x1A) = var_v0;
        M2C_FIELD(var_a2, u16 *, 0x1C) = (u16) (M2C_FIELD(var_a2, u16 *, 0x1C) + subroutine_arg7);
        var_a2 += 8;
    } while ((s32) var_a2 < (s32) temp_s0);
    temp_v1_2 = M2C_FIELD(arg0, u32 *, 0x54);
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v0_2 = temp_v1_2 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v0_2 = temp_v1_2 + 1;
    }
    M2C_FIELD(arg0, u32 *, 0x54) = var_v0_2;
}
