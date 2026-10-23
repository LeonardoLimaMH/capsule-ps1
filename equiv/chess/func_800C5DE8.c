#include "common.h"

s32 func_800C5DE8(void *arg0, void *arg1, void *arg2) {
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE54[];
    s32 var_s3;
    s32 var_v0;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 var_v0_2;
    u16 var_v0_3;

    var_s3 = 0;
    switch ((*D_8008EE54)) {
    case 0:
        M2C_FIELD(arg1, s8 *, 0x7A4) = 0;
        M2C_FIELD(arg0, u16 *, 0xC) = 0U;
        M2C_FIELD(arg1, u8 *, 0x714) = 0U;
        if (func_800C22A0(arg1) == 0) {
            var_s3 = 1;
        }
block_9:
        func_80012668();
        return var_s3;
    case 1:
        temp_v1 = M2C_FIELD(arg0, u16 *, 0xC);
        if ((u8) M2C_FIELD((*D_8008ED68), u8 *, 0x103) >= 2U) {
            var_v0_2 = temp_v1 + M2C_FIELD((*D_8008ED68), u8 *, 0x103);
        } else {
            var_v0_2 = temp_v1 + 1;
        }
        M2C_FIELD(arg0, u16 *, 0xC) = var_v0_2;
        func_800B30F8(arg0, 0);
        var_v0 = 0;
        if (M2C_FIELD(arg0, u16 *, 0xC) == 0x14) {
            M2C_FIELD(arg2, s32 *, 0x18) = (s32) (M2C_FIELD(arg2, s32 *, 0x18) | func_800C22A0(arg1));
            M2C_FIELD(arg2, s32 *, 0x1C) = (s32) (M2C_FIELD(arg2, s32 *, 0x1C) | 8);
            goto block_9;
        }
        return var_v0;
    case 2:
        func_800B30F8(arg0, 0);
        if (M2C_FIELD(arg1, u8 *, 0x714) != 0) {
            func_800CABDC(arg0, arg2, 0x30000);
            M2C_FIELD(arg0, u16 *, 0xC) = 0U;
            goto block_9;
        }
    default:
block_19:
        var_v0 = var_s3;
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return var_v0;
    case 3:
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0xC);
        if ((u8) M2C_FIELD((*D_8008ED68), u8 *, 0x103) >= 2U) {
            var_v0_3 = temp_v1_2 + M2C_FIELD((*D_8008ED68), u8 *, 0x103);
        } else {
            var_v0_3 = temp_v1_2 + 1;
        }
        M2C_FIELD(arg0, u16 *, 0xC) = var_v0_3;
        func_800B30F8(arg0, 0);
        if (M2C_FIELD(arg1, u8 *, 0x720) != 0) {
            M2C_FIELD(arg1, s8 *, 0x70D) = 1;
            goto block_9;
        }
        goto block_19;
    case 4:
        var_v0 = 0;
        if (func_800B30F8(arg0, 1) != 0) {
            var_s3 = 1;
            goto block_19;
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return var_v0;
    }
}
