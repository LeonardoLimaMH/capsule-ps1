#include "common.h"

void func_80013DFC(void) {
    extern M2C_UNK D_8008ED68[];
    s32 sp10;
    u16 sp18;
    s32 sp20;
    M2C_UNK var_a0;
    s16 temp_s6;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_5;
    s16 temp_v1_6;
    s32 temp_a0;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 temp_s5;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u32 temp_s0;
    u32 temp_s0_2;
    u32 temp_v1;
    u32 temp_v1_4;
    u32 var_a2;
    u32 var_a2_2;

    sp18 = (M2C_FIELD(D_8008ED68, u8 *, 0x25) << 6) + 0x7813;
    sp10 = (M2C_FIELD(D_8008ED68, s32 *, 0x20) / 5) / 320;
    sp10 = (M2C_FIELD(D_8008ED68, s32 *, 0x20) / 5) % 320;
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x2A) < (u8) M2C_FIELD(D_8008ED68, u8 *, 0x26)) {
        var_s2 = M2C_FIELD(D_8008ED68, u8 *, 0x26) - M2C_FIELD(D_8008ED68, u8 *, 0x2A);
    } else {
        var_s2 = 0;
    }
    temp_a0 = var_s2 & 0xFF;
    if (M2C_FIELD(D_8008ED68, s32 *, 0xA6C) == 0x1000) {
        var_v0 = temp_a0;
    } else if (M2C_FIELD(D_8008ED68, s32 *, 0xA6C) < 0x1000) {
        var_v0_2 = temp_a0 * M2C_FIELD(D_8008ED68, s32 *, 0xA6C);
        if (var_v0_2 < 0) {
            var_v0_2 += 0xFFF;
        }
        var_v0 = var_v0_2 >> 0xC;
    } else {
        var_v0_3 = (0xFF - temp_a0) * (M2C_FIELD(D_8008ED68, s32 *, 0xA6C) - 0x1000);
        if (var_v0_3 < 0) {
            var_v0_3 += 0xFFF;
        }
        var_v0 = (var_v0_3 >> 0xC) + temp_a0;
    }
    var_s3 = 0;
    sp20 = 0x80 - sp10;
    var_s1 = 0;
    do {
        temp_s5 = var_s3 & 1;
        temp_s4 = var_s3 < 2;
loop_14:
        var_a2 = 0;
        temp_s0 = M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), u32 *, 0x1090);
        if (temp_s0 != 0) {
            temp_v1 = temp_s0 + 0x14;
            if ((u32) (M2C_FIELD(D_8008ED68, void **, 0) + 0x4594) >= temp_v1) {
                var_a2 = temp_v1;
            }
        }
        M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), u32 *, 0x1090) = var_a2;
        SetSprt((void *) temp_s0, M2C_FIELD(D_8008ED68, void **, 0), (void *) var_a2);
        SetShadeTex((void *) temp_s0, 0);
        SetSemiTrans((void *) temp_s0, 0);
        M2C_FIELD(temp_s0, s8 *, 6) = (s8) var_v0;
        M2C_FIELD(temp_s0, s8 *, 5) = (s8) var_v0;
        M2C_FIELD(temp_s0, s8 *, 4) = (s8) var_v0;
        if (temp_s5 != 0) {
            M2C_FIELD(temp_s0, u8 *, 0xC) = 0x80U;
        } else {
            M2C_FIELD(temp_s0, u8 *, 0xC) = 0U;
        }
        M2C_FIELD(temp_s0, s8 *, 0xD) = 0x80;
        M2C_FIELD(temp_s0, s16 *, 0x10) = 0x80;
        if (temp_s4 == 0) {
            M2C_FIELD(temp_s0, s16 *, 0x12) = 0x70;
        } else {
            M2C_FIELD(temp_s0, s16 *, 0x12) = 0x80;
        }
        M2C_FIELD(temp_s0, u16 *, 0xE) = sp18;
        if (temp_s5 != 0) {
            M2C_FIELD(temp_s0, u16 *, 8) = (u16) sp20;
        } else {
            M2C_FIELD(temp_s0, u16 *, 8) = (u16) -sp10;
        }
        if (var_s1 != 0) {
            M2C_FIELD(temp_s0, u16 *, 8) = (u16) (M2C_FIELD(temp_s0, u16 *, 8) + 0x140);
        }
        temp_v1_2 = (s16) M2C_FIELD(temp_s0, u16 *, 8);
        if (temp_v1_2 < 0) {
            temp_v0 = temp_v1_2 + M2C_FIELD(temp_s0, s16 *, 0x10);
            if (temp_v0 > 0) {
                M2C_FIELD(temp_s0, u16 *, 8) = 0U;
                M2C_FIELD(temp_s0, s16 *, 0x10) = temp_v0;
                M2C_FIELD(temp_s0, u8 *, 0xC) = (u8) (M2C_FIELD(temp_s0, u8 *, 0xC) + ((u8) M2C_FIELD(temp_s0, s16 *, 0x10) - temp_v0));
            }
        }
        if (temp_s4 == 0) {
            M2C_FIELD(temp_s0, s16 *, 0xA) = 0x80;
        } else {
            M2C_FIELD(temp_s0, s16 *, 0xA) = 0;
        }
        temp_v1_3 = (s16) M2C_FIELD(temp_s0, u16 *, 8);
        if (temp_v1_3 < 0x140) {
            if ((temp_v1_3 + M2C_FIELD(temp_s0, s16 *, 0x10)) > 0) {
                M2C_FIELD(temp_s0, s32 *, 0) = (s32) ((M2C_FIELD(temp_s0, s32 *, 0) & 0xFF000000) | (M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), s32 *, 0x107C) & 0xFFFFFF));
                M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), s32 *, 0x107C) = (s32) ((M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), s32 *, 0x107C) & 0xFF000000) | (temp_s0 & 0xFFFFFF));
            }
        }
        if ((var_s1 == 1) && (temp_s5 != 0)) {
            var_a0 = 0x1C;
            if (temp_s4 == 0) {
                var_a0 = 0x1D;
            }
            func_80018610(var_a0, 0x403);
        }
        var_s1 += 1;
        if (var_s1 < 2) {
            goto loop_14;
        }
        var_s3 += 1;
        var_s1 = 0;
    } while (var_s3 < 4);
    var_s3_2 = 0;
    temp_s6 = 0x100 - sp10;
    do {
        temp_s4_2 = var_s3_2 & 1;
loop_48:
        var_a2_2 = 0;
        temp_s0_2 = M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), u32 *, 0x1090);
        if (temp_s0_2 != 0) {
            temp_v1_4 = temp_s0_2 + 0x14;
            if ((u32) (M2C_FIELD(D_8008ED68, void **, 0) + 0x4594) >= temp_v1_4) {
                var_a2_2 = temp_v1_4;
            }
        }
        M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), u32 *, 0x1090) = var_a2_2;
        SetSprt((void *) temp_s0_2, M2C_FIELD(D_8008ED68, void **, 0), (void *) var_a2_2);
        SetShadeTex((void *) temp_s0_2, 0);
        SetSemiTrans((void *) temp_s0_2, 0);
        M2C_FIELD(temp_s0_2, s8 *, 6) = (s8) var_v0;
        M2C_FIELD(temp_s0_2, s8 *, 5) = (s8) var_v0;
        M2C_FIELD(temp_s0_2, s8 *, 4) = (s8) var_v0;
        if (temp_s4_2 != 0) {
            M2C_FIELD(temp_s0_2, u8 *, 0xC) = 0x40U;
        } else {
            M2C_FIELD(temp_s0_2, u8 *, 0xC) = 0U;
        }
        M2C_FIELD(temp_s0_2, s8 *, 0xD) = 0x80;
        M2C_FIELD(temp_s0_2, s16 *, 0x10) = 0x40;
        if (temp_s4_2 != 0) {
            M2C_FIELD(temp_s0_2, s16 *, 0x12) = 0x70;
        } else {
            M2C_FIELD(temp_s0_2, s16 *, 0x12) = 0x80;
        }
        M2C_FIELD(temp_s0_2, s16 *, 8) = temp_s6;
        M2C_FIELD(temp_s0_2, u16 *, 0xE) = sp18;
        if (var_s1 != 0) {
            M2C_FIELD(temp_s0_2, s16 *, 8) = (s16) (temp_s6 + 0x140);
        }
        temp_v1_5 = M2C_FIELD(temp_s0_2, s16 *, 8);
        if (temp_v1_5 < 0) {
            temp_v0_2 = temp_v1_5 + M2C_FIELD(temp_s0_2, s16 *, 0x10);
            if (temp_v0_2 > 0) {
                M2C_FIELD(temp_s0_2, s16 *, 8) = 0;
                M2C_FIELD(temp_s0_2, s16 *, 0x10) = temp_v0_2;
                M2C_FIELD(temp_s0_2, u8 *, 0xC) = (u8) (M2C_FIELD(temp_s0_2, u8 *, 0xC) + ((u8) M2C_FIELD(temp_s0_2, s16 *, 0x10) - temp_v0_2));
            }
        }
        if (temp_s4_2 != 0) {
            M2C_FIELD(temp_s0_2, s16 *, 0xA) = 0x80;
        } else {
            M2C_FIELD(temp_s0_2, s16 *, 0xA) = 0;
        }
        temp_v1_6 = M2C_FIELD(temp_s0_2, s16 *, 8);
        if (temp_v1_6 < 0x140) {
            if ((temp_v1_6 + M2C_FIELD(temp_s0_2, s16 *, 0x10)) > 0) {
                M2C_FIELD(temp_s0_2, s32 *, 0) = (s32) ((M2C_FIELD(temp_s0_2, s32 *, 0) & 0xFF000000) | (M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), s32 *, 0x107C) & 0xFFFFFF));
                M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), s32 *, 0x107C) = (s32) ((M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), s32 *, 0x107C) & 0xFF000000) | (temp_s0_2 & 0xFFFFFF));
            }
        }
        if (var_s1 == 1) {
            func_80018610(0x1E, 0x403);
        }
        var_s1 += 1;
        if (var_s1 < 2) {
            goto loop_48;
        }
        var_s3_2 += 1;
        var_s1 = 0;
    } while (var_s3_2 < 2);
}
