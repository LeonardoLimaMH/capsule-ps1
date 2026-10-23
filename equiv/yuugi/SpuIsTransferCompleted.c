#include "common.h"

s32 SpuIsTransferCompleted(s32 arg0) {
    extern s32 D_80071520[];
    extern s32 D_80071528[];
    extern s32 D_800715CC[];
    s32 var_v0;

    if (((*D_80071528) == 1) || ((*D_800715CC) == 1)) {
        return 1;
    }
    var_v0 = func_8004FE6C((*D_80071520));
    if (arg0 == 1) {
        var_v0 = 1;
        if (var_v0 == 0) {
            do {
                var_v0 = 1;
            } while (func_8004FE6C((*D_80071520)) == 0);
        }
        goto block_8;
    }
    if (var_v0 == 1) {
block_8:
        (*D_800715CC) = var_v0;
    }
    return var_v0;
}
