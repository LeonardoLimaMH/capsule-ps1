#include "common.h"

void func_800BCB58(void) {
    extern s16 D_8006AF90[];
    extern u8 D_800EE5D0[];
    extern u8 D_800EFF58[];
    extern u8 D_80100F38[];
    u8 *var_s0;
    u8 *var_v1;
    s16 *var_a0;
    s16 temp_v0;
    s32 var_a1;
    s32 var_s1;

    func_8001611C(0x1000);
    var_a1 = 0;
    M2C_FIELD(D_800EFF58, s32 *, 0x33C) = 1;
    M2C_FIELD(D_800EFF58, s32 *, 0x340) = 0x20;
    M2C_FIELD(D_800EFF58, s32 *, 0x344) = 0;
    M2C_FIELD(D_800EFF58, s32 *, 0x348) = (s32) ((*D_8006AF90) + 4);
    if ((*D_8006AF90) > 0) {
        var_a0 = D_8006AF90;
        var_v1 = D_800EFF58;
        do {
            temp_v0 = M2C_FIELD(var_a0, s16 *, 2);
            var_a0 += 2;
            var_a1 += 1;
            M2C_FIELD(var_v1, s32 *, 0x3E8) = (s32) temp_v0;
            var_v1 += 4;
        } while (var_a1 < (*D_8006AF90));
    }
    var_s1 = 0;
    M2C_FIELD(D_800EFF58, s32 *, 0x14) = func_800BBA38(0x1A, 0x60, -0x30, 5, 0, D_800EE5D0, M2C_FIELD(D_800EFF58, s32 *, 0x18), 1, 0, 0, 2, 0, 0);
    func_800BCD9C();
    func_800BCE1C();
    func_800BCC98();
    func_800BCE94();
    func_800BCF20();
    func_800BE020(2);
    var_s0 = D_80100F38;
    do {
        M2C_FIELD(var_s0, s32 *, 0x190) = func_800B4D60(var_s1);
        var_s1 += 1;
        var_s0 += 0x79C;
    } while (var_s1 < 6);
}
