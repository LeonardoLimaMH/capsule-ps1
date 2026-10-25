#include "common.h"

u8 slpm_ResetGraph(s32 arg0) {
    extern u8 D_80131AEC[];
    extern void * D_80131B2C[];
    extern M2C_UNK (*D_80131B30)(M2C_UNK *, s32);
    extern u8 D_80131B34[];
    extern u8 D_80131B36[];
    extern u8 D_80131BB4[];
    extern u8 D_80131BC0[];
    s32 temp_v1;

    temp_v1 = arg0 & 7;
    switch (temp_v1) {                              /* irregular */
    case 3:
    case 0:
        slpm_printf("ResetGraph:jtb=%08x,env=%08x\n", D_80131AEC, D_80131B34);
        /* fallthrough */
    case 5:
        func_80116878(D_80131B34, 0, 0x80);
        slpm_ResetCallback();
        func_801168A4((s32) (*D_80131B2C) & 0xFFFFFF);
        M2C_FIELD(D_80131B34, u8 *, 0) = func_80115F94(arg0);
        M2C_FIELD(D_80131B34, s8 *, 1) = 1;
        M2C_FIELD(D_80131B34, u16 *, 4) = (u16) *(D_80131BB4 + (M2C_FIELD(D_80131B34, u8 *, 0) * 4));
        M2C_FIELD(D_80131B34, u16 *, 6) = (u16) *(D_80131BC0 + (M2C_FIELD(D_80131B34, u8 *, 0) * 4));
        func_80116878(D_80131B34 + 0x10, -1, 0x5C);
        func_80116878(D_80131B34 + 0x6C, -1, 0x14);
        return M2C_FIELD(D_80131B34, u8 *, 0);
    default:
        if ((u8) (*D_80131B36) >= 2U) {
            D_80131B30("ResetGraph(%d)...\n", arg0);
        }
        return M2C_FIELD((*D_80131B2C), u8 (**)(M2C_UNK), 0x34)(1);
    }
}
