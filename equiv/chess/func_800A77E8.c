#include "common.h"

void func_800A77E8(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 var_s5;
    u32 temp_s6;
    u32 var_v0;
    u32 var_v0_2;
    void *temp_s0;

    temp_s0 = arg0 + (arg2 * 0x2E8) + 0x5E8 + (arg3 * 0x7C);
    var_s5 = 0;
    temp_s6 = M2C_FIELD(temp_s0, u32 *, 0x1C);
    var_v0 = temp_s6 >> 0;
    do {
        if (var_v0 & 1) {
            switch (var_s5) {
            case 8:
                func_80034AB0(6);
                func_800C523C(arg0, arg1, arg2, arg3);
                func_800C5928(arg0, arg1, arg2, arg3);
                var_v0_2 = M2C_FIELD(temp_s0, u32 *, 0x1C) ^ 0x100;
block_16:
                M2C_FIELD(temp_s0, u32 *, 0x1C) = var_v0_2;
                break;
            case 9:
                func_800EE02C(arg0, arg1, arg2, arg3);
                var_v0_2 = M2C_FIELD(temp_s0, u32 *, 0x1C) ^ 0x200;
                goto block_16;
            case 10:
                func_800EE224(arg0, arg1, arg2, arg3);
                var_v0_2 = M2C_FIELD(temp_s0, u32 *, 0x1C) ^ 0x400;
                goto block_16;
            case 11:
                var_v0_2 = M2C_FIELD(temp_s0, u32 *, 0x1C) ^ 0x800;
                goto block_16;
            case 12:
                func_800C553C(arg0, arg1, arg2, arg3);
                var_v0_2 = M2C_FIELD(temp_s0, u32 *, 0x1C) ^ 0x1000;
                goto block_16;
            case 13:
                func_800EE434(arg0, arg1, arg2, arg3);
                var_v0_2 = M2C_FIELD(temp_s0, u32 *, 0x1C) ^ 0x2000;
                goto block_16;
            case 14:
                func_800EE690(arg0, arg1, arg2, arg3);
                var_v0_2 = M2C_FIELD(temp_s0, u32 *, 0x1C) ^ 0x4000;
                goto block_16;
            case 15:
                var_v0_2 = M2C_FIELD(temp_s0, u32 *, 0x1C) ^ 0x8000;
                goto block_16;
            case 18:
                func_800EF1FC(arg0, arg1, arg2, arg3);
                var_v0_2 = M2C_FIELD(temp_s0, u32 *, 0x1C) ^ 0x40000;
                goto block_16;
            case 3:
                func_800C44BC(arg0, arg1, arg2, arg3, 0);
                var_v0_2 = M2C_FIELD(temp_s0, u32 *, 0x1C) ^ 8;
                goto block_16;
            case 4:
                func_800C44BC(arg0, arg1, arg2, arg3, 1);
                var_v0_2 = M2C_FIELD(temp_s0, u32 *, 0x1C) ^ 0x10;
                goto block_16;
            case 5:
                func_800C44BC(arg0, arg1, arg2, arg3, 2);
                var_v0_2 = M2C_FIELD(temp_s0, u32 *, 0x1C) ^ 0x20;
                goto block_16;
            }
        }
        var_s5 += 1;
        var_v0 = temp_s6 >> var_s5;
    } while (var_s5 < 0x20);
}
