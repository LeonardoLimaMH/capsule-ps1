#include "common.h"

void func_8009A0B8(void) {
    extern u8 D_80085428[];
    extern s32 D_8008ED84[];
    extern u16 D_8008EE44[];
    extern int func_80012508();
    extern int func_8009AC88();
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_s0;

    switch ((*D_8008EE44)) {
    case 0:
        (*D_8008ED84) = 0;
        M2C_FIELD(D_80085428, s8 *, 0xF) = 0;
        M2C_FIELD(D_80085428, s8 *, 0xE) = 0;
        M2C_FIELD(D_80085428, s16 *, 0xA) = 0;
        M2C_FIELD(D_80085428, s8 *, 0x5D0) = 1;
        temp_s0 = D_80085428 + 0x5D0;
        M2C_FIELD(temp_s0, s8 *, 0xF) = 2;
        M2C_FIELD(temp_s0, s8 *, 0xA) = 0;
        M2C_FIELD(temp_s0, s8 *, 0xB) = 1;
        M2C_FIELD(temp_s0, s8 *, 0xE) = 1;
        M2C_FIELD(temp_s0, s8 *, 0x10) = 1;
        M2C_FIELD(temp_s0, s8 *, 0x11) = 1;
        M2C_FIELD(temp_s0, s8 *, 0x16) = 3;
        M2C_FIELD(temp_s0, s8 *, 0x17) = 3;
        var_s1 = 0;
        M2C_FIELD(temp_s0, u8 *, 9) = func_80020304(6);
        M2C_FIELD(temp_s0, u8 *, 0x12) = func_80020304(8);
loop_3:
        temp_v0 = func_80020304(8);
        M2C_FIELD(temp_s0, u8 *, 0x13) = temp_v0;
        var_s1 += 1;
        if ((temp_v0 & 0xFF) == M2C_FIELD(temp_s0, u8 *, 0x12)) {
            if (var_s1 < 0x32) {
                goto loop_3;
            }
        }
        var_s1_2 = 0;
        M2C_FIELD(temp_s0, u8 *, 0x14) = func_80020304(7);
loop_6:
        temp_v0_2 = func_80020304(7);
        M2C_FIELD(temp_s0, u8 *, 0x15) = temp_v0_2;
        var_s1_2 += 1;
        if (((temp_v0_2 & 0xFF) == M2C_FIELD(temp_s0, u8 *, 0x14)) && (var_s1_2 < 0x32)) {
            goto loop_6;
        }
block_10:
        func_80012508();
        break;
    case 1:
        func_8001A464(0x12, 0x8011C400);
        func_8001A464(0x13, 0x8011EDF4);
        func_8001A464(0x14, 0x8013B9B4);
        func_8001A464(0x10, 0x8014E298);
        func_8001A480(0xE, 0x8011C400);
        func_80019F30(0x12000E, func_80012508);
        M2C_FIELD(D_80085428, s16 *, 0xC) = 0;
        goto block_10;
    case 3:
        func_8001A49C(0x8011C400);
        func_8001A49C(0x8011EDF4);
        func_8001A49C(0x8013B9B4);
        func_8001A49C(0x8014E298);
        goto block_10;
    case 4:
        var_s0 = 0;
        do {
            func_80012A20(func_80019F30(0x20010, var_s0 + 2), 1, 0, 0);
            var_s0 += 1;
        } while (var_s0 < 3);
        func_80012A20(func_80019F30(0x50010, NULL), 1, 0, 0);
        goto block_10;
    case 5:
        func_80012200(&func_8009AC88);
        break;
    }
    func_8001FD98(2);
}
