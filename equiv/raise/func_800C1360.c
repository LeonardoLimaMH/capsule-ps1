#include "common.h"

s32 func_800C1360(M2C_UNK arg1) {
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_80100F38[];
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    void *temp_a2;
    void *temp_v0_3;
    void *temp_v1;

    temp_v0 = func_800B1260(arg1);
    temp_a2 = ((temp_v0 & 0xFFFF) * 0x79C) + D_80100F38;
    var_a0 = 0;
    if (M2C_FIELD(temp_a2, s16 *, 0x228) == 0) {
        M2C_FIELD(temp_a2, s16 *, 0x2CA) = 0;
    }
    M2C_FIELD(temp_a2, s16 *, 0x2CC) = 0;
    M2C_FIELD(temp_a2, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_a2, s32 *, 0x2BC) + 1);
    do {
        temp_v0_2 = var_a0 & 0xFFFF;
        var_a0 += 1;
        temp_v1 = (temp_v0_2 * 2) + temp_a2;
        temp_v0_3 = (temp_v0_2 * 4) + temp_a2;
        M2C_FIELD(temp_v1, s16 *, 0x2CE) = 0;
        M2C_FIELD(temp_v0_3, s32 *, 0x2DC) = 0;
        M2C_FIELD(temp_v0_3, s32 *, 0x2F4) = 0;
        M2C_FIELD(temp_v1, s16 *, 0x30C) = 0;
        M2C_FIELD(temp_v1, s16 *, 0x318) = 1;
    } while ((u32) (var_a0 & 0xFFFF) < 5U);
    M2C_FIELD(temp_a2, s16 *, 0x368) = -1;
    M2C_FIELD(temp_a2, s16 *, 0x36A) = 0;
    M2C_FIELD(temp_a2, u16 *, 0x324) = (u16) M2C_FIELD(temp_a2, u16 *, 0x326);
    M2C_FIELD(temp_a2, s16 *, 0x372) = 1;
    M2C_FIELD(temp_a2, s16 *, 0x370) = 0;
    M2C_FIELD(temp_a2, s16 *, 0x374) = 0;
    M2C_FIELD(temp_a2, s16 *, 0x220) = 0x32;
    M2C_FIELD(temp_a2, s16 *, 0x376) = 0;
    M2C_FIELD(temp_a2, s16 *, 0x344) = 0;
    M2C_FIELD(temp_a2, s16 *, 0x342) = 0;
    M2C_FIELD(temp_a2, u16 *, 0x36E) = (u16) M2C_FIELD((((temp_v0 & 0xFFFF) * 0x1A8) + D_80091618), u16 *, 0x19C);
    return M2C_FIELD(temp_a2, s32 *, 0x2BC);
}
