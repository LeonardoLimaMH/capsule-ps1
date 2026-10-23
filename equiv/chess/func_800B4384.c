#include "common.h"

void func_800B4384(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_8008ED68[];
    s32 temp_v1;
    s32 var_v0;

    if (M2C_FIELD((*D_80085428), u8 *, 0xD77) != 0) {
        func_800185F8(arg0, arg0);
        return;
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x54);
    if ((u8) M2C_FIELD((*D_8008ED68), u8 *, 0x103) >= 2U) {
        var_v0 = temp_v1 + M2C_FIELD((*D_8008ED68), u8 *, 0x103);
    } else {
        var_v0 = temp_v1 + 1;
    }
    M2C_FIELD(arg0, s32 *, 0x54) = var_v0;
    func_800A360C((*D_80085428), M2C_FIELD((*D_80085428), u8 *, 0xBCA), arg0, 0);
}
