#include "ghidra.h"
#include "matching.h"
#include "common.h"

s32 func_800A0AD4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern M2C_UNK D_80065310[];
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_v0;
    u8 temp_a1;
    u8 temp_a1_2;

    if (M2C_FIELD((arg0 + arg1), u8 *, 0x5E4) != 0xFF) {
        /* Keep initialized arguments live across the first conditional. */
        __asm__ volatile("" : "=r"(arg0), "=r"(arg1) : "0"(arg0), "1"(arg1));
        if (((arg2 == 0) || ((temp_v0 = func_800CB400(arg0, arg1), (temp_v0 == 2)) && (arg1 == M2C_FIELD(arg0, u8 *, 0xBCA))) || ((temp_v0 == 0) && (arg1 != M2C_FIELD(arg0, u8 *, 0xBCA)))) && (func_800202A4(5) == 0)) {
            if (arg1 == M2C_FIELD(arg0, u8 *, 0xBCA)) {
                if (arg3 == 0) {
                    temp_a1 = M2C_FIELD((arg0 + arg1), u8 *, 0x5E4);
                    var_a0 = 0;
                    if (temp_a1 < 8U) {
                        var_a0 = (arg1 * 0x980) - 0x5580;
                    }
                    var_v0 = M2C_FIELD((*((D_80065310 + (temp_a1))) + var_a0), s32 *, 0x5C) + var_a0;
                    goto block_16;
                }
                return 0;
            }
            if (arg3 != 0) {
                temp_a1_2 = M2C_FIELD((arg0 + arg1), u8 *, 0x5E4);
                var_a0_2 = 0;
                if (temp_a1_2 < 8U) {
                    var_a0_2 = (arg1 * 0x980) - 0x5580;
                }
                var_v0 = M2C_FIELD((*((D_80065310 + (temp_a1_2))) + var_a0_2), s32 *, 0x60) + var_a0_2;
block_16:
                M2C_FIELD(arg0, s32 *, 0x14) = var_v0;
                return 1;
            }
            goto block_17;
        }
        return 0;
    }
block_17:
    return 0;
}

s32 func_800A0C54(u8 *arg0, s32 arg1) {
    extern s32 D_80065310[];
    extern s32 func_800202A4(s32);
    s32 res;
    s32 n;
    u8 t;
    s32 off;

    if (*(arg0 + arg1 + 0x5E4) == 0xFF) {
        return 0;
    }

    res = func_800202A4(8);
    if (res >= 2) {
        return 0;
    }

    if (arg1 == arg0[0xBCA]) {
        if (res != 0) {
            n = 0x1B;
        } else {
            n = 0x1C;
        }
    } else {
        if (res != 0) {
            n = 0x19;
        } else {
            n = 0x1A;
        }
    }

    t = *(arg0 + arg1 + 0x5E4);
    if (t >= 8) {
        off = 0;
    } else {
        off = arg1 * 0x980 - 0x5580;
    }

    *(s32 *)(arg0 + 0x14) = *(s32 *)(n * 4 + (D_80065310[t] + off)) + off;
    return 1;
}
