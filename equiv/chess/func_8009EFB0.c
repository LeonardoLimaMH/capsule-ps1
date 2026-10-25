#include "common.h"

void func_8009EFB0(s32 arg0) {
    extern u8 D_8008ED68[];
    extern int func_800161C4();
    extern int func_8009CD9C();
    s32 temp_v1;
    u8 temp_s5;
    void *temp_s4;
    void *temp_v0;
    void *temp_v0_2;

    temp_s4 = arg0 + 0x5D0;
    temp_s5 = M2C_FIELD(temp_s4, u8 *, 0x5FA);
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xE8)) {  /* irregular */
    case 0:
        M2C_FIELD(temp_s4, s8 *, 0x624) = 0xFE;
        M2C_FIELD(temp_s4, s8 *, 0x627) = 0;
        temp_v0 = func_80015B3C(&func_8009CD9C, &func_800161C4, 2);
        func_80015EF8(temp_v0);
        M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x38) & ~1);
        M2C_FIELD(temp_v0, s32 *, 0x18) = func_80019F30(0x60013, 1);
        M2C_FIELD(temp_v0, s16 *, 0x46) = -0x48;
        M2C_FIELD(temp_v0, s16 *, 0x4E) = 4;
        M2C_FIELD(temp_v0, s16 *, 0x4A) = -0x28;
        M2C_FIELD(temp_v0, s32 *, 0x34) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x34) & ~0x7F);
        temp_v0_2 = func_80015B3C(&func_8009CD9C, &func_800161C4, 2);
        func_80015EF8(temp_v0_2);
        M2C_FIELD(temp_v0_2, s16 *, 0x46) = (s16) ((temp_s5 * 0x28) - 0x48);
        M2C_FIELD(temp_v0_2, s16 *, 0x4E) = 3;
        M2C_FIELD(temp_v0_2, s16 *, 0x4A) = -0x28;
        M2C_FIELD(temp_v0_2, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x38) & ~1);
        M2C_FIELD(temp_v0_2, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_v0_2, s32 *, 0x34) & ~0x7F) | 1);
        M2C_FIELD(temp_v0_2, s32 *, 0x18) = func_80019F30(0x60012, temp_s5 + 0x18);
        if (M2C_FIELD((temp_s4 + temp_s5), u8 *, 0x10) == 0) {
            func_8001264C(0x14);
            return;
        }
    default:
        func_80012628();
        return;
    case 20:
        if (M2C_FIELD((temp_s4 + temp_s5), u8 *, 0x10) != 0) {
            func_800AECC4(temp_s4, temp_s5);
        }
        temp_v1 = M2C_FIELD(((temp_s5 * 0x10) + D_8008ED68), s32 *, 0x88);
        if (temp_v1 & 0x20) {
            if (M2C_FIELD(temp_s4, s8 *, 0x627) == 0) {
                func_80034AB0(0x48);
                func_8001264C(0x15);
                return;
            }
            goto block_15;
        }
        if (temp_v1 & 0x40) {
block_15:
            func_80034AB0(0x5D);
            func_8001264C(0x16);
            return;
        }
        if ((temp_v1 & 0x8000) || (temp_v1 & 0x2000)) {
            func_80034AB0(0x84);
            M2C_FIELD(temp_s4, s8 *, 0x627) = (s8) ((u8) M2C_FIELD(temp_s4, s8 *, 0x627) ^ 1);
            return;
        }
        break;
    case 21:
        M2C_FIELD(temp_s4, s8 *, 0x627) = -1;
        M2C_FIELD(temp_s4, s8 *, 0x624) = 0;
        M2C_FIELD(temp_s4, s8 *, 0x611) = (s8) (((1 - M2C_FIELD(temp_s4, u8 *, 0x5FA)) * 2) | 0x11);
        func_800125AC(0xB);
        return;
    case 22:
        M2C_FIELD(temp_s4, s8 *, 0x627) = -1;
        M2C_FIELD(temp_s4, s8 *, 0x624) = 0xA;
        func_80012604(1);
        return;
    }
}
