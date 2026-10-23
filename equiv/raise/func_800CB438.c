#include "common.h"

s32 func_800CB438(s16 arg0, void *arg1, s32 arg2, s32 arg3) {
    extern M2C_UNK D_80063940[];
    M2C_UNK var_a0_2;
    M2C_UNK var_a1;
    s32 temp_a3;
    s32 temp_v0_10;
    s32 temp_v0_12;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 var_a0;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_a0;
    u32 var_v0_3;
    u32 var_v0_4;
    void *temp_v0;
    void *temp_v0_11;
    void *temp_v0_3;
    void *temp_v0_7;

    if ((u32) ((arg3 - 0x56) & 0xFFFF) < 3U) {
        temp_a3 = arg3 & 0xFFFF;
        switch (temp_a3) {                          /* switch 3; irregular */
        case 0x56:                                  /* switch 3 */
            var_a0 = arg2 & 0xFFFF;
            var_a3 = ((u32) M2C_FIELD(((var_a0 * 0x3C) + (*D_80063940)), u32 *, 0x24) >> 0xF) & 0x1F;
            if (var_a3 == 1) {
                if (M2C_FIELD(arg1, u16 *, 0x24) == M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 0x1C), void **, 4), s32 *, 4)) {
                    var_a1 = 3;
                    if (M2C_FIELD(arg1, s32 *, 0x20) == 0) {
                        goto block_39;
                    }
                }
            } else {
                if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == (var_a3 - 2)) {
                    if ((s16) M2C_FIELD(arg1, u16 *, 0x24) == 0) {
                        var_a1 = 3;
                        goto block_39;
                    }
                    goto block_15;
                }
block_15:
                var_a0 = arg2 & 0xFFFF;
                if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == ((((u32) M2C_FIELD(((var_a0 * 0x3C) + (*D_80063940)), u32 *, 0x24) >> 0x14) & 0x1F) - 2)) {
                    var_a1 = 3;
                    if ((s16) M2C_FIELD(arg1, u16 *, 0x24) == 0) {
block_39:
                        func_80028200(var_a0, var_a1, var_a3);
                    }
                }
            }
            break;
        case 0x57:                                  /* switch 3 */
            var_a0 = arg2 & 0xFFFF;
            var_a3 = ((u32) M2C_FIELD(((var_a0 * 0x3C) + (*D_80063940)), u32 *, 0x24) >> 0x19) & 0x1F;
            if (var_a3 == 1) {
                if (M2C_FIELD(arg1, u16 *, 0x24) == M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 0x1C), void **, 4), s32 *, 4)) {
                    var_a1 = 1;
                    if (M2C_FIELD(arg1, s32 *, 0x20) == 0) {
                        goto block_39;
                    }
                }
            } else {
                if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == (var_a3 - 2)) {
                    if ((s16) M2C_FIELD(arg1, u16 *, 0x24) == 0) {
                        var_a1 = 1;
                        goto block_39;
                    }
                    goto block_26;
                }
block_26:
                var_a0 = arg2 & 0xFFFF;
                temp_v0 = (var_a0 * 0x3C) + (*D_80063940);
                if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == ((((M2C_FIELD(temp_v0, s32 *, 0x28) & 7) * 4) | ((u32) M2C_FIELD(temp_v0, u32 *, 0x24) >> 0x1E)) - 2)) {
                    if ((s16) M2C_FIELD(arg1, u16 *, 0x24) == 0) {
                        var_a1 = 1;
                        goto block_39;
                    }
                    goto block_30;
                }
                var_a0 = arg2 & 0xFFFF;
