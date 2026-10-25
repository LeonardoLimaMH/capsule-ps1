#include "common.h"

void func_800CA00C(s32 arg0, s16 arg1, s16 arg2, s16 arg3, u16 arg4, u16 arg5, s32 arg6, s32 arg7) {
    extern void * D_8008ED68[];
    s16 temp_v0_2;
    s16 temp_v1_2;
    s16 var_s1;
    s16 var_s2;
    s16 var_s3;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 var_a0;
    s32 var_a1_2;
    s32 var_v0;
    s32 var_v1;
    s8 temp_v0;
    s8 temp_v1;
    s8 var_a2;
    s8 var_a3;
    u32 temp_a0;
    u32 temp_s0;
    u32 var_a1;
    void *temp_a0_3;

    var_s1 = arg1;
    var_s2 = arg2;
    var_s3 = arg3;
    var_a1 = 0;
    temp_s0 = M2C_FIELD((*D_8008ED68), u32 *, 0x1090);
    if (temp_s0 != 0) {
        temp_a0 = temp_s0 + 0x28;
        if ((u32) ((*D_8008ED68) + 0x4594) >= temp_a0) {
            var_a1 = temp_a0;
        }
    }
    M2C_FIELD((*D_8008ED68), u32 *, 0x1090) = var_a1;
    SetPolyFT4((void *) temp_s0, (void *) var_a1);
    SetSemiTrans((void *) temp_s0, 0);
    M2C_FIELD(temp_s0, s8 *, 4) = 0x80;
    M2C_FIELD(temp_s0, s8 *, 5) = 0x80;
    M2C_FIELD(temp_s0, s8 *, 6) = 0x80;
    if (arg0 == 0) {
        var_a3 = 0x80;
        var_a2 = 0xC8;
        var_v1 = 0x28;
    } else {
        var_a3 = 0xB8;
        var_a2 = 0xD0;
        var_v1 = 0x10;
    }
    var_a0 = 0x10;
    if ((s16) arg4 >= 0x2000) {
        var_v1 -= 1;
    }
    if ((s16) arg5 >= 0x2000) {
        var_a0 = 0xF;
    }
    temp_v1 = var_a3 + var_v1;
    temp_v0 = var_a2 + var_a0;
    M2C_FIELD(temp_s0, s8 *, 0xC) = var_a3;
    M2C_FIELD(temp_s0, s8 *, 0xD) = var_a2;
    M2C_FIELD(temp_s0, s8 *, 0x14) = temp_v1;
    M2C_FIELD(temp_s0, s8 *, 0x15) = var_a2;
    M2C_FIELD(temp_s0, s8 *, 0x1C) = var_a3;
    M2C_FIELD(temp_s0, s8 *, 0x1D) = temp_v0;
    M2C_FIELD(temp_s0, s8 *, 0x24) = temp_v1;
    var_a1_2 = (s16) arg4 * (var_v1 & 0xFFFF);
    M2C_FIELD(temp_s0, s8 *, 0x25) = temp_v0;
    if (var_a1_2 < 0) {
        var_a1_2 += 0xFFF;
    }
    temp_a1 = var_a1_2 >> 0xC;
    var_v0 = (s16) arg5 * (var_a0 & 0xFFFF);
    if (var_v0 < 0) {
        var_v0 += 0xFFF;
    }
    temp_a2 = var_v0 >> 0xC;
    if (arg7 != 0) {
        var_s1 -= (u32) (temp_a1 & 0xFFFF) >> 1;
        var_s2 -= (u32) (temp_a2 & 0xFFFF) >> 1;
    }
    temp_v1_2 = var_s1 + temp_a1;
    temp_v0_2 = var_s2 + temp_a2;
    M2C_FIELD(temp_s0, s16 *, 0x1A) = temp_v0_2;
    M2C_FIELD(temp_s0, s16 *, 0x22) = temp_v0_2;
    M2C_FIELD(temp_s0, s16 *, 0x10) = temp_v1_2;
    M2C_FIELD(temp_s0, s16 *, 0x20) = temp_v1_2;
    M2C_FIELD(temp_s0, s16 *, 8) = var_s1;
    M2C_FIELD(temp_s0, s16 *, 0xA) = var_s2;
    M2C_FIELD(temp_s0, s16 *, 0x12) = var_s2;
    M2C_FIELD(temp_s0, s16 *, 0x18) = var_s1;
    if (var_s3 == 2) {
        var_s3 = -2;
    }
    M2C_FIELD(temp_s0, s16 *, 0xE) = GetClut(0x130, var_s3 + 0x1EC, temp_a2, var_a3);
    M2C_FIELD(temp_s0, s16 *, 0x16) = GetTPage(0, 0, 0x2E0, 0x180);
    temp_a0_2 = arg6 * 4;
    M2C_FIELD(temp_s0, s32 *, 0) = (s32) ((M2C_FIELD(temp_s0, s32 *, 0) & 0xFF000000) | (M2C_FIELD((temp_a0_2 + (*D_8008ED68)), s32 *, 0x70) & 0xFFFFFF));
    temp_a0_3 = temp_a0_2 + (*D_8008ED68);
    M2C_FIELD(temp_a0_3, s32 *, 0x70) = (s32) ((M2C_FIELD(temp_a0_3, s32 *, 0x70) & 0xFF000000) | (temp_s0 & 0xFFFFFF));
}
