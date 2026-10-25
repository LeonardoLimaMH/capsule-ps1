#include "common.h"

s32 func_800F2F2C(void *arg2) {
    extern u8 D_80018600[];
    extern u8 D_8008ED68[];
    extern u8 D_80119710[];
    extern s32 D_80119714[];
    extern int func_800F865C();
    s16 temp_a1;
    s32 var_v0;
    void *temp_v0;

    if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 1) {
        if ((s32) M2C_FIELD(D_8008ED68, u16 *, 0xEC) < 2) {
            if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 0) {
                return 0;
            }
            temp_v0 = func_80015B3C(D_80018600, &func_800F865C, 1);
            M2C_FIELD(temp_v0, s16 *, 0x28) = (s16) ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2);
            M2C_FIELD(temp_v0, s8 *, 0x2C) = 0xFF;
            M2C_FIELD(temp_v0, s8 *, 0x2D) = 0x64;
            M2C_FIELD(temp_v0, s8 *, 0x2E) = 0x64;
            M2C_FIELD(temp_v0, s8 *, 0x30) = 0x32;
            M2C_FIELD(temp_v0, s16 *, 0x32) = 0x3C;
            temp_a1 = ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2) - 5;
            M2C_FIELD(temp_v0, s16 *, 0x2A) = temp_a1;
            (*D_80119714) = 0;
            M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
            func_800374E8(0x8012, temp_a1);
            goto block_7;
        }
        if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 2) {
            return 0;
        }
        goto block_9;
    }
block_7:
    if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x32) {
        M2C_FIELD(arg2, s8 *, 0x17) = 0x87;
        M2C_FIELD(arg2, s8 *, 0x23) = 1;
        M2C_FIELD(D_80119710, s32 *, 4) = 0;
        M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
        func_80034AB0(0x8012, D_80119710);
block_9:
        var_v0 = 1;
        if ((*D_80119714) < 0x3C) {
            goto block_10;
        }
    } else {
block_10:
        var_v0 = 0;
    }
    return var_v0;
}
