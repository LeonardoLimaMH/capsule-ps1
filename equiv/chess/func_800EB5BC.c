#include "common.h"

void func_800EB5BC(void *arg0) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    s16 var_v1;
    u16 temp_v0;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0x14);
    temp_v0 = M2C_FIELD(arg0, u16 *, 0x1C) + 1;
    M2C_FIELD(arg0, u16 *, 0x1C) = temp_v0;
    if ((temp_v0 << 0x10) > 0x280000) {
        M2C_FIELD(M2C_FIELD(temp_a0, void **, 0x74), u16 *, 0x54) = 0U;
        M2C_FIELD(M2C_FIELD(temp_a0, void **, 0x70), s16 *, 0x54) = 0;
        func_80013920(arg0, 0x186A0, arg0);
        return;
    }
    if (M2C_FIELD(arg0, s16 *, 0x1E) > 0) {
        var_v1 = M2C_FIELD(M2C_FIELD(temp_a0, void **, 0x74), u16 *, 0x54) + 0x28;
    } else {
        var_v1 = M2C_FIELD(M2C_FIELD(temp_a0, void **, 0x74), u16 *, 0x54) - 0x28;
    }
    M2C_FIELD(M2C_FIELD(temp_a0, void **, 0x74), s16 *, 0x54) = var_v1;
    M2C_FIELD(M2C_FIELD(temp_a0, void **, 0x70), s16 *, 0x54) = var_v1;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) + 0x186A0);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + M2C_FIELD(arg0, s32 *, 0x38));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + M2C_FIELD(arg0, s32 *, 0x40));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + M2C_FIELD(arg0, s32 *, 0x3C));
    sp10 = M2C_FIELD(arg0, u16 *, 0x2E);
    sp12 = M2C_FIELD(arg0, u16 *, 0x32);
    sp14 = M2C_FIELD(arg0, u16 *, 0x36);
    func_800FF190(M2C_FIELD(arg0, void **, 0x14), &sp10, 0xA);
}
