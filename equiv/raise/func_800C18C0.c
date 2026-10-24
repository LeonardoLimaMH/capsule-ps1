#include "common.h"

M2C_UNK *func_800C18C0(s32 arg0, M2C_UNK arg1) {
    extern s16 D_800F0738[];
    extern M2C_UNK D_800F07E4[];
    extern s32 D_800F0C94[];
    extern M2C_UNK D_80100F38[];
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 var_a1;
    s16 var_a1_2;
    s16 var_a1_3;
    s16 var_a1_4;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_s1;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a2;

    temp_s1 = ((func_800B1260(arg1) & 0xFFFF) * 0x79C) + D_80100F38;
    func_800D8E90(arg1);
    func_800CE4B8(arg1, arg0, (*D_800F0738) + func_800CE128(M2C_FIELD(temp_s1, s16 *, 0x326)), 0);
    M2C_FIELD(temp_s1, s16 *, 0x2CA) = 0;
    M2C_FIELD(temp_s1, s16 *, 0x2C8) = 0;
    M2C_FIELD(temp_s1, u16 *, 0x2B8) = (u16) M2C_FIELD(temp_s1, u16 *, 0x2C0);
    temp_a0 = (s16) M2C_FIELD(temp_s1, u16 *, 0x2B8);
    M2C_FIELD(temp_s1, M2C_UNK **, 0x2C4) = D_800F07E4;
    M2C_FIELD(temp_s1, u16 *, 0x2BA) = (u16) M2C_FIELD(temp_s1, u16 *, 0x2C2);
    switch (temp_a0) {
    case 0:
        M2C_FIELD(temp_s1, s32 *, 0x2BC) = (s32) (*D_800F0C94);
        var_a2 = ((func_800B1260(arg1) & 0xFFFF) * 0x79C) + D_80100F38;
        var_a1 = 0;
        do {
            temp_a0_2 = M2C_FIELD((((s32) (var_a1 << 0x10) >> 0xE) + var_a2), void **, 0x230);
            temp_v0 = var_a1 + 1;
            var_a1 = temp_v0;
            M2C_FIELD(temp_a0_2, s32 *, 0x38) = (s32) (M2C_FIELD(temp_a0_2, s32 *, 0x38) | 1);
        } while (temp_v0 < 9);
        var_a1_2 = 0;
        do {
            temp_a0_3 = M2C_FIELD((((s32) (var_a1_2 << 0x10) >> 0xE) + var_a2), void **, 0x278);
            temp_v0_2 = var_a1_2 + 1;
            var_a1_2 = temp_v0_2;
            M2C_FIELD(temp_a0_3, s32 *, 0x38) = (s32) (M2C_FIELD(temp_a0_3, s32 *, 0x38) | 1);
        } while (temp_v0_2 < 7);
block_15:
        temp_v1 = M2C_FIELD(var_a2, void **, 0x184);
        M2C_FIELD(temp_v1, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x38) | 1);
        temp_v1_2 = M2C_FIELD(var_a2, void **, 0x18C);
        M2C_FIELD(temp_v1_2, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v1_2, s32 *, 0x38) | 1);
        break;
    case 1:
        M2C_FIELD(temp_s1, s32 *, 0x2BC) = (s32) M2C_FIELD(&(D_800F0C94)[(s16) M2C_FIELD(temp_s1, u16 *, 0x2BA)], s32 *, 4);
        break;
    case 2:
        M2C_FIELD(temp_s1, s32 *, 0x2BC) = (s32) M2C_FIELD(&(D_800F0C94)[(s16) M2C_FIELD(temp_s1, u16 *, 0x2BA)], s32 *, 4);
        break;
    case 3:
        M2C_FIELD(temp_s1, s32 *, 0x2BC) = (s32) M2C_FIELD(&(D_800F0C94)[(s16) M2C_FIELD(temp_s1, u16 *, 0x2BA)], s32 *, 4);
        break;
    case 4:
        M2C_FIELD(temp_s1, s32 *, 0x2BC) = (s32) M2C_FIELD(&(D_800F0C94)[(s16) M2C_FIELD(temp_s1, u16 *, 0x2BA)], s32 *, 4);
        break;
    case 5:
        M2C_FIELD(temp_s1, s32 *, 0x2BC) = (s32) M2C_FIELD(&(D_800F0C94)[(s16) M2C_FIELD(temp_s1, u16 *, 0x2BA)], s32 *, 0x5C);
        var_a2 = ((func_800B1260(arg1) & 0xFFFF) * 0x79C) + D_80100F38;
        var_a1_3 = 0;
        do {
            temp_a0_4 = M2C_FIELD((((s32) (var_a1_3 << 0x10) >> 0xE) + var_a2), void **, 0x230);
            temp_v0_3 = var_a1_3 + 1;
            var_a1_3 = temp_v0_3;
            M2C_FIELD(temp_a0_4, s32 *, 0x38) = (s32) (M2C_FIELD(temp_a0_4, s32 *, 0x38) | 1);
        } while (temp_v0_3 < 9);
        var_a1_4 = 0;
        do {
            temp_a0_5 = M2C_FIELD((((s32) (var_a1_4 << 0x10) >> 0xE) + var_a2), void **, 0x278);
            temp_v0_4 = var_a1_4 + 1;
            var_a1_4 = temp_v0_4;
            M2C_FIELD(temp_a0_5, s32 *, 0x38) = (s32) (M2C_FIELD(temp_a0_5, s32 *, 0x38) | 1);
        } while (temp_v0_4 < 7);
        goto block_15;
    case 6:
        M2C_FIELD(temp_s1, s32 *, 0x2BC) = (s32) M2C_FIELD(&(D_800F0C94)[(s16) M2C_FIELD(temp_s1, u16 *, 0x2BA)], s32 *, 0x94);
        break;
    }
    return M2C_FIELD(temp_s1, M2C_UNK **, 0x2C4);
}
