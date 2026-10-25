#include "common.h"

void func_8009B814(s32 arg0) {
    extern u8 D_80069BE4[];
    extern u8 D_800900C0[];
    s32 var_v1;
    void *temp_s1;
    void *temp_v1;
    void *temp_v1_2;
    void *var_s0;

    func_80024024();
    func_8001A998(D_80069BE4, 0x20);
    func_8001A998(D_800900C0, 0x1318);
    var_s0 = D_80069BE4 - 0x110;
    M2C_FIELD(var_s0, s16 *, 0x70) = 0x600;
    M2C_FIELD(var_s0, s16 *, 0x76) = 0x600;
    M2C_FIELD(var_s0, s16 *, 0x7C) = 0x600;
    M2C_FIELD(var_s0, s16 *, 0x72) = 0;
    M2C_FIELD(var_s0, s16 *, 0x78) = 0;
    M2C_FIELD(var_s0, s16 *, 0x7E) = 0;
    M2C_FIELD(var_s0, s16 *, 0x74) = 0;
    M2C_FIELD(var_s0, s16 *, 0x7A) = 0;
    M2C_FIELD(var_s0, s16 *, 0x80) = 0;
    SetColorMatrix(D_80069BE4 - 0xA0);
    M2C_FIELD(var_s0, s16 *, 0x90) = 0x360;
    M2C_FIELD(var_s0, s16 *, 0x92) = -0x12E0;
    M2C_FIELD(var_s0, s16 *, 0x94) = -0x1880;
    M2C_FIELD(var_s0, s32 *, 0x50) = 1;
    temp_v1 = D_80069BE4 - 0x28;
    M2C_FIELD(var_s0, s16 *, 0xE8) = 0x400;
    M2C_FIELD(var_s0, s16 *, 0x9A) = 0;
    M2C_FIELD(var_s0, s16 *, 0x98) = 0;
    M2C_FIELD(var_s0, s16 *, 0x96) = 0;
    M2C_FIELD(var_s0, s16 *, 0x9A) = 0;
    M2C_FIELD(var_s0, s16 *, 0x98) = 0;
    M2C_FIELD(var_s0, s16 *, 0x96) = 0;
    M2C_FIELD(temp_v1, s16 *, 2) = 0x1200;
    M2C_FIELD(temp_v1, s16 *, 4) = 0;
    temp_v1_2 = D_80069BE4 - 0x38;
    M2C_FIELD(var_s0, s32 *, 0xD8) = 0x700;
    M2C_FIELD(temp_v1_2, s32 *, 4) = 0x700;
    temp_s1 = D_80069BE4 - 0x60;
    M2C_FIELD(temp_v1_2, s32 *, 8) = 0x1260;
    M2C_FIELD(var_s0, s16 *, 0xB0) = 0;
    M2C_FIELD(temp_s1, s16 *, 2) = 0;
    M2C_FIELD(temp_s1, s16 *, 4) = 0;
    func_800B0478(arg0);
    var_v1 = 0;
    do {
        M2C_FIELD(var_s0, s8 *, 0x5E) = 0x80;
        M2C_FIELD(var_s0, s8 *, 0x5D) = 0x80;
        M2C_FIELD(var_s0, s8 *, 0x5C) = 0x80;
        var_v1 += 1;
        var_s0 += 4;
    } while (var_v1 < 4);
}
