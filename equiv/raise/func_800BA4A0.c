#include "common.h"

void func_800BA4A0(void *arg0) {
    extern M2C_UNK D_80063940[];
    extern u16 D_8008EE44[];
    extern s32 D_800ED890[];
    void *temp_v0;

    if (((*D_8008EE44) != 0x26) || ((*D_800ED890) >= 2)) {
        temp_v0 = (M2C_FIELD(arg0, s32 *, 0x8C) * 0x3C) + D_80063940;
        if (((((M2C_FIELD(temp_v0, s32 *, 0x14) & 3) * 4) | ((u32) M2C_FIELD(temp_v0, u32 *, 0x10) >> 0x1E)) == 0) && (M2C_FIELD(arg0, s16 *, 0x4E) > 0)) {
            M2C_FIELD(arg0, s16 *, 0x52) = 0xCCC;
            M2C_FIELD(arg0, s16 *, 0x50) = 0xCC0;
            M2C_FIELD(arg0, s16 *, 0x52) = (s16) (0xCCC & 0xFFF0);
        }
    }
}
