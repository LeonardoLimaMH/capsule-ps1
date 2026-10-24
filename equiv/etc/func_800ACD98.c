#include "common.h"

void func_800ACD98(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE48[];
    extern u8 D_800B3D20[];
    if (M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 5) {
        M2C_FIELD(arg0, s16 *, 0x46) = -0x68;
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        if ((M2C_FIELD(D_8008ED68, u16 *, 0xE0) == M2C_FIELD(D_8008ED68, u16 *, 0xDC)) && ((*D_800B3D20) == 0)) {
            M2C_FIELD(arg0, u16 *, 0x50) = (u16) (M2C_FIELD(arg0, u16 *, 0x50) + M2C_FIELD(arg0, u16 *, 0x74));
            M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) + M2C_FIELD(arg0, u16 *, 0x76));
            if ((s16) M2C_FIELD(arg0, u16 *, 0x50) >= 0x1000) {
                M2C_FIELD(arg0, u16 *, 0x52) = 0x1000U;
                M2C_FIELD(arg0, u16 *, 0x50) = 0x1000U;
                (*D_800B3D20) = 1;
            }
        } else if (((*D_8008EE48) == 6) && ((*D_800B3D20) == 0)) {
            M2C_FIELD(arg0, u16 *, 0x50) = (u16) (M2C_FIELD(arg0, u16 *, 0x50) - M2C_FIELD(arg0, u16 *, 0x74));
            M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) - M2C_FIELD(arg0, u16 *, 0x76));
            if ((s16) M2C_FIELD(arg0, u16 *, 0x50) <= 0) {
                M2C_FIELD(arg0, u16 *, 0x52) = 0U;
                M2C_FIELD(arg0, u16 *, 0x50) = 0U;
                (*D_800B3D20) = 1;
            }
        } else if ((u16) (*D_8008EE48) < 5U) {
            M2C_FIELD(arg0, u16 *, 0x52) = 0U;
            M2C_FIELD(arg0, u16 *, 0x50) = 0U;
            goto block_13;
        }
    } else if ((u16) M2C_FIELD(D_8008ED68, u16 *, 0xDC) < 7U) {
block_13:
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
    }
}
