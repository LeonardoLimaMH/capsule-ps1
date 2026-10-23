#include "common.h"

void func_80110F10(void *arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4) {
    extern s32 D_8013348C;
    extern s32 D_801334A0;
    s16 var_v0;

    M2C_FIELD(arg0, s32 *, 0) = (s32) (D_801334A0 + 0x12D44);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (D_801334A0 + 0x3AD44);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (D_801334A0 + 0x10044);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    if (D_8013348C & 1) {
        M2C_FIELD(arg0, s16 *, 0x10) = arg1;
        M2C_FIELD(arg0, s16 *, 0x12) = arg2;
        M2C_FIELD(arg0, s16 *, 0x14) = 0x1E0;
        M2C_FIELD(arg0, s16 *, 0x16) = 0xF0;
        M2C_FIELD(arg0, s16 *, 0x18) = arg3;
        M2C_FIELD(arg0, s16 *, 0x1A) = (s16) arg4;
        M2C_FIELD(arg0, s16 *, 0x1C) = 0x1E0;
        M2C_FIELD(arg0, s16 *, 0x1E) = 0xF0;
        M2C_FIELD(arg0, s16 *, 0x24) = arg1;
        M2C_FIELD(arg0, s16 *, 0x26) = arg2;
        var_v0 = 0x18;
    } else {
        M2C_FIELD(arg0, s16 *, 0x10) = arg1;
        M2C_FIELD(arg0, s16 *, 0x12) = arg2;
        M2C_FIELD(arg0, s16 *, 0x14) = 0x140;
        M2C_FIELD(arg0, s16 *, 0x16) = 0xF0;
        M2C_FIELD(arg0, s16 *, 0x18) = arg3;
        M2C_FIELD(arg0, s16 *, 0x1A) = (s16) arg4;
        M2C_FIELD(arg0, s16 *, 0x1C) = 0x140;
        M2C_FIELD(arg0, s16 *, 0x1E) = 0xF0;
        M2C_FIELD(arg0, s16 *, 0x24) = arg1;
        M2C_FIELD(arg0, s16 *, 0x26) = arg2;
        var_v0 = 0x10;
    }
    M2C_FIELD(arg0, s16 *, 0x28) = var_v0;
    M2C_FIELD(arg0, s16 *, 0x2A) = 0xF0;
}
