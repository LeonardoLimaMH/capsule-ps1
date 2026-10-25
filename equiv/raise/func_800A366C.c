#include "common.h"

s32 func_800A366C(s32 arg0, s32 arg1, s16 arg2, s16 arg3) {
    extern u8 D_800EF364[];
    extern u8 D_800EFF58[];
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a2;
    s32 temp_a2_11;
    s32 temp_a2_12;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_a2_6;
    s32 temp_a2_7;
    s32 temp_a2_8;
    s32 temp_a2_9;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 temp_a3_5;
    s32 temp_a3_6;
    s32 temp_a3_8;
    s32 temp_t0;
    s32 temp_t0_10;
    s32 temp_t0_2;
    s32 temp_t0_4;
    s32 temp_t0_5;
    s32 temp_t0_6;
    s32 temp_t0_7;
    s32 temp_t0_8;
    s32 temp_t0_9;
    s32 temp_t2_3;
    s32 temp_t3_3;
    s32 temp_t4_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t1;
    s32 var_t2;
    s32 var_t2_2;
    s32 var_t4;
    s32 var_t4_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_10;
    s32 var_v1_11;
    s32 var_v1_12;
    s32 var_v1_13;
    s32 var_v1_14;
    s32 var_v1_15;
    s32 var_v1_16;
    s32 var_v1_17;
    s32 var_v1_18;
    s32 var_v1_20;
    s32 var_v1_21;
    s32 var_v1_22;
    s32 var_v1_23;
    s32 var_v1_24;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_7;
    s32 var_v1_8;
    s32 var_v1_9;
    void *temp_a2_10;
    void *temp_a2_5;
    void *temp_a3;
    void *temp_a3_7;
    void *temp_a3_9;
    void *temp_t0_11;
    void *temp_t0_3;
    void *temp_t1;
    void *temp_t1_2;
    void *temp_t1_3;
    void *temp_t2;
    void *temp_t2_2;
    void *temp_t2_4;
    void *temp_t3;
    void *temp_t3_2;
    void *temp_t3_4;
    void *temp_t4;
    void *temp_t4_3;
    void *temp_t4_4;
    void *temp_t5;
    void *temp_t6;
    void *var_t5;
    void *var_v1_19;
    void *var_v1_6;

    if ((arg2 & 0xFFFF) == 1) {
        temp_t0 = arg3 & 0xFFFF;
        if (temp_t0 == 1) {
            var_t2 = 1;
            temp_t4 = ((arg0 & 0xFFFF) << 6) + D_800EF364;
            temp_t0_2 = arg2 * 8;
            temp_a2 = arg3 + 1;
            if (M2C_FIELD((temp_t0_2 + temp_t4 + temp_a2), u8 *, -9) != 0xFF) {
                var_t2 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_t0_2 + temp_a2), u8 *, 0x8B) != 0;
            }
            var_v0 = 0;
            if (var_t2 != 0) {
                var_a3 = (arg2 + 1) * 8;
                temp_t0_3 = (var_a3 + temp_t4) - 8;
                var_v1 = 1;
                if (M2C_FIELD((temp_a2 + temp_t0_3), u8 *, -1) != 0xFF) {
                    var_v1 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + var_a3 + temp_a2), u8 *, 0x8B) != 0;
                }
                var_v0 = 0;
                if (var_v1 != 0) {
                    var_v1_2 = 1;
                    if (M2C_FIELD((arg3 + temp_t0_3), u8 *, -1) != 0xFF) {
                        goto block_86;
                    }
                    goto block_88;
                }
                /* Duplicate return node #128. Try simplifying control flow for better match */
                return var_v0;
            }
            /* Duplicate return node #128. Try simplifying control flow for better match */
            return var_v0;
        }
        temp_v1 = arg0 & 0xFFFF;
        if ((u32) ((arg3 - 2) & 0xFFFF) < 6U) {
            temp_t3 = (temp_v1 << 6) + D_800EF364;
            temp_t4_2 = arg2 * 8;
            temp_t6 = (temp_t4_2 + temp_t3) - 8;
            temp_a2_2 = arg3 + 1;
            var_t0 = 1;
            if (M2C_FIELD((temp_a2_2 + temp_t6), u8 *, -1) != 0xFF) {
                var_t0 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_t4_2 + temp_a2_2), u8 *, 0x8B) != 0;
            }
            var_v0 = 0;
            if (var_t0 != 0) {
                temp_t0_4 = (arg2 + 1) * 8;
                temp_a3 = (temp_t0_4 + temp_t3) - 8;
                var_v1_3 = 1;
                if (M2C_FIELD((temp_a2_2 + temp_a3), u8 *, -1) != 0xFF) {
                    var_v1_3 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_t0_4 + temp_a2_2), u8 *, 0x8B) != 0;
                }
                var_v0 = 0;
                if (var_v1_3 != 0) {
                    var_v1_4 = 1;
                    if (M2C_FIELD((arg3 + temp_a3), u8 *, -1) != 0xFF) {
                        var_v1_4 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_t0_4 + arg3), u8 *, 0x8B) != 0;
                    }
                    temp_a2_3 = arg3 - 1;
                    if (var_v1_4 != 0) {
                        var_v1_5 = 1;
                        if (M2C_FIELD((temp_a2_3 + temp_a3), u8 *, -1) != 0xFF) {
                            var_v1_5 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_t0_4 + temp_a2_3), u8 *, 0x8B) != 0;
                        }
                        var_v0 = 0;
                        if (var_v1_5 != 0) {
                            var_v1_2 = 1;
                            if (M2C_FIELD((temp_a2_3 + temp_t6), u8 *, -1) != 0xFF) {
                                var_v1_6 = ((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_t4_2 + temp_a2_3;
                                goto block_87;
                            }
                            goto block_88;
                        }
                        /* Duplicate return node #128. Try simplifying control flow for better match */
                        return var_v0;
                    }
                    goto block_116;
                }
                /* Duplicate return node #128. Try simplifying control flow for better match */
                return var_v0;
            }
            /* Duplicate return node #128. Try simplifying control flow for better match */
            return var_v0;
        }
        if (temp_t0 == 8) {
            temp_t5 = (temp_v1 << 6) + D_800EF364;
            temp_t0_5 = (arg2 + 1) * 8;
            temp_t1 = (temp_t0_5 + temp_t5) - 8;
            var_t2_2 = 1;
            if (M2C_FIELD((arg3 + temp_t1), u8 *, -1) != 0xFF) {
                var_t2_2 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_t0_5 + arg3), u8 *, 0x8B) != 0;
            }
            temp_a2_4 = arg3 - 1;
            if (var_t2_2 != 0) {
                var_v1_7 = 1;
                if (M2C_FIELD((temp_a2_4 + temp_t1), u8 *, -1) != 0xFF) {
                    var_v1_7 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_t0_5 + temp_a2_4), u8 *, 0x8B) != 0;
                }
                temp_a3_2 = arg2 * 8;
                if (var_v1_7 != 0) {
                    var_v1_2 = 1;
                    if (M2C_FIELD((temp_a3_2 + temp_t5 + temp_a2_4), u8 *, -9) != 0xFF) {
                        var_v1_6 = ((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_a3_2 + temp_a2_4;
                        goto block_87;
                    }
                    goto block_88;
                }
                goto block_116;
            }
            goto block_116;
        }
        goto block_89;
    }
    temp_t0_6 = arg3 & 0xFFFF;
    if ((u32) ((arg2 - 2) & 0xFFFF) < 6U) {
        if (temp_t0_6 == 1) {
            var_t5 = ((arg0 & 0xFFFF) << 6) + D_800EF364;
            temp_t0_7 = (arg2 - 1) * 8;
            temp_t2 = (temp_t0_7 + var_t5) - 8;
            var_t4 = 1;
            if (M2C_FIELD((arg3 + temp_t2), u8 *, -1) != 0xFF) {
                var_t4 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_t0_7 + arg3), u8 *, 0x8B) != 0;
            }
            var_a2 = arg3 + 1;
            if (var_t4 != 0) {
                var_v1_8 = 1;
                if (M2C_FIELD((var_a2 + temp_t2), u8 *, -1) != 0xFF) {
                    var_v1_8 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_t0_7 + var_a2), u8 *, 0x8B) != 0;
                }
                temp_a3_3 = arg2 * 8;
                if (var_v1_8 != 0) {
                    var_v1_9 = 1;
                    if (M2C_FIELD((temp_a3_3 + var_t5 + var_a2), u8 *, -9) != 0xFF) {
                        var_v1_9 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_a3_3 + var_a2), u8 *, 0x8B) != 0;
                    }
                    var_v0 = 0;
                    if (var_v1_9 != 0) {
                        var_v0_2 = arg2 + 1;
                        goto block_81;
                    }
                    /* Duplicate return node #128. Try simplifying control flow for better match */
                    return var_v0;
                }
                goto block_116;
            }
            goto block_116;
        }
        if ((u32) ((arg3 - 2) & 0xFFFF) < 6U) {
            temp_t4_3 = ((arg0 & 0xFFFF) << 6) + D_800EF364;
            temp_t0_8 = (arg2 - 1) * 8;
            temp_t3_2 = (temp_t0_8 + temp_t4_3) - 8;
            var_t1 = 1;
            if (M2C_FIELD((arg3 + temp_t3_2), u8 *, -1) != 0xFF) {
                var_t1 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_t0_8 + arg3), u8 *, 0x8B) != 0;
            }
            temp_a3_4 = arg3 + 1;
            if (var_t1 != 0) {
                var_a2_2 = 1;
                if (M2C_FIELD((temp_a3_4 + temp_t3_2), u8 *, -1) != 0xFF) {
                    var_a2_2 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_t0_8 + temp_a3_4), u8 *, 0x8B) != 0;
                }
                temp_t3_3 = arg2 * 8;
                if (var_a2_2 != 0) {
                    var_a2_3 = 1;
                    if (M2C_FIELD((temp_t3_3 + temp_t4_3 + temp_a3_4), u8 *, -9) != 0xFF) {
                        var_a2_3 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_t3_3 + temp_a3_4), u8 *, 0x8B) != 0;
                    }
                    if (var_a2_3 != 0) {
                        temp_t0_9 = (arg2 + 1) * 8;
                        temp_a2_5 = (temp_t0_9 + temp_t4_3) - 8;
                        var_v1_10 = 1;
                        if (M2C_FIELD((temp_a3_4 + temp_a2_5), u8 *, -1) != 0xFF) {
                            var_v1_10 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_t0_9 + temp_a3_4), u8 *, 0x8B) != 0;
                        }
                        var_v0 = 0;
                        if (var_v1_10 != 0) {
                            var_v1_11 = 1;
                            if (M2C_FIELD((arg3 + temp_a2_5), u8 *, -1) != 0xFF) {
                                var_v1_11 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_t0_9 + arg3), u8 *, 0x8B) != 0;
                            }
                            var_v0 = 0;
                            if (var_v1_11 != 0) {
                                temp_t1_2 = ((arg0 & 0xFFFF) << 6) + D_800EF364;
                                temp_a2_6 = arg3 - 1;
                                var_v1_12 = 1;
                                if (M2C_FIELD((temp_t0_9 + temp_t1_2 + temp_a2_6), u8 *, -9) != 0xFF) {
                                    var_v1_12 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_t0_9 + temp_a2_6), u8 *, 0x8B) != 0;
                                }
                                var_v0 = 0;
                                if (var_v1_12 != 0) {
                                    var_v1_13 = 1;
                                    if (M2C_FIELD((temp_t3_3 + temp_t1_2 + temp_a2_6), u8 *, -9) != 0xFF) {
                                        var_v1_13 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_t3_3 + temp_a2_6), u8 *, 0x8B) != 0;
                                    }
                                    var_v0 = 0;
                                    if (var_v1_13 != 0) {
                                        temp_a3_5 = (arg2 - 1) * 8;
                                        var_v1_2 = 1;
                                        if (M2C_FIELD((temp_a3_5 + temp_t1_2 + temp_a2_6), u8 *, -9) != 0xFF) {
                                            var_v1_6 = ((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_a3_5 + temp_a2_6;
                                            goto block_87;
                                        }
                                        goto block_88;
                                    }
                                    /* Duplicate return node #128. Try simplifying control flow for better match */
                                    return var_v0;
                                }
                                /* Duplicate return node #128. Try simplifying control flow for better match */
                                return var_v0;
                            }
                            /* Duplicate return node #128. Try simplifying control flow for better match */
                            return var_v0;
                        }
                        /* Duplicate return node #128. Try simplifying control flow for better match */
                        return var_v0;
                    }
                    goto block_116;
                }
                goto block_116;
            }
            goto block_116;
        }
        if (temp_t0_6 == 8) {
            var_t5 = ((arg0 & 0xFFFF) << 6) + D_800EF364;
            temp_t0_10 = (arg2 + 1) * 8;
            temp_t2_2 = (temp_t0_10 + var_t5) - 8;
            var_t4_2 = 1;
            if (M2C_FIELD((arg3 + temp_t2_2), u8 *, -1) != 0xFF) {
                var_t4_2 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_t0_10 + arg3), u8 *, 0x8B) != 0;
            }
            var_a2 = arg3 - 1;
            if (var_t4_2 != 0) {
                var_v1_14 = 1;
                if (M2C_FIELD((var_a2 + temp_t2_2), u8 *, -1) != 0xFF) {
                    var_v1_14 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_t0_10 + var_a2), u8 *, 0x8B) != 0;
                }
                temp_a3_6 = arg2 * 8;
                if (var_v1_14 != 0) {
                    var_v1_15 = 1;
                    if (M2C_FIELD((temp_a3_6 + var_t5 + var_a2), u8 *, -9) != 0xFF) {
                        var_v1_15 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_a3_6 + var_a2), u8 *, 0x8B) != 0;
                    }
                    var_v0 = 0;
                    if (var_v1_15 != 0) {
                        var_v0_2 = arg2 - 1;
block_81:
                        var_a3 = var_v0_2 * 8;
                        temp_t0_11 = (var_a3 + var_t5) - 8;
                        var_v1_16 = 1;
                        if (M2C_FIELD((var_a2 + temp_t0_11), u8 *, -1) != 0xFF) {
                            var_v1_16 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + var_a3 + var_a2), u8 *, 0x8B) != 0;
                        }
                        var_v0 = 0;
                        if (var_v1_16 != 0) {
                            var_v1_2 = 1;
                            if (M2C_FIELD((arg3 + temp_t0_11), u8 *, -1) != 0xFF) {
block_86:
                                var_v1_6 = ((arg1 & 0xFFFF) << 6) + D_800EFF58 + var_a3 + arg3;
block_87:
                                var_v1_2 = M2C_FIELD(var_v1_6, u8 *, 0x8B) != 0;
                            }
block_88:
                            var_v0 = 0;
                            if (var_v1_2 != 0) {
                                goto block_89;
                            }
                            /* Duplicate return node #128. Try simplifying control flow for better match */
                            return var_v0;
                        }
                        /* Duplicate return node #128. Try simplifying control flow for better match */
                        return var_v0;
                    }
                    /* Duplicate return node #128. Try simplifying control flow for better match */
                    return var_v0;
                }
                goto block_116;
            }
            goto block_116;
        }
        goto block_89;
    }
