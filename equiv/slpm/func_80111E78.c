#include "common.h"

s32 func_80111E78(void) {
    extern s32 D_801334F0[];
    extern u8 D_801334F4[];
    extern s32 D_801334FC[];
    extern int func_80111F28();
    extern int func_80111F90();
    void *temp_s0;

    func_80112014();
    temp_s0 = D_801334F4 - 4;
    M2C_FIELD(D_801334F4, u8 **, 0) = &func_80111F28;
    M2C_FIELD(D_801334F4, u8 **, 4) = &func_80111F90;
    (*D_801334F0) = 0;
    (*D_801334FC) = 0;
    func_80112044(1, temp_s0);
    func_80112034(1, temp_s0);
    func_80112024();
    return 1;
}
