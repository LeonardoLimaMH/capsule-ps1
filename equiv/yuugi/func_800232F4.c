#include "common.h"

s32 func_800232F4(s32 arg0, s32 arg1, s16 arg2, s16 arg3, u16 arg4, s32 arg5) {
    extern M2C_UNK D_8006AF90[];
    extern s32 D_80078D10;
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE54[];
    extern s32 D_8008F704[];
    extern s32 D_8008F708[];
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    u16 *temp_a0;
    void *temp_a0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;

    var_s4 = 0;
    switch ((*D_8008EE54)) {
    case 0:
        if (*(s16 *)((arg5 * 0x1E) + (u8 *)D_8006AF90) < 4) {
            func_80012684(0xA);
            return 0;
        }
block_10:
        func_80012668();
        return 0;
    case 1:
        M2C_FIELD(D_8008ED68, s32 *, 0x99C) = 0;
        M2C_FIELD(D_8008ED68, s32 *, 0x9A0) = 0;
        if (arg1 != 0) {
            func_80012A20(func_80019F30(0x20013, 0x1D), 1, 0, 0);
        } else {
            var_s0 = 0;
            do {
                func_80012A20(func_80019F30(0x2000E, var_s0 + 0x43), 1, 0, 0);
                var_s0 += 1;
            } while (var_s0 < 2);
        }
        func_80022C34(arg1, arg2, arg5);
        goto block_10;
    case 3:
        temp_v0 = func_80023120(arg5);
        D_80078D10 = temp_v0;
        if (temp_v0 > 0) {
            (*D_8008F708) = 1;
            goto block_10;
        }
        var_v0 = 0;
        if (temp_v0 < 0) {
            (*D_8008F708) = 3;
            func_80012684(7);
            return 0;
        }
        return var_v0;
    case 5:
        func_800220B8(arg0);
        func_80022F80(arg0, M2C_FIELD((((*D_8008F704) * 2) + ((arg5 * 0x1E) + (u8 *)D_8006AF90)), s16 *, 2));
        goto block_10;
    case 6:
        temp_v0_2 = func_800212AC(arg0, arg1, 2, 1);
        if (temp_v0_2 == 2) {
            (*D_8008F708) = 0;
            func_80012684(2);
            return 0;
        }
        if (temp_v0_2 != 0) {
            (*D_8008F708) = 2;
            goto block_10;
        }
    default:
block_32:
        var_v0 = var_s4;
        /* Duplicate return node #33. Try simplifying control flow for better match */
        return var_v0;
    case 8:
        if (D_80078D10 < 0) {
            var_s4 = -1;
            goto block_32;
        }
        if ((*D_8008F708) != 2) {
            var_s4 = -1;
            goto block_32;
        }
        goto block_10;
    case 9:
        temp_a1 = arg5 * 0x1E;
        temp_a0 = temp_a1 + (u8 *)D_8006AF90;
        var_s0_2 = D_80078D10 - 1;
        *temp_a0 -= 1;
        if (var_s0_2 < 2) {
            var_v0_2 = var_s0_2 * 2;
            do {
                temp_v0_3 = var_v0_2 + temp_a0;
                temp_a1_2 = var_s0_2 + 1;
                M2C_FIELD(temp_v0_3, u16 *, 2) = (u16) M2C_FIELD(temp_v0_3, u16 *, 4);
                temp_v0_4 = (temp_a1_2 * 4) + temp_a1 + (u8 *)D_8006AF90;
                temp_a0_2 = (var_s0_2 * 4) + temp_a1 + (u8 *)D_8006AF90;
                M2C_FIELD(temp_a0_2, u16 *, 8) = (u16) M2C_FIELD(temp_v0_4, u16 *, 8);
                var_s0_2 = temp_a1_2;
                M2C_FIELD(temp_a0_2, u16 *, 0xA) = (u16) M2C_FIELD(temp_v0_4, u16 *, 0xA);
                var_v0_2 = var_s0_2 * 2;
            } while (var_s0_2 < 2);
        }
        goto block_10;
    case 10:
        if (arg1 != 0) {
            var_s0_3 = *(s16 *)((arg5 * 0x1E) + (u8 *)D_8006AF90) - 1;
        } else {
            var_s0_3 = 2;
            func_800D1CC4(arg2 & 0xFFFF, 0x26, 4, 1);
        }
        var_s4 = 1;
        temp_v1 = arg5 * 0x1E;
        M2C_FIELD(((var_s0_3 * 2) + (temp_v1 + (u8 *)D_8006AF90)), s16 *, 2) = arg2;
        temp_v0_5 = (var_s0_3 * 4) + temp_v1 + (u8 *)D_8006AF90;
        M2C_FIELD(temp_v0_5, s16 *, 8) = arg3;
        M2C_FIELD(temp_v0_5, u16 *, 0xA) = arg4;
        goto block_32;
    }
}
