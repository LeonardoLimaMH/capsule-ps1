#include "common.h"

void func_800A6E14(s32 *arg0) {
    extern u8 D_8002E2AC[];
    extern u8 D_800EEB9C[];
    u8 *var_a2;
    u8 *var_a3;
    s32 *var_a0;
    s32 *var_v1;
    s32 var_a1;
    s32 var_t0;

    var_a0 = arg0;
    var_t0 = 0;
    var_a2 = D_800EEB9C;
    var_a3 = D_800EEB9C;
    M2C_FIELD(D_800EEB9C, s32 *, 0x1C) = 0;
    do {
        var_a1 = 0;
        M2C_FIELD(var_a2, s32 *, 0x28) = 0;
        M2C_FIELD(var_a2, s32 *, 0x98) = 0;
        if (M2C_FIELD(var_a2, s32 *, 0x60) > 0) {
            var_a0 = var_a3 + 0x4C4;
            var_v1 = var_a3 + 0xD4;
            do {
                *var_v1 = 0;
                if (var_t0 < 2) {
                    *var_a0 = 0;
                }
                var_a0 += 4;
                var_a1 += 1;
                var_v1 += 4;
            } while (var_a1 < M2C_FIELD(var_a2, s32 *, 0x60));
        }
        var_a2 += 4;
        var_t0 += 1;
        var_a3 += 0x24;
    } while (var_t0 < 7);
    M2C_FIELD(D_800EEB9C, s32 *, 0x74C) = 0;
    M2C_FIELD(D_800EEB9C, s32 *, 0x754) = 0;
    M2C_FIELD(D_800EEB9C, s32 *, 0x75C) = 0;
    M2C_FIELD(D_800EEB9C, s32 *, 0x770) = 0;
    M2C_FIELD(D_800EEB9C, s32 *, 0x778) = 0;
    M2C_FIELD(D_800EEB9C, s32 *, 0x764) = 0;
    M2C_FIELD(D_800EEB9C, s32 *, 0x768) = 0;
    func_80013668(var_a0, var_a1, var_a2, var_a3);
    func_80012200(D_8002E2AC);
}
