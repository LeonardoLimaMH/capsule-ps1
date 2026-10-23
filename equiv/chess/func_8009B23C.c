#include "common.h"

void func_8009B23C(void *arg0) {
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s4;
    s8 *var_v0;
    void *temp_s2;
    void *temp_v0;
    void *var_s0;
    void *var_v1;
    void *var_v1_2;

    temp_s2 = arg0 + 0x5D0;
    var_s3 = 0;
    var_s4 = 0x18;
    do {
        var_s1 = 0;
        var_s0 = temp_s2 + var_s4;
loop_2:
        var_s1 += 1;
        M2C_FIELD(var_s0, s8 *, 0x15) = 0;
        M2C_FIELD(var_s0, s8 *, 0x16) = 0;
        M2C_FIELD(var_s0, s8 *, 0x17) = 0;
        M2C_FIELD(var_s0, s32 *, 0x18) = 0;
        M2C_FIELD(var_s0, s32 *, 0x1C) = 0;
        M2C_FIELD(var_s0, s8 *, 0x20) = 0;
        M2C_FIELD(var_s0, s8 *, 0x21) = 0;
        M2C_FIELD(var_s0, s8 *, 0x22) = 0;
        M2C_FIELD(var_s0, s8 *, 0x23) = 0;
        M2C_FIELD(var_s0, s8 *, 0x24) = 0;
        M2C_FIELD(var_s0, s8 *, 0x28) = 0;
        M2C_FIELD(var_s0, s8 *, 0x29) = 0;
        M2C_FIELD(var_s0, s8 *, 0x25) = 0;
        M2C_FIELD(var_s0, s8 *, 0x26) = 0;
        M2C_FIELD(var_s0, s8 *, 0x27) = 0;
        M2C_FIELD(var_s0, s8 *, 0x2B) = 0;
        M2C_FIELD(var_s0, s8 *, 0x2A) = 0;
        M2C_FIELD(var_s0, u8 *, 0x14) = (u8) M2C_FIELD(var_s0, u8 *, 0x13);
        func_8001A998(var_s0 + 0x2E, 0x3C);
        M2C_FIELD(var_s0, s8 *, 0x6A) = 0;
        func_8001A998(var_s0 + 0x6B, 5);
        M2C_FIELD(var_s0, s32 *, 0x70) = 0;
        M2C_FIELD(var_s0, s32 *, 0x74) = 0;
        M2C_FIELD(var_s0, s32 *, 0x78) = 0;
        var_s0 += 0x7C;
        if (var_s1 < 6) {
            goto loop_2;
        }
        var_s3 += 1;
        var_s4 += 0x2E8;
    } while (var_s3 < 2);
    func_8001A998(temp_s2 + 0x5EC, 6);
    func_8001A998(temp_s2 + 0x5F2, 6);
    func_8001A998(temp_s2 + 0x5F8, 2);
    M2C_FIELD(temp_s2, s16 *, 0x5FE) = 0;
    func_8001A998(temp_s2 + 0x600, 1);
    var_s3_2 = 0;
    var_v1 = temp_s2;
    do {
        var_s1_2 = 1;
        var_v0 = var_v1 + 0x602;
loop_6:
        *var_v0 = 0;
        var_s1_2 -= 1;
        var_v0 -= 1;
        if (var_s1_2 >= 0) {
            goto loop_6;
        }
        temp_v0 = temp_s2 + var_s3_2;
        var_s3_2 += 1;
        M2C_FIELD(temp_v0, s8 *, 0x5FB) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x605) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x60A) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x616) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x7A5) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x7A7) = 0;
        var_v1 += 2;
    } while (var_s3_2 < 2);
    var_s3_3 = 0;
    M2C_FIELD(temp_s2, s16 *, 0x608) = 0;
    M2C_FIELD(temp_s2, s8 *, 0x60C) = 0;
    M2C_FIELD(temp_s2, s8 *, 0x60D) = 0;
    M2C_FIELD(temp_s2, s8 *, 0x60E) = 0;
    M2C_FIELD(temp_s2, s8 *, 0x60F) = 0;
    M2C_FIELD(temp_s2, s8 *, 0x610) = 0;
    M2C_FIELD(temp_s2, s8 *, 0x611) = 0;
    M2C_FIELD(temp_s2, s16 *, 0x612) = 0;
    M2C_FIELD(temp_s2, s8 *, 0x614) = 0;
    M2C_FIELD(temp_s2, s8 *, 0x615) = 0;
    M2C_FIELD(temp_s2, s8 *, 0x618) = 0;
    M2C_FIELD(temp_s2, s8 *, 0x619) = 0;
    M2C_FIELD(temp_s2, s8 *, 0x61A) = 0;
    M2C_FIELD(temp_s2, s8 *, 0x61B) = 0;
    M2C_FIELD(temp_s2, s8 *, 0x61C) = 0;
    M2C_FIELD(temp_s2, s8 *, 0x61D) = 0;
    M2C_FIELD(temp_s2, s8 *, 0x61E) = 0;
    M2C_FIELD(temp_s2, s8 *, 0x61F) = 0;
    M2C_FIELD(temp_s2, s32 *, 0x5E8) = 0;
    M2C_FIELD(temp_s2, u8 *, 0x5FA) = (u8) M2C_FIELD(temp_s2, u8 *, 0xA);
    func_8001A998(temp_s2 + 0x620, 0xB);
    M2C_FIELD(temp_s2, s32 *, 0x62C) = 0;
    func_8001A998(temp_s2 + 0x630, 0xA9);
    func_8001A998(temp_s2 + 0x6D9, 7);
    func_8001A998(temp_s2 + 0x6E0, 0x2B);
    func_8001A998(temp_s2 + 0x70C, 6);
    func_8001A998(temp_s2 + 0x712, 4);
    func_8001A998(temp_s2 + 0x716, 3);
    func_8001A998(temp_s2 + 0x719, 3);
    func_8001A998(temp_s2 + 0x71C, 6);
    func_8001A998(temp_s2 + 0x722, 0xC);
    func_8001A998(temp_s2 + 0x730, 0x48);
    var_v1_2 = temp_s2;
    M2C_FIELD(temp_s2, s8 *, 0x778) = 0;
    do {
        M2C_FIELD(var_v1_2, s32 *, 0x77C) = 0;
        M2C_FIELD(var_v1_2, s32 *, 0x78C) = 0;
        M2C_FIELD(var_v1_2, s32 *, 0x798) = 0;
        var_s3_3 += 1;
        var_v1_2 += 4;
    } while (var_s3_3 < 3);
    M2C_FIELD(temp_s2, s32 *, 0x788) = 0;
    M2C_FIELD(temp_s2, s8 *, 0x7A4) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x5CB) = 4;
}
