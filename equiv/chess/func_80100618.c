#include "common.h"

void func_80100618(void) {
    extern s32 D_8011976C[];
    extern s32 D_80119770[];
    extern s32 D_80119774[];
    extern s32 D_80119778[];
    extern int func_80100968();
    extern int func_80100AF4();
    s32 var_s0;
    void *temp_v0;
    void *temp_v0_2;

    var_s0 = 0;
    do {
        func_80012A20(func_80019F30(0x2000A, var_s0 + 5), 1, 0, 0);
        func_80012A20(func_80019F30(0x2003E, var_s0 + 4), 1, 0, 0);
        func_80012A20(func_80019F30(0x5003E, var_s0), 1, 0, 0);
        var_s0 += 1;
    } while (var_s0 < 3);
    func_80012A20(func_80019F30(0x2000A, 0x10), 1, 0, 0);
    func_80012A20(func_80019F30(0x5000A, 0), 1, 0, 0);
    func_80012A20(func_80019F30(0x5000A, 2), 1, 0, 0);
    temp_v0 = func_80032DB0(0, 0x18, 4, 0xA, 0x28, &func_80100968);
    M2C_FIELD(temp_v0, s16 *, 0x6E) = -4;
    M2C_FIELD(temp_v0, s16 *, 0x74) = 9;
    M2C_FIELD(temp_v0, s8 *, 0x5A) = 0;
    M2C_FIELD(temp_v0, s8 *, 0x59) = 0;
    M2C_FIELD(temp_v0, s8 *, 0x58) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x38) & ~8);
    temp_v0_2 = func_80032DB0(0, 0x18, 3, 0xA, 0x2B, &func_80100AF4);
    M2C_FIELD(temp_v0_2, s8 *, 0x5A) = 0;
    M2C_FIELD(temp_v0_2, s8 *, 0x59) = 0;
    M2C_FIELD(temp_v0_2, s8 *, 0x58) = 0;
    (*D_80119774) = 0;
    (*D_80119770) = 0;
    (*D_80119778) = 0;
    (*D_8011976C) = 0xD0;
    func_80012508();
}
