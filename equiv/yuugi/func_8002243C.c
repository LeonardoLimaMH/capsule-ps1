#include "common.h"

s32 func_8002243C(void *arg0) {
    extern u8 D_80063894[];
    extern u8 D_80078BF8[];
    extern s32 D_80078D0C;
    extern u8 D_8008ED68[];
    extern int func_800161C4();
    extern int func_800214B0();
    s32 var_s2;
    u16 temp_a0;
    u16 temp_a1_3;
    u16 temp_v1_2;
    u16 var_v0;
    u16 var_v0_2;
    u8 temp_a1;
    u8 temp_s0;
    u8 temp_v1;
    void *temp_a0_2;
    void *temp_a1_2;
    void *temp_v0;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x10);
    var_s2 = 0;
    switch (temp_v1) {
    case 0:
        temp_a1 = *(M2C_FIELD(arg0, u8 *, 0xBF9) + D_80078BF8);
        D_80078D0C = (s32) temp_a1;
        func_8009C178(arg0, temp_a1);
        M2C_FIELD(arg0, u16 *, 0x1E) = 0x20U;
        temp_v0 = func_80015B3C(&func_800214B0, &func_800161C4, 4);
        func_80015EF8(temp_v0);
        M2C_FIELD(temp_v0, s16 *, 0x46) = -0xA0;
        M2C_FIELD(temp_v0, s16 *, 0x4E) = 3;
        M2C_FIELD(temp_v0, s32 *, 0x30) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0x30) & ~0x1C0) | 0x40);
        M2C_FIELD(temp_v0, s32 *, 0x18) = func_80019F30(0x60013, M2C_FIELD(((D_80078D0C * 2) + D_80063894), u16 *, 0x10));
        M2C_FIELD(temp_v0, s16 *, 0x28) = (s16) (0x240 - (D_80078D0C << 5));
        M2C_FIELD(temp_v0, s16 *, 0x2A) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x7C) = (s32) D_80078D0C;
        M2C_FIELD(temp_v0, s32 *, 0x34) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x34) | 0x80);
        M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x38) | 1);
block_15:
block_16:
        M2C_FIELD(arg0, u8 *, 0x10) = (u8) (M2C_FIELD(arg0, u8 *, 0x10) + 1);
        break;
    case 1:
        temp_a1_2 = arg0 + 0x10;
        temp_a0 = M2C_FIELD(temp_a1_2, u16 *, 0xE);
        M2C_FIELD(temp_a1_2, s8 *, 2) = 1;
        M2C_FIELD(temp_a1_2, s16 *, 0xC) = (s16) (temp_a0 * 3);
        if (temp_a0 != 0) {
            if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                var_v0 = temp_a0 - M2C_FIELD(D_8008ED68, u8 *, 0x103);
            } else {
                var_v0 = temp_a0 - 1;
            }
            M2C_FIELD(temp_a1_2, u16 *, 0xE) = var_v0;
        } else {
            goto block_15;
        }
        break;
    case 2:
        func_8001E388();
        temp_s0 = M2C_FIELD(arg0, u8 *, 0xBF9);
        M2C_FIELD(arg0, u8 *, 0xBF9) = (u8) (temp_s0 + 1);
        M2C_FIELD(arg0, u8 *, 0xBF9) = (u8) (M2C_FIELD(arg0, u8 *, 0xBF9) & 7);
        M2C_FIELD(arg0, s32 *, 0x20) = func_8001E284();
        func_8001E2BC(M2C_FIELD(arg0, s32 *, 0x20), func_800A03F0(0x18, temp_s0 & 0xFF, 0), -0x50, 0x38, 0, 2);
        M2C_FIELD(arg0, u16 *, 0x1E) = 0U;
        goto block_16;
    case 3:
        func_80021EA8(arg0, 1, M2C_FIELD(arg0, u8 *, 0xBCA), 0);
        break;
    case 4:
        temp_a0_2 = arg0 + 0x10;
        temp_a1_3 = M2C_FIELD(temp_a0_2, u16 *, 0xE);
        M2C_FIELD(temp_a0_2, s8 *, 2) = 1;
        M2C_FIELD(temp_a0_2, s16 *, 0xC) = (s16) (temp_a1_3 * 3);
        if (((temp_a1_3 < 0x20U) ^ 1) == 0) {
            temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x1E);
            if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                var_v0_2 = temp_v1_2 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
            } else {
                var_v0_2 = temp_v1_2 + 1;
            }
            M2C_FIELD(arg0, u16 *, 0x1E) = var_v0_2;
        } else {
            goto block_15;
        }
        break;
    case 5:
        var_s2 = 1;
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        M2C_FIELD(arg0, u8 *, 0x12) = 0U;
        break;
    }
    if (M2C_FIELD(arg0, u8 *, 0x12) != 0) {
        func_800158C4(M2C_FIELD(arg0, s16 *, 0x1C));
    }
    return var_s2;
}
