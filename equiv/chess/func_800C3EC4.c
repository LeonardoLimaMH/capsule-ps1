#include "common.h"

void func_800C3EC4(void *arg0) {
    extern M2C_UNK D_80069AD4[];
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE50[];
    M2C_UNK var_a0;
    s32 temp_a0;
    u16 temp_a0_2;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 var_v0;
    u16 var_v0_2;
    u16 var_v0_3;
    void *temp_v0;

    switch ((*D_8008EE50)) {
    case 0:
        if (M2C_FIELD(arg0, u8 *, 0xD77) == 8) {
            temp_v0 = arg0 + func_800CA69C(arg0);
            if ((M2C_FIELD(arg0, u8 *, 0x5D0) == 2) || (var_a0 = 0x7005, (M2C_FIELD(temp_v0, u8 *, 0x5E0) == 0))) {
                var_a0 = 0x7004;
            }
            func_80033974(var_a0);
        case 2:
            M2C_FIELD(arg0, u16 *, 0xC) = 0U;
            func_80012628();
            return;
        }
    default:
        return;
    case 1:
        temp_v1 = M2C_FIELD(arg0, u16 *, 0xC);
        if ((u8) M2C_FIELD((*D_8008ED68), u8 *, 0x103) >= 2U) {
            var_v0 = temp_v1 + M2C_FIELD((*D_8008ED68), u8 *, 0x103);
        } else {
            var_v0 = temp_v1 + 1;
        }
        M2C_FIELD(arg0, u16 *, 0xC) = var_v0;
        if ((u32) (var_v0 & 0xFFFF) >= 0x3DU) {
            func_80012628((*D_8008ED68));
            return;
        }
        break;
    case 3:
        M2C_FIELD((*D_80069AD4), s32 *, 0xD8) = (s32) func_800CB8A4(0, -0x700, M2C_FIELD(arg0, u16 *, 0xC), 0x50, 0);
        M2C_FIELD((*D_80069AD4), s32 *, 0xDC) = (s32) func_800CB8A4(0, -0x700, M2C_FIELD(arg0, u16 *, 0xC), 0x50, 0);
        M2C_FIELD((*D_80069AD4), s32 *, 0xE0) = (s32) func_800CB8A4(0x660, 0x1260, M2C_FIELD(arg0, u16 *, 0xC), 0x50, 0);
        M2C_FIELD((*D_80069AD4), s16 *, 0xE8) = func_800CB960(0x1C0, 0x400, M2C_FIELD(arg0, u16 *, 0xC), 0x50, 0);
        temp_a0 = M2C_FIELD((arg0 + M2C_FIELD(arg0, u8 *, 0xBCA)), u8 *, 0xBD5) << 9;
        M2C_FIELD((*D_80069AD4), s16 *, 0xEA) = func_800CB960(temp_a0, temp_a0 + 0x1200, M2C_FIELD(arg0, u16 *, 0xC), 0x50, 0);
        temp_a0_2 = M2C_FIELD(arg0, u16 *, 0xC);
        if ((u8) M2C_FIELD((*D_8008ED68), u8 *, 0x103) >= 2U) {
            var_v0_2 = temp_a0_2 + M2C_FIELD((*D_8008ED68), u8 *, 0x103);
        } else {
            var_v0_2 = temp_a0_2 + 1;
        }
        M2C_FIELD(arg0, u16 *, 0xC) = var_v0_2;
        if ((u32) (var_v0_2 & 0xFFFF) >= 0x51U) {
            M2C_FIELD((*D_80069AD4), s32 *, 0xD8) = -0x700;
            M2C_FIELD((*D_80069AD4), s32 *, 0xDC) = -0x700;
            M2C_FIELD((*D_80069AD4), s32 *, 0xE0) = 0x1260;
            M2C_FIELD((*D_80069AD4), s16 *, 0xE8) = 0x400;
            M2C_FIELD((*D_80069AD4), s16 *, 0xEA) = (s16) (M2C_FIELD((arg0 + M2C_FIELD(arg0, u8 *, 0xBCA)), u8 *, 0xBD5) + 0x1000);
            M2C_FIELD(arg0, u16 *, 0xC) = 0U;
            func_80012628((M2C_UNK *) temp_a0_2, (*D_8008ED68));
        }
        func_8002CC74();
        func_8002CD50();
        return;
    case 4:
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0xC);
        if ((u8) M2C_FIELD((*D_8008ED68), u8 *, 0x103) >= 2U) {
            var_v0_3 = temp_v1_2 + M2C_FIELD((*D_8008ED68), u8 *, 0x103);
        } else {
            var_v0_3 = temp_v1_2 + 1;
        }
        M2C_FIELD(arg0, u16 *, 0xC) = var_v0_3;
        if ((u32) (var_v0_3 & 0xFFFF) >= 0x3DU) {
            func_800125D8((*D_8008ED68));
        }
        break;
    }
}
