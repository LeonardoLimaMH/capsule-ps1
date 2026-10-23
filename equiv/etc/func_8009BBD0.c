#include "common.h"

void func_8009BBD0(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE44[];
    extern M2C_UNK D_800AF0B4[];
    extern s32 D_800B3B20[];
    s32 temp_a0;
    s32 temp_v1;
    void *temp_v0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_a0;
    if ((*D_8008EE44) == 5) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_a0 & ~1);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) ((M2C_FIELD(arg0, s32 *, 0x30) & ~0x30) | 0x20);
        temp_v0 = ((s16) M2C_FIELD(arg0, u16 *, 0x80) * 0xC) + (*D_800AF0B4);
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) M2C_FIELD(temp_v0, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 0x6C) = (s32) M2C_FIELD(temp_v0, s32 *, 8);
        if ((*D_800B3B20) != 0) {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x84);
            if (temp_v1 != 0) {
                if (M2C_FIELD(arg0, s32 *, 0x88) == 0) {
                    M2C_FIELD(arg0, s32 *, 0x84) = (s32) (temp_v1 - 1);
                } else {
                    goto block_5;
                }
            } else {
block_5:
                M2C_FIELD(arg0, s32 *, 0x88) = 1;
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 8);
                M2C_FIELD(arg0, u32 *, 0x3C) = (u32) (M2C_FIELD(arg0, u32 *, 0x3C) + 1);
            }
        }
        if ((u16) M2C_FIELD((*D_8008ED68), u16 *, 0xE0) >= 3U) {
            M2C_FIELD(arg0, s32 *, 0x84) = (s32) (M2C_FIELD(arg0, s32 *, 0x84) + 1);
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) >= 0x3CU) {
            if ((u16) M2C_FIELD((*D_8008ED68), u16 *, 0xE0) >= 3U) {
                if (M2C_FIELD(arg0, s32 *, 0x84) < 0x21) {
                    goto block_11;
                }
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~8);
            } else {
block_11:
                M2C_FIELD(arg0, s16 *, 0x46) = 0;
                M2C_FIELD(arg0, s16 *, 0x4A) = 0xA0;
                M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
            }
        }
    }
}
