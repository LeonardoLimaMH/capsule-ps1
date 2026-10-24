#include "common.h"

M2C_UNK *func_800C14D4(M2C_UNK arg1) {
    extern M2C_UNK D_80091618[];
    extern s16 D_800ED8E4[];
    extern M2C_UNK D_800F07F4[];
    extern M2C_UNK D_80100F38[];
    s16 temp_v1_2;
    s16 temp_v1_4;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_s1;
    s32 var_v0;
    u16 temp_a0_2;
    void *temp_s0;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_3;

    temp_v0 = func_800B1260(arg1);
    temp_a0 = temp_v0 & 0xFFFF;
    temp_s0 = (temp_a0 * 0x79C) + D_80100F38;
    temp_v1 = (temp_a0 * 0x1A8) + D_80091618;
    if (M2C_FIELD(temp_v1, u16 *, 0x66) == 1) {
        if (M2C_FIELD(temp_v1, u16 *, 0x68) == 1) {
            if (M2C_FIELD(temp_s0, s32 *, 0x2B8) != 0x20005) {
                var_v0 = 0x30005;
                goto block_12;
            }
            goto block_23;
        }
        if (M2C_FIELD(temp_s0, s32 *, 0x2B8) != 0x20005) {
            var_v0 = 0x30005;
            goto block_12;
        }
        goto block_13;
    }
    temp_a0_2 = M2C_FIELD(temp_v1, u16 *, 0x62);
    var_s1 = temp_v0 & 0xFFFF;
    if (temp_a0_2 == 1) {
        if (M2C_FIELD(temp_v1, u16 *, 0x64) == temp_a0_2) {
            if (M2C_FIELD(temp_s0, s32 *, 0x2B8) != 5) {
                var_v0 = 0x10005;
                goto block_12;
            }
            goto block_23;
        }
        if (M2C_FIELD(temp_s0, s32 *, 0x2B8) != 5) {
            var_v0 = 0x10005;
block_12:
            if (M2C_FIELD(temp_s0, s32 *, 0x2B8) == var_v0) {
                goto block_13;
            }
            goto block_23;
        }
block_13:
        var_s1 = temp_v0 & 0xFFFF;
        goto block_14;
    }
block_14:
    func_800E1848(var_s1, 1);
    if (func_800E17F8(var_s1) == 0) {
        func_800E186C(arg1, var_s1);
        var_a0 = 0;
        goto block_28;
    }
    temp_v1_2 = (s16) M2C_FIELD(temp_s0, s32 *, 0x2B8);
    switch (temp_v1_2) {
    case 1:
    case 2:
        M2C_FIELD((((temp_v0 & 0xFFFF) * 0x1A8) + D_80091618), s16 *, 0x110) = 0;
    default:
block_24:
        if (M2C_FIELD(temp_s0, s16 *, 0x228) == 0) {
            M2C_FIELD(temp_s0, s16 *, 0x2CA) = 0;
            M2C_FIELD(temp_s0, M2C_UNK **, 0x2BC) = D_800F07F4;
            M2C_FIELD(temp_s0, s32 *, 0x2B8) = 0;
            M2C_FIELD(temp_s0, s16 *, 0x2C0) = 0;
            M2C_FIELD(temp_s0, s16 *, 0x2BA) = 0;
            M2C_FIELD(temp_s0, s16 *, 0x2C2) = 0;
        } else {
            M2C_FIELD(temp_s0, s16 *, 0x2CA) = 1;
        }
        var_a0 = 0;
block_28:
        do {
            temp_v0_2 = var_a0 & 0xFFFF;
            var_a0 += 1;
            temp_v1_3 = (temp_v0_2 * 2) + temp_s0;
            temp_v0_3 = (temp_v0_2 * 4) + temp_s0;
            M2C_FIELD(temp_v1_3, s16 *, 0x2CE) = 0;
            M2C_FIELD(temp_v0_3, s32 *, 0x2DC) = 0;
            M2C_FIELD(temp_v0_3, s32 *, 0x2F4) = 0;
            M2C_FIELD(temp_v1_3, s16 *, 0x30C) = 0;
            M2C_FIELD(temp_v1_3, s16 *, 0x318) = 1;
        } while ((u32) (var_a0 & 0xFFFF) < 5U);
        M2C_FIELD(temp_s0, s16 *, 0x368) = -1;
        M2C_FIELD(temp_s0, s16 *, 0x372) = 1;
        M2C_FIELD(temp_s0, s16 *, 0x220) = 0x32;
        M2C_FIELD(temp_s0, s16 *, 0x2CC) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x36A) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x374) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x376) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x344) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x342) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x37E) = 0;
        (*D_800ED8E4) = 0;
        return M2C_FIELD(temp_s0, M2C_UNK **, 0x2BC);
    case 4:
        M2C_FIELD((((temp_v0 & 0xFFFF) * 0x1A8) + D_80091618), s16 *, 0x110) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x228) = 0;
        if (M2C_FIELD(temp_s0, s16 *, 0x36E) == 1) {
            M2C_FIELD(temp_s0, s32 *, 0x2B8) = 6;
            M2C_FIELD(temp_s0, s16 *, 0x2BA) = 2;
            return M2C_FIELD(temp_s0, M2C_UNK **, 0x2BC);
        }
        goto block_24;
    case 6:
        temp_v1_4 = M2C_FIELD(temp_s0, s16 *, 0x2BA);
        if ((temp_v1_4 == 0) || (temp_v1_4 == 2)) {
block_23:
            return M2C_FIELD(temp_s0, M2C_UNK **, 0x2BC);
        }
        goto block_24;
    }
}
