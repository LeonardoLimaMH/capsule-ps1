#include "common.h"

s32 func_800B3714(void *arg1, void *arg2) {
    extern M2C_UNK D_80069AD4[];
    extern u16 D_8008EE54[];
    extern M2C_UNK D_801010B0[];
    s32 var_v0;
    u32 *temp_a1;
    u8 temp_a0;

    switch ((*D_8008EE54)) {                           /* irregular */
    case 0:
        M2C_FIELD(arg1, s8 *, 0x7A4) = 0;
        M2C_FIELD(arg1, s32 *, 0x78C) = (s32) M2C_FIELD(D_80069AD4, s32 *, 0x44);
        M2C_FIELD(arg1, s32 *, 0x790) = (s32) M2C_FIELD(D_80069AD4, s32 *, 0x48);
        M2C_FIELD(arg1, s32 *, 0x794) = (s32) M2C_FIELD(D_80069AD4, s32 *, 0x4C);
        M2C_FIELD(arg1, s32 *, 0x77C) = (s32) -(((M2C_FIELD(arg2, u8 *, 0x15) * 2) - 0xB) * 0x32);
        temp_a0 = M2C_FIELD(arg2, u8 *, 0x15);
        temp_a1 = (M2C_FIELD(arg2, u8 *, 0x16) * 4) + ((temp_a0 * 0x34) + *((M2C_FIELD(arg1, u8 *, 9) * 0x34) + D_801010B0));
        M2C_FIELD(arg1, s32 *, 0x780) = (s32) ((((u32) *temp_a1 >> 0x13) & 7) * 0x32);
        M2C_FIELD(arg1, s32 *, 0x784) = (s32) -(((M2C_FIELD(arg2, u8 *, 0x16) * 2) - 0xB) * 0x32);
        func_80012668(temp_a0, temp_a1, arg1);
        return 0;
    case 1:
        var_v0 = 0;
        if (func_800B2F48(0, arg1) != 0) {
            var_v0 = 1;
        }
        return var_v0;
    default:
        return 0;
    }
}