block_30:
                if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == (((u8) M2C_FIELD(((var_a0 * 0x3C) + (*D_80063940)), u8 *, 0x28) >> 3) - 2)) {
                    var_a1 = 1;
                    if ((s16) M2C_FIELD(arg1, u16 *, 0x24) == 0) {
                        goto block_39;
                    }
                }
            }
            break;
        case 0x58:                                  /* switch 3 */
            var_a0 = arg2 & 0xFFFF;
            var_a3 = ((u32) M2C_FIELD(((var_a0 * 0x3C) + (*D_80063940)), u32 *, 0x28) >> 8) & 0x1F;
            if (var_a3 == 1) {
                if (M2C_FIELD(arg1, u16 *, 0x24) == M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 0x1C), void **, 4), s32 *, 4)) {
                    var_v0 = M2C_FIELD(arg1, s32 *, 0x20);
                    goto block_38;
                }
            } else if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == (var_a3 - 2)) {
                var_v0 = (s32) (s16) M2C_FIELD(arg1, u16 *, 0x24);
block_38:
                var_a1 = 2;
                if (var_v0 == 0) {
                    goto block_39;
                }
            }
            break;
        }
    } else if (arg0 != 1) {
        if (arg0 < 2) {
            var_a3_2 = arg3 & 0xFFFF;
            if (arg0 != 0) {

            } else {
                switch (var_a3_2) {                 /* switch 2; irregular */
                case 0x5C:                          /* switch 2 */
                    temp_v0_2 = ((u32) M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u32 *, 0x28) >> 0x17) & 0x1F;
                    if (temp_v0_2 == 1) {
                        if (M2C_FIELD(arg1, u16 *, 0x24) == M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 0x1C), void **, 4), s32 *, 4)) {
                            var_a0_2 = 0x73;
                            if (M2C_FIELD(arg1, s32 *, 0x20) == 0) {
                                goto block_171;
                            }
                        }
                    } else {
                        if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == (temp_v0_2 - 2)) {
                            var_a0_2 = 0x73;
                            if ((s16) M2C_FIELD(arg1, u16 *, 0x24) != 0) {
                                goto block_59;
                            }
                            goto block_171;
                        }
block_59:
                        temp_v0_3 = ((arg2 & 0xFFFF) * 0x3C) + (*D_80063940);
                        if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == ((((M2C_FIELD(temp_v0_3, s32 *, 0x2C) & 1) * 0x10) | ((u32) M2C_FIELD(temp_v0_3, u32 *, 0x28) >> 0x1C)) - 2)) {
                            var_a0_2 = 0x73;
                            if ((s16) M2C_FIELD(arg1, u16 *, 0x24) != 0) {
                                goto block_62;
                            }
                            goto block_171;
                        }
block_62:
                        if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == ((((u32) M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u32 *, 0x2C) >> 1) & 0x1F) - 2)) {
                            var_a0_2 = 0x73;
                            if ((s16) M2C_FIELD(arg1, u16 *, 0x24) == 0) {
                                goto block_171;
                            }
                        }
                    }
                    break;
                case 0x5D:                          /* switch 2 */
                    temp_v0_4 = ((u32) M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u32 *, 0x30) >> 4) & 0x1F;
                    if (temp_v0_4 == 1) {
                        if (M2C_FIELD(arg1, u16 *, 0x24) == M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 0x1C), void **, 4), s32 *, 4)) {
                            var_a0_2 = 0x5E;
                            if (M2C_FIELD(arg1, s32 *, 0x20) == 0) {
                                goto block_171;
                            }
                        }
                    } else {
                        if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == (temp_v0_4 - 2)) {
                            var_a0_2 = 0x5E;
                            if ((s16) M2C_FIELD(arg1, u16 *, 0x24) != 0) {
                                goto block_72;
                            }
                            goto block_171;
                        }
block_72:
                        if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == ((((u32) M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u32 *, 0x30) >> 9) & 0x1F) - 2)) {
                            var_a0_2 = 0x5E;
                            if ((s16) M2C_FIELD(arg1, u16 *, 0x24) != 0) {
                                goto block_75;
                            }
                            goto block_171;
                        }
block_75:
                        if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == ((((u32) M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u32 *, 0x30) >> 0xE) & 0x1F) - 2)) {
                            var_a0_2 = 0x5E;
                            if ((s16) M2C_FIELD(arg1, u16 *, 0x24) == 0) {
                                goto block_171;
                            }
                        }
                    }
                    break;
                case 0x5F:                          /* switch 2 */
                    temp_v0_5 = ((u32) M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u32 *, 0x34) >> 0x11) & 0x1F;
                    if (temp_v0_5 == 1) {
                        if (M2C_FIELD(arg1, u16 *, 0x24) == M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 0x1C), void **, 4), s32 *, 4)) {
                            var_v0_2 = M2C_FIELD(arg1, s32 *, 0x20);
                            goto block_169;
                        }
                    } else {
                        if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == (temp_v0_5 - 2)) {
                            if ((s16) M2C_FIELD(arg1, u16 *, 0x24) != 0) {
                                goto block_83;
                            }
                            goto block_170;
                        }
block_83:
                        if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == ((((u32) M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u32 *, 0x34) >> 0x16) & 0x1F) - 2)) {
                            if ((s16) M2C_FIELD(arg1, u16 *, 0x24) != 0) {
                                goto block_85;
                            }
                            goto block_170;
                        }
