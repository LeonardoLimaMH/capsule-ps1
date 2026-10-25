#include "common.h"

void *func_800E3090(s32 arg0) {
    extern u16 D_80078C20[];
    extern u8 D_80091618[];
    extern s32 D_800EBFF4[];
    extern u8 D_800EE630[];
    extern int func_800161C4();
    extern int func_800B9F2C();
    extern int func_800BA1B4();
    u8 *var_a0;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_v0_2;
    u16 temp_s5;
    u16 var_s6;
    void *temp_v0;

    temp_s3 = func_800B1260() & 0xFFFF;
    temp_s5 = *(s32 *)((temp_s3 * 0x1A8) + D_80091618);
    if (arg0 != 1) {
        var_s6 = 1 - (*D_80078C20);
    } else {
        var_s6 = (*D_80078C20);
    }
    (*D_800EBFF4) = 3;
    if (arg0 == 1) {
        var_a0 = &func_800BA1B4;
    } else {
        var_a0 = &func_800B9F2C;
    }
    temp_v0 = func_80015B3C(var_a0, &func_800161C4, 0xB);
    if (temp_v0 != NULL) {
        func_80015EF8(temp_v0);
        temp_s1 = M2C_FIELD(D_800EE630, s32 *, 0);
        temp_v0_2 = func_80019F30(temp_s1 | 0x60000, M2C_FIELD(D_800EE630, s32 *, 0xC) + (*D_800EBFF4) + func_80020364(temp_s5 & 0xFF));
        if (temp_v0_2 == 0) {
            func_80013920(temp_v0);
            return NULL;
        }
        M2C_FIELD(temp_v0, s32 *, 0x18) = temp_v0_2;
        M2C_FIELD(temp_v0, s16 *, 0x66) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x1C) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x8C) = (s32) temp_s5;
        M2C_FIELD(temp_v0, s32 *, 0x30) = (s32) (((M2C_FIELD(temp_v0, s32 *, 0x30) & ~0x1C0) | 0x40) & ~0x30 & ~8);
        M2C_FIELD(temp_v0, s32 *, 0x34) = (s32) ((((((M2C_FIELD(temp_v0, s32 *, 0x34) & ~0x100) | ((var_s6 & 1) << 8)) & ~0x200) | ((arg0 & 1) << 9)) & ~0xC00) | ((temp_s3 & 3) << 0xA));
        M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0x38) | 1) & ~8 & ~0x30 & ~0x40);
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return temp_v0;
    }
    return temp_v0;
}
