#include "common.h"

void func_800B0DE4(s32 arg0, s32 arg1) {
    extern u8 D_80063940[];
    extern s32 D_8006AF84[];
    extern u8 D_80091618[];
    extern u8 D_800ED860[];
    extern u8 D_80100F38[];
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_v1_2;
    s32 var_v1;
    u32 temp_a0_3;
    u32 temp_v1;
    void *temp_a0_2;
    void *temp_v0;
    void *temp_v1_3;

    temp_a0 = ((u32) M2C_FIELD(((*(u16 *)((arg1 * 0x1A8) + D_80091618) * 0x3C) + D_80063940), u32 *, 8) >> 0xE) & 7;
    if ((temp_a0 != 4) && (temp_v1 = M2C_FIELD(((arg1 * 0x79C) + D_80100F38), u32 *, 0x798), (((temp_v1 >> 3) & 1) != 1)) && (((temp_v1 >> 4) & 1) != 1)) {
        temp_a0_2 = (temp_a0 * 4) + D_800ED860;
        temp_a3 = (*D_8006AF84) % 28800;
        temp_a1 = M2C_FIELD(temp_a0_2, s16 *, 2) * 0x4B0;
        temp_v1_2 = M2C_FIELD(temp_a0_2, s16 *, 0) * 0x4B0;
        if (temp_a1 < temp_v1_2) {
            if (temp_a1 < temp_a3) {
                if (temp_a3 >= temp_v1_2) {
                    goto block_10;
                }
            } else {
                goto block_9;
            }
        } else if ((temp_a3 >= temp_v1_2) && (temp_a3 < temp_a1)) {
block_9:
block_10:
            var_v1 = arg1 & 0xFFFF;
            if (arg0 != 2) {
                if (func_800E16AC(arg1 & 0xFFFF, temp_a1, temp_a1, temp_a3) == 1) {
                    var_v1 = arg1 & 0xFFFF;
                    goto block_13;
                }
                temp_v1_3 = (arg1 * 0x79C) + D_80100F38;
                temp_a0_3 = M2C_FIELD(temp_v1_3, u32 *, 0x798);
                if (!((temp_a0_3 >> 4) & 1)) {
                    M2C_FIELD(temp_v1_3, u32 *, 0x798) = (u32) (temp_a0_3 | 0x10);
                    func_800C8320(M2C_FIELD(((arg1 * 0x1A8) + D_80091618), s32 *, 0x178), arg0, 1);
                }
            } else {
block_13:
                M2C_FIELD(((var_v1 * 0x1A8) + D_80091618), s16 *, 0x19C) = 0;
                temp_v0 = (var_v1 * 0x79C) + D_80100F38;
                M2C_FIELD(temp_v0, s16 *, 0x36E) = 0;
                M2C_FIELD(temp_v0, s32 *, 0x798) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x798) & ~8 & ~0x10);
            }
        }
    }
}
