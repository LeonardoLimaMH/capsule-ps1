#include "common.h"

void func_800BCE0C(void *arg0) {
    extern s32 D_80069BB4[];
    extern u8 D_80086105[];
    extern u8 D_8008ED68[];
    u32 temp_v1;
    u32 temp_v1_2;
    u32 var_v0;

    temp_v1 = M2C_FIELD(arg0, u32 *, 0x3C);
    if (temp_v1 < 0x32U) {
        M2C_FIELD(arg0, s16 *, 0x52) = (s16) ((temp_v1 << 0xC) / 30);
    }
    temp_v1_2 = M2C_FIELD(arg0, u32 *, 0x3C);
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v0 = temp_v1_2 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v0 = temp_v1_2 + 1;
    }
    M2C_FIELD(arg0, u32 *, 0x3C) = var_v0;
    func_800CA2C8(M2C_FIELD(arg0, s16 *, 0x46), (s16) (M2C_FIELD(arg0, u16 *, 0x4A) - (0xEBE0 / (s32) (*D_80069BB4))), 2, 0x1800, (s32) M2C_FIELD(arg0, s16 *, 0x52), 5);
    if ((*D_80086105) != 0) {
        func_800185F8(arg0);
    }
}