block_89:
    temp_a2_7 = arg2 & 0xFFFF;
    var_v0 = 1;
    if (temp_a2_7 == 8) {
        temp_v1_2 = arg3 & 0xFFFF;
        var_t0_2 = 1;
        if (temp_v1_2 == 1) {
            temp_t3_4 = ((arg0 & 0xFFFF) << 6) + D_800EF364;
            temp_a2_8 = (arg2 - 1) * 8;
            temp_a3_7 = (temp_a2_8 + temp_t3_4) - 8;
            if (M2C_FIELD((arg3 + temp_a3_7), u8 *, -1) != 0xFF) {
                var_t0_2 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_a2_8 + arg3), u8 *, 0x8B) != 0;
            }
            var_a0 = arg3 + 1;
            if (var_t0_2 != 0) {
                var_v1_17 = 1;
                if (M2C_FIELD((var_a0 + temp_a3_7), u8 *, -1) != 0xFF) {
                    var_v1_17 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_a2_8 + var_a0), u8 *, 0x8B) != 0;
                }
                temp_a2_9 = arg2 * 8;
                if (var_v1_17 != 0) {
                    var_v1_18 = 1;
                    if (M2C_FIELD((temp_a2_9 + temp_t3_4 + var_a0), u8 *, -9) != 0xFF) {
                        var_v1_19 = ((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_a2_9;
                        goto block_114;
                    }
                    goto block_115;
                }
                goto block_116;
            }
            goto block_116;
        }
        if ((u32) ((arg3 - 2) & 0xFFFF) < 6U) {
            temp_t1_3 = ((arg0 & 0xFFFF) << 6) + D_800EF364;
            temp_t2_3 = arg2 * 8;
            temp_t4_4 = (temp_t2_3 + temp_t1_3) - 8;
            temp_a0 = arg3 - 1;
            var_a2_4 = 1;
            if (M2C_FIELD((temp_a0 + temp_t4_4), u8 *, -1) != 0xFF) {
                var_a2_4 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_t2_3 + temp_a0), u8 *, 0x8B) != 0;
            }
            var_v0 = 0;
            if (var_a2_4 != 0) {
                temp_a3_8 = (arg2 - 1) * 8;
                temp_a2_10 = (temp_a3_8 + temp_t1_3) - 8;
                var_v1_20 = 1;
                if (M2C_FIELD((temp_a0 + temp_a2_10), u8 *, -1) != 0xFF) {
                    var_v1_20 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_a3_8 + temp_a0), u8 *, 0x8B) != 0;
                }
                var_v0 = 0;
                if (var_v1_20 != 0) {
                    var_v1_21 = 1;
                    if (M2C_FIELD((arg3 + temp_a2_10), u8 *, -1) != 0xFF) {
                        var_v1_21 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_a3_8 + arg3), u8 *, 0x8B) != 0;
                    }
                    var_a0 = arg3 + 1;
                    if (var_v1_21 != 0) {
                        var_v1_22 = 1;
                        if (M2C_FIELD((var_a0 + temp_a2_10), u8 *, -1) != 0xFF) {
                            var_v1_22 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_a3_8 + var_a0), u8 *, 0x8B) != 0;
                        }
                        var_v0 = 0;
                        if (var_v1_22 != 0) {
                            var_v1_18 = 1;
                            if (M2C_FIELD((var_a0 + temp_t4_4), u8 *, -1) != 0xFF) {
                                var_v1_19 = ((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_t2_3;
block_114:
                                var_v1_18 = M2C_FIELD((var_v1_19 + var_a0), u8 *, 0x8B) != 0;
                            }
block_115:
                            var_v0 = 1;
                            if (var_v1_18 == 0) {
                                goto block_116;
                            }
                            /* Duplicate return node #128. Try simplifying control flow for better match */
                            return var_v0;
                        }
                        /* Duplicate return node #128. Try simplifying control flow for better match */
                        return var_v0;
                    }
                    goto block_116;
                }
                /* Duplicate return node #128. Try simplifying control flow for better match */
                return var_v0;
            }
            /* Duplicate return node #128. Try simplifying control flow for better match */
            return var_v0;
        }
        var_v0 = 1;
        if (temp_v1_2 == temp_a2_7) {
            temp_t2_4 = ((arg0 & 0xFFFF) << 6) + D_800EF364;
            temp_a2_11 = arg2 * 8;
            temp_a0_2 = arg3 - 1;
            var_a3_2 = 1;
            if (M2C_FIELD((temp_a2_11 + temp_t2_4 + temp_a0_2), u8 *, -9) != 0xFF) {
                var_a3_2 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_a2_11 + temp_a0_2), u8 *, 0x8B) != 0;
            }
            var_v0 = 0;
            if (var_a3_2 != 0) {
                temp_a2_12 = (arg2 - 1) * 8;
                temp_a3_9 = (temp_a2_12 + temp_t2_4) - 8;
                var_v1_23 = 1;
                if (M2C_FIELD((temp_a0_2 + temp_a3_9), u8 *, -1) != 0xFF) {
                    var_v1_23 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_a2_12 + temp_a0_2), u8 *, 0x8B) != 0;
                }
                if (var_v1_23 != 0) {
                    var_v1_24 = 1;
                    if (M2C_FIELD((arg3 + temp_a3_9), u8 *, -1) != 0xFF) {
                        var_v1_24 = M2C_FIELD((((arg1 & 0xFFFF) << 6) + D_800EFF58 + temp_a2_12 + arg3), u8 *, 0x8B) != 0;
                    }
                    var_v0 = 0;
                    if (var_v1_24 != 0) {
                        var_v0 = 1;
                    }
                    /* Duplicate return node #128. Try simplifying control flow for better match */
                    return var_v0;
                }
block_116:
                return 0;
            }
            /* Duplicate return node #128. Try simplifying control flow for better match */
            return var_v0;
        }
        /* Duplicate return node #128. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
