#include "common.h"

void func_800A8810(void *arg0) {
    extern u16 D_8008EE44[];
    extern M2C_UNK D_80091618[];
    extern s32 D_800B3C20[];
    extern u8 D_800B3C2A[];
    extern M2C_UNK D_800B3C38[];
    s32 temp_a1;
    s32 temp_a2;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_a1;
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x84);
    if (((*D_8008EE44) == 7) && (M2C_FIELD((((*D_800B3C20) * 0x1A8) + (u8 *)D_80091618), u16 *, 0x10) != 0xFFFF)) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_a1 & ~1);
        if ((*D_800B3C2A) != 0) {
            func_80015CD0(arg0 + 0x14, func_80019F30(0x7000C, *(s16 *)((temp_a2 * 2) + (u8 *)D_800B3C38) + 4, temp_a2), 0);
        }
    }
}
