#include "common.h"

void *func_800A1780(void) {
    extern u16 D_8008EE4C[];
    extern int func_800161C4();
    extern int func_800A13B4();
    extern int func_800A1630();
    extern int func_800A2D38();
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    temp_v0 = func_80015B3C(&func_800A13B4, &func_800161C4, 2);
    func_80015EF8(temp_v0);
    M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x38) | 1);
    M2C_FIELD(temp_v0, s32 *, 0x18) = func_80019F30(0x60013, 0);
    M2C_FIELD(temp_v0, s16 *, 0x46) = -0xC2;
    M2C_FIELD(temp_v0, s16 *, 0x4A) = -0xA2;
    M2C_FIELD(temp_v0, s16 *, 0x6A) = 2;
    M2C_FIELD(temp_v0, s16 *, 0x6E) = 2;
    M2C_FIELD(temp_v0, s16 *, 0x4E) = 4;
    temp_v0_2 = func_80015B3C(&func_800A2D38, &func_800161C4, 2);
    func_80015EF8(temp_v0_2);
    M2C_FIELD(temp_v0_2, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x38) | 1);
    M2C_FIELD(temp_v0_2, s32 *, 0x18) = func_80019F30(0x60013, 1);
    M2C_FIELD(temp_v0_2, s16 *, 0x46) = -0x48;
    M2C_FIELD(temp_v0_2, s16 *, 0x4A) = -0x28;
    M2C_FIELD(temp_v0_2, s16 *, 0x4E) = 4;
    M2C_FIELD(temp_v0_2, s32 *, 0x34) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x34) & ~0x7F);
    temp_v0_3 = func_80015B3C(&func_800A2D38, &func_800161C4, 2);
    func_80015EF8(temp_v0_3);
    M2C_FIELD(temp_v0_3, s16 *, 0x4E) = 3;
    M2C_FIELD(temp_v0_3, s16 *, 0x4A) = -0x28;
    M2C_FIELD(temp_v0_3, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0_3, s32 *, 0x38) | 1);
    M2C_FIELD(temp_v0_3, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_v0_3, s32 *, 0x34) & ~0x7F) | 1);
    temp_v0_4 = func_80015B3C(&func_800A1630, &func_800161C4, 2);
    func_80015EF8(temp_v0_4);
    M2C_FIELD(temp_v0_4, s16 *, 0x4E) = 4;
    M2C_FIELD(temp_v0_4, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0_4, s32 *, 0x38) | 1);
    M2C_FIELD(temp_v0_4, s32 *, 0x7C) = (s32) (*D_8008EE4C);
    return temp_v0;
}
