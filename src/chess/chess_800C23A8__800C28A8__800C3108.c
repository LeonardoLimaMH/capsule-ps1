#include "common.h"

void func_800C3108(u8 *arg0) {
    extern u8 D_80063940[];
    extern s32 func_800A8E34(u8 *, s32, s32);
    extern s8 func_800C94DC(u8 *, s32);
    s32 var_s1;
    u8 *temp_s3;
    u8 *table;
    s32 temp_s4;
    s32 var_s2;
    u8 *temp_s0;
    s32 ret;

    var_s1 = 0;
    temp_s3 = arg0 + 0x5D0;
    table = D_80063940;
    temp_s4 = (temp_s3[0x611] & 6) >> 1;
    var_s2 = temp_s4 * 0x2E8;
    do {
        ret = func_800A8E34(temp_s3, temp_s4, var_s1);
        if (ret == 0) {
            temp_s0 = temp_s3 + var_s2;
            ret = 0x85;
            temp_s0[0x2F] = ret;
            temp_s0[0x3B] = 0;
            temp_s0[0x3D] = func_800C94DC(arg0, (table + temp_s0[0x18] * 0x3C)[0x18] >> 5);
        }
        var_s1 += 1;
        var_s2 += 0x7C;
    } while (var_s1 < 5);
}

void func_800C3D9C();



