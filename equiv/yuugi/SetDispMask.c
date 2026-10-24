#include "common.h"

void SetDispMask(s32 arg0) {
    extern void * D_80078914[];
    extern M2C_UNK (*D_80078918)(M2C_UNK *, s32);
    extern u8 D_8007891E[];
    M2C_UNK var_a0;

    if ((u8) (*D_8007891E) >= 2U) {
        D_80078918("SetDispMask(%d)...\n", arg0);
    }
    if (arg0 == 0) {
        func_8004C7C0(D_8007891E + 0x6A, -1, 0x14);
    }
    var_a0 = 0x03000001;
    if (arg0 != 0) {
        var_a0 = 0x03000000;
    }
    M2C_FIELD((*D_80078914), M2C_UNK (**)(M2C_UNK), 0x10)(var_a0);
}