block_85:
                        var_v0_3 = (u32) M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u32 *, 0x34) >> 0x1B;
                        goto block_167;
                    }
                    break;
                }
            }
        } else {
            var_a3_2 = arg3 & 0xFFFF;
            if (arg0 != 2) {

            } else {
                switch (var_a3_2) {                 /* switch 1; irregular */
                case 0x5C:                          /* switch 1 */
                    temp_v0_6 = ((u32) M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u32 *, 0x2C) >> 0x15) & 0x1F;
                    if (temp_v0_6 == 1) {
                        if (M2C_FIELD(arg1, u16 *, 0x24) == M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 0x1C), void **, 4), s32 *, 4)) {
                            var_a0_2 = 0x73;
                            if (M2C_FIELD(arg1, s32 *, 0x20) == 0) {
                                goto block_171;
                            }
                        }
                    } else {
                        if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == (temp_v0_6 - 2)) {
                            var_a0_2 = 0x73;
                            if ((s16) M2C_FIELD(arg1, u16 *, 0x24) != 0) {
                                goto block_139;
                            }
                            goto block_171;
                        }
block_139:
                        if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == ((((u32) M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u32 *, 0x2C) >> 0x1A) & 0x1F) - 2)) {
                            var_a0_2 = 0x73;
                            if ((s16) M2C_FIELD(arg1, u16 *, 0x24) != 0) {
                                goto block_142;
                            }
                            goto block_171;
                        }
block_142:
                        temp_v0_7 = ((arg2 & 0xFFFF) * 0x3C) + (*D_80063940);
                        if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == ((((M2C_FIELD(temp_v0_7, s32 *, 0x30) & 0xF) * 2) | ((u32) M2C_FIELD(temp_v0_7, u32 *, 0x2C) >> 0x1F)) - 2)) {
                            var_a0_2 = 0x73;
                            if ((s16) M2C_FIELD(arg1, u16 *, 0x24) == 0) {
                                goto block_171;
                            }
                        }
                    }
                    break;
                case 0x5D:                          /* switch 1 */
                    temp_v0_8 = ((u32) M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u32 *, 0x34) >> 2) & 0x1F;
                    if (temp_v0_8 == 1) {
                        if (M2C_FIELD(arg1, u16 *, 0x24) == M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 0x1C), void **, 4), s32 *, 4)) {
                            var_a0_2 = 0x5E;
                            if (M2C_FIELD(arg1, s32 *, 0x20) == 0) {
                                goto block_171;
                            }
                        }
                    } else {
                        if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == (temp_v0_8 - 2)) {
                            var_a0_2 = 0x5E;
                            if ((s16) M2C_FIELD(arg1, u16 *, 0x24) != 0) {
                                goto block_152;
                            }
                            goto block_171;
                        }
block_152:
                        if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == ((((u32) M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u32 *, 0x34) >> 7) & 0x1F) - 2)) {
                            var_a0_2 = 0x5E;
                            if ((s16) M2C_FIELD(arg1, u16 *, 0x24) != 0) {
                                goto block_155;
                            }
                            goto block_171;
                        }
block_155:
                        if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == ((((u32) M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u32 *, 0x34) >> 0xC) & 0x1F) - 2)) {
                            var_a0_2 = 0x5E;
                            if ((s16) M2C_FIELD(arg1, u16 *, 0x24) == 0) {
                                goto block_171;
                            }
                        }
                    }
                    break;
                case 0x5F:                          /* switch 1 */
                    temp_v0_9 = ((u32) M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u32 *, 0x38) >> 0xF) & 0x1F;
                    if (temp_v0_9 == 1) {
                        if (M2C_FIELD(arg1, u16 *, 0x24) == M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 0x1C), void **, 4), s32 *, 4)) {
                            var_v0_2 = M2C_FIELD(arg1, s32 *, 0x20);
                            goto block_169;
                        }
                    } else {
                        if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == (temp_v0_9 - 2)) {
                            if ((s16) M2C_FIELD(arg1, u16 *, 0x24) != 0) {
                                goto block_163;
                            }
                            goto block_170;
                        }
block_163:
                        if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == ((((u32) M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u32 *, 0x38) >> 0x14) & 0x1F) - 2)) {
                            if ((s16) M2C_FIELD(arg1, u16 *, 0x24) != 0) {
                                goto block_165;
                            }
                            goto block_170;
                        }
