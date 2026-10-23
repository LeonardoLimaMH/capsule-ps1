#include "common.h"

void func_800C4C18(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    u16 sp10;
    u16 sp12;
    u16 sp14;
    s32 temp_lo;
    u16 temp_v1_2;
    u32 temp_v1;
    u32 var_a0;

    temp_v1 = M2C_FIELD(arg0, u32 *, 0x3C);
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_a0 = temp_v1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_a0 = temp_v1 + 1;
    }
    temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x7A);
    M2C_FIELD(arg0, u32 *, 0x3C) = var_a0;
    switch (temp_v1_2) {                            /* irregular */
    case 0:
        M2C_FIELD(arg0, u16 *, 0x7A) = 1U;
    default:
block_13:
        if (!(M2C_FIELD(arg0, s32 *, 0x38) & 1)) {
            sp10 = M2C_FIELD(arg0, u16 *, 0x84);
            sp12 = M2C_FIELD(arg0, u16 *, 0x88);
            sp14 = M2C_FIELD(arg0, u16 *, 0x8C);
            M2C_FIELD(arg0, s16 *, 0x4E) = (s16) (func_800CD950(&sp10, arg0) - 1);
            temp_lo = 0x140000 / (s16) M2C_FIELD(arg0, s16 *, 0x4E);
            M2C_FIELD(arg0, u16 *, 0x46) = (u16) (M2C_FIELD(arg0, u16 *, 0x46) - ((s32) (M2C_FIELD(D_8008ED68, u32 *, 0x108) + ((u32) M2C_FIELD(D_8008ED68, u32 *, 0x108) >> 0x1F)) >> 1));
            M2C_FIELD(arg0, u16 *, 0x4A) = (u16) (M2C_FIELD(arg0, u16 *, 0x4A) - ((s32) (M2C_FIELD(D_8008ED68, u32 *, 0x10C) + ((u32) M2C_FIELD(D_8008ED68, u32 *, 0x10C) >> 0x1F)) >> 1));
            M2C_FIELD(arg0, s16 *, 0x52) = (s16) temp_lo;
            M2C_FIELD(arg0, s16 *, 0x50) = (s16) temp_lo;
        }
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
        goto block_13;
    case 2:
        if (var_a0 >= 0x65U) {
            func_800185F8(arg0, 1);
            return;
        }
        goto block_13;
    }
}
