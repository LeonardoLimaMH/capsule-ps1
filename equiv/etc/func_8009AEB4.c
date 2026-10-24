#include "common.h"

void func_8009AEB4(void) {
    extern u8 D_8001FDFC[];
    extern u8 D_8001FF50[];
    extern u8 D_80085428[];
    extern u8 D_8008ED68[];
    extern s32 D_800B3AE0[];
    extern s32 D_800B3AE8[];
    extern s32 D_800B3B24[];
    extern s32 D_800B3B28[];
    extern int func_80099394();
    M2C_UNK *var_a0;
    s32 temp_v0;

    if (M2C_FIELD(D_8008ED68, s32 *, 0xA68) == 0) {
        func_80013668();
        func_80011C40();
        (*D_800B3AE0) = 0;
        (*D_800B3B28) = 0;
        (*D_800B3B24) = 0;
        if ((*D_800B3AE8) != 0) {
            M2C_FIELD(D_8008ED68, s32 *, 0xA14) = 0;
            var_a0 = &func_80099394;
        } else {
            M2C_FIELD(D_80085428, s8 *, 1) = 1;
            M2C_FIELD(D_80085428, s8 *, 0) = 1;
            temp_v0 = M2C_FIELD(D_8008ED68, s32 *, 0xA14) + 1;
            M2C_FIELD(D_8008ED68, s32 *, 0xA14) = temp_v0;
            if (temp_v0 & 1) {
                var_a0 = D_8001FF50;
            } else {
                var_a0 = D_8001FDFC;
            }
        }
        func_80012200(var_a0);
    }
}