block_165:
                        var_v0_4 = (u32) M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u32 *, 0x38) >> 0x19;
                        goto block_166;
                    }
                    break;
                }
            }
        }
    } else {
        var_a3_2 = arg3 & 0xFFFF;
        switch (var_a3_2) {                         /* irregular */
        case 0x5C:
            temp_a0 = M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u32 *, 0x2C);
            if (((temp_a0 >> 0x15) & 0x1F) == 1) {
                if (M2C_FIELD(arg1, u16 *, 0x24) == M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 0x1C), void **, 4), s32 *, 4)) {
                    var_a0_2 = 0x73;
                    if (M2C_FIELD(arg1, s32 *, 0x20) == 0) {
                        goto block_171;
                    }
                }
            } else {
                if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == (((temp_a0 >> 6) & 0x1F) - 2)) {
                    var_a0_2 = 0x73;
                    if ((s16) M2C_FIELD(arg1, u16 *, 0x24) != 0) {
                        goto block_99;
                    }
                    goto block_171;
                }
block_99:
                if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == ((((u32) M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u32 *, 0x2C) >> 0xB) & 0x1F) - 2)) {
                    var_a0_2 = 0x73;
                    if ((s16) M2C_FIELD(arg1, u16 *, 0x24) != 0) {
                        goto block_102;
                    }
                    goto block_171;
                }
block_102:
                if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == ((M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u16 *, 0x2E) & 0x1F) - 2)) {
                    var_a0_2 = 0x73;
                    if ((s16) M2C_FIELD(arg1, u16 *, 0x24) == 0) {
block_171:
                        func_80034AB0(var_a0_2, var_a3_2);
                    }
                }
            }
            break;
        case 0x5D:
            temp_v0_10 = ((u32) M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u32 *, 0x30) >> 0x13) & 0x1F;
            if (temp_v0_10 == 1) {
                if (M2C_FIELD(arg1, u16 *, 0x24) == M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 0x1C), void **, 4), s32 *, 4)) {
                    var_a0_2 = 0x5E;
                    if (M2C_FIELD(arg1, s32 *, 0x20) == 0) {
                        goto block_171;
                    }
                }
            } else {
                if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == (temp_v0_10 - 2)) {
                    var_a0_2 = 0x5E;
                    if ((s16) M2C_FIELD(arg1, u16 *, 0x24) != 0) {
                        goto block_112;
                    }
                    goto block_171;
                }
block_112:
                if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == ((M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u8 *, 0x33) & 0x1F) - 2)) {
                    var_a0_2 = 0x5E;
                    if ((s16) M2C_FIELD(arg1, u16 *, 0x24) != 0) {
                        goto block_115;
                    }
                    goto block_171;
                }
block_115:
                temp_v0_11 = ((arg2 & 0xFFFF) * 0x3C) + (*D_80063940);
                if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == ((((M2C_FIELD(temp_v0_11, s32 *, 0x34) & 3) * 8) | ((u32) M2C_FIELD(temp_v0_11, u32 *, 0x30) >> 0x1D)) - 2)) {
                    var_a0_2 = 0x5E;
                    if ((s16) M2C_FIELD(arg1, u16 *, 0x24) == 0) {
                        goto block_171;
                    }
                }
            }
            break;
        case 0x5F:
            temp_v0_12 = M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), s32 *, 0x38) & 0x1F;
            if (temp_v0_12 == 1) {
                if (M2C_FIELD(arg1, u16 *, 0x24) == M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 0x1C), void **, 4), s32 *, 4)) {
                    var_v0_2 = M2C_FIELD(arg1, s32 *, 0x20);
                    goto block_169;
                }
            } else {
                if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == (temp_v0_12 - 2)) {
                    if ((s16) M2C_FIELD(arg1, u16 *, 0x24) != 0) {
                        goto block_123;
                    }
                    goto block_170;
                }
block_123:
                if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == ((((u32) M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u32 *, 0x38) >> 5) & 0x1F) - 2)) {
                    if ((s16) M2C_FIELD(arg1, u16 *, 0x24) != 0) {
                        goto block_125;
                    }
                    goto block_170;
                }
block_125:
                var_v0_4 = (u32) M2C_FIELD((((arg2 & 0xFFFF) * 0x3C) + (*D_80063940)), u32 *, 0x38) >> 0xA;
block_166:
                var_v0_3 = var_v0_4 & 0x1F;
block_167:
                if ((u16) M2C_FIELD(arg1, s32 *, 0x20) == (var_v0_3 - 2)) {
                    var_v0_2 = (s32) (s16) M2C_FIELD(arg1, u16 *, 0x24);
block_169:
                    if (var_v0_2 == 0) {
block_170:
                        var_a0_2 = 0x8A;
                        goto block_171;
                    }
                }
            }
            break;
        }
    }
    return 0;
}
