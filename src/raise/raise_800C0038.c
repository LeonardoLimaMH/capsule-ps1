#include "common.h"

void func_800C0124(s16, s16, s32);
s32 func_800C0038(void) {
    extern s16 D_800F0670[];
    extern s16 D_800F0672[];
    extern s16 D_800F0676[];
    extern s16 D_80100DBA[];
    extern s16 D_80100DBC[];

    if ((*D_800F0670) == 1) {
        (*D_800F0676) += ((*D_800F0672) == 1) ? 1 : -1;
        (*D_800F0676) = ((*D_800F0676) < 0) ? 0 : (((*D_800F0676) > 0x18) ? 0x18 : (*D_800F0676));
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

void func_800C0118(void) {
    extern s16 D_800F0670[];
    (*D_800F0670) = 0;
}
