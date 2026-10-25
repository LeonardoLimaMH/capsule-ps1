#include "common.h"

void func_800B7D64(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern u8 D_80085428[];
    extern u8 D_80100FA1[];
    extern int func_800161C4();
    extern int func_800B780C();
    extern int func_800B7988();
    extern int func_800B8DA0();
    extern int func_800CBD28();
    s32 var_s2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = func_80015B3C(&func_800B7988, &func_800CBD28, 4);
    func_8001602C(temp_v0);
    func_800CB588(temp_v0, 0);
    var_s2 = 0;
    M2C_FIELD(temp_v0, s32 *, 0x5C) = arg1;
    M2C_FIELD(temp_v0, s32 *, 0x60) = arg2;
    M2C_FIELD(temp_v0, s32 *, 0x64) = arg3;
    M2C_FIELD(temp_v0, s32 *, 0x50) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0x50) | 0x40) & ~0x30);
    func_800A4900(D_80085428, temp_v0 + 0x18, arg1, arg2);
    do {
        if (arg3 == 4) {
            temp_v0_2 = func_80015B3C(&func_800B8DA0, &func_800161C4, 5);
            func_80015EF8(temp_v0_2);
            M2C_FIELD(temp_v0_2, void **, 0x40) = temp_v0;
            M2C_FIELD(temp_v0_2, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_v0_2, s32 *, 0x34) & ~0x7F) | 1);
            M2C_FIELD(temp_v0_2, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x38) | 1);
            if (var_s2 == 0) {
                M2C_FIELD(temp_v0_2, s32 *, 0x18) = func_80019F30(0x60013, (M2C_FIELD(arg0, u8 *, 0xCE8) * 2) + 0xE1);
            } else {
                M2C_FIELD(temp_v0_2, s32 *, 0x18) = func_80019F30(0x60013, 0x115);
                M2C_FIELD(temp_v0_2, s32 *, 0x38) = (s32) (((M2C_FIELD(temp_v0_2, s32 *, 0x38) | 0x40) & ~0x30) | 0x20);
            }
        }
        var_s2 += 1;
    } while (var_s2 < 2);
    temp_v0_3 = func_80015B3C(&func_800B8DA0, &func_800B780C, 5);
    func_80015EF8(temp_v0_3);
    M2C_FIELD(temp_v0_3, void **, 0x40) = temp_v0;
    M2C_FIELD(temp_v0_3, s32 *, 0x18) = func_80019F30(0x60013, *(arg3 + D_80100FA1) + 0xD3);
    M2C_FIELD(temp_v0_3, s32 *, 0x34) = (s32) (M2C_FIELD(temp_v0_3, s32 *, 0x34) & ~0x7F);
}
