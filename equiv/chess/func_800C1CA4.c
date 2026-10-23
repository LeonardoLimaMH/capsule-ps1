#include "common.h"

void func_800C1CA4(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_801010B0[];
    extern u8 D_801187F8[];
    s32 temp_t0;
    s32 var_a1;
    u16 temp_a0;
    u8 *temp_v1;
    u8 temp_a2;
    u8 temp_a3;
    u8 temp_t1;
    u8 temp_v0;
    u8 temp_v1_2;
    u8 var_v0;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_s1;
    void *var_a0;

    temp_s1 = D_80085428 + 0x5D0;
    temp_a2 = M2C_FIELD(temp_s1, u8 *, 0x5FA);
    temp_t1 = M2C_FIELD(temp_s1, u8 *, 0x712);
    temp_a3 = M2C_FIELD(temp_s1, u8 *, 0x713);
    temp_s0 = (temp_t1 * 0x2E8) + 0x18 + temp_s1 + (temp_a3 * 0x7C);
    temp_a0 = M2C_FIELD(arg0, u16 *, 0x7A);
    temp_t0 = *((M2C_FIELD(temp_s1, u8 *, 9) * 0x34) + D_801010B0);
    switch (temp_a0) {                              /* irregular */
    default:
        var_a1 = 0;
        if (temp_a0 != 3) {
            return;
        }
        M2C_FIELD(temp_s0, s32 *, 0x18) = 0;
        M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x16) * 4) + ((M2C_FIELD(temp_s0, u8 *, 0x15) * 0x34) + temp_t0)), s8 *, 3) = 0;
        var_a0 = temp_s1;
        do {
            M2C_FIELD((temp_s0 + var_a1), u8 *, 0x15) = (u8) M2C_FIELD(var_a0, u8 *, 0x6E4);
            temp_v1 = (temp_a2 * 2) + temp_s1 + 0x601 + var_a1;
            var_a1 += 1;
            *temp_v1 = M2C_FIELD(var_a0, u8 *, 0x6E4);
            var_a0 = temp_s1 + var_a1;
        } while (var_a1 < 2);
        M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x16) * 4) + ((M2C_FIELD(temp_s0, u8 *, 0x15) * 0x34) + temp_t0)), s8 *, 3) = (s8) ((temp_a3 + 1) & 0x7F);
        if (temp_t1 != 0) {
            temp_a0_2 = (M2C_FIELD(temp_s0, u8 *, 0x16) * 4) + ((M2C_FIELD(temp_s0, u8 *, 0x15) * 0x34) + temp_t0);
            M2C_FIELD(temp_a0_2, u8 *, 3) = (u8) (M2C_FIELD(temp_a0_2, u8 *, 3) | 0x80);
        }
block_20:
        func_800185F8(arg0);
        return;
    case 0:
        temp_v0 = func_800D8EB4(((temp_a2 << 7) | (M2C_FIELD((temp_a2 + temp_s1), u8 *, 0x5FB) + 1)) & 0xFF, ((temp_t1 << 7) | (temp_a3 + 1)) & 0xFF, temp_a2, temp_a3);
        (*D_801187F8) = temp_v0;
        if ((temp_v0 & 0xFF) != 0xFF) {
            M2C_FIELD(arg0, s32 *, 0x3C) = 0;
block_15:
            M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
            return;
        }
        goto block_20;
    case 1:
        func_8001A998(D_80085428 + 0xCB0, 0x2B, temp_a2, temp_a3);
        M2C_FIELD(temp_s1, s8 *, 0x6E4) = (s8) ((*D_801187F8) / 13);
        M2C_FIELD(temp_s1, s8 *, 0x6E5) = (s8) ((*D_801187F8) % 13);
        M2C_FIELD(temp_s1, u8 *, 0x6E6) = (u8) M2C_FIELD(temp_s0, u8 *, 0x15);
        M2C_FIELD(temp_s1, u8 *, 0x709) = 8U;
        M2C_FIELD(temp_s1, s8 *, 0x708) = 8;
        M2C_FIELD(temp_s1, u8 *, 0x6E7) = (u8) M2C_FIELD(temp_s0, u8 *, 0x16);
        M2C_FIELD(temp_s0, s32 *, 0x18) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x18) | 0x40);
        func_80034AB0(0x800A);
block_14:
        goto block_15;
    case 2:
        temp_v1_2 = M2C_FIELD(temp_s1, u8 *, 0x709);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0 = temp_v1_2 - M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0 = temp_v1_2 - 1;
        }
        M2C_FIELD(temp_s1, u8 *, 0x709) = var_v0;
        if (!(var_v0 & 0xFF)) {
            goto block_14;
        }
        break;
    }
}
