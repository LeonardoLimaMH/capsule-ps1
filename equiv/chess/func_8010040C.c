#include "common.h"

void func_8010040C(void) {
    extern M2C_UNK D_80069AD4[];
    extern M2C_UNK D_80085428[];
    extern u16 D_8008EE48[];
    M2C_UNK var_a1;

    switch ((*D_8008EE48)) {
    case 0:
        func_8009B4C8((*D_80085428));
        func_80012578();
        return;
    case 1:
        func_8009C964((*D_80085428));
        func_80012578();
        return;
    case 2:
        func_8009B814((*D_80085428));
        func_80012578();
        return;
    case 3:
        var_a1 = 2;
block_8:
        func_8009B948((*D_80085428), var_a1);
        func_80012578();
        return;
    case 4:
        var_a1 = 1;
        goto block_8;
    case 5:
        var_a1 = 0;
        goto block_8;
    case 6:
        func_8009BAD8((*D_80085428));
        func_80012578();
        return;
    case 7:
        func_800B0530((*D_80085428));
        func_80012578();
        return;
    case 8:
        M2C_FIELD((*D_80069AD4), s32 *, 0xDC) = 0x400;
        M2C_FIELD((*D_80069AD4), s32 *, 0xE0) = 0x400;
        M2C_FIELD((*D_80069AD4), s16 *, 0xE8) = 0x100;
        M2C_FIELD((*D_80069AD4), s32 *, 0xD8) = 0;
        M2C_FIELD((*D_80069AD4), s16 *, 0xEA) = 0x200;
        func_8002CC74((*D_80085428));
        func_8002CD50();
        func_80012508();
        /* fallthrough */
    default:
        return;
    }
}
