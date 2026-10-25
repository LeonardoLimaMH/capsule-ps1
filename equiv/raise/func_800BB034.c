#include "common.h"

void func_800BB034(s32 arg0) {
    extern u8 D_800178F8[];
    extern u8 D_8008ED68[];
    extern u8 D_800EFF58[];
    extern int func_800BB814();
    s16 var_v0;
    s16 var_v0_2;
    s32 temp_v1;
    void *temp_a0;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1_2;

    temp_v0 = func_80015B3C(&func_800BB814, D_800178F8, 0x1A);
    temp_s0 = (arg0 * 4) + D_800EFF58;
    M2C_FIELD(temp_s0, void **, 0x600) = temp_v0;
    if (temp_v0 != NULL) {
        func_80015EF8(temp_v0);
        temp_v1 = ((arg0 * 0x60) + 0x10) - ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2);
        var_v0 = temp_v1 - 0x180;
        if (arg0 == 0) {
            var_v0 = temp_v1 - 0x184;
        }
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x600), s16 *, 0x46) = var_v0;
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x600), s16 *, 0x4A) = (s16) (0x38 - ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2));
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x600), s16 *, 0x4E) = 5;
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x600), s8 *, 0x58) = 0x80;
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x600), s8 *, 0x59) = 0x80;
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x600), s8 *, 0x5A) = 0x80;
        temp_v0_2 = M2C_FIELD(temp_s0, void **, 0x600);
        temp_v1_2 = temp_v0_2 + 0x14;
        M2C_FIELD(temp_v0_2, s16 *, 0x14) = 0;
        M2C_FIELD(temp_v1_2, s16 *, 2) = 0;
        if (arg0 == 0) {
            var_v0_2 = 0x64;
        } else {
            var_v0_2 = 0x60;
        }
        M2C_FIELD(temp_v1_2, s16 *, 4) = var_v0_2;
        M2C_FIELD(temp_v1_2, s16 *, 6) = 0x70;
        temp_a0 = M2C_FIELD(((arg0 * 4) + D_800EFF58), void **, 0x600);
        M2C_FIELD(temp_a0, s32 *, 0x38) = (s32) ((M2C_FIELD(temp_a0, s32 *, 0x38) & ~0x40) | ((arg0 != 1) << 6));
    }
}
