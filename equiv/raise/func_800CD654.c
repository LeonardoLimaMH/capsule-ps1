#include "common.h"

void func_800CD654(s32 arg0) {
    extern M2C_UNK D_80100F38[];
    M2C_UNK var_a1;
    s16 temp_v1;

    temp_v1 = M2C_FIELD((((func_800B1260() & 0xFFFF) * 0x79C) + (*D_80100F38)), s16 *, 0x2C0);
    switch (temp_v1) {                              /* irregular */
    case 1:
        var_a1 = 0;
block_5:
        func_800CD6E0(arg0, var_a1);
        return;
    case 2:
        var_a1 = 1;
        goto block_5;
    }
}
