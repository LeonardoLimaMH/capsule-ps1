#include "common.h"

void func_800BAD90(s32 arg0) {
    extern u8 D_800EFF58[];
    u8 *var_a0;
    u8 *var_a0_2;
    u8 *var_a2;
    u8 *var_a2_2;
    s16 var_v0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    switch (arg0) {                                 /* irregular */
    case 1:
        var_a1 = 0;
        var_a2 = D_800EFF58;
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x20), u16 *, 0x46) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x20), u16 *, 0x46) + 0xC);
        do {
            temp_v0 = M2C_FIELD(var_a2, void **, 0x28);
            var_a1 += 1;
            M2C_FIELD(temp_v0, u16 *, 0x46) = (u16) (M2C_FIELD(temp_v0, u16 *, 0x46) + 0xC);
            var_a2 += 4;
        } while (var_a1 < 7);
        var_a1_2 = 0;
        var_a0 = D_800EFF58;
        do {
            temp_v0_2 = M2C_FIELD(var_a0, void **, 0x600);
            var_a1_2 += 1;
            M2C_FIELD(temp_v0_2, u16 *, 0x46) = (u16) (M2C_FIELD(temp_v0_2, u16 *, 0x46) + 0xC);
            var_a0 += 4;
        } while (var_a1_2 < 3);
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x6C), u16 *, 0x4A) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x6C), u16 *, 0x4A) - 3);
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x74), u16 *, 0x4A) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x74), u16 *, 0x4A) - 3);
        var_v0 = M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5F8), u16 *, 0x4A) - 3;
block_14:
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5F8), s16 *, 0x4A) = var_v0;
        return;
    case 2:
        var_a1_3 = 0;
        var_a2_2 = D_800EFF58;
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x20), u16 *, 0x46) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x20), u16 *, 0x46) - 0xC);
        do {
            temp_v0_3 = M2C_FIELD(var_a2_2, void **, 0x28);
            var_a1_3 += 1;
            M2C_FIELD(temp_v0_3, u16 *, 0x46) = (u16) (M2C_FIELD(temp_v0_3, u16 *, 0x46) - 0xC);
            var_a2_2 += 4;
        } while (var_a1_3 < 7);
        var_a1_4 = 0;
        var_a0_2 = D_800EFF58;
        do {
            temp_v0_4 = M2C_FIELD(var_a0_2, void **, 0x600);
            var_a1_4 += 1;
            M2C_FIELD(temp_v0_4, u16 *, 0x46) = (u16) (M2C_FIELD(temp_v0_4, u16 *, 0x46) - 0xC);
            var_a0_2 += 4;
        } while (var_a1_4 < 3);
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x6C), u16 *, 0x4A) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x6C), u16 *, 0x4A) + 3);
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x74), u16 *, 0x4A) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x74), u16 *, 0x4A) + 3);
        var_v0 = M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5F8), u16 *, 0x4A) + 3;
        goto block_14;
    }
}
