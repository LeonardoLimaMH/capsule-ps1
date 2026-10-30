#include "common.h"

s32 func_80020F0C(void *arg0, s32 arg1) {
    extern M2C_UNK D_8008ED68[];
    extern s32 D_8008EE74[];
    s32 temp_v1;
    s32 var_s1;
    s32 var_v0;
    s32 var_v1;
    u8 var_a2;
    void *temp_s0;
    void *temp_v0;

    var_a2 = 0;
    temp_v0 = arg0 + 0x5D0;
    temp_s0 = arg0 + 0x10;
    if (arg1 == 1) {
        var_a2 = M2C_FIELD(temp_v0, u8 *, 0x5FA);
    }
    var_s1 = 0;
    if ((arg1 == 1) && (M2C_FIELD((temp_v0 + var_a2), u8 *, 0x10) != 0)) {
        return ((u16) M2C_FIELD(arg0, u16 *, 0x1E) < 0xBU) ^ 1;
    }
    temp_v1 = M2C_FIELD(((var_a2 * 0x10) + (u8 *)D_8008ED68), s32 *, 0x88);
    var_v0 = temp_v1 & 0x4000;
    if (((temp_v1 & 0x1000) && (var_v0 = temp_v1 & 0x4000, (M2C_FIELD(temp_s0, u8 *, 1) != 0))) || ((var_v0 != 0) && (M2C_FIELD(temp_s0, u8 *, 1) == 0))) {
        func_80034AB0(0x84, var_a2);
        M2C_FIELD(temp_s0, u8 *, 1) = (u8) (1 - M2C_FIELD(temp_s0, u8 *, 1));
    } else if (M2C_FIELD(((var_a2 * 0x10) + (u8 *)D_8008ED68), s32 *, 0x88) & 0x20) {
        func_80034AB0(0x48, var_a2);
        var_s1 = 1;
    }
    var_v1 = 0x38;
    if (M2C_FIELD(temp_s0, u8 *, 1) != 0) {
        var_v1 = 0x48;
    }
    func_8001EA24(0x100, (s16) (var_v1 + ((s32) (*D_8008EE74) / 2)), 2, 0xDD, 0, 3);
    return var_s1;
}
