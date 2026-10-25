#include "common.h"

void func_8009E024(void *arg0, void *arg1, s32 arg2) {
    extern s32 D_80069FB4[];
    extern u8 D_8008ED68[];
    extern u8 D_80100D34[];
    extern u8 D_80118710[];
    u32 temp_a1_2;
    u32 temp_a3_3;
    u32 temp_s1;
    u32 temp_v0_2;
    s32 var_v1;
    u32 temp_v1;
    u8 temp_a0;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_a3_2;
    u8 temp_s0;
    u8 temp_s2;
    u8 temp_s3;
    u8 temp_v0;
    void *temp_a2_2;
    void *temp_a3;
    void *temp_a3_4;

    temp_v0 = M2C_FIELD(arg0, u8 *, 0x5FA);
    temp_s1 = (*D_80069FB4);
    temp_a3 = arg0 + (temp_v0 * 6);
    temp_a0 = M2C_FIELD(temp_a3, u8 *, 0x5EE);
    temp_a1 = M2C_FIELD(temp_a3, u8 *, 0x5EF);
    temp_a2 = M2C_FIELD(temp_a3, u8 *, 0x5F0);
    temp_a3_2 = M2C_FIELD(temp_a3, u8 *, 0x5F1);
    temp_s0 = M2C_FIELD((arg0 + temp_v0), u8 *, 0x605);
    temp_s2 = *((temp_a0 * 0xD) + D_80118710 + temp_a1);
    temp_s3 = *((temp_a2 * 0xD) + D_80118710 + temp_a3_2);
    temp_v0_2 = func_800C9CA8(temp_a0, temp_a1, temp_a2, temp_a3_2) & 0xFF;
    temp_a3_3 = temp_s0 + temp_v0_2;
    if (temp_v0_2 != 0) {
        temp_a1_2 = temp_a3_3 + 7;
        var_v1 = temp_a1_2;
        if (temp_a1_2 < 0) {
            var_v1 = temp_a3_3 + 0xE;
        }
        temp_a3_4 = (temp_s2 * 8) + temp_s1;
        temp_a2_2 = (temp_s3 * 8) + temp_s1;
        M2C_FIELD(arg1, s32 *, 0x18) = func_80019F30(arg2 | 0x60000, *((temp_a1_2 - (var_v1 & 0x3F8)) + D_80100D34) + 0xC);
        temp_v1 = M2C_FIELD(temp_a3_4, s16 *, 0) + M2C_FIELD(temp_a2_2, s16 *, 0);
        M2C_FIELD(arg1, s16 *, 0x46) = (s16) (((s32) (temp_v1 + (temp_v1 >> 0x1F)) >> 1) - ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2));
        M2C_FIELD(arg1, s16 *, 0x4E) = 6;
        M2C_FIELD(arg1, s16 *, 0x4A) = (s16) (((s32) (M2C_FIELD(temp_a3_4, s16 *, 2) + M2C_FIELD(temp_a2_2, s16 *, 2)) / 2) - ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2));
    }
}
