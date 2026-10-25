#include "common.h"

void func_8009EA04(void *arg0) {
    extern u8 D_8008ED68[];
    M2C_UNK var_a1;
    s32 temp_v1;
    s8 temp_v1_2;
    s8 var_v0;

    temp_v1 = M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x5FA) * 0x10) + D_8008ED68), s32 *, 0x88);
    if (temp_v1 & 0x20) {
        func_80034AB0(0x48);
        temp_v1_2 = M2C_FIELD(arg0, s8 *, 0x627);
        if (temp_v1_2 == 0) {
            M2C_FIELD(arg0, s8 *, 0x624) = 5;
            var_a1 = 0;
            goto block_5;
        }
        if (temp_v1_2 == 1) {
            M2C_FIELD(arg0, s8 *, 0x624) = 6;
            var_a1 = 1;
block_5:
            func_8009EB3C(arg0, var_a1, 0);
            func_80012604(3);
            return;
        }
        M2C_FIELD(arg0, s8 *, 0x624) = 8;
        func_80012604(5);
        return;
    }
    if (temp_v1 & 0x40) {
        func_80034AB0(0x5D);
        M2C_FIELD(arg0, s8 *, 0x624) = 1;
        func_80012604(1);
        return;
    }
    if (temp_v1 & 0x1000) {
        func_80034AB0(0x84);
        var_v0 = (u8) M2C_FIELD(arg0, s8 *, 0x627) - 1;
        if (M2C_FIELD(arg0, s8 *, 0x627) == 0) {
            var_v0 = 2;
        }
        goto block_15;
    }
    if (temp_v1 & 0x4000) {
        func_80034AB0(0x84);
        var_v0 = (u8) M2C_FIELD(arg0, s8 *, 0x627) + 1;
        if (M2C_FIELD(arg0, s8 *, 0x627) >= 2) {
            var_v0 = 0;
        }
block_15:
        M2C_FIELD(arg0, s8 *, 0x627) = var_v0;
    }
}
