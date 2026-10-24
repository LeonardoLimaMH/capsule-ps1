#include "common.h"

void func_8002C610(void) {
    extern M2C_UNK D_80069AD4[];
    extern s32 D_80069C08[];
    switch (M2C_FIELD(D_80069AD4, s32 *, 0x130)) { /* irregular */
    case 0:
        break;
    case 1:
        M2C_FIELD(D_80069AD4, s16 *, 0x168) = (s16) ((s32) (M2C_FIELD(D_80069AD4, s16 *, 0x148) - M2C_FIELD(D_80069AD4, s16 *, 0xE8)) >> 5);
        M2C_FIELD(D_80069AD4, s16 *, 0x16A) = (s16) ((s32) (M2C_FIELD(D_80069AD4, s16 *, 0x14A) - M2C_FIELD(D_80069AD4, s16 *, 0xEA)) >> 5);
        M2C_FIELD(D_80069AD4, s16 *, 0x16C) = (s16) ((s32) (M2C_FIELD(D_80069AD4, s16 *, 0x14C) - M2C_FIELD(D_80069AD4, s16 *, 0xEC)) >> 5);
block_10:
    default:
        (*D_80069C08) = 0x20;
        break;
    case 2:
        M2C_FIELD(D_80069AD4, s32 *, 0x158) = (s32) ((s32) (M2C_FIELD(D_80069AD4, s32 *, 0x138) - M2C_FIELD(D_80069AD4, s32 *, 0xD8)) >> 5);
        M2C_FIELD(D_80069AD4, s32 *, 0x15C) = (s32) ((s32) (M2C_FIELD(D_80069AD4, s32 *, 0x13C) - M2C_FIELD(D_80069AD4, s32 *, 0xDC)) >> 5);
        M2C_FIELD(D_80069AD4, s32 *, 0x160) = (s32) ((s32) (M2C_FIELD(D_80069AD4, s32 *, 0x140) - M2C_FIELD(D_80069AD4, s32 *, 0xE0)) >> 5);
        goto block_10;
    case 3:
        M2C_FIELD(D_80069AD4, s16 *, 0x170) = (s16) ((s32) (M2C_FIELD(D_80069AD4, s16 *, 0x150) - M2C_FIELD(D_80069AD4, s16 *, 0xB0)) >> 5);
        M2C_FIELD(D_80069AD4, s16 *, 0x172) = (s16) ((s32) (M2C_FIELD(D_80069AD4, s16 *, 0x152) - M2C_FIELD(D_80069AD4, s16 *, 0xB2)) >> 5);
        M2C_FIELD(D_80069AD4, s16 *, 0x174) = (s16) ((s32) (M2C_FIELD(D_80069AD4, s16 *, 0x154) - M2C_FIELD(D_80069AD4, s16 *, 0xB4)) >> 5);
        goto block_10;
    }
}
