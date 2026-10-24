#include "common.h"

void func_800B8E34(void) {
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800EFFEC[];
    extern u16 D_80100CD0[];
    extern M2C_UNK D_80100CFC[];
    s32 var_t2;
    u16 *var_t0;
    u16 *var_t1;
    u16 temp_v0;
    void *var_a2;
    void *var_a3;

    var_t2 = 0;
    var_t0 = D_80100CD0;
    var_t1 = D_80100CD0;
    var_a2 = ((*D_8006AF80) * 0x1A8) + D_80091618;
    var_a3 = var_a2;
    (*D_80100CD0) = M2C_FIELD(var_a2, u16 *, 0x12);
    do {
        temp_v0 = M2C_FIELD(var_a3, u16 *, 0x14);
        var_a3 += 2;
        var_t2 += 1;
        M2C_FIELD(var_t1, u16 *, 2) = temp_v0;
        M2C_FIELD(var_t0, s32 *, 8) = (s32) M2C_FIELD(var_a2, s32 *, 0x1C);
        M2C_FIELD(var_t0, s32 *, 0xC) = (s32) M2C_FIELD(var_a2, s32 *, 0x20);
        M2C_FIELD(var_t0, s32 *, 0x10) = (s32) M2C_FIELD(var_a2, s32 *, 0x24);
        var_a2 += 0xC;
        var_t0 += 0xC;
        var_t1 += 2;
    } while (var_t2 < 3);
    func_8001AA70(D_80100CFC, D_800EFFEC, 0x40, var_a3);
}
