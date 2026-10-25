#include "common.h"

void *func_800B6D98(s32 arg0, s32 arg1, s32 arg2, s16 arg3, u16 arg4, void *arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, u16 arg10, s16 arg11) {
    extern s16 D_80078C20[];
    extern u8 D_8008ED68[];
    extern int func_800161C4();
    extern int func_800B6310();
    extern int func_800B6624();
    extern int func_800B6C48();
    u8 *var_a0;
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    void *temp_v0;

    if (arg11 != 0) {
        if (arg11 != 2) {
            var_a0 = &func_800B6310;
        } else {
            var_a0 = &func_800B6C48;
        }
    } else {
        var_a0 = &func_800B6624;
    }
    temp_v0 = func_80015B3C(var_a0, &func_800161C4, arg0);
    if (temp_v0 != NULL) {
        func_80015EF8(temp_v0);
        if (arg7 == 0) {
            temp_s2 = M2C_FIELD(arg5, s32 *, 0x18) + arg6;
            temp_v0_2 = func_80019F30(M2C_FIELD(arg5, s32 *, 0) | 0x70000, temp_s2);
            func_80015CD0(temp_v0 + 0x14, temp_v0_2, 0);
            M2C_FIELD(temp_v0, s32 *, 0x1C) = temp_v0_2;
            M2C_FIELD(temp_v0, s32 *, 0x7C) = temp_s2;
            M2C_FIELD(temp_v0, s32 *, 0x80) = temp_v0_2;
        } else {
            temp_v0_3 = func_80019F30(M2C_FIELD(arg5, s32 *, 0) | 0x60000, M2C_FIELD(arg5, s32 *, 0xC) + arg6);
            M2C_FIELD(temp_v0, s32 *, 0x1C) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x18) = temp_v0_3;
        }
        M2C_FIELD(temp_v0, u16 *, 0x66) = arg4;
        M2C_FIELD(temp_v0, s32 *, 0x30) = (s32) (((M2C_FIELD(temp_v0, s32 *, 0x30) & ~0x1C0 & ~0x30) | ((arg10 & 3) * 0x10)) & ~8);
        M2C_FIELD(temp_v0, s16 *, 0x46) = (s16) (arg1 - ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2));
        M2C_FIELD(temp_v0, s16 *, 0x4E) = arg3;
        M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) ((((M2C_FIELD(temp_v0, s32 *, 0x38) & ~1) | (arg8 & 1)) & ~0x30 & ~0x40) | ((arg9 & 1) << 6));
        M2C_FIELD(temp_v0, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0x34) & ~0x100) | (((*D_80078C20) & 1) << 8));
        M2C_FIELD(temp_v0, s16 *, 0x4A) = (s16) (arg2 - ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2));
    }
    return temp_v0;
}
