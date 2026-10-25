#include "common.h"

void func_800E11A0(s32 arg0, s32 arg1) {
    extern u16 D_8008EE44[];
    extern u8 D_80091618[];
    extern u8 D_800EE9B8[];
    extern u8 D_800F07E4[];
    extern u8 D_800F07F4[];
    extern u8 D_80100F38[];
    M2C_UNK var_a1;
    M2C_UNK var_a2;
    s32 temp_s0;
    s32 var_s0;
    void *temp_a1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_s0 = arg1 & 0xFFFF;
    *(s32 *)(((1 - arg0) * 4) + D_800EE9B8) = 0;
    temp_v0 = (temp_s0 * 0x79C) + D_80100F38;
    M2C_FIELD(temp_v0, u8 **, 0x2BC) = D_800F07F4;
    M2C_FIELD(temp_v0, s16 *, 0x2B8) = 0;
    M2C_FIELD(temp_v0, s16 *, 0x2BA) = 0;
    M2C_FIELD(temp_v0, s16 *, 0x2C8) = 0;
    M2C_FIELD(temp_v0, s16 *, 0x2C0) = 0;
    M2C_FIELD(temp_v0, s16 *, 0x2C2) = 0;
    M2C_FIELD(temp_v0, u8 **, 0x2C4) = D_800F07E4;
    M2C_FIELD(temp_v0, s16 *, 0x2CA) = 0;
    if (func_800E16AC(temp_s0) == 1) {
        func_800A1F44(arg0, 1, 0);
        var_s0 = arg1 & 0xFFFF;
    } else {
        if ((func_800E14C4(temp_s0) == 1) && (var_a1 = 6, (((u32) ((*D_8008EE44) - 0x35) < 8U) == 0))) {
            var_a2 = 2;
        } else {
            var_a1 = 0;
            var_a2 = 0;
        }
        var_s0 = arg1 & 0xFFFF;
        func_800C0E1C(arg0, var_a1, var_a2);
    }
    temp_v0_2 = (var_s0 * 0x79C) + D_80100F38;
    temp_a1 = M2C_FIELD(temp_v0_2, void **, 0x184);
    M2C_FIELD(temp_a1, s32 *, 0x38) = (s32) (M2C_FIELD(temp_a1, s32 *, 0x38) | 1);
    M2C_FIELD(temp_v0_2, s32 *, 0x188) = 4;
    temp_v0_3 = (var_s0 * 0x1A8) + D_80091618;
    M2C_FIELD(temp_v0_3, s16 *, 0x19A) = -1;
    M2C_FIELD(temp_v0_3, s16 *, 0x198) = -1;
    func_800E0E8C(var_s0, temp_a1);
    func_800E1720(var_s0);
}
