#include "common.h"

void func_80033450(void *arg0) {
    extern u8 D_800859F3[];
    extern u16 D_8008EE58[];
    u32 temp_a1;
    u32 temp_v1;

    if (((*D_800859F3) != 4) && ((u32) ((*D_8008EE58) - 4) < 4U)) {
        temp_a1 = M2C_FIELD(arg0, u32 *, 0x38);
        if (((temp_a1 >> 3) & 1) == 1) {
            M2C_FIELD(arg0, u32 *, 0x38) = (u32) (temp_a1 & ~8);
        }
    } else {
        temp_v1 = M2C_FIELD(arg0, u32 *, 0x38);
        if (!((temp_v1 >> 3) & 1)) {
            M2C_FIELD(arg0, u32 *, 0x38) = (u32) (temp_v1 | 8);
        }
        if ((M2C_FIELD(arg0, s16 *, 0x46) + 0x40) < -0xA0) {
            M2C_FIELD(arg0, s16 *, 0x46) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x46) + 0x180);
        }
        if (M2C_FIELD(arg0, s16 *, 0x4A) >= 0x79) {
            M2C_FIELD(arg0, s16 *, 0x46) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x46) - 0x40);
            M2C_FIELD(arg0, s16 *, 0x4A) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x4A) - 0x140);
        }
    }
}
