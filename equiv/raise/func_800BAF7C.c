#include "common.h"

void func_800BAF7C(void) {
    extern u8 D_800EFF58[];
    s32 var_s0;
    s32 var_s0_2;

    func_8001611C(0x1000);
    M2C_FIELD(D_800EFF58, s32 *, 0) = 1;
    M2C_FIELD(D_800EFF58, s32 *, 4) = 0x20;
    M2C_FIELD(D_800EFF58, s32 *, 8) = 1;
    M2C_FIELD(D_800EFF58, s32 *, 0xC) = 0;
    M2C_FIELD(D_800EFF58, s32 *, 0x1C) = 1;
    func_8001E388(1);
    var_s0 = 0;
    func_800BB20C();
    do {
        func_800BB284(var_s0);
        func_800BB310(var_s0, 1);
        var_s0 += 1;
    } while (var_s0 < 7);
    var_s0_2 = 0;
    do {
        func_800BB034(var_s0_2);
        var_s0_2 += 1;
    } while (var_s0_2 < 3);
    func_800BB69C();
    func_800BB714();
    func_800BB79C(0);
    func_800BE020(0);
}
