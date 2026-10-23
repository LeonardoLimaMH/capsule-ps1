#include "common.h"

s32 SpuSetReverb(s32 arg0) {
    extern s32 D_8007152C[];
    extern s32 D_80071530[];
    extern s32 D_80071534[];
    extern void * D_80071598[];
    s16 var_v0;

    switch (arg0) {                                 /* irregular */
    case 0:
        (*D_8007152C) = 0;
        var_v0 = M2C_FIELD((*D_80071598), u16 *, 0x1AA) & 0xFF7F;
block_8:
        M2C_FIELD((*D_80071598), s16 *, 0x1AA) = var_v0;
        break;
    case 1:
        if (((*D_80071530) != arg0) && (_SpuIsInAllocateArea_((*D_80071534)) != 0)) {
            (*D_8007152C) = 0;
            var_v0 = M2C_FIELD((*D_80071598), u16 *, 0x1AA) & 0xFF7F;
        } else {
            (*D_8007152C) = arg0;
            var_v0 = M2C_FIELD((*D_80071598), u16 *, 0x1AA) | 0x80;
        }
        goto block_8;
    }
    return (*D_8007152C);
}
