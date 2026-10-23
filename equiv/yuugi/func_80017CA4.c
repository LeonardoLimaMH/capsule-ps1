#include "common.h"

s32 func_80017CA4(void *arg0, u16 arg1) {
    extern M2C_UNK D_8008ED68[];
    extern u8 D_8008F702[];
    s16 temp_a0_14;
    s16 temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 var_v0_11;
    s32 var_v0_12;
    s32 var_v0_14;
    s32 var_v0_15;
    s32 var_v0_17;
    s32 var_v0_18;
    s32 var_v0_20;
    s32 var_v0_21;
    s32 var_v0_23;
    s32 var_v0_24;
    s32 var_v0_26;
    s32 var_v0_27;
    s32 var_v0_29;
    s32 var_v0_2;
    s32 var_v0_30;
    s32 var_v0_32;
    s32 var_v0_33;
    s32 var_v0_35;
    s32 var_v0_36;
    s32 var_v0_3;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_8;
    s32 var_v0_9;
    u16 var_a1;
    u32 temp_a0;
    u32 temp_a1_2;
    u32 temp_s0;
    u32 temp_v1;
    u32 var_a2;
    u8 temp_a0_10;
    u8 temp_a0_11;
    u8 temp_a0_12;
    u8 temp_a0_13;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 temp_a0_4;
    u8 temp_a0_5;
    u8 temp_a0_6;
    u8 temp_a0_7;
    u8 temp_a0_8;
    u8 temp_a0_9;
    u8 var_v0;
    u8 var_v0_10;
    u8 var_v0_13;
    u8 var_v0_16;
    u8 var_v0_19;
    u8 var_v0_22;
    u8 var_v0_25;
    u8 var_v0_28;
    u8 var_v0_31;
    u8 var_v0_34;
    u8 var_v0_4;
    u8 var_v0_7;
    void *temp_v1_2;

    var_a1 = arg1;
    temp_a0 = M2C_FIELD(arg0, u32 *, 0x38);
    if ((temp_a0 & 1) != 1) {
        if ((temp_a0 >> 3) & 1) {
            if ((*D_8008F702) == 0) {
                M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + M2C_FIELD(arg0, s32 *, 0x68));
                M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) + M2C_FIELD(arg0, s32 *, 0x6C));
                M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) + M2C_FIELD(arg0, s32 *, 0x70));
                M2C_FIELD(arg0, u16 *, 0x54) = (u16) (M2C_FIELD(arg0, u16 *, 0x54) + M2C_FIELD(arg0, u16 *, 0x78));
                var_a1 = M2C_FIELD(arg0, u16 *, 0x76);
                M2C_FIELD(arg0, u16 *, 0x50) = (u16) (M2C_FIELD(arg0, u16 *, 0x50) + M2C_FIELD(arg0, u16 *, 0x74));
                M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) + var_a1);
            }
        }
        if (M2C_FIELD(arg0, u8 *, 0x5B) != 0) {
            func_800187E8(M2C_FIELD(arg0, s16 *, 0x4E), var_a1);
        }
        var_a2 = 0;
        temp_s0 = M2C_FIELD(M2C_FIELD((*D_8008ED68), void **, 0), u32 *, 0x1090);
        if (temp_s0 != 0) {
            temp_v1 = temp_s0 + 0x24;
            if ((u32) (M2C_FIELD((*D_8008ED68), void **, 0) + 0x4594) >= temp_v1) {
                var_a2 = temp_v1;
            }
        }
        M2C_FIELD(M2C_FIELD((*D_8008ED68), void **, 0), u32 *, 0x1090) = var_a2;
        SetPolyG4((void *) temp_s0, M2C_FIELD((*D_8008ED68), void **, 0), (void *) var_a2);
        SetSemiTrans((void *) temp_s0, ((u32) M2C_FIELD(arg0, u32 *, 0x38) >> 6) & 1);
        temp_a0_2 = M2C_FIELD(arg0, u8 *, 0x1C);
        if (M2C_FIELD((*D_8008ED68), s32 *, 0xA6C) == 0x1000) {
            var_v0 = temp_a0_2;
        } else if (M2C_FIELD((*D_8008ED68), s32 *, 0xA6C) < 0x1000) {
            var_v0_2 = temp_a0_2 * M2C_FIELD((*D_8008ED68), s32 *, 0xA6C);
            if (var_v0_2 < 0) {
                var_v0_2 += 0xFFF;
            }
            var_v0 = (u8) (var_v0_2 >> 0xC);
        } else {
            var_v0_3 = (0xFF - temp_a0_2) * (M2C_FIELD((*D_8008ED68), s32 *, 0xA6C) - 0x1000);
            if (var_v0_3 < 0) {
                var_v0_3 += 0xFFF;
            }
            var_v0 = (var_v0_3 >> 0xC) + temp_a0_2;
        }
        M2C_FIELD(temp_s0, u8 *, 4) = var_v0;
        temp_a0_3 = M2C_FIELD(arg0, u8 *, 0x1D);
        if (M2C_FIELD((*D_8008ED68), s32 *, 0xA70) == 0x1000) {
            var_v0_4 = temp_a0_3;
        } else if (M2C_FIELD((*D_8008ED68), s32 *, 0xA70) < 0x1000) {
            var_v0_5 = temp_a0_3 * M2C_FIELD((*D_8008ED68), s32 *, 0xA70);
            if (var_v0_5 < 0) {
                var_v0_5 += 0xFFF;
            }
            var_v0_4 = (u8) (var_v0_5 >> 0xC);
        } else {
            var_v0_6 = (0xFF - temp_a0_3) * (M2C_FIELD((*D_8008ED68), s32 *, 0xA70) - 0x1000);
            if (var_v0_6 < 0) {
                var_v0_6 += 0xFFF;
            }
            var_v0_4 = (var_v0_6 >> 0xC) + temp_a0_3;
        }
        M2C_FIELD(temp_s0, u8 *, 5) = var_v0_4;
        temp_a0_4 = M2C_FIELD(arg0, u8 *, 0x1E);
        if (M2C_FIELD((*D_8008ED68), s32 *, 0xA74) == 0x1000) {
            var_v0_7 = temp_a0_4;
        } else if (M2C_FIELD((*D_8008ED68), s32 *, 0xA74) < 0x1000) {
            var_v0_8 = temp_a0_4 * M2C_FIELD((*D_8008ED68), s32 *, 0xA74);
            if (var_v0_8 < 0) {
                var_v0_8 += 0xFFF;
            }
            var_v0_7 = (u8) (var_v0_8 >> 0xC);
        } else {
            var_v0_9 = (0xFF - temp_a0_4) * (M2C_FIELD((*D_8008ED68), s32 *, 0xA74) - 0x1000);
            if (var_v0_9 < 0) {
                var_v0_9 += 0xFFF;
            }
            var_v0_7 = (var_v0_9 >> 0xC) + temp_a0_4;
        }
        M2C_FIELD(temp_s0, u8 *, 6) = var_v0_7;
        temp_a0_5 = M2C_FIELD(arg0, u8 *, 0x1F);
        if (M2C_FIELD((*D_8008ED68), s32 *, 0xA6C) == 0x1000) {
            var_v0_10 = temp_a0_5;
        } else if (M2C_FIELD((*D_8008ED68), s32 *, 0xA6C) < 0x1000) {
            var_v0_11 = temp_a0_5 * M2C_FIELD((*D_8008ED68), s32 *, 0xA6C);
            if (var_v0_11 < 0) {
                var_v0_11 += 0xFFF;
            }
            var_v0_10 = (u8) (var_v0_11 >> 0xC);
        } else {
            var_v0_12 = (0xFF - temp_a0_5) * (M2C_FIELD((*D_8008ED68), s32 *, 0xA6C) - 0x1000);
            if (var_v0_12 < 0) {
                var_v0_12 += 0xFFF;
            }
            var_v0_10 = (var_v0_12 >> 0xC) + temp_a0_5;
        }
        M2C_FIELD(temp_s0, u8 *, 0xC) = var_v0_10;
        temp_a0_6 = M2C_FIELD(arg0, u8 *, 0x20);
        if (M2C_FIELD((*D_8008ED68), s32 *, 0xA70) == 0x1000) {
            var_v0_13 = temp_a0_6;
        } else if (M2C_FIELD((*D_8008ED68), s32 *, 0xA70) < 0x1000) {
            var_v0_14 = temp_a0_6 * M2C_FIELD((*D_8008ED68), s32 *, 0xA70);
            if (var_v0_14 < 0) {
                var_v0_14 += 0xFFF;
            }
            var_v0_13 = (u8) (var_v0_14 >> 0xC);
        } else {
            var_v0_15 = (0xFF - temp_a0_6) * (M2C_FIELD((*D_8008ED68), s32 *, 0xA70) - 0x1000);
            if (var_v0_15 < 0) {
                var_v0_15 += 0xFFF;
            }
            var_v0_13 = (var_v0_15 >> 0xC) + temp_a0_6;
        }
        M2C_FIELD(temp_s0, u8 *, 0xD) = var_v0_13;
        temp_a0_7 = M2C_FIELD(arg0, u8 *, 0x21);
        if (M2C_FIELD((*D_8008ED68), s32 *, 0xA74) == 0x1000) {
            var_v0_16 = temp_a0_7;
        } else if (M2C_FIELD((*D_8008ED68), s32 *, 0xA74) < 0x1000) {
            var_v0_17 = temp_a0_7 * M2C_FIELD((*D_8008ED68), s32 *, 0xA74);
            if (var_v0_17 < 0) {
                var_v0_17 += 0xFFF;
            }
            var_v0_16 = (u8) (var_v0_17 >> 0xC);
        } else {
            var_v0_18 = (0xFF - temp_a0_7) * (M2C_FIELD((*D_8008ED68), s32 *, 0xA74) - 0x1000);
            if (var_v0_18 < 0) {
                var_v0_18 += 0xFFF;
            }
            var_v0_16 = (var_v0_18 >> 0xC) + temp_a0_7;
        }
        M2C_FIELD(temp_s0, u8 *, 0xE) = var_v0_16;
        temp_a0_8 = M2C_FIELD(arg0, u8 *, 0x22);
        if (M2C_FIELD((*D_8008ED68), s32 *, 0xA6C) == 0x1000) {
            var_v0_19 = temp_a0_8;
        } else if (M2C_FIELD((*D_8008ED68), s32 *, 0xA6C) < 0x1000) {
            var_v0_20 = temp_a0_8 * M2C_FIELD((*D_8008ED68), s32 *, 0xA6C);
            if (var_v0_20 < 0) {
                var_v0_20 += 0xFFF;
            }
            var_v0_19 = (u8) (var_v0_20 >> 0xC);
        } else {
            var_v0_21 = (0xFF - temp_a0_8) * (M2C_FIELD((*D_8008ED68), s32 *, 0xA6C) - 0x1000);
            if (var_v0_21 < 0) {
                var_v0_21 += 0xFFF;
            }
            var_v0_19 = (var_v0_21 >> 0xC) + temp_a0_8;
        }
        M2C_FIELD(temp_s0, u8 *, 0x14) = var_v0_19;
        temp_a0_9 = M2C_FIELD(arg0, u8 *, 0x23);
        if (M2C_FIELD((*D_8008ED68), s32 *, 0xA70) == 0x1000) {
            var_v0_22 = temp_a0_9;
        } else if (M2C_FIELD((*D_8008ED68), s32 *, 0xA70) < 0x1000) {
            var_v0_23 = temp_a0_9 * M2C_FIELD((*D_8008ED68), s32 *, 0xA70);
            if (var_v0_23 < 0) {
                var_v0_23 += 0xFFF;
            }
            var_v0_22 = (u8) (var_v0_23 >> 0xC);
        } else {
            var_v0_24 = (0xFF - temp_a0_9) * (M2C_FIELD((*D_8008ED68), s32 *, 0xA70) - 0x1000);
            if (var_v0_24 < 0) {
                var_v0_24 += 0xFFF;
            }
            var_v0_22 = (var_v0_24 >> 0xC) + temp_a0_9;
        }
        M2C_FIELD(temp_s0, u8 *, 0x15) = var_v0_22;
        temp_a0_10 = M2C_FIELD(arg0, u8 *, 0x24);
        if (M2C_FIELD((*D_8008ED68), s32 *, 0xA74) == 0x1000) {
            var_v0_25 = temp_a0_10;
        } else if (M2C_FIELD((*D_8008ED68), s32 *, 0xA74) < 0x1000) {
            var_v0_26 = temp_a0_10 * M2C_FIELD((*D_8008ED68), s32 *, 0xA74);
            if (var_v0_26 < 0) {
                var_v0_26 += 0xFFF;
            }
            var_v0_25 = (u8) (var_v0_26 >> 0xC);
        } else {
            var_v0_27 = (0xFF - temp_a0_10) * (M2C_FIELD((*D_8008ED68), s32 *, 0xA74) - 0x1000);
            if (var_v0_27 < 0) {
                var_v0_27 += 0xFFF;
            }
            var_v0_25 = (var_v0_27 >> 0xC) + temp_a0_10;
        }
        M2C_FIELD(temp_s0, u8 *, 0x16) = var_v0_25;
        temp_a0_11 = M2C_FIELD(arg0, u8 *, 0x25);
        if (M2C_FIELD((*D_8008ED68), s32 *, 0xA6C) == 0x1000) {
            var_v0_28 = temp_a0_11;
        } else if (M2C_FIELD((*D_8008ED68), s32 *, 0xA6C) < 0x1000) {
            var_v0_29 = temp_a0_11 * M2C_FIELD((*D_8008ED68), s32 *, 0xA6C);
            if (var_v0_29 < 0) {
                var_v0_29 += 0xFFF;
            }
            var_v0_28 = (u8) (var_v0_29 >> 0xC);
        } else {
            var_v0_30 = (0xFF - temp_a0_11) * (M2C_FIELD((*D_8008ED68), s32 *, 0xA6C) - 0x1000);
            if (var_v0_30 < 0) {
                var_v0_30 += 0xFFF;
            }
            var_v0_28 = (var_v0_30 >> 0xC) + temp_a0_11;
        }
        M2C_FIELD(temp_s0, u8 *, 0x1C) = var_v0_28;
        temp_a0_12 = M2C_FIELD(arg0, u8 *, 0x26);
        if (M2C_FIELD((*D_8008ED68), s32 *, 0xA70) == 0x1000) {
            var_v0_31 = temp_a0_12;
        } else if (M2C_FIELD((*D_8008ED68), s32 *, 0xA70) < 0x1000) {
            var_v0_32 = temp_a0_12 * M2C_FIELD((*D_8008ED68), s32 *, 0xA70);
            if (var_v0_32 < 0) {
                var_v0_32 += 0xFFF;
            }
            var_v0_31 = (u8) (var_v0_32 >> 0xC);
        } else {
            var_v0_33 = (0xFF - temp_a0_12) * (M2C_FIELD((*D_8008ED68), s32 *, 0xA70) - 0x1000);
            if (var_v0_33 < 0) {
                var_v0_33 += 0xFFF;
            }
            var_v0_31 = (var_v0_33 >> 0xC) + temp_a0_12;
        }
        M2C_FIELD(temp_s0, u8 *, 0x1D) = var_v0_31;
        temp_a0_13 = M2C_FIELD(arg0, u8 *, 0x27);
        if (M2C_FIELD((*D_8008ED68), s32 *, 0xA74) == 0x1000) {
            var_v0_34 = temp_a0_13;
        } else if (M2C_FIELD((*D_8008ED68), s32 *, 0xA74) < 0x1000) {
            var_v0_35 = temp_a0_13 * M2C_FIELD((*D_8008ED68), s32 *, 0xA74);
            if (var_v0_35 < 0) {
                var_v0_35 += 0xFFF;
            }
            var_v0_34 = (u8) (var_v0_35 >> 0xC);
        } else {
            var_v0_36 = (0xFF - temp_a0_13) * (M2C_FIELD((*D_8008ED68), s32 *, 0xA74) - 0x1000);
            if (var_v0_36 < 0) {
                var_v0_36 += 0xFFF;
            }
            var_v0_34 = (var_v0_36 >> 0xC) + temp_a0_13;
        }
        M2C_FIELD(temp_s0, u8 *, 0x1E) = var_v0_34;
        temp_a0_14 = M2C_FIELD(arg0, s16 *, 0x46) + ((s32) M2C_FIELD((*D_8008ED68), s32 *, 0x108) / 2) + M2C_FIELD(arg0, s16 *, 0x14);
        temp_a1 = temp_a0_14 + M2C_FIELD(arg0, u16 *, 0x18);
        M2C_FIELD(temp_s0, s16 *, 8) = temp_a0_14;
        M2C_FIELD(temp_s0, s16 *, 0x18) = temp_a0_14;
        M2C_FIELD(temp_s0, s16 *, 0x10) = temp_a1;
        M2C_FIELD(temp_s0, s16 *, 0x20) = temp_a1;
        temp_v0 = M2C_FIELD(arg0, s16 *, 0x4A) + ((s32) M2C_FIELD((*D_8008ED68), s32 *, 0x10C) / 2) + M2C_FIELD(arg0, s16 *, 0x16);
        M2C_FIELD(temp_s0, s16 *, 0xA) = temp_v0;
        M2C_FIELD(temp_s0, s16 *, 0x12) = temp_v0;
        temp_v0_2 = temp_v0 + M2C_FIELD(arg0, u16 *, 0x1A);
        M2C_FIELD(temp_s0, s16 *, 0x1A) = temp_v0_2;
        M2C_FIELD(temp_s0, s16 *, 0x22) = temp_v0_2;
        M2C_FIELD(temp_s0, s32 *, 0) = (s32) ((M2C_FIELD(temp_s0, s32 *, 0) & 0xFF000000) | (M2C_FIELD(((M2C_FIELD(arg0, s16 *, 0x4E) * 4) + M2C_FIELD((*D_8008ED68), void **, 0)), s32 *, 0x70) & 0xFFFFFF));
        temp_v1_2 = (M2C_FIELD(arg0, s16 *, 0x4E) * 4) + M2C_FIELD((*D_8008ED68), void **, 0);
        M2C_FIELD(temp_v1_2, s32 *, 0x70) = (s32) ((M2C_FIELD(temp_v1_2, s32 *, 0x70) & 0xFF000000) | (temp_s0 & 0xFFFFFF));
        temp_a1_2 = M2C_FIELD(arg0, u32 *, 0x38);
        if ((temp_a1_2 >> 6) & 1) {
            func_80018610(GetTPage(0, (temp_a1_2 >> 4) & 3, 0, 0) & 0xFFFF, M2C_FIELD(arg0, s16 *, 0x4E));
        }
        if (M2C_FIELD(arg0, u8 *, 0x5B) != 0) {
            func_800186E4(arg0 + 0x5C, M2C_FIELD(arg0, s16 *, 0x4E));
        }
    }
    return 0;
}
