#include "common.h"

void func_800A3570(void *arg0) {
    extern u16 D_8008EE44[];
    extern s16 D_800B3B40[];
    if ((*D_8008EE44) == 0x11) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        if (M2C_FIELD(arg0, s32 *, 0x80) == (*D_800B3B40)) {
            M2C_FIELD(arg0, s8 *, 0x5A) = 0x80;
            M2C_FIELD(arg0, s8 *, 0x59) = 0x80;
            M2C_FIELD(arg0, s8 *, 0x58) = 0x80;
            if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
                M2C_FIELD(arg0, s32 *, 0x18) = 0;
                func_80015CD0(arg0 + 0x14, func_80019F30(0x70010, 8 - M2C_FIELD(arg0, s32 *, 0x80)), 0);
            }
        } else {
            M2C_FIELD(arg0, s8 *, 0x5A) = 0x50;
            M2C_FIELD(arg0, s8 *, 0x59) = 0x50;
            M2C_FIELD(arg0, s8 *, 0x58) = 0x50;
            M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60010, M2C_FIELD(arg0, s32 *, 0x7C));
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
    }
}
