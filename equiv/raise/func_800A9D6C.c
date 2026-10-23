#include "common.h"

s32 func_800A9D6C(s32 arg0) {
    extern u16 D_8006AF80[];
    extern s16 D_80078C26[];
    extern s16 D_80078C28[];
    extern s32 D_80078C34[];
    extern u8 D_80085429[];
    extern M2C_UNK D_800900C0[];
    extern M2C_UNK D_80091618[];
    extern s16 D_800EEA90[];
    extern s32 D_800EEBA8[];
    extern u16 D_800EF2D8[];
    extern M2C_UNK D_800EF524[];
    extern s32 D_800F0550[];
    extern s32 D_800F0578[];
    M2C_UNK *var_a2;
    M2C_UNK *var_a3;
    M2C_UNK var_a3_2;
    s32 temp_a0_2;
    s32 var_a1;
    s32 var_t0;
    void *temp_a0;
    void *var_v1;

    if ((*D_80078C28) != 0) {
        return 0;
    }
    if ((*D_800EEA90) != 0) {
        if ((*D_800EEA90) == 4) {
            func_800E1B30();
        }
        (*D_800EEA90) = (u16) (*D_800EEA90) - 1;
        return 0;
    }
    (*D_800EEA90) = 8;
    (*D_8006AF80) = (*D_800EF2D8);
    func_800E2AA0(7, 1, arg0);
    func_800B4C40((*D_8006AF80));
    func_800B9F50(1);
    var_t0 = 0;
    var_a3 = (*D_800900C0);
    var_a2 = (*D_800EF524);
    do {
        if (arg0 == 1) {
            M2C_FIELD(var_a2, s32 *, 0x448) = arg0;
        } else {
            M2C_FIELD(var_a2, s32 *, 0x448) = -1;
        }
        temp_a0 = M2C_FIELD(((var_t0 * 4) + (((*D_8006AF80) * 0x1A8) + (*D_80091618))), void **, 0x18C);
        M2C_FIELD(temp_a0, s32 *, 0x50) = (s32) ((M2C_FIELD(temp_a0, s32 *, 0x50) & ~8) | ((arg0 == 1) * 8));
        temp_a0_2 = M2C_FIELD(var_a3, s32 *, 0xC);
        var_a1 = 0;
        if (temp_a0_2 > 0) {
            var_v1 = M2C_FIELD(var_a3, s32 *, 0xA0) + 0x2B;
            do {
                var_a1 += 1;
                M2C_FIELD(var_v1, s8 *, -1) = 0x80;
                M2C_FIELD(var_v1, s8 *, -2) = 0x80;
                M2C_FIELD(var_v1, s8 *, -3) = 0x80;
                M2C_FIELD(var_v1, s8 *, 0) = 0x28;
                var_v1 += 0x2C;
            } while (var_a1 < temp_a0_2);
        }
        var_a3 += 0xBC;
        var_t0 += 1;
        var_a2 += 0x34;
    } while (var_t0 < 2);
    if (arg0 == 0) {
        var_a3_2 = 8;
        if ((*D_80078C26) == 3) {
            var_a3_2 = 6;
        }
        func_80024990(M2C_FIELD((*D_800EF524), s32 *, 0x474), 1, 0x32, var_a3_2);
        (*D_800EEBA8) = 0;
        (*D_800F0550) = (*D_800F0578);
        if ((*D_80085429) != 0) {
            func_800D1404((*D_800F0578));
        }
    }
    if ((*D_80078C34) != 0x7006) {
        func_800282A0(0x7006);
    }
    return 1;
}
