#include "common.h"

void func_800BCC98(void) {
    extern u8 D_800178F8[];
    extern u8 D_8008ED68[];
    extern u8 D_800EFF58[];
    extern int func_800BD164();
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_80015B3C(&func_800BD164, D_800178F8, 0x1A);
    M2C_FIELD(D_800EFF58, void **, 0x5FC) = temp_v0;
    if (temp_v0 != NULL) {
        func_80015EF8(temp_v0);
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5FC), s16 *, 0x46) = (s16) (0x1C4 - ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2));
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5FC), s16 *, 0x4A) = (s16) (0x4C - ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2));
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5FC), s16 *, 0x4E) = 5;
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5FC), s8 *, 0x58) = 0x80;
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5FC), s8 *, 0x59) = 0x80;
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5FC), s8 *, 0x5A) = 0x80;
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5FC), s16 *, 0x14) = 0;
        temp_v0_2 = M2C_FIELD(D_800EFF58, void **, 0x5FC) + 0x14;
        M2C_FIELD(temp_v0_2, s16 *, 4) = 0x3A;
        M2C_FIELD(temp_v0_2, s16 *, 2) = 0;
        M2C_FIELD(temp_v0_2, s16 *, 6) = 0x4A;
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5FC), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5FC), s32 *, 0x38) | 0x40);
    }
}
