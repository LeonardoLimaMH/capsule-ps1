#include "common.h"

s32 func_8002475C(void *arg0, s32 arg1) {
    extern u16 D_8006AF80[];
    extern s16 D_80078C20[];
    extern s16 D_80078C24;
    extern s16 D_80078C28;
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern M2C_UNK D_80091618[];
    extern s32 D_800EEB70[];
    if ((*D_80085428) == 0) {
        if (arg1 != 0) {
            if (arg1 == 1) {
                if ((D_80078C24 != arg1) || (D_80078C28 != 0)) {
                    if (M2C_FIELD(arg0, u16 *, 0x4E) != 0) {
                        if (M2C_FIELD((((*D_8006AF80) * 0x1A8) + (*D_80091618)), u16 *, 0x8A) == 0xFFFF) {
                            if (M2C_FIELD(arg0, s16 *, 0x4C) != (*D_80078C20)) {
                                goto block_17;
                            }
                            goto block_14;
                        }
                        goto block_15;
                    }
                    goto block_14;
                }
                goto block_17;
            }
            goto block_15;
        }
        if ((D_80078C24 != 1) || (D_80078C28 != 0)) {
            if (M2C_FIELD((((*D_8006AF80) * 0x1A8) + (*D_80091618)), u16 *, 0x8A) == 0xFFFF) {
                if (((*D_800EEB70) != 2) && ((*D_800EEB70) != 0)) {
block_14:
                    goto block_15;
                }
                goto block_17;
            }
block_15:
            if ((u16) (*D_8008EE44) >= 0x41U) {
                goto block_16;
            }
            /* Duplicate return node #19. Try simplifying control flow for better match */
            return 0;
        }
block_16:
block_17:
        func_80013920(arg0, arg0);
        return 1;
    }
    return 0;
}
