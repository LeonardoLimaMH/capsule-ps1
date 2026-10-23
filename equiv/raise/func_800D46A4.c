#include "common.h"

s32 func_800D46A4(void) {
    extern u16 D_8006AF80[];
    extern s16 D_80078C26[];
    extern s16 D_80078C28[];
    extern s32 D_80078C34[];
    extern M2C_UNK D_800900C0[];
    extern M2C_UNK D_80091618[];
    extern s32 D_800EEBA8[];
    extern u16 D_800EF2D8[];
    extern M2C_UNK D_800EF524[];
    extern s32 D_800F0550[];
    extern s32 D_800F0578[];
    extern u16 D_800F1D14[];
    M2C_UNK *var_a2;
    M2C_UNK *var_t0;
    M2C_UNK var_a3_2;
    s32 temp_a0_2;
    s32 var_a1;
    s32 var_a3;
    void *temp_a0;
    void *var_v1;

    if ((*D_80078C28) != 0) {
        return 0;
    }
    if ((*D_800F1D14) != 0) {
        (*D_800F1D14) -= 1;
        return 0;
    }
    (*D_800F1D14) = 0x10;
    (*D_8006AF80) = (*D_800EF2D8);
    func_800B9F50(1);
    func_800D4404(7, 1);
    func_800B4C40((*D_8006AF80));
    var_a3 = 0;
    var_a2 = (*D_800900C0);
    var_t0 = (*D_800EF524);
    do {
        M2C_FIELD(var_t0, s32 *, 0x448) = -1;
        temp_a0 = M2C_FIELD(((var_a3 * 4) + (((*D_8006AF80) * 0x1A8) + (*D_80091618))), void **, 0x18C);
        M2C_FIELD(temp_a0, s32 *, 0x50) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x50) & ~8);
        temp_a0_2 = M2C_FIELD(var_a2, s32 *, 0xC);
        var_a1 = 0;
        if (temp_a0_2 > 0) {
            var_v1 = M2C_FIELD(var_a2, s32 *, 0xA0) + 0x2B;
            do {
                var_a1 += 1;
                M2C_FIELD(var_v1, s8 *, -1) = 0x80;
                M2C_FIELD(var_v1, s8 *, -2) = 0x80;
                M2C_FIELD(var_v1, s8 *, -3) = 0x80;
                M2C_FIELD(var_v1, s8 *, 0) = 0x28;
                var_v1 += 0x2C;
            } while (var_a1 < temp_a0_2);
        }
        var_a2 += 0xBC;
        var_a3 += 1;
        var_t0 += 0x34;
    } while (var_a3 < 2);
    var_a3_2 = 0xC;
    if ((*D_80078C26) == 3) {
        var_a3_2 = 0xA;
    }
    func_80024990(M2C_FIELD((*D_800EF524), s32 *, 0x474), 1, 0x32, var_a3_2);
    (*D_800EEBA8) = 0;
    (*D_800F0550) = (*D_800F0578);
    if ((*D_80078C34) != 0x7006) {
        func_800282A0(0x7006);
    }
    return 1;
}
