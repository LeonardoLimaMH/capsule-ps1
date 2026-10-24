#include "common.h"

s32 func_8002367C(void *arg0, s16 arg1, s16 arg2, s16 arg3) {
    extern M2C_UNK D_8006AF90[];
    extern M2C_UNK D_8008ED68[];
    M2C_UNK var_a0;
    u32 temp_v0;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v1;
    u16 *temp_v1;
    u16 temp_s0;
    u8 temp_a1;
    u8 var_s2;

    var_s4 = 0;
    var_s2 = 0;
    if (M2C_FIELD(arg0, u8 *, 0) != 0) {
        var_s2 = M2C_FIELD(arg0, u8 *, 0xBCA);
    }
    if (M2C_FIELD(D_8008ED68, u16 *, 0xE8) != 1) {
        if ((s32) M2C_FIELD(D_8008ED68, u16 *, 0xE8) < 2) {
            if (M2C_FIELD(D_8008ED68, u16 *, 0xE8) != 0) {
                return 0;
            }
            temp_s0 = M2C_FIELD(D_8008ED68, u16 *, 0xEC);
            temp_a1 = M2C_FIELD(arg0, u8 *, 0);
            var_s3 = 0;
            if (temp_s0 != 1) {
                if ((s32) temp_s0 < 2) {
                    var_v1 = 0;
                    if (temp_s0 != 0) {

                    } else {
                        if (*((var_s2 * 0x1E) + D_8006AF90) >= 4) {
                            func_80012668(D_8008ED68, temp_a1, 1);
                            M2C_FIELD(arg0, s8 *, 0xBE0) = 0;
                        } else {
                            var_s3 = 1;
                        }
                        goto block_21;
                    }
                } else {
                    var_v1 = 0;
                    if (temp_s0 != 2) {

                    } else {
                        var_s3 = func_800212AC(arg0, temp_a1, 2, 1);
                        var_v1 = var_s3;
                        if (var_s3 == temp_s0) {
                            temp_v1 = (var_s2 * 0x1E) + D_8006AF90;
                            *temp_v1 -= 1;
block_21:
                            var_v1 = var_s3;
                        }
                    }
                }
            } else {
                func_800220B8(arg0, temp_a1, 1);
                M2C_FIELD(arg0, s32 *, 0x14) = func_8001F8B0(0x1B, 0);
                func_80012668();
                var_v1 = 0;
            }
            if (var_v1 == 2) {
                func_80012628();
                return 0;
            }
            var_a0 = 3;
            if (var_v1 != 0) {
                goto block_33;
            }
            goto block_34;
        }
        switch (M2C_FIELD(D_8008ED68, u16 *, 0xE8)) { /* irregular */
        case 2:
            var_v0 = 0;
            if (func_800212AC(arg0, M2C_FIELD(arg0, u8 *, 0), 2, 1) != 0) {
block_29:
                var_s4 = 1;
block_34:
                var_v0 = var_s4;
            }
            return var_v0;
        case 3:
            temp_v0 = func_800232F4(arg0, M2C_FIELD(arg0, u8 *, 0), arg1, arg2, (s32) arg3, (s32) var_s2);
            if (temp_v0 <= 0) {
                var_v0 = 0;
                if (temp_v0 < 0) {
                    var_a0 = 0;
block_33:
                    func_8001264C(var_a0);
                    goto block_34;
                }
            } else {
                goto block_29;
            }
            /* Duplicate return node #35. Try simplifying control flow for better match */
            return var_v0;
        default:
            return 0;
        }
    } else {
        func_800220B8(arg0, (u8) arg2, 1);
        func_80023050(arg0, arg1);
        func_80012628();
        return 0;
    }
}
