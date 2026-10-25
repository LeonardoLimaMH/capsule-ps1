#include "common.h"

void func_8009F25C(s32 arg0) {
    extern u8 D_8008ED68[];
    extern u16 D_8008EE50[];
    extern s8 D_8008EE6A[];
    extern int func_800161C4();
    extern int func_8009F960();
    s32 temp_v1;
    s32 var_v0;
    u8 temp_s1;
    void *temp_s0;
    void *temp_v0;

    temp_s0 = arg0 + 0x5D0;
    temp_s1 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
    switch ((*D_8008EE50)) {
    case 0:
        (*D_8008EE6A) = 2;
        func_80012628();
        return;
    case 1:
        M2C_FIELD(temp_s0, s8 *, 0x624) = 0xFE;
        M2C_FIELD(temp_s0, s8 *, 0x615) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x7A7) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x7A8) = 0;
        func_80012628();
        /* fallthrough */
    case 2:
        if (func_800B09B0(arg0) != 0) {
            temp_v0 = func_80015B3C(&func_8009F960, &func_800161C4, 5);
            func_80015EF8(temp_v0);
            M2C_FIELD(temp_v0, s32 *, 0x18) = func_80019F30(0x60013, 8);
            M2C_FIELD(temp_v0, s16 *, 0x50) = 0x800;
            M2C_FIELD(temp_v0, s16 *, 0x52) = 0x800;
            M2C_FIELD(temp_v0, s16 *, 0x46) = 0x70;
            M2C_FIELD(temp_v0, s16 *, 0x4A) = 0x58;
            M2C_FIELD(temp_v0, s16 *, 0x4E) = 3;
            func_80012628();
            return;
        }
    default:
        return;
    case 3:
        if (!(func_800CFB1C() & 0xFF)) {
            (*D_8008EE6A) = 0;
            M2C_FIELD(temp_s0, s8 *, 0x7A8) = 1;
            func_8009D750(arg0, temp_s0);
            func_80012628();
            return;
        }
        break;
    case 5:
        if (M2C_FIELD((temp_s0 + (temp_s1 * 6)), u8 *, 0x5ED) != 0) {
            M2C_FIELD(temp_s0, s8 *, 0x624) = 0xFF;
            func_8001264C(7);
            return;
        }
        func_800220B8(arg0);
        func_8009FE5C(arg0);
        func_80012628();
        return;
    case 6:
        var_v0 = func_800212AC(arg0, 1, 2, 1);
block_17:
        if (var_v0 != 0) {
            func_80012628();
            return;
        }
        break;
    case 7:
        func_800B0BB0(arg0);
        if ((M2C_FIELD(temp_s0, u8 *, 0x61A) == 5) && ((temp_v1 = M2C_FIELD(((temp_s1 * 0x10) + D_8008ED68), s32 *, 0x88), ((temp_v1 & 0x20) != 0)) || (temp_v1 & 0x40))) {
            M2C_FIELD(temp_s0, s8 *, 0x7A7) = 1;
            M2C_FIELD(temp_s0, s8 *, 0x624) = 0xFE;
            func_80012628();
            return;
        }
        break;
    case 9:
        var_v0 = func_800B0D70(arg0);
        goto block_17;
    case 10:
        M2C_FIELD(temp_s0, s8 *, 0x615) = 1;
        M2C_FIELD(temp_s0, s8 *, 0x624) = 0xB;
        func_80012604(1);
        break;
    }
}
