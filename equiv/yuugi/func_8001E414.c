#include "common.h"

void func_8001E414(void) {
    extern M2C_UNK D_800861B0[];
    extern M2C_UNK D_8008ED68[];
    M2C_UNK *var_s1;
    s32 var_s0;

    switch (M2C_FIELD(D_8008ED68, s32 *, 0x990)) { /* irregular */
    case 1:
        M2C_FIELD(D_8008ED68, s32 *, 0x990) = 2;
        return;
    case 2:
        M2C_FIELD(D_8008ED68, s32 *, 0x990) = 3;
        return;
    case 3:
        var_s1 = D_800861B0;
        var_s0 = 0;
        do {
            func_8001E4A4(var_s1);
            var_s0 += 1;
            var_s1 += 0x18;
        } while (var_s0 < 5);
        /* fallthrough */
    case 0:
        return;
    }
}
