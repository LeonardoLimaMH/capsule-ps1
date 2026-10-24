#include "common.h"

void func_800A03D4(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_800B2998[];
    extern M2C_UNK D_800B29B0[];
    extern M2C_UNK D_800B3B38[];
    extern u16 D_800B3B3C[];
    extern s16 D_800B3B40[];
    extern s32 D_800B3C08[];
    M2C_UNK var_a0;
    s16 temp_v1;
    s16 var_v0;
    s32 temp_v0_2;
    u16 temp_v0;

    switch (M2C_FIELD(D_8008ED68, u16 *, 0xE0)) {  /* irregular */
    case 0:
        func_8001F1A8(-0x50, 0x50, 0, 1, 0, D_800B2998, 1, 0xB, 2);
        if ((M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x20) || (M2C_FIELD(D_8008ED68, s32 *, 0x98) & 0x20)) {
            var_a0 = 0x48;
block_21:
            func_80034AB0(var_a0);
            func_80012578();
            return;
        }
        if ((M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x40) || (M2C_FIELD(D_8008ED68, s32 *, 0x98) & 0x40)) {
            func_80034AB0(0x5D);
            (*D_800B3B40) = (s16) M2C_FIELD(arg0, u8 *, 0x5D9);
            func_80012544(0x10);
            return;
        }
        return;
    case 1:
        func_8001F1A8(-0x50, 0x50, 1, 1, 0, D_800B29B0, (s32) M2C_FIELD(D_8008ED68, u16 *, 0xE0), 0xB, 2);
        func_80034AB0(0x57);
        temp_v0 = M2C_FIELD(D_800B3B38, u16 *, 4) + 1;
        M2C_FIELD(D_800B3B38, u16 *, 4) = temp_v0;
        if ((s16) temp_v0 >= 4) {
            M2C_FIELD(D_800B3B38, u16 *, 4) = 0U;
        }
        if ((M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x20) || (M2C_FIELD(D_8008ED68, s32 *, 0x98) & 0x20)) {
            temp_v1 = M2C_FIELD(D_800B3B38, u16 *, 4) + (rand() % 3);
            var_v0 = temp_v1;
            M2C_FIELD(D_800B3B38, u16 *, 4) = (u16) temp_v1;
            if (temp_v1 < 0) {
                var_v0 = temp_v1 + 3;
            }
            M2C_FIELD(D_800B3B38, u16 *, 4) = (u16) (temp_v1 - ((var_v0 >> 2) * 4));
            func_80012578(temp_v1);
            return;
        }
        break;
    case 2:
        var_a0 = 0x13;
        M2C_FIELD(arg0, s8 *, 0x5DA) = (s8) ((s16) (*D_800B3B3C) - (((s32) ((s16) (*D_800B3B3C) + ((u32) ((*D_800B3B3C) << 0x10) >> 0x1F)) >> 1) * 2));
        (*D_800B3C08) = 0x3C;
        goto block_21;
    case 3:
        temp_v0_2 = (*D_800B3C08) - 1;
        (*D_800B3C08) = temp_v0_2;
        if (temp_v0_2 < 0) {
            M2C_FIELD(D_800B3B38, u16 *, 4) = 0U;
            M2C_FIELD(D_800B3B38, s16 *, 8) = 0;
            func_80012544(0x12);
            func_800125AC(2);
        }
        break;
    }
}
