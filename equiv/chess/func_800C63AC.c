#include "common.h"

void func_800C63AC(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v1;
    u16 temp_a0;
    u32 temp_hi;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x3C);
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v1 = temp_v1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v1 = temp_v1 + 1;
    }
    temp_a0 = M2C_FIELD(arg0, u16 *, 0x7A);
    M2C_FIELD(arg0, s32 *, 0x3C) = var_v1;
    switch (temp_a0) {                              /* irregular */
    case 0:
        if ((u32) (var_v1 / 5) >= (u32) (M2C_FIELD(arg0, s32 *, 0x34) & 0x7F)) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
            return;
        }
        return;
    case 1:
        temp_hi = MULTU_HI(var_v1, 0xCCCCCCCD);
        M2C_FIELD(arg0, u16 *, 0x4A) = (u16) (M2C_FIELD(arg0, u16 *, 0x4A) - 3);
        temp_v1_2 = ((var_v1 / 5) + (M2C_FIELD(arg0, s32 *, 0x34) & 0x7F)) & 7;
        if (temp_v1_2 < 7) {
            M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60013, temp_v1_2 + 0x2B, temp_hi);
            return;
        }
        func_800185F8(arg0, temp_hi);
        break;
    }
}
