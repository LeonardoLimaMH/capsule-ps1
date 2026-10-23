#include "common.h"

s32 func_800C5FA0(void *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4) {
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE54[];
    extern M2C_UNK D_8010103D[];
    M2C_UNK var_a2;
    s32 temp_v0;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u16 var_a0;
    u16 var_v0_3;
    u16 var_v0_4;
    void *var_a1;

    var_s3 = 0;
    if (arg4 != 0) {
        var_a1 = func_800A8E84(arg1);
    } else {
        var_a1 = func_800A8F3C(arg1);
    }
    switch ((*D_8008EE54)) {
    case 0:
        M2C_FIELD(arg0, u16 *, 0xC) = 0U;
        M2C_FIELD(arg1, u8 *, 0x714) = 0U;
        if (func_800C2324(arg1, var_a1) == 0) {
            var_s3 = 1;
        }
block_8:
        func_80012668();
        return var_s3;
    case 1:
        M2C_FIELD(arg0, u16 *, 0xC) = 0U;
        M2C_FIELD(arg2, s32 *, 0x1C) = (s32) (M2C_FIELD(arg2, s32 *, 0x1C) | func_800C2324(arg1, var_a1));
        goto block_8;
    case 2:
        temp_v1 = M2C_FIELD(arg0, u16 *, 0xC);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_a0 = temp_v1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_a0 = temp_v1 + 1;
        }
        M2C_FIELD(arg0, u16 *, 0xC) = var_a0;
        var_v0 = 0;
        if ((u8) *(M2C_FIELD(var_a1, u8 *, 0x16) + D_8010103D) < (u32) (var_a0 & 0xFFFF)) {
            M2C_FIELD(arg0, u16 *, 0xC) = 0U;
            temp_v0 = func_800A8FA0(var_a1, var_a1);
            if (temp_v0 == 3) {
                var_v0_2 = M2C_FIELD(arg2, s32 *, 0x1C) | 0x20;
                goto block_17;
            }
            if (temp_v0 == 2) {
                var_v0_2 = M2C_FIELD(arg2, s32 *, 0x1C) | 0x10;
block_17:
                M2C_FIELD(arg2, s32 *, 0x1C) = var_v0_2;
            }
            goto block_8;
        }
        return var_v0;
    case 3:
        var_v0 = 0;
        if (M2C_FIELD(arg1, u8 *, 0x714) != 0) {
            var_a2 = 0x10000;
            if (arg3 != 0) {
                var_a2 = 0x30000;
            }
            func_800CABDC(arg0, arg2, var_a2);
            M2C_FIELD(arg0, u16 *, 0xC) = 0U;
            goto block_8;
        }
        /* Duplicate return node #33. Try simplifying control flow for better match */
        return var_v0;
    case 4:
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0xC);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0_3 = temp_v1_2 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0_3 = temp_v1_2 + 1;
        }
        M2C_FIELD(arg0, u16 *, 0xC) = var_v0_3;
        if (M2C_FIELD(arg1, u8 *, 0x720) != 0) {
            M2C_FIELD(arg1, s8 *, 0x70D) = 1;
            goto block_8;
        }
    default:
block_32:
        var_v0 = var_s3;
        /* Duplicate return node #33. Try simplifying control flow for better match */
        return var_v0;
    case 5:
        temp_v1_3 = M2C_FIELD(arg0, u16 *, 0xC);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0_4 = temp_v1_3 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0_4 = temp_v1_3 + 1;
        }
        M2C_FIELD(arg0, u16 *, 0xC) = var_v0_4;
        var_v0 = 0;
        if ((u32) (var_v0_4 & 0xFFFF) >= 0xBU) {
            var_s3 = 1;
            goto block_32;
        }
        /* Duplicate return node #33. Try simplifying control flow for better match */
        return var_v0;
    }
}
