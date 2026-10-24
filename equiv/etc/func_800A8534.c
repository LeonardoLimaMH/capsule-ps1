#include "common.h"

void func_800A8534(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern s8 D_800B3C29[];
    if ((u32) (M2C_FIELD(D_8008ED68, u16 *, 0xDC) - 6) < 2U) {
        if (M2C_FIELD(D_8008ED68, u16 *, 0xE0) == 0) {
            if (M2C_FIELD(arg0, s16 *, 0x50) > 0) {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
                M2C_FIELD(arg0, s16 *, 0x50) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x50) - M2C_FIELD(arg0, u16 *, 0x74));
                M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) - M2C_FIELD(arg0, u16 *, 0x76));
                if (M2C_FIELD(arg0, s16 *, 0x50) <= 0) {
                    M2C_FIELD(arg0, u16 *, 0x52) = 0U;
                    M2C_FIELD(arg0, s16 *, 0x50) = 0;
                }
            } else {
                goto block_6;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            if (M2C_FIELD(arg0, s16 *, 0x50) >= 0x1000) {
block_6:
                (*D_800B3C29) = 1;
                return;
            }
            M2C_FIELD(arg0, s16 *, 0x50) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x50) + M2C_FIELD(arg0, u16 *, 0x74));
            M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) + M2C_FIELD(arg0, u16 *, 0x76));
            if (M2C_FIELD(arg0, s16 *, 0x50) >= 0x1000) {
                M2C_FIELD(arg0, u16 *, 0x52) = 0x1000U;
                M2C_FIELD(arg0, s16 *, 0x50) = 0x1000;
            }
        }
    } else {
        M2C_FIELD(arg0, u16 *, 0x52) = 0U;
        M2C_FIELD(arg0, s16 *, 0x50) = 0;
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
    }
}
