#include "common.h"

void func_800A81D8(s32 arg0, void *arg1, s32 arg2, s32 arg3) {
    extern u8 D_80100BC4[];
    u16 var_v0;
    u8 temp_v1;

    M2C_FIELD(arg1, u16 *, 0x28) = (u16) (0x280 - M2C_FIELD(D_80100BC4, u16 *, 0));
    M2C_FIELD(arg1, s16 *, 0x2A) = (s16) ((arg2 << 7) - M2C_FIELD(D_80100BC4, u16 *, 2));
    temp_v1 = M2C_FIELD((arg0 + ((arg2 * 0x2E8) + 0x5E8) + (arg3 * 0x7C)), u8 *, 0x26);
    switch (temp_v1) {
    case 4:
        break;
    case 0:
        var_v0 = M2C_FIELD(arg1, u16 *, 0x28) - 0x40;
block_6:
        M2C_FIELD(arg1, u16 *, 0x28) = var_v0;
        break;
    case 1:
        var_v0 = M2C_FIELD(arg1, u16 *, 0x28) - 0x80;
        goto block_6;
    case 2:
        var_v0 = M2C_FIELD(arg1, u16 *, 0x28) - 0xC0;
        goto block_6;
    case 3:
        var_v0 = M2C_FIELD(arg1, u16 *, 0x28) - 0xC0 + (arg3 << 5);
        goto block_6;
    }
}
