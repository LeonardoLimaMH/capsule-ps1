#include "common.h"

void func_800C44BC(void *arg0, void *arg1, s32 arg2, s32 unused_arg3, s32 arg4) {
    extern u8 D_80018600[];
    extern int func_800BCE0C();
    extern int func_800C42A4();
    s16 temp_v0;
    s16 var_v1;
    s32 var_s2;
    s32 var_v0;
    void *var_s0;

    var_s2 = arg4;
    if ((var_s2 == 0) && (M2C_FIELD(arg0, u8 *, 0xCDE) != 0)) {
        var_s0 = func_80015B3C(&func_800BCE0C, D_80018600, 5);
        func_80015EF8(var_s0);
        var_s2 = 3;
        M2C_FIELD(var_s0, u16 *, 0x46) = (u16) M2C_FIELD(arg1, u16 *, 0x46);
        M2C_FIELD(var_s0, s32 *, 0x80) = 1;
        M2C_FIELD(var_s0, u16 *, 0x4A) = (u16) M2C_FIELD(arg1, u16 *, 0x4A);
    } else {
        var_s0 = func_80015B3C(&func_800C42A4, D_80018600, 5);
        func_80015EF8(var_s0);
        M2C_FIELD(var_s0, u16 *, 0x46) = (u16) M2C_FIELD(arg1, u16 *, 0x46);
        M2C_FIELD(var_s0, u16 *, 0x4A) = (u16) M2C_FIELD(arg1, u16 *, 0x4A);
        temp_v0 = M2C_FIELD(arg0, s16 *, 0xCE0);
        var_v1 = temp_v0;
        if (temp_v0 < 0) {
            var_v1 = -var_v1;
        }
        M2C_FIELD(var_s0, s32 *, 0x7C) = (s32) var_v1;
        M2C_FIELD(var_s0, s32 *, 0x8C) = (s32) M2C_FIELD(arg0, u8 *, 0xCE5);
        if (var_v1 >= 0x64) {
            var_v0 = 3;
        } else {
            var_v0 = 1;
            if (var_v1 >= 0xA) {
                var_v0 = 2;
            }
        }
        M2C_FIELD(var_s0, s32 *, 0x80) = var_v0;
    }
    M2C_FIELD(var_s0, s32 *, 0x88) = arg2;
    M2C_FIELD(var_s0, s32 *, 0x34) = (s32) ((M2C_FIELD(var_s0, s32 *, 0x34) & ~0x7F) | (var_s2 & 0x7F));
}
