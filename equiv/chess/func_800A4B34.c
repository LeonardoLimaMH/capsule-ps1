#include "common.h"

void func_800A4B34(void *arg0) {
    extern int func_800161C4();
    extern int func_800A5BAC();
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = arg0 + 0x5D0;
    M2C_FIELD(temp_v0, s8 *, 0x610) = 1;
    M2C_FIELD(temp_v0, s8 *, 0x619) = 1;
    M2C_FIELD(temp_v0, s8 *, 0x61B) = 1;
    M2C_FIELD(temp_v0, s8 *, 0x615) = 1;
    M2C_FIELD(temp_v0, s8 *, 0x616) = 0xFF;
    if (M2C_FIELD((temp_v0 + M2C_FIELD(temp_v0, u8 *, 0x5FA)), u8 *, 0x16) != 7) {
        temp_v0_2 = func_80015B3C(&func_800A5BAC, &func_800161C4, 5);
        func_80015EF8(temp_v0_2);
        M2C_FIELD(temp_v0_2, s32 *, 0x18) = func_80019F30(0x60012, 0x39);
        M2C_FIELD(temp_v0_2, u16 *, 0x46) = -0x98U;
        M2C_FIELD(temp_v0_2, s16 *, 0x4A) = -0x6C;
        M2C_FIELD(temp_v0_2, s16 *, 0x4E) = 4;
        M2C_FIELD(temp_v0_2, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x38) | 0x40);
        M2C_FIELD(temp_v0_2, s32 *, 0x7C) = (s32) M2C_FIELD(arg0, u8 *, 0xBCA);
        M2C_FIELD(temp_v0_2, s32 *, 0x80) = (s32) M2C_FIELD((arg0 + M2C_FIELD(arg0, u8 *, 0xBCA)), u8 *, 0x5E6);
        if (M2C_FIELD(arg0, u8 *, 0xBCA) == 0) {
            M2C_FIELD(temp_v0_2, u16 *, 0x46) = (u16) (M2C_FIELD(temp_v0_2, u16 *, 0x46) + 0xD8);
        }
    }
    func_800125D8();
}
