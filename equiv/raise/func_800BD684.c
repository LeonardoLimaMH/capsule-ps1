#include "common.h"

void func_800BD684(s32 arg0) {
    extern u8 D_800EFF58[];
    u8 *var_a2;
    u8 *var_a2_2;
    s16 var_v0;
    s32 var_a1;
    s32 var_a1_2;
    void *temp_v0;
    void *temp_v0_2;

    switch (arg0) {                                 /* irregular */
    case 1:
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5F0), u16 *, 0x4A) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5F0), u16 *, 0x4A) + 3);
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x42C), u16 *, 0x4A) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x42C), u16 *, 0x4A) + 6);
        var_a1 = 0;
        var_a2 = D_800EFF58;
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5B0), u16 *, 0x4A) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5B0), u16 *, 0x4A) - 8);
        do {
            temp_v0 = M2C_FIELD(var_a2, void **, 0x5B8);
            var_a1 += 1;
            M2C_FIELD(temp_v0, u16 *, 0x4A) = (u16) (M2C_FIELD(temp_v0, u16 *, 0x4A) - 8);
            var_a2 += 4;
        } while (var_a1 < 3);
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5D0), u16 *, 0x4A) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5D0), u16 *, 0x4A) - 8);
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5D8), u16 *, 0x4A) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5D8), u16 *, 0x4A) - 8);
        var_v0 = M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5F8), u16 *, 0x4A) - 8;
block_10:
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5F8), s16 *, 0x4A) = var_v0;
        return;
    case 2:
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5F0), u16 *, 0x4A) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5F0), u16 *, 0x4A) - 3);
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x42C), u16 *, 0x4A) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x42C), u16 *, 0x4A) - 6);
        var_a1_2 = 0;
        var_a2_2 = D_800EFF58;
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5B0), u16 *, 0x4A) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5B0), u16 *, 0x4A) + 8);
        do {
            temp_v0_2 = M2C_FIELD(var_a2_2, void **, 0x5B8);
            var_a1_2 += 1;
            M2C_FIELD(temp_v0_2, u16 *, 0x4A) = (u16) (M2C_FIELD(temp_v0_2, u16 *, 0x4A) + 8);
            var_a2_2 += 4;
        } while (var_a1_2 < 3);
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5D0), u16 *, 0x4A) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5D0), u16 *, 0x4A) + 8);
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5D8), u16 *, 0x4A) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5D8), u16 *, 0x4A) + 8);
        var_v0 = M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5F8), u16 *, 0x4A) + 8;
        goto block_10;
    }
}
