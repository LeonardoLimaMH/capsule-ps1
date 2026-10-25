#include "common.h"

void func_800B7298(s32 arg0) {
    extern s16 D_800ED88C[];
    extern u8 D_800EEB9C[];
    extern void * D_800EFF6C[];
    u8 *var_a2;
    u8 *var_a2_2;
    s16 var_v0;
    s32 var_a1;
    s32 var_a1_2;
    void *temp_v0;
    void *temp_v0_2;

    switch (arg0) {                                 /* irregular */
    case 1:
        if ((*D_800ED88C) == 1) {
            M2C_FIELD((*D_800EFF6C), u16 *, 0x4A) = (u16) (M2C_FIELD((*D_800EFF6C), u16 *, 0x4A) - 2);
        }
        var_a1 = 0;
        var_a2 = D_800EEB9C;
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x1C), u16 *, 0x46) = (u16) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x1C), u16 *, 0x46) + 6);
        do {
            temp_v0 = M2C_FIELD(var_a2, void **, 0x28);
            var_a1 += 1;
            M2C_FIELD(temp_v0, u16 *, 0x46) = (u16) (M2C_FIELD(temp_v0, u16 *, 0x46) + 6);
            var_a2 += 4;
        } while (var_a1 < 7);
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x74C), u16 *, 0x46) = (u16) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x74C), u16 *, 0x46) - 6);
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x754), u16 *, 0x46) = (u16) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x754), u16 *, 0x46) - 6);
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x75C), u16 *, 0x46) = (u16) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x75C), u16 *, 0x46) - 6);
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x770), u16 *, 0x46) = (u16) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x770), u16 *, 0x46) - 6);
        var_v0 = M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x778), u16 *, 0x46) + 6;
block_14:
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x778), s16 *, 0x46) = var_v0;
        return;
    case 2:
        if ((*D_800ED88C) == 1) {
            M2C_FIELD((*D_800EFF6C), u16 *, 0x4A) = (u16) (M2C_FIELD((*D_800EFF6C), u16 *, 0x4A) + 2);
        }
        var_a1_2 = 0;
        var_a2_2 = D_800EEB9C;
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x1C), u16 *, 0x46) = (u16) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x1C), u16 *, 0x46) - 6);
        do {
            temp_v0_2 = M2C_FIELD(var_a2_2, void **, 0x28);
            var_a1_2 += 1;
            M2C_FIELD(temp_v0_2, u16 *, 0x46) = (u16) (M2C_FIELD(temp_v0_2, u16 *, 0x46) - 6);
            var_a2_2 += 4;
        } while (var_a1_2 < 7);
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x74C), u16 *, 0x46) = (u16) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x74C), u16 *, 0x46) + 6);
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x754), u16 *, 0x46) = (u16) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x754), u16 *, 0x46) + 6);
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x75C), u16 *, 0x46) = (u16) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x75C), u16 *, 0x46) + 6);
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x770), u16 *, 0x46) = (u16) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x770), u16 *, 0x46) + 6);
        var_v0 = M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x778), u16 *, 0x46) - 6;
        goto block_14;
    }
}
