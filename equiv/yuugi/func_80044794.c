#include "common.h"

void func_80044794(s8 arg0, u8 *arg1) {
    extern M2C_UNK D_80094A88[];
    extern M2C_UNK D_80094A98[];
    extern M2C_UNK (*D_80094C54)(s32, u8 *);
    M2C_UNK *var_v1_2;
    s32 var_v1;
    void *var_a0;

    var_v1 = arg0 & 0xFF;
    if (var_v1 == 5) {
        if (*arg1 & 0x10) {
            func_8004360C(5);
            var_v1 = arg0 & 0xFF;
        }
    }
    switch (var_v1) {                               /* irregular */
    case 5:
    case 1:
        var_v1_2 = D_80094A88;
        var_a0 = D_80094A88 + 5;
block_11:
        M2C_FIELD(var_v1_2, s32 *, 0) = 1;
        M2C_FIELD(var_v1_2, s8 *, 4) = arg0;
        func_800458A0(var_a0, arg1);
        break;
    case 4:
        var_v1_2 = D_80094A98;
        var_a0 = D_80094A98 + 5;
        goto block_11;
    }
    if (D_80094C54 != NULL) {
        D_80094C54(arg0 & 0xFF, arg1);
    }
}
