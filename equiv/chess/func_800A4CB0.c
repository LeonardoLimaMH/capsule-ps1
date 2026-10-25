#include "common.h"

void func_800A4CB0(void *arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    extern u16 D_8008EE54[];
    extern int func_800161C4();
    extern int func_800A5C3C();
    s32 temp_s4;
    s32 var_v0;
    u16 temp_v1;
    u16 var_v0_2;
    u8 temp_s0;
    void *temp_s1;
    void *temp_v0;

    temp_s1 = arg0 + 0x5D0;
    temp_s0 = M2C_FIELD(temp_s1, u8 *, 0x5FA);
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xE8)) {  /* irregular */
    case 0:
        M2C_FIELD(D_8008ED68, s8 *, 0x102) = 2;
        func_800A8548(arg0, temp_s1, temp_s0);
        temp_v0 = func_80015B3C(&func_800A5C3C, &func_800161C4, 5);
        func_80015EF8(temp_v0);
        M2C_FIELD(temp_v0, s32 *, 0x18) = func_80019F30(0x60013, 8);
        M2C_FIELD(temp_v0, s16 *, 0x4A) = -0x10;
        M2C_FIELD(temp_v0, s16 *, 0x4E) = 3;
        M2C_FIELD(temp_v0, s16 *, 0x46) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x5B) = 1;
        M2C_FIELD(temp_v0, s16 *, 0x5C) = 0;
        M2C_FIELD(temp_v0, s16 *, 0x5E) = 0;
        M2C_FIELD(temp_v0, s16 *, 0x60) = 0;
        M2C_FIELD(temp_v0, s16 *, 0x62) = 0xF0;
        M2C_FIELD(temp_s1, u8 *, 0x7A7) = 0U;
        M2C_FIELD(temp_s1, s8 *, 0x7A8) = 0;
        func_80012628();
        return;
    case 1:
        temp_s4 = func_800B03B8(arg0, temp_s1, temp_s0);
        if (arg1 == 0) {
            var_v0 = func_800CFB1C() & 0xFF;
        } else {
            var_v0 = func_800CFC9C(((temp_s0 << 7) | (M2C_FIELD((temp_s1 + temp_s0), u8 *, 0x5FB) + 1)) & 0xFF) & 0xFF;
        }
        if (var_v0 == 0) {
            func_80012628();
            return;
        }
        temp_v1 = M2C_FIELD(arg0, u16 *, 0xC);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0_2 = temp_v1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0_2 = temp_v1 + 1;
        }
        M2C_FIELD(arg0, u16 *, 0xC) = var_v0_2;
        if ((temp_s4 != 0) && ((u32) (var_v0_2 & 0xFFFF) >= 0x4B1U)) {
            if (func_80020304(3) == 0) {
                M2C_FIELD(D_8008ED68, s8 *, 0x102) = 0;
                M2C_FIELD(D_8008ED68, s32 *, 0x99C) = (s32) (*D_8008EE54);
                func_80012604(6);
                return;
            }
            M2C_FIELD(arg0, u16 *, 0xC) = 0U;
            return;
        }
        return;
    case 2:
        if (func_800B03B8(arg0, temp_s1, temp_s0) != 0) {
            M2C_FIELD(temp_s1, s8 *, 0x7A8) = 1;
            func_80012628();
            return;
        }
        break;
    case 3:
        if (M2C_FIELD(temp_s1, u8 *, 0x7A7) != 0) {
            M2C_FIELD(D_8008ED68, s8 *, 0x102) = 0;
            if ((arg1 == 0) && (M2C_FIELD((temp_s1 + (temp_s0 * 6)), u8 *, 0x5ED) == 0)) {
                M2C_FIELD(temp_s1, s8 *, 0x624) = 1;
                func_800125AC(0xD);
                return;
            }
            func_800125D8();
        }
        break;
    }
}
