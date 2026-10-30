#include "common.h"

void func_800A0D88(s32 arg0) {
    extern M2C_UNK D_800EE630[];
    extern M2C_UNK D_800EFF58[];
    s32 temp_s1;

    if (arg0 == 1) {
        temp_s1 = M2C_FIELD(D_800EE630, s32 *, 0x18) + M2C_FIELD(((M2C_FIELD(((M2C_FIELD(D_800EFF58, s32 *, 0x344) * 4) + (u8 *)D_800EFF58), s32 *, 0x3D4) * 4) + (u8 *)D_800EFF58), s32 *, 0x398);
        func_80015CD0(M2C_FIELD(D_800EFF58, void **, 0x414) + 0x14, func_80019F30(M2C_FIELD(D_800EE630, s32 *, 0) | 0x70000, temp_s1), 0);
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x414), s32 *, 0x7C) = temp_s1;
    }
}
