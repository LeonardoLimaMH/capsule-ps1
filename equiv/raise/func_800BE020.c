#include "common.h"

void func_800BE020(u32 arg0) {
    extern u8 D_800178F8[];
    extern u8 D_8008ED68[];
    extern void * D_800F0550[];
    extern void * D_800F0578[];
    extern int func_8009AEC8();
    extern int func_8009AF70();
    extern int func_800BB814();
    extern int func_800BC7B0();
    extern int func_800BD164();
    extern int func_800BDB68();
    u8 *var_a0;
    s32 var_s1;
    void *temp_v0;
    void *temp_v1;

    var_a0 = NULL;
    var_s1 = 3;
    switch (arg0) {
    case 0:
        var_a0 = &func_800BB814;
        break;
    case 1:
        var_a0 = &func_800BC7B0;
        break;
    case 2:
        var_a0 = &func_800BD164;
        break;
    case 3:
        var_a0 = &func_800BDB68;
        var_s1 = 8;
        break;
    case 4:
        var_a0 = &func_8009AEC8;
        break;
    case 5:
        var_a0 = &func_8009AF70;
        break;
    }
    temp_v0 = func_80015B3C(var_a0, D_800178F8, 0x1A);
    if (temp_v0 != NULL) {
        func_80015EF8(temp_v0);
        M2C_FIELD(temp_v0, s16 *, 0x46) = (s16) (0x2C - ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2));
        M2C_FIELD(temp_v0, s16 *, 0x4E) = 5;
        M2C_FIELD(temp_v0, s8 *, 0x58) = 0x80;
        M2C_FIELD(temp_v0, s8 *, 0x59) = 0x80;
        M2C_FIELD(temp_v0, s8 *, 0x5A) = 0x80;
        M2C_FIELD(temp_v0, s16 *, 0x14) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x38) | 0x40);
        temp_v1 = temp_v0 + 0x14;
        M2C_FIELD(temp_v0, s16 *, 0x4A) = (s16) (((var_s1 << 5) + 0xD8) - ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2));
        M2C_FIELD(temp_v1, s16 *, 4) = 0xF0;
        M2C_FIELD(temp_v1, s16 *, 6) = 0x10;
        M2C_FIELD(temp_v1, s16 *, 2) = 0;
        (*D_800F0550) = temp_v0;
        if (arg0 == 2) {
            (*D_800F0578) = temp_v0;
        }
    }
}
