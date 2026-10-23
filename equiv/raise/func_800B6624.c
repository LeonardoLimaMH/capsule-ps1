#include "common.h"

void func_800B6624(void *arg0) {
    extern M2C_UNK D_80063940[];
    extern M2C_UNK D_8006AFCC[];
    extern s16 D_80078C20[];
    extern s16 D_80078C28[];
    extern u16 D_8008EE44[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800F07D4[];
    extern M2C_UNK D_800F1A68[];
    extern M2C_UNK D_80100F38[];
    M2C_UNK *var_v1;
    s16 temp_s2;
    s16 var_a2;
    s16 var_a2_2;
    s16 var_a2_3;
    s16 var_a2_4;
    s16 var_a3;
    s16 var_a3_2;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 var_a0;
    s32 var_a0_2;
    u16 temp_s1;
    u16 temp_s1_2;
    u32 temp_a0;
    u32 temp_v1;
    u32 temp_v1_5;
    u32 var_v0;
    u32 var_v0_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s4;
    void *temp_t0;
    void *temp_v1_2;
    void *temp_v1_8;

    temp_a0 = M2C_FIELD(arg0, u32 *, 0x34);
    if (((temp_a0 >> 8) & 1) != (*D_80078C20)) {
        temp_s0 = ((func_800B1260((temp_a0 >> 9) & 1) & 0xFFFF) * 0x79C) + (*D_80100F38);
        func_80013920(arg0);
        if (arg0 == M2C_FIELD(temp_s0, s32 *, 0x18C)) {
            M2C_FIELD(temp_s0, s32 *, 0x18C) = 0;
        }
    } else {
        if ((u16) (*D_8008EE44) >= 0x41U) {
            func_80013920(arg0);
            return;
        }
        temp_s2 = (*D_80078C28);
        if (temp_s2 == 1) {
            if ((M2C_FIELD(arg0, s32 *, 0x38) & 1) != temp_s2) {
                temp_v0 = func_800B1260((temp_a0 >> 9) & 1);
                temp_a0_2 = temp_v0 & 0xFFFF;
                temp_s0_2 = (temp_a0_2 * 0x79C) + (*D_80100F38);
                temp_s4 = (temp_a0_2 * 0x1A8) + (*D_80091618);
                temp_s1 = M2C_FIELD(temp_s4, u16 *, 0);
                if ((arg0 == M2C_FIELD(temp_s0_2, s32 *, 0x21C)) && ((M2C_FIELD(temp_s0_2, s16 *, 0x228) != temp_s2) || (func_800E16EC(temp_a0_2) != 0))) {
                    temp_v1 = M2C_FIELD(arg0, u32 *, 0x34);
                    temp_v0_2 = (temp_v1 >> 0xA) & 3;
                    if (temp_v0_2 != 0) {
                        if (temp_v0_2 != temp_s2) {
                            var_v1 = (*D_8006AFCC);
                        } else {
                            temp_a0_3 = (temp_v1 >> 0xC) & 0xF;
                            if ((u32) (temp_a0_3 - 0xA) < 3U) {
                                temp_v1_2 = ((((((u32) M2C_FIELD(((temp_s1 * 0x3C) + (*D_80063940)), u32 *, 0x20) >> 0xF) & 0xF) * 9) + ((s16) (temp_a0_3 - 0xA) * 3)) * 2) + (*D_800F1A68);
                                var_a2 = M2C_FIELD(temp_v1_2, s16 *, 0);
                                var_a3 = M2C_FIELD(temp_v1_2, s16 *, 2);
                                var_a0 = M2C_FIELD(temp_s4, s32 *, 0x178);
                                goto block_29;
                            }
                            if (temp_a0_3 == 0xE) {
                                var_a3 = (s16) M2C_FIELD((((((u32) M2C_FIELD(((temp_s1 * 0x3C) + (*D_80063940)), u32 *, 0x20) >> 0xF) & 0xF) * 5) + (*D_800F07D4)), u8 *, 3);
                                var_a0 = M2C_FIELD(temp_s4, s32 *, 0x178);
                                var_a2 = 0;
                                goto block_29;
                            }
                            goto block_30;
                        }
                    } else {
                        temp_v1_3 = (temp_v1 >> 0xC) & 0xF;
                        if ((u32) (temp_v1_3 - 4) >= 2U) {
                            if (temp_v1_3 == 8) {
                                goto block_16;
                            }
                            var_v0 = (u32) M2C_FIELD(((temp_s1 * 0x3C) + (*D_80063940)), u32 *, 0x18) >> 0xE;
                        } else {
block_16:
                            var_v0 = (u32) M2C_FIELD(((temp_s1 * 0x3C) + (*D_80063940)), u32 *, 0x18) >> 0x11;
                        }
                        temp_v1_4 = var_v0 & 7;
                        if (temp_v1_4 != temp_s2) {
                            var_a2_2 = 0;
                            if (temp_v1_4 != 7) {

                            } else {
                                var_a2_2 = 8;
                            }
                        } else {
                            var_a2_2 = -8;
                        }
                        var_a2 = var_a2_2;
                        var_a0 = M2C_FIELD((((temp_v0 & 0xFFFF) * 0x1A8) + (*D_80091618)), s32 *, 0x178);
                        var_a3 = 0x10;
block_29:
                        func_800C5850(var_a0, arg0, var_a2, (u8) var_a3);
                        goto block_30;
                    }
                    goto block_31;
                }
            }
        } else {
block_30:
            var_v1 = (*D_8006AFCC);
block_31:
            if (((M2C_FIELD(var_v1, u16 *, 0x36) == 1) || (M2C_FIELD(var_v1, u16 *, 0x38) == 1)) && (temp_v0_3 = func_800B1260(((u32) M2C_FIELD(arg0, u32 *, 0x34) >> 9) & 1), temp_a0_4 = temp_v0_3 & 0xFFFF, temp_t0 = (temp_a0_4 * 0x1A8) + (*D_80091618), temp_s1_2 = M2C_FIELD(temp_t0, u16 *, 0), (arg0 == M2C_FIELD(((temp_a0_4 * 0x79C) + (*D_80100F38)), s32 *, 0x21C)))) {
                temp_v1_5 = M2C_FIELD(arg0, u32 *, 0x34);
                temp_v0_4 = (temp_v1_5 >> 0xA) & 3;
                switch (temp_v0_4) {                /* irregular */
                case 0:
                    temp_v1_6 = (temp_v1_5 >> 0xC) & 0xF;
                    if ((u32) (temp_v1_6 - 4) >= 2U) {
                        if (temp_v1_6 == 8) {
                            goto block_40;
                        }
                        var_v0_2 = (u32) M2C_FIELD(((temp_s1_2 * 0x3C) + (*D_80063940)), u32 *, 0x18) >> 0xE;
                    } else {
block_40:
                        var_v0_2 = (u32) M2C_FIELD(((temp_s1_2 * 0x3C) + (*D_80063940)), u32 *, 0x18) >> 0x11;
                    }
                    temp_v1_7 = var_v0_2 & 7;
                    if (temp_v1_7 != 1) {
                        var_a2_3 = 0;
                        if (temp_v1_7 != 7) {

                        } else {
                            var_a2_3 = 8;
                        }
                    } else {
                        var_a2_3 = -8;
                    }
                    var_a2_4 = var_a2_3;
                    var_a0_2 = M2C_FIELD((((temp_v0_3 & 0xFFFF) * 0x1A8) + (*D_80091618)), s32 *, 0x178);
                    var_a3_2 = 0x10;
block_53:
                    func_800C5850(var_a0_2, arg0, var_a2_4, (u8) var_a3_2);
                    break;
                case 1:
                    temp_a0_5 = (temp_v1_5 >> 0xC) & 0xF;
                    if ((u32) (temp_a0_5 - 0xA) < 3U) {
                        temp_v1_8 = ((((((u32) M2C_FIELD(((temp_s1_2 * 0x3C) + (*D_80063940)), u32 *, 0x20) >> 0xF) & 0xF) * 9) + ((s16) (temp_a0_5 - 0xA) * 3)) * 2) + (*D_800F1A68);
                        var_a2_4 = M2C_FIELD(temp_v1_8, s16 *, 0);
                        var_a3_2 = M2C_FIELD(temp_v1_8, s16 *, 2);
                        var_a0_2 = M2C_FIELD(temp_t0, s32 *, 0x178);
                        goto block_53;
                    }
                    if (temp_a0_5 == 0xE) {
                        var_a3_2 = (s16) M2C_FIELD((((((u32) M2C_FIELD(((temp_s1_2 * 0x3C) + (*D_80063940)), u32 *, 0x20) >> 0xF) & 0xF) * 5) + (*D_800F07D4)), u8 *, 3);
                        var_a0_2 = M2C_FIELD(temp_t0, s32 *, 0x178);
                        var_a2_4 = 0;
                        goto block_53;
                    }
                    break;
                }
            }
        }
    }
}
