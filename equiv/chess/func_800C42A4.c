#include "common.h"

void func_800C42A4(void *arg0) {
    extern u8 D_80069AD4[];
    extern u8 D_80086105[];
    extern u8 D_8008ED68[];
    u32 temp_a2;
    u32 temp_a2_2;
    u32 temp_a3;
    s32 var_a3;
    s32 var_t0;
    s32 var_v1_2;
    s32 var_v1_3;
    u16 var_v0;
    u32 temp_v1;
    u32 temp_v1_2;
    u32 var_v1;

    temp_v1 = M2C_FIELD(arg0, u32 *, 0x3C);
    var_a3 = M2C_FIELD(arg0, s32 *, 0x80);
    if (temp_v1 < 7U) {
        var_v0 = M2C_FIELD(arg0, u16 *, 0x52) + 0x400;
        goto block_4;
    }
    if (temp_v1 < 0xEU) {
        var_v0 = M2C_FIELD(arg0, u16 *, 0x52) - 0x400;
block_4:
        M2C_FIELD(arg0, u16 *, 0x52) = var_v0;
        M2C_FIELD(arg0, u16 *, 0x50) = var_v0;
    }
    temp_v1_2 = M2C_FIELD(arg0, u32 *, 0x3C);
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v1 = temp_v1_2 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v1 = temp_v1_2 + 1;
    }
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x34) & 0x7F;
    M2C_FIELD(arg0, u32 *, 0x3C) = var_v1;
    if ((u32) (temp_a2 - 1) < 2U) {
        var_a3 += 1;
    }
    var_v1_2 = (s16) M2C_FIELD(arg0, u16 *, 0x50) * ((6 - var_a3) * 0xD);
    if (var_v1_2 < 0) {
        var_v1_2 += 0x1FFF;
    }
    func_8001F524((s16) (M2C_FIELD(arg0, u16 *, 0x46) - (var_v1_2 >> 0xD)), (s16) (M2C_FIELD(arg0, u16 *, 0x4A) - (0xEBE0 / (s32) M2C_FIELD(D_80069AD4, s32 *, 0xE0))), temp_a2 == 1, 0, M2C_FIELD(arg0, s32 *, 0x7C), 3, (s32) (s16) M2C_FIELD(arg0, u16 *, 0x50), (s32) (s16) M2C_FIELD(arg0, u16 *, 0x52), 5, M2C_FIELD(arg0, s32 *, 0x34) & 0x7F);
    if ((u32) ((M2C_FIELD(arg0, s32 *, 0x34) & 0x7F) - 1) < 2U) {
        temp_a3 = M2C_FIELD(arg0, s32 *, 0x8C);
        temp_a2_2 = temp_a3 + 3;
        var_t0 = temp_a2_2;
        if (temp_a2_2 < 0) {
            var_t0 = temp_a3 + 6;
        }
        var_v1_3 = (s16) M2C_FIELD(arg0, u16 *, 0x50) * 0xA;
        if (var_v1_3 < 0) {
            var_v1_3 += 0xFFF;
        }
        func_80018C00((s16) M2C_FIELD(arg0, u16 *, 0x46), (s16) (M2C_FIELD(arg0, u16 *, 0x4A) - (0x11880 / (s32) M2C_FIELD(D_80069AD4, s32 *, 0xE0))), temp_a2_2 - ((var_t0 >> 2) * 4), 0, var_v1_3 >> 0xC, 5);
    }
    if ((*D_80086105) != 0) {
        func_800185F8(arg0);
    }
}
