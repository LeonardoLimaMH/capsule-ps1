#include "common.h"

s32 func_800C0038(void) {
    extern s16 D_800F0670[];
    extern s16 D_800F0672[];
    extern s16 D_800F0676[];
    extern s16 D_80100DBA[];
    extern s16 D_80100DBC[];
    s16 var_v0;
    u16 var_v1;

    if ((*D_800F0670) == 1) {
        if ((*D_800F0672) == (*D_800F0670)) {
            var_v0 = (*D_800F0676) + 1;
        } else {
            var_v0 = (*D_800F0676) - 1;
        }
        (*D_800F0676) = var_v0;
        var_v1 = (u16) (*D_800F0676);
        if ((*D_800F0676) >= 0) {
            if ((*D_800F0676) >= 0x19) {
                var_v1 = 0x18;
            }
        } else {
            var_v1 = 0;
        }
        (*D_800F0676) = (s16) var_v1;
        func_800C0124((*D_80100DBA), (*D_80100DBC), 3);
        if ((*D_800F0672) == 1) {
            if ((*D_800F0676) == 0x18) {
                (*D_800F0672) = 0;
            }
        } else if ((*D_800F0676) == 0) {
            (*D_800F0672) = 1;
        }
    }
    return 0;
}
