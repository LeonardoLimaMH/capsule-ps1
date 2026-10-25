#include "common.h"

void func_8009A608(void *arg0) {
    extern u16 D_8008EE48[];
    extern u8 D_801010B0[];
    extern int func_80012578();
    s32 temp_s0_2;
    s32 var_a1;
    u8 temp_v1;
    void *temp_s0;
    void *temp_v0;
    void *var_a0;

    temp_s0 = arg0 + 0x5D0;
    switch ((*D_8008EE48)) {                           /* irregular */
    default:
        var_a1 = 0;
        if ((*D_8008EE48) != 0) {
            return;
        }
        var_a0 = temp_s0;
        do {
            temp_v0 = temp_s0 + var_a1;
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0xE);
            var_a1 += 1;
            M2C_FIELD(temp_v0, s8 *, 0x605) = (s8) ((temp_v1 != 1) * 4);
            M2C_FIELD(var_a0, s8 *, 0x601) = 6;
            M2C_FIELD(var_a0, s8 *, 0x602) = 6;
            var_a0 += 2;
        } while (var_a1 < 2);
        M2C_FIELD(temp_s0, s8 *, 0x616) = 6;
        M2C_FIELD(temp_s0, s8 *, 0x617) = 6;
        M2C_FIELD(temp_s0, s8 *, 0x61C) = 1;
        M2C_FIELD(temp_s0, s8 *, 0x61D) = 1;
        func_8001A464(func_800CA474(arg0, var_a1, 6), 0x8013B9B4);
        func_8001A464(func_800CA480(arg0), M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 9) * 0x34) + D_801010B0), s32 *, 0x2C));
        temp_s0_2 = M2C_FIELD(temp_s0, u8 *, 9) + 0x10;
        func_8001A480(temp_s0_2, 0x8013B9B4);
        func_80019F30(temp_s0_2 | 0x120000, func_80012578);
        M2C_FIELD(arg0, s16 *, 0xC) = 0;
        func_80012578();
        return;
    case 2:
        func_80012508();
        /* fallthrough */
    case 1:
        return;
    }
}
