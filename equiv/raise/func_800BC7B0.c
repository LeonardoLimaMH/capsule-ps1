#include "common.h"

void func_800BC7B0(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE44[];
    extern s32 D_800EEBA8[];
    extern M2C_UNK D_800EFF58[];
    extern M2C_UNK D_800F05C8[];
    if (arg0 == M2C_FIELD((*D_800EFF58), s32 *, 0x30C)) {
        func_8001F1A8(M2C_FIELD(arg0, s16 *, 0x46), (s16) (M2C_FIELD(arg0, u16 *, 0x4A) + 0x20), 0, 1, 0, (*D_800F05C8), 1, 0xF, 4);
    }
    if (arg0 == M2C_FIELD((*D_800EFF58), s32 *, 0x118)) {
        if (M2C_FIELD((*D_8008ED68), u8 *, 0x99A) != 0) {
            if ((u32) (M2C_FIELD((*D_8008ED68), u16 *, 0xDC) - 0x1D) >= 4U) {
                if (M2C_FIELD((*D_8008ED68), u16 *, 0xDC) == 0x30) {
                    if ((*D_800EEBA8) >= 0x15) {
                        if ((*D_800EEBA8) < 0x19) {
                            goto block_8;
                        }
                    }
                }
            } else {
block_8:
                func_800A0780(1);
                func_800A0618(1);
            }
        }
    }
    if ((u32) ((*D_8008EE44) - 0x1C) >= 5U) {
        if ((*D_8008EE44) == 0x30) {
            if ((*D_800EEBA8) >= 0x21) {
                goto block_12;
            }
        } else {
block_12:
            func_80013920(arg0);
        }
    }
}
