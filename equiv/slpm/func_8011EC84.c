#include "common.h"

void func_8011EC84(u16 *arg0, u32 arg1) {
    extern void * D_801333D4;
    extern u16 D_801333EC;
    s32 temp_a1_2;
    s32 var_v0;
    s32 var_v1;
    u16 *var_s2;
    u16 temp_a0;
    u16 temp_a1;
    u16 temp_v0;
    u32 var_s0;
    u32 var_s1;
    u32 var_v1_2;
    u32 var_v1_3;

    var_s1 = arg1;
    temp_a1 = M2C_FIELD(D_801333D4, u16 *, 0x1AE);
    var_s2 = arg0;
    M2C_FIELD(D_801333D4, u16 *, 0x1A6) = (u16) D_801333EC;
    slpm__spu_Fw1ts(temp_a1);
    var_v0 = var_s1 < 0x41U;
    if (var_s1 != 0) {
        do {
            var_s0 = 0x40;
            if (var_v0 != 0) {
                var_s0 = var_s1;
            }
            var_v1 = 0;
            if ((s32) var_s0 > 0) {
                do {
                    temp_v0 = *var_s2;
                    var_s2 += 2;
                    var_v1 += 2;
                    M2C_FIELD(D_801333D4, u16 *, 0x1A8) = temp_v0;
                } while (var_v1 < (s32) var_s0);
            }
            temp_a0 = M2C_FIELD(D_801333D4, u16 *, 0x1AA);
            M2C_FIELD(D_801333D4, u16 *, 0x1AA) = (u16) ((temp_a0 & 0xFFCF) | 0x10);
            slpm__spu_Fw1ts(temp_a0);
            if (M2C_FIELD(D_801333D4, u16 *, 0x1AE) & 0x400) {
                var_v1_2 = 1;
loop_8:
                if (var_v1_2 >= 0xF01U) {
                    slpm_printf("SPU:T/O [%s]\n", "wait (wrdy H -> L)");
                } else {
                    var_v1_2 += 1;
                    if (M2C_FIELD(D_801333D4, u16 *, 0x1AE) & 0x400) {
                        goto loop_8;
                    }
                }
            }
            var_s1 -= var_s0;
            slpm__spu_Fw1ts();
            slpm__spu_Fw1ts();
            var_v0 = var_s1 < 0x41U;
        } while (var_s1 != 0);
    }
    temp_a1_2 = temp_a1 & 0x7FF & 0xFFFF;
    M2C_FIELD(D_801333D4, u16 *, 0x1AA) = (u16) (M2C_FIELD(D_801333D4, u16 *, 0x1AA) & 0xFFCF);
    if ((M2C_FIELD(D_801333D4, u16 *, 0x1AE) & 0x7FF) != temp_a1_2) {
        var_v1_3 = 1;
loop_14:
        if (var_v1_3 >= 0xF01U) {
            slpm_printf("SPU:T/O [%s]\n", "wait (dmaf clear/W)");
            return;
        }
        var_v1_3 += 1;
        if ((M2C_FIELD(D_801333D4, u16 *, 0x1AE) & 0x7FF) == temp_a1_2) {

        } else {
            goto loop_14;
        }
    }
}
