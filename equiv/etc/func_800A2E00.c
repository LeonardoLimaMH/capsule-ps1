#include "common.h"

void func_800A2E00(void *arg0) {
    extern u16 D_8008EE44[];
    extern M2C_UNK D_800B3B38[];
    if ((*D_8008EE44) == 6) {
        if (M2C_FIELD((*D_800B3B38), s16 *, 0) != 0) {
            M2C_FIELD(arg0, s8 *, 0x5A) = 0x50;
            M2C_FIELD(arg0, s8 *, 0x59) = 0x50;
            M2C_FIELD(arg0, s8 *, 0x58) = 0x50;
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            goto block_7;
        }
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        if (M2C_FIELD(arg0, s32 *, 0x80) == M2C_FIELD((*D_800B3B38), s16 *, 8)) {
            M2C_FIELD(arg0, s8 *, 0x5A) = 0x80;
            M2C_FIELD(arg0, s8 *, 0x59) = 0x80;
            M2C_FIELD(arg0, s8 *, 0x58) = 0x80;
            if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
                M2C_FIELD(arg0, s32 *, 0x18) = 0;
                func_80015CD0(arg0 + 0x14, func_80019F30(0x70010, M2C_FIELD(arg0, s32 *, 0x80) + 9), 0);
            }
        } else {
            M2C_FIELD(arg0, s8 *, 0x5A) = 0x50;
            M2C_FIELD(arg0, s8 *, 0x59) = 0x50;
            M2C_FIELD(arg0, s8 *, 0x58) = 0x50;
block_7:
            M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60010, M2C_FIELD(arg0, s32 *, 0x7C));
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
    }
}
