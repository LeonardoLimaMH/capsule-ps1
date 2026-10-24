#include "common.h"

void func_8002E38C(void) {
    extern M2C_UNK D_80085428[];
    extern u16 D_80085434[];
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE44[];
    extern s32 D_8008F780[];
    extern M2C_UNK D_8009AC88[];
    extern M2C_UNK D_801002CC[];
    extern int func_80012508();
    M2C_UNK *var_a0;
    u16 var_v0;

    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v0 = M2C_FIELD(D_80085428, u16 *, 0xC) + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v0 = M2C_FIELD(D_80085428, u16 *, 0xC) + 1;
    }
    M2C_FIELD(D_80085428, u16 *, 0xC) = var_v0;
    func_80018F90((*D_80085434), 2);
    switch ((*D_8008EE44)) {
    case 0:
        M2C_FIELD(D_80085428, s8 *, 0) = 1;
        func_80013668();
        func_80012508();
        return;
    case 1:
        func_8001A480(2, 0x80097800);
        func_80019F30(0x110002, func_80012508);
        (*D_80085434) = 0;
        func_80012508();
        return;
    case 3:
        if ((*D_8008F780) == 0) {
            var_a0 = D_8009AC88;
block_12:
            func_80012200(var_a0);
        default:
            return;
        }
        func_8002009C(1);
        func_80012508();
        return;
    case 4:
        if (func_80019654() != 0) {
            (*D_8008F780) = 0;
            var_a0 = D_801002CC;
            goto block_12;
        }
        break;
    }
}
