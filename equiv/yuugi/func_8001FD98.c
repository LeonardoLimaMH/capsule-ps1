#include "common.h"

void func_8001FD98(s32 arg0) {
    extern M2C_UNK D_80085428[];
    extern u16 D_80085432[];
    extern M2C_UNK D_8008ED68[];
    u16 var_v0;

    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v0 = M2C_FIELD(D_80085428, u16 *, 0xA) + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v0 = M2C_FIELD(D_80085428, u16 *, 0xA) + 1;
    }
    M2C_FIELD(D_80085428, u16 *, 0xA) = var_v0;
    func_80018F90((*D_80085432), arg0, D_8008ED68);
}
