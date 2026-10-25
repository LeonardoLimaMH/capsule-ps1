#include "common.h"

void func_800981F0(void *arg0) {
    extern u8 D_8008ED68[];
    extern u8 D_800AD55C[];
    u32 sp10;
    u8 sp14;
    u8 sp15;
    u8 sp16;
    u16 sp18;
    s32 sp20;
    s32 sp24;
    u32 sp28;
    void *sp2C;
    u8 sp30;
    u8 sp31;
    u8 sp32;
    u16 sp38;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s16 *var_s7;
    s16 temp_a0_14;
    s16 temp_a0_15;
    s16 temp_a0_6;
    s16 temp_a0_7;
    s16 temp_s0_2;
    s16 temp_v0_10;
    s16 temp_v0_11;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v1_3;
    s16 temp_v1_8;
    s32 temp_a1_2;
    s32 temp_a1_4;
    s32 temp_a2;
    s32 temp_a2_3;
    s32 temp_fp;
    s32 temp_fp_2;
    s32 temp_fp_3;
    s32 temp_lo;
    s32 temp_lo_10;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_lo_4;
    s32 temp_lo_5;
    s32 temp_lo_6;
    s32 temp_lo_7;
    s32 temp_lo_8;
    s32 temp_lo_9;
    s32 temp_s6;
    s32 temp_s6_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1_2;
    s32 temp_v1_7;
    s32 var_a0;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_6;
    s32 var_a2_3;
    s32 var_a2_5;
    s32 var_a3;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7_2;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    s32 var_v0_10;
    s32 var_v0_11;
    s32 var_v0_12;
    s32 var_v0_14;
    s32 var_v0_15;
    s32 var_v0_17;
    s32 var_v0_18;
    s32 var_v0_19;
    s32 var_v0_20;
    s32 var_v0_21;
    s32 var_v0_22;
    s32 var_v0_23;
    s32 var_v0_24;
    s32 var_v0_25;
    s32 var_v0_26;
    s32 var_v0_27;
    s32 var_v0_28;
    s32 var_v0_29;
    s32 var_v0_2;
    s32 var_v0_30;
    s32 var_v0_3;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v0_9;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_7;
    s32 var_v1_8;
    s8 var_a0_2;
    s8 var_a0_5;
    s8 var_a1_5;
    s8 var_a1_9;
    s8 var_v1_10;
    s8 var_v1_5;
    s8 var_v1_6;
    s8 var_v1_9;
    u16 temp_a1_3;
    u16 temp_a1_5;
    u16 temp_a2_2;
    u16 temp_t1;
    u16 var_a1_3;
    u16 var_a1_4;
    u16 var_a1_7;
    u16 var_a1_8;
    u16 var_s0;
    u16 var_s1;
    u16 var_s2;
    u16 var_s2_2;
    u32 temp_a0_10;
    u32 temp_a0_2;
    u32 temp_s0;
    u32 temp_s1;
    u32 temp_v1;
    u32 temp_v1_6;
    u32 var_a2_2;
    u32 var_a2_4;
    u8 temp_a0_11;
    u8 temp_a0_12;
    u8 temp_a0_13;
    u8 temp_a0_3;
    u8 temp_a0_4;
    u8 temp_a0_5;
    u8 var_a2;
    u8 var_t0_2;
    u8 var_v0;
    u8 var_v0_13;
    u8 var_v0_16;
    u8 var_v0_4;
    void *temp_a0;
    void *temp_a0_16;
    void *temp_a0_8;
    void *temp_a0_9;
    void *temp_a1;
    void *temp_a3;
    void *temp_t4;
    void *temp_v0_12;
    void *temp_v0_7;
    void *temp_v1_10;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_9;
    void *var_s4;
    void *var_s4_2;

    if ((M2C_FIELD(arg0, u32 *, 0x38) & 1) != 1) {
        do {

        } while (func_80015D14(arg0 + 0x14) != 0);
        if (M2C_FIELD(arg0, void **, 0x18) != NULL) {
            if (((u32) M2C_FIELD(arg0, u32 *, 0x38) >> 3) & 1) {
                func_80016148(arg0);
            }
            if (M2C_FIELD(arg0, s16 *, 0x54) == 0) {
                temp_a0 = M2C_FIELD(arg0, void **, 0x18);
                temp_a0_2 = M2C_FIELD(temp_a0, u32 *, 8);
                var_s7 = (temp_a0_2 + (M2C_FIELD(temp_a0, s32 *, 0) * 0x24)) - 0x24;
                sp10 = temp_a0_2;
                temp_a0_3 = M2C_FIELD(arg0, u8 *, 0x58);
                if (M2C_FIELD(D_8008ED68, s32 *, 0xA74) == 0x1000) {
                    var_v0 = temp_a0_3;
                } else if (M2C_FIELD(D_8008ED68, s32 *, 0xA74) < 0x1000) {
                    var_v0_2 = temp_a0_3 * M2C_FIELD(D_8008ED68, s32 *, 0xA74);
                    if (var_v0_2 < 0) {
                        var_v0_2 += 0xFFF;
                    }
                    var_v0 = (u8) (var_v0_2 >> 0xC);
                } else {
                    var_v0_3 = (0xFF - temp_a0_3) * (M2C_FIELD(D_8008ED68, s32 *, 0xA74) - 0x1000);
                    if (var_v0_3 < 0) {
                        var_v0_3 += 0xFFF;
                    }
                    var_v0 = (var_v0_3 >> 0xC) + temp_a0_3;
                }
                temp_a0_4 = M2C_FIELD(arg0, u8 *, 0x59);
                sp14 = var_v0;
                if (M2C_FIELD(D_8008ED68, s32 *, 0xA74) == 0x1000) {
                    var_v0_4 = temp_a0_4;
                } else if (M2C_FIELD(D_8008ED68, s32 *, 0xA74) < 0x1000) {
                    var_v0_5 = temp_a0_4 * M2C_FIELD(D_8008ED68, s32 *, 0xA74);
                    if (var_v0_5 < 0) {
                        var_v0_5 += 0xFFF;
                    }
                    var_v0_4 = (u8) (var_v0_5 >> 0xC);
                } else {
                    var_v0_6 = (0xFF - temp_a0_4) * (M2C_FIELD(D_8008ED68, s32 *, 0xA74) - 0x1000);
                    if (var_v0_6 < 0) {
                        var_v0_6 += 0xFFF;
                    }
                    var_v0_4 = (var_v0_6 >> 0xC) + temp_a0_4;
                }
                temp_a0_5 = M2C_FIELD(arg0, u8 *, 0x5A);
                sp15 = var_v0_4;
                if (M2C_FIELD(D_8008ED68, s32 *, 0xA74) == 0x1000) {
                    var_a2 = temp_a0_5;
                } else {
                    temp_lo = temp_a0_5 * M2C_FIELD(D_8008ED68, s32 *, 0xA74);
                    if (M2C_FIELD(D_8008ED68, s32 *, 0xA74) < 0x1000) {
                        var_a2 = (u8) (temp_lo >> 0xC);
                        if (temp_lo < 0) {
                            var_a2 = (u8) ((s32) (temp_lo + 0xFFF) >> 0xC);
                        }
                    } else {
                        var_v0_7 = (0xFF - temp_a0_5) * (M2C_FIELD(D_8008ED68, s32 *, 0xA74) - 0x1000);
                        if (var_v0_7 < 0) {
                            var_v0_7 += 0xFFF;
                        }
                        var_a2 = (var_v0_7 >> 0xC) + temp_a0_5;
                    }
                }
                sp20 = M2C_FIELD(arg0, s16 *, 0x46) + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2);
                temp_a1 = M2C_FIELD(var_s7, void **, 8);
                sp20 += M2C_FIELD(arg0, s8 *, 0x56);
                temp_fp = M2C_FIELD(arg0, s16 *, 0x4A) + ((s32) (M2C_FIELD(D_8008ED68, u32 *, 0x10C) + ((u32) M2C_FIELD(D_8008ED68, u32 *, 0x10C) >> 0x1F)) >> 1) + M2C_FIELD(arg0, s8 *, 0x57);
                sp18 = M2C_FIELD(temp_a1, u16 *, 6) + M2C_FIELD(arg0, u16 *, 0x2E);
                sp16 = var_a2;
                if ((u32) var_s7 >= sp10) {
                    sp24 = (s32) (s16) (M2C_FIELD(temp_a1, u16 *, 4) + M2C_FIELD(arg0, u16 *, 0x2C));
                    var_s4 = var_s7 + 0x10;
                    do {
                        var_s5 = 0;
                        var_s6 = 0;
                        var_a2_2 = 0;
                        temp_s0 = M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), u32 *, 0x1090);
                        if (temp_s0 != 0) {
                            temp_v1 = temp_s0 + 0x28;
                            if ((u32) (M2C_FIELD(D_8008ED68, void **, 0) + 0x4594) >= temp_v1) {
                                var_a2_2 = temp_v1;
                            }
                        }
                        M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), u32 *, 0x1090) = var_a2_2;
                        SetPolyFT4((void *) temp_s0, M2C_FIELD(D_8008ED68, void **, 0), (void *) var_a2_2);
                        SetShadeTex((void *) temp_s0, 0);
                        SetSemiTrans((void *) temp_s0, ((u32) M2C_FIELD(arg0, u32 *, 0x38) >> 6) & 1);
                        M2C_FIELD(temp_s0, u8 *, 4) = sp14;
                        M2C_FIELD(temp_s0, u8 *, 5) = sp15;
                        M2C_FIELD(temp_s0, u8 *, 6) = sp16;
                        temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x34) & 0x7F;
                        if (temp_v1_2 == 0) {
                            temp_a2 = M2C_FIELD(var_s4, u16 *, -4) + M2C_FIELD(arg0, s16 *, 0x64);
                            var_v0_8 = temp_a2;
                            if (temp_a2 < 0) {
                                var_v0_8 = temp_a2 + 0xF;
                            }
                            temp_a1_2 = var_v0_8 >> 4;
                            var_a0 = sp24 + ((temp_a2 - (temp_a1_2 * 0x10)) * 0x10);
                            var_a1 = (s16) sp18 + M2C_FIELD(arg0, s16 *, 0x66) + temp_a1_2;
                        } else {
                            var_a0 = 0x3F0;
                            if (temp_v1_2 == 1) {
                                var_a0 = 0x100;
                                var_a1 = 0x1FE;
                            } else {
                                var_a1 = 0x17F;
                            }
                        }
                        M2C_FIELD(temp_s0, s16 *, 0xE) = GetClut(var_a0, var_a1);
                        temp_a0_6 = M2C_FIELD(arg0, s16 *, 0x50);
                        var_v1 = (*var_s7 - M2C_FIELD(arg0, s8 *, 0x56)) * temp_a0_6;
                        if (var_v1 < 0) {
                            var_v1 += 0x1F;
                        }
                        var_v0_9 = M2C_FIELD(var_s4, u16 *, 4) * temp_a0_6;
                        var_a2_3 = var_v1 >> 5;
                        if (var_v0_9 < 0) {
                            var_v0_9 += 0x1F;
                        }
                        temp_t1 = M2C_FIELD(var_s4, u16 *, 2);
                        var_a3 = (var_v0_9 >> 5) + var_a2_3;
                        temp_v0 = var_a2_3;
                        if (temp_t1 & 2) {
                            var_a2_3 = var_a3;
                            var_a3 = temp_v0;
                        }
                        temp_a0_7 = M2C_FIELD(arg0, s16 *, 0x52);
                        var_v1_2 = (M2C_FIELD(var_s4, s16 *, -0xE) - M2C_FIELD(arg0, s8 *, 0x57)) * temp_a0_7;
                        if (var_v1_2 < 0) {
                            var_v1_2 += 0x1F;
                        }
                        var_v0_10 = M2C_FIELD(var_s4, u16 *, 6) * temp_a0_7;
                        var_a1_2 = var_v1_2 >> 5;
                        if (var_v0_10 < 0) {
                            var_v0_10 += 0x1F;
                        }
                        var_t0 = (var_v0_10 >> 5) + var_a1_2;
                        temp_v0_2 = var_a1_2;
                        if (temp_t1 & 1) {
                            var_a1_2 = var_t0;
                            var_t0 = temp_v0_2;
                        }
                        var_v0_11 = var_a2_3;
                        var_v1_3 = var_a3;
                        if (var_v0_11 < 0) {
                            var_v0_11 += 0x7F;
                        }
                        temp_v0_3 = (var_v0_11 >> 7) + sp20;
                        M2C_FIELD(temp_s0, s16 *, 0x18) = temp_v0_3;
                        M2C_FIELD(temp_s0, s16 *, 8) = temp_v0_3;
                        if (var_v1_3 < 0) {
                            var_v1_3 += 0x7F;
                        }
                        temp_v0_4 = (var_v1_3 >> 7) + sp20;
                        M2C_FIELD(temp_s0, s16 *, 0x20) = temp_v0_4;
                        M2C_FIELD(temp_s0, s16 *, 0x10) = temp_v0_4;
                        if (M2C_FIELD(temp_s0, s16 *, 0x20) < M2C_FIELD(temp_s0, s16 *, 8)) {
                            var_s5 = -1;
                        }
                        var_v0_12 = var_a1_2;
                        var_v1_4 = var_t0;
                        if (var_v0_12 < 0) {
                            var_v0_12 += 0x7F;
                        }
                        temp_v0_5 = (var_v0_12 >> 7) + temp_fp;
                        M2C_FIELD(temp_s0, s16 *, 0x12) = temp_v0_5;
                        M2C_FIELD(temp_s0, s16 *, 0xA) = temp_v0_5;
                        if (var_v1_4 < 0) {
                            var_v1_4 += 0x7F;
                        }
                        temp_v0_6 = (var_v1_4 >> 7) + temp_fp;
                        M2C_FIELD(temp_s0, s16 *, 0x22) = temp_v0_6;
                        M2C_FIELD(temp_s0, s16 *, 0x1A) = temp_v0_6;
                        if (M2C_FIELD(temp_s0, s16 *, 0x22) < M2C_FIELD(temp_s0, s16 *, 0xA)) {
                            var_s6 = -1;
                        }
                        temp_a0_8 = M2C_FIELD(var_s4, void **, -0xC);
                        temp_v1_3 = M2C_FIELD(temp_a0_8, s16 *, 4);
                        if (temp_v1_3 == 0x140) {
                            temp_v0_7 = (M2C_FIELD(arg0, s32 *, 0x80) * 4) + (M2C_FIELD(arg0, s32 *, 0x7C) * 0x18) + D_800AD55C;
                            var_s1 = M2C_FIELD(temp_v0_7, u16 *, 0);
                            var_s2 = M2C_FIELD(temp_v0_7, u16 *, 2);
                        } else if (temp_v1_3 == 0x160) {
                            temp_v1_4 = (M2C_FIELD(arg0, s32 *, 0x80) * 4) + (M2C_FIELD(arg0, s32 *, 0x7C) * 0x18) + D_800AD55C;
                            var_s2 = M2C_FIELD(temp_v1_4, u16 *, 2);
                            var_s1 = M2C_FIELD(temp_v1_4, u16 *, 0) + 0x20;
                        } else {
                            var_s1 = (u16) M2C_FIELD(temp_a0_8, s16 *, 4) + M2C_FIELD(arg0, u16 *, 0x28);
                            var_s2 = M2C_FIELD(temp_a0_8, u16 *, 6) + M2C_FIELD(arg0, u16 *, 0x2A);
                        }
                        M2C_FIELD(temp_s0, s16 *, 0x16) = GetTPage(0, ((u32) M2C_FIELD(arg0, u32 *, 0x38) >> 4) & 3, (s16) var_s1, (s16) var_s2);
                        var_a1_3 = M2C_FIELD(var_s4, u16 *, 4);
                        var_a0_2 = M2C_FIELD(var_s4, u16 *, -2) + ((var_s1 & 0x20) * 4);
                        if (!((u16) M2C_FIELD(arg0, s16 *, 0x54) & 0xFFF)) {
                            var_v1_5 = var_a0_2 + var_a1_3;
                            if (var_s5 != 0) {
                                if (var_a0_2 > 0) {
                                    var_a0_2 -= 1;
                                } else {
                                    goto block_79;
                                }
                                goto block_80;
                            }
                        } else {
block_79:
                            var_a1_3 -= 1;
block_80:
                            var_v1_5 = var_a0_2 + var_a1_3;
                        }
                        if (var_v1_5 >= 0x100) {
                            var_v1_5 = -1;
                        }
                        if (M2C_FIELD(arg0, s16 *, 0x50) >= 0x2000) {
                            if (var_s5 == 0) {
                                var_v1_5 -= 1;
                            } else {
                                var_a0_2 += 1;
                            }
                        }
                        M2C_FIELD(temp_s0, s8 *, 0xC) = var_a0_2;
                        M2C_FIELD(temp_s0, s8 *, 0x1C) = var_a0_2;
                        M2C_FIELD(temp_s0, s8 *, 0x24) = var_v1_5;
                        M2C_FIELD(temp_s0, s8 *, 0x14) = var_v1_5;
                        var_a1_4 = M2C_FIELD(var_s4, u16 *, 6);
                        var_v1_6 = M2C_FIELD(var_s4, u16 *, 0) + (var_s2 & 0x80);
                        if (!((u16) M2C_FIELD(arg0, s16 *, 0x54) & 0xFFF)) {
                            if (var_s6 != 0) {
                                if (var_v1_6 > 0) {
                                    var_v1_6 -= 1;
                                } else {
                                    goto block_91;
                                }
                            }
                        } else {
block_91:
                            var_a1_4 -= 1;
                        }
                        var_a1_5 = var_v1_6 + var_a1_4;
                        if (var_a1_5 >= 0x100) {
                            var_a1_5 = -1;
                        }
                        if (M2C_FIELD(arg0, s16 *, 0x52) >= 0x2000) {
                            if (var_s6 == 0) {
                                var_a1_5 -= 1;
                            } else {
                                var_v1_6 += 1;
                            }
                        }
                        M2C_FIELD(temp_s0, s8 *, 0x25) = var_a1_5;
                        M2C_FIELD(temp_s0, s8 *, 0x1D) = var_a1_5;
                        M2C_FIELD(temp_s0, s8 *, 0xD) = var_v1_6;
                        M2C_FIELD(temp_s0, s8 *, 0x15) = var_v1_6;
                        M2C_FIELD(temp_s0, s32 *, 0) = (s32) ((M2C_FIELD(temp_s0, s32 *, 0) & 0xFF000000) | (M2C_FIELD(((M2C_FIELD(arg0, s16 *, 0x4E) * 4) + M2C_FIELD(D_8008ED68, void **, 0)), s32 *, 0x70) & 0xFFFFFF));
                        temp_v1_5 = (M2C_FIELD(arg0, s16 *, 0x4E) * 4) + M2C_FIELD(D_8008ED68, void **, 0);
                        M2C_FIELD(temp_v1_5, s32 *, 0x70) = (s32) ((M2C_FIELD(temp_v1_5, s32 *, 0x70) & 0xFF000000) | (temp_s0 & 0xFFFFFF));
                        var_s7 -= 0x24;
                        var_s4 -= 0x24;
                    } while ((u32) var_s7 >= sp10);
                }
            } else {
                temp_a0_9 = M2C_FIELD(arg0, void **, 0x18);
                temp_a0_10 = M2C_FIELD(temp_a0_9, u32 *, 8);
                sp2C = (temp_a0_10 + (M2C_FIELD(temp_a0_9, s32 *, 0) * 0x24)) - 0x24;
                sp28 = temp_a0_10;
                temp_a0_11 = M2C_FIELD(arg0, u8 *, 0x58);
                if (M2C_FIELD(D_8008ED68, s32 *, 0xA74) == 0x1000) {
                    var_v0_13 = temp_a0_11;
                } else if (M2C_FIELD(D_8008ED68, s32 *, 0xA74) < 0x1000) {
                    var_v0_14 = temp_a0_11 * M2C_FIELD(D_8008ED68, s32 *, 0xA74);
                    if (var_v0_14 < 0) {
                        var_v0_14 += 0xFFF;
                    }
                    var_v0_13 = (u8) (var_v0_14 >> 0xC);
                } else {
                    var_v0_15 = (0xFF - temp_a0_11) * (M2C_FIELD(D_8008ED68, s32 *, 0xA74) - 0x1000);
                    if (var_v0_15 < 0) {
                        var_v0_15 += 0xFFF;
                    }
                    var_v0_13 = (var_v0_15 >> 0xC) + temp_a0_11;
                }
                temp_a0_12 = M2C_FIELD(arg0, u8 *, 0x59);
                sp30 = var_v0_13;
                if (M2C_FIELD(D_8008ED68, s32 *, 0xA74) == 0x1000) {
                    var_v0_16 = temp_a0_12;
                } else if (M2C_FIELD(D_8008ED68, s32 *, 0xA74) < 0x1000) {
                    var_v0_17 = temp_a0_12 * M2C_FIELD(D_8008ED68, s32 *, 0xA74);
                    if (var_v0_17 < 0) {
                        var_v0_17 += 0xFFF;
                    }
                    var_v0_16 = (u8) (var_v0_17 >> 0xC);
                } else {
                    var_v0_18 = (0xFF - temp_a0_12) * (M2C_FIELD(D_8008ED68, s32 *, 0xA74) - 0x1000);
                    if (var_v0_18 < 0) {
                        var_v0_18 += 0xFFF;
                    }
                    var_v0_16 = (var_v0_18 >> 0xC) + temp_a0_12;
                }
                temp_a0_13 = M2C_FIELD(arg0, u8 *, 0x5A);
                sp31 = var_v0_16;
                if (M2C_FIELD(D_8008ED68, s32 *, 0xA74) == 0x1000) {
                    var_t0_2 = temp_a0_13;
                } else {
                    temp_lo_2 = temp_a0_13 * M2C_FIELD(D_8008ED68, s32 *, 0xA74);
                    if (M2C_FIELD(D_8008ED68, s32 *, 0xA74) < 0x1000) {
                        var_t0_2 = (u8) (temp_lo_2 >> 0xC);
                        if (temp_lo_2 < 0) {
                            var_t0_2 = (u8) ((s32) (temp_lo_2 + 0xFFF) >> 0xC);
                        }
                    } else {
                        var_v0_19 = (0xFF - temp_a0_13) * (M2C_FIELD(D_8008ED68, s32 *, 0xA74) - 0x1000);
                        if (var_v0_19 < 0) {
                            var_v0_19 += 0xFFF;
                        }
                        var_t0_2 = (var_v0_19 >> 0xC) + temp_a0_13;
                    }
                }
                temp_fp_2 = M2C_FIELD(arg0, s16 *, 0x46) + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2);
                temp_a3 = M2C_FIELD(sp2C, void **, 8);
                temp_a1_3 = M2C_FIELD(arg0, u16 *, 0x2E);
                temp_s6 = M2C_FIELD(arg0, s16 *, 0x4A) + ((s32) M2C_FIELD(D_8008ED68, u32 *, 0x10C) / 2);
                temp_a2_2 = M2C_FIELD(temp_a3, u16 *, 6) + temp_a1_3;
                sp38 = temp_a2_2;
                sp32 = var_t0_2;
                temp_s0_2 = M2C_FIELD(temp_a3, u16 *, 4) + M2C_FIELD(arg0, u16 *, 0x2C);
                sp40 = rcos(M2C_FIELD(arg0, s16 *, 0x54), temp_a1_3, temp_a2_2, temp_a3);
                sp44 = rsin(M2C_FIELD(arg0, s16 *, 0x54));
                temp_fp_3 = temp_fp_2 + M2C_FIELD(arg0, s8 *, 0x56);
                temp_s6_2 = temp_s6 + M2C_FIELD(arg0, s8 *, 0x57);
                if ((u32) sp2C >= sp28) {
                    sp4C = (s32) temp_s0_2;
                    var_s4_2 = sp2C + 0x10;
                    do {
                        var_s7_2 = 0;
                        sp48 = 0;
                        var_a2_4 = 0;
                        temp_s1 = M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), u32 *, 0x1090);
                        if (temp_s1 != 0) {
                            temp_v1_6 = temp_s1 + 0x28;
                            if ((u32) (M2C_FIELD(D_8008ED68, void **, 0) + 0x4594) >= temp_v1_6) {
                                var_a2_4 = temp_v1_6;
                            }
                        }
                        M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), u32 *, 0x1090) = var_a2_4;
                        SetPolyFT4((void *) temp_s1, M2C_FIELD(D_8008ED68, void **, 0), (void *) var_a2_4);
                        SetShadeTex((void *) temp_s1, 0);
                        SetSemiTrans((void *) temp_s1, ((u32) M2C_FIELD(arg0, u32 *, 0x38) >> 6) & 1);
                        M2C_FIELD(temp_s1, u8 *, 4) = sp30;
                        M2C_FIELD(temp_s1, u8 *, 5) = sp31;
                        M2C_FIELD(temp_s1, u8 *, 6) = sp32;
                        temp_v1_7 = M2C_FIELD(arg0, s32 *, 0x34) & 0x7F;
                        if (temp_v1_7 == 0) {
                            temp_a2_3 = M2C_FIELD(var_s4_2, u16 *, -4) + M2C_FIELD(arg0, s16 *, 0x64);
                            var_v0_20 = temp_a2_3;
                            if (temp_a2_3 < 0) {
                                var_v0_20 = temp_a2_3 + 0xF;
                            }
                            temp_a1_4 = var_v0_20 >> 4;
                            var_a0_3 = sp4C + ((temp_a2_3 - (temp_a1_4 * 0x10)) * 0x10);
                            var_a1_6 = (s16) sp38 + M2C_FIELD(arg0, s16 *, 0x66) + temp_a1_4;
                        } else {
                            var_a0_3 = 0x3F0;
                            if (temp_v1_7 == 1) {
                                var_a0_3 = 0x100;
                                var_a1_6 = 0x1FE;
                            } else {
                                var_a1_6 = 0x17F;
                            }
                        }
                        M2C_FIELD(temp_s1, s16 *, 0xE) = GetClut(var_a0_3, var_a1_6);
                        temp_a0_14 = M2C_FIELD(arg0, s16 *, 0x50);
                        var_v1_7 = (M2C_FIELD(sp2C, s16 *, 0) - M2C_FIELD(arg0, s8 *, 0x56)) * temp_a0_14;
                        if (var_v1_7 < 0) {
                            var_v1_7 += 0x1F;
                        }
                        var_v0_21 = M2C_FIELD(var_s4_2, u16 *, 4) * temp_a0_14;
                        var_t1 = var_v1_7 >> 5;
                        if (var_v0_21 < 0) {
                            var_v0_21 += 0x1F;
                        }
                        temp_a1_5 = M2C_FIELD(var_s4_2, u16 *, 2);
                        var_t2 = (var_v0_21 >> 5) + var_t1;
                        temp_v0_8 = var_t1;
                        if (temp_a1_5 & 2) {
                            var_t1 = var_t2;
                            var_t2 = temp_v0_8;
                        }
                        temp_a0_15 = M2C_FIELD(arg0, s16 *, 0x52);
                        var_v1_8 = (M2C_FIELD(var_s4_2, s16 *, -0xE) - M2C_FIELD(arg0, s8 *, 0x57)) * temp_a0_15;
                        if (var_v1_8 < 0) {
                            var_v1_8 += 0x1F;
                        }
                        var_v0_22 = M2C_FIELD(var_s4_2, u16 *, 6) * temp_a0_15;
                        var_a0_4 = var_v1_8 >> 5;
                        if (var_v0_22 < 0) {
                            var_v0_22 += 0x1F;
                        }
                        var_a2_5 = (var_v0_22 >> 5) + var_a0_4;
                        temp_v0_9 = var_a0_4;
                        if (temp_a1_5 & 1) {
                            var_a0_4 = var_a2_5;
                            var_a2_5 = temp_v0_9;
                        }
                        temp_lo_3 = var_t1 * sp40;
                        temp_lo_4 = var_a0_4 * sp44;
                        temp_lo_5 = var_t2 * sp40;
                        temp_lo_6 = var_a2_5 * sp44;
                        var_v0_23 = temp_lo_3 - temp_lo_4;
                        if (var_v0_23 < 0) {
                            var_v0_23 += 0x7FFFF;
                        }
                        M2C_FIELD(temp_s1, s16 *, 8) = (s16) ((var_v0_23 >> 0x13) + temp_fp_3);
                        var_v0_24 = temp_lo_5 - temp_lo_4;
                        if (var_v0_24 < 0) {
                            var_v0_24 += 0x7FFFF;
                        }
                        M2C_FIELD(temp_s1, s16 *, 0x10) = (s16) ((var_v0_24 >> 0x13) + temp_fp_3);
                        var_v0_25 = temp_lo_3 - temp_lo_6;
                        if (var_v0_25 < 0) {
                            var_v0_25 += 0x7FFFF;
                        }
                        M2C_FIELD(temp_s1, s16 *, 0x18) = (s16) ((var_v0_25 >> 0x13) + temp_fp_3);
                        var_v0_26 = temp_lo_5 - temp_lo_6;
                        if (var_v0_26 < 0) {
                            var_v0_26 += 0x7FFFF;
                        }
                        temp_v0_10 = (var_v0_26 >> 0x13) + temp_fp_3;
                        M2C_FIELD(temp_s1, s16 *, 0x20) = temp_v0_10;
                        if (temp_v0_10 < M2C_FIELD(temp_s1, s16 *, 8)) {
                            var_s7_2 = -1;
                        }
                        temp_lo_7 = var_a0_4 * sp40;
                        temp_lo_8 = var_t2 * sp44;
                        temp_lo_9 = var_a2_5 * sp40;
                        temp_lo_10 = var_t1 * sp44;
                        var_v0_27 = temp_lo_8 + temp_lo_7;
                        if (var_v0_27 < 0) {
                            var_v0_27 += 0x7FFFF;
                        }
                        M2C_FIELD(temp_s1, s16 *, 0x12) = (s16) ((var_v0_27 >> 0x13) + temp_s6_2);
                        var_v0_28 = temp_lo_10 + temp_lo_7;
                        if (var_v0_28 < 0) {
                            var_v0_28 += 0x7FFFF;
                        }
                        M2C_FIELD(temp_s1, s16 *, 0xA) = (s16) ((var_v0_28 >> 0x13) + temp_s6_2);
                        var_v0_29 = temp_lo_10 + temp_lo_9;
                        if (var_v0_29 < 0) {
                            var_v0_29 += 0x7FFFF;
                        }
                        M2C_FIELD(temp_s1, s16 *, 0x1A) = (s16) ((var_v0_29 >> 0x13) + temp_s6_2);
                        var_v0_30 = temp_lo_8 + temp_lo_9;
                        if (var_v0_30 < 0) {
                            var_v0_30 += 0x7FFFF;
                        }
                        temp_v0_11 = (var_v0_30 >> 0x13) + temp_s6_2;
                        M2C_FIELD(temp_s1, s16 *, 0x22) = temp_v0_11;
                        if (temp_v0_11 < M2C_FIELD(temp_s1, s16 *, 0xA)) {
                            sp48 = -1;
                        }
                        temp_a0_16 = M2C_FIELD(var_s4_2, void **, -0xC);
                        temp_v1_8 = M2C_FIELD(temp_a0_16, s16 *, 4);
                        if (temp_v1_8 == 0x140) {
                            temp_v0_12 = (M2C_FIELD(arg0, s32 *, 0x80) * 4) + (M2C_FIELD(arg0, s32 *, 0x7C) * 0x18) + D_800AD55C;
                            var_s0 = M2C_FIELD(temp_v0_12, u16 *, 0);
                            var_s2_2 = M2C_FIELD(temp_v0_12, u16 *, 2);
                        } else if (temp_v1_8 == 0x160) {
                            temp_v1_9 = (M2C_FIELD(arg0, s32 *, 0x80) * 4) + (M2C_FIELD(arg0, s32 *, 0x7C) * 0x18) + D_800AD55C;
                            var_s2_2 = M2C_FIELD(temp_v1_9, u16 *, 2);
                            var_s0 = M2C_FIELD(temp_v1_9, u16 *, 0) + 0x20;
                        } else {
                            var_s0 = (u16) M2C_FIELD(temp_a0_16, s16 *, 4) + M2C_FIELD(arg0, u16 *, 0x28);
                            var_s2_2 = M2C_FIELD(temp_a0_16, u16 *, 6) + M2C_FIELD(arg0, u16 *, 0x2A);
                        }
                        M2C_FIELD(temp_s1, s16 *, 0x16) = GetTPage(0, ((u32) M2C_FIELD(arg0, u32 *, 0x38) >> 4) & 3, (s16) var_s0, (s16) var_s2_2);
                        var_a1_7 = M2C_FIELD(var_s4_2, u16 *, 4);
                        var_a0_5 = M2C_FIELD(var_s4_2, u16 *, -2) + ((var_s0 & 0x20) * 4);
                        if (!((u16) M2C_FIELD(arg0, s16 *, 0x54) & 0xFFF)) {
                            var_v1_9 = var_a0_5 + var_a1_7;
                            if (var_s7_2 != 0) {
                                if (var_a0_5 > 0) {
                                    var_a0_5 -= 1;
                                } else {
                                    goto block_181;
                                }
                                goto block_182;
                            }
                        } else {
block_181:
                            var_a1_7 -= 1;
block_182:
                            var_v1_9 = var_a0_5 + var_a1_7;
                        }
                        if (var_v1_9 >= 0x100) {
                            var_v1_9 = -1;
                        }
                        if (M2C_FIELD(arg0, s16 *, 0x50) >= 0x2000) {
                            if (var_s7_2 == 0) {
                                var_v1_9 -= 1;
                            } else {
                                var_a0_5 += 1;
                            }
                        }
                        M2C_FIELD(temp_s1, s8 *, 0xC) = var_a0_5;
                        M2C_FIELD(temp_s1, s8 *, 0x1C) = var_a0_5;
                        M2C_FIELD(temp_s1, s8 *, 0x24) = var_v1_9;
                        M2C_FIELD(temp_s1, s8 *, 0x14) = var_v1_9;
                        var_a1_8 = M2C_FIELD(var_s4_2, u16 *, 6);
                        var_v1_10 = M2C_FIELD(var_s4_2, u16 *, 0) + (var_s2_2 & 0x80);
                        if (!((u16) M2C_FIELD(arg0, s16 *, 0x54) & 0xFFF)) {
                            if (sp48 != 0) {
                                if (var_v1_10 > 0) {
                                    var_v1_10 -= 1;
                                } else {
                                    goto block_193;
                                }
                            }
                        } else {
block_193:
                            var_a1_8 -= 1;
                        }
                        var_a1_9 = var_v1_10 + var_a1_8;
                        if (var_a1_9 >= 0x100) {
                            var_a1_9 = -1;
                        }
                        if (M2C_FIELD(arg0, s16 *, 0x52) >= 0x2000) {
                            if (sp48 == 0) {
                                var_a1_9 -= 1;
                            } else {
                                var_v1_10 += 1;
                            }
                        }
                        M2C_FIELD(temp_s1, s8 *, 0x25) = var_a1_9;
                        M2C_FIELD(temp_s1, s8 *, 0x1D) = var_a1_9;
                        M2C_FIELD(temp_s1, s8 *, 0xD) = var_v1_10;
                        M2C_FIELD(temp_s1, s8 *, 0x15) = var_v1_10;
                        M2C_FIELD(temp_s1, s32 *, 0) = (s32) ((M2C_FIELD(temp_s1, s32 *, 0) & 0xFF000000) | (M2C_FIELD(((M2C_FIELD(arg0, s16 *, 0x4E) * 4) + M2C_FIELD(D_8008ED68, void **, 0)), s32 *, 0x70) & 0xFFFFFF));
                        temp_v1_10 = (M2C_FIELD(arg0, s16 *, 0x4E) * 4) + M2C_FIELD(D_8008ED68, void **, 0);
                        temp_t4 = sp2C - 0x24;
                        sp2C = temp_t4;
                        M2C_FIELD(temp_v1_10, s32 *, 0x70) = (s32) ((M2C_FIELD(temp_v1_10, s32 *, 0x70) & 0xFF000000) | (temp_s1 & 0xFFFFFF));
                        var_s4_2 -= 0x24;
                    } while ((u32) temp_t4 >= sp28);
                }
            }
        }
    }
}
