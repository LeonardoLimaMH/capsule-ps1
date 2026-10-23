#include "common.h"

void func_80021870(void *arg0, s32 arg4) {
    extern M2C_UNK D_8008ED68[];
    s32 temp_v1;
    s32 var_v0;

    if ((M2C_FIELD((*D_8008ED68), s32 *, 0x990) == 1) || (M2C_FIELD(arg0, s32 *, 0x3C) != 0)) {
        func_80021618(arg0, arg4);
        if (M2C_FIELD((*D_8008ED68), s32 *, 0x990) == 1) {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x3C);
            if ((u8) M2C_FIELD((*D_8008ED68), u8 *, 0x103) >= 2U) {
                var_v0 = temp_v1 + M2C_FIELD((*D_8008ED68), u8 *, 0x103);
            } else {
                var_v0 = temp_v1 + 1;
            }
            M2C_FIELD(arg0, s32 *, 0x3C) = var_v0;
        }
    }
}
