#include "common.h"

void func_8011AA1C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5) {
    extern u8 * D_80132114[];
    extern s32 * D_8013212C[];
    extern void * D_80132130[];
    s32 *temp_a1_2;
    s32 *temp_a1_3;
    u32 temp_a1;
    s32 var_a0;
    s8 var_v0;

    var_a0 = 0;
    temp_a1 = arg0 * 0x10;
    if (M2C_FIELD((temp_a1 + 0x1F800000), s32 *, 0x1088) & 0x01000000) {
loop_1:
        if (var_a0 != 0x10000) {
            var_a0 += 1;
            if (!(M2C_FIELD((temp_a1 + 0x1F800000), s32 *, 0x1088) & 0x01000000)) {

            } else {
                goto loop_1;
            }
        } else {
            slpm_printf("DMA STATUS ERROR %x\n", M2C_FIELD((temp_a1 + 0x1F800000), s32 *, 0x1088), 0x10000);
        }
    }
    if (arg5 == 1) {
        var_v0 = M2C_FIELD((*D_80132130), u8 *, 2) | (1 << arg0);
    } else {
        var_v0 = M2C_FIELD((*D_80132130), u8 *, 2) & ~(1 << arg0);
    }
    M2C_FIELD((*D_80132130), s8 *, 2) = var_v0;
    temp_a1_2 = (arg0 * 0x10) + 0x1F801080;
    *(*D_8013212C) |= 1 << ((arg0 * 4) + 3);
    *temp_a1_2 = arg1;
    temp_a1_3 = temp_a1_2 + 4;
    *temp_a1_3 = (arg2 << 0x10) | arg3;
    if (!(*(*D_80132114) & 0x40)) {
        do {

        } while (!(*(*D_80132114) & 0x40));
    }
    *(temp_a1_3 + 4) = arg4;
}
