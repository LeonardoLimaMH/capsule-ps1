#include "common.h"

void func_800142E4(void) {
    extern M2C_UNK D_8008ED68[];
    s32 sp10;
    u16 sp18;
    s32 sp20;
    M2C_UNK var_a0;
    s16 temp_fp_2;
    s16 temp_s5_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1_2;
    s16 temp_v1_4;
    s32 temp_a0;
    s32 temp_s5;
    s32 var_a3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    u16 temp_fp;
    u32 temp_s0;
    u32 temp_s0_2;
    u32 temp_v1;
    u32 temp_v1_3;
    u32 var_a2;
    u32 var_a2_2;

    sp18 = (M2C_FIELD(D_8008ED68, u8 *, 0x25) << 6) + 0x7813;
    sp10 = (M2C_FIELD(D_8008ED68, s32 *, 0x20) / 5) & 0x1FF;
    var_s3 = M2C_FIELD(D_8008ED68, u8 *, 0x26) - M2C_FIELD(D_8008ED68, u8 *, 0x2A);
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x2A) >= (u8) M2C_FIELD(D_8008ED68, u8 *, 0x26)) {
        var_s3 = 0;
    }
    temp_a0 = var_s3 & 0xFF;
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
    var_s2 = 0;
    var_s1 = 0;
    do {
        temp_s5 = var_s2 & 1;
        temp_fp = (var_s2 << 7) - sp10;
        sp20 = temp_fp + 0x200;
loop_13:
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
        M2C_FIELD(temp_s0, s16 *, 0x12) = 0x80;
        M2C_FIELD(temp_s0, u16 *, 8) = temp_fp;
        M2C_FIELD(temp_s0, u16 *, 0xE) = sp18;
        if (var_s1 != 0) {
            M2C_FIELD(temp_s0, u16 *, 8) = (u16) sp20;
        }
        temp_v1_2 = (s16) M2C_FIELD(temp_s0, u16 *, 8);
        var_v0_4 = temp_v1_2 < 0x140;
        if (temp_v1_2 < 0) {
            temp_v0 = temp_v1_2 + M2C_FIELD(temp_s0, s16 *, 0x10);
            if (temp_v0 > 0) {
                M2C_FIELD(temp_s0, u16 *, 8) = 0U;
                M2C_FIELD(temp_s0, s16 *, 0x10) = temp_v0;
                M2C_FIELD(temp_s0, u8 *, 0xC) = (u8) (M2C_FIELD(temp_s0, u8 *, 0xC) + ((u8) M2C_FIELD(temp_s0, s16 *, 0x10) - temp_v0));
            }
            var_v0_4 = (s16) M2C_FIELD(temp_s0, u16 *, 8) < 0x140;
        }
        M2C_FIELD(temp_s0, s16 *, 0xA) = 0;
        if ((var_v0_4 != 0) && (((s16) M2C_FIELD(temp_s0, u16 *, 8) + M2C_FIELD(temp_s0, s16 *, 0x10)) > 0)) {
            M2C_FIELD(temp_s0, s32 *, 0) = (s32) ((M2C_FIELD(temp_s0, s32 *, 0) & 0xFF000000) | (M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), s32 *, 0x107C) & 0xFFFFFF));
            M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), s32 *, 0x107C) = (s32) ((M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), s32 *, 0x107C) & 0xFF000000) | (temp_s0 & 0xFFFFFF));
        }
        if ((var_s1 == 1) && (temp_s5 != 0)) {
            var_a0 = 0x1C;
            if (var_s2 >= 2) {
                var_a0 = 0x1D;
            }
            func_80018610(var_a0, 0x403);
        }
        var_s1 += 1;
        if (var_s1 < 2) {
            goto loop_13;
        }
        var_s2 += 1;
        var_s1 = 0;
    } while (var_s2 < 4);
    var_s2_2 = 0;
    do {
        var_s1_2 = 0;
        var_a3 = sp10;
        temp_s5_2 = (var_s2_2 << 7) - var_a3;
        temp_fp_2 = temp_s5_2 + 0x200;
loop_38:
        var_a2_2 = 0;
        temp_s0_2 = M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), u32 *, 0x1090);
        if (temp_s0_2 != 0) {
            temp_v1_3 = temp_s0_2 + 0x14;
            if ((u32) (M2C_FIELD(D_8008ED68, void **, 0) + 0x4594) >= temp_v1_3) {
                var_a2_2 = temp_v1_3;
            }
        }
        M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), u32 *, 0x1090) = var_a2_2;
        SetSprt((void *) temp_s0_2, M2C_FIELD(D_8008ED68, void **, 0), (void *) var_a2_2, (u16) var_a3);
        SetShadeTex((void *) temp_s0_2, 0);
        SetSemiTrans((void *) temp_s0_2, 0);
        M2C_FIELD(temp_s0_2, s8 *, 6) = (s8) var_v0;
        M2C_FIELD(temp_s0_2, s8 *, 5) = (s8) var_v0;
        M2C_FIELD(temp_s0_2, s8 *, 4) = (s8) var_v0;
        M2C_FIELD(temp_s0_2, u8 *, 0xC) = 0U;
        M2C_FIELD(temp_s0_2, s8 *, 0xD) = 0x80;
        M2C_FIELD(temp_s0_2, s16 *, 0x10) = 0x80;
        M2C_FIELD(temp_s0_2, s16 *, 0x12) = 0x70;
        var_a3 = (s32) sp18;
        M2C_FIELD(temp_s0_2, s16 *, 8) = temp_s5_2;
        M2C_FIELD(temp_s0_2, s16 *, 0xE) = (s16) var_a3;
        if (var_s1_2 != 0) {
            M2C_FIELD(temp_s0_2, s16 *, 8) = temp_fp_2;
        }
        temp_v1_4 = M2C_FIELD(temp_s0_2, s16 *, 8);
        var_v0_5 = temp_v1_4 < 0x140;
        if (temp_v1_4 < 0) {
            temp_v0_2 = temp_v1_4 + M2C_FIELD(temp_s0_2, s16 *, 0x10);
            if (temp_v0_2 > 0) {
                M2C_FIELD(temp_s0_2, s16 *, 8) = 0;
                M2C_FIELD(temp_s0_2, s16 *, 0x10) = temp_v0_2;
                M2C_FIELD(temp_s0_2, u8 *, 0xC) = (u8) (M2C_FIELD(temp_s0_2, u8 *, 0xC) + ((u8) M2C_FIELD(temp_s0_2, s16 *, 0x10) - temp_v0_2));
            }
            var_v0_5 = M2C_FIELD(temp_s0_2, s16 *, 8) < 0x140;
        }
        M2C_FIELD(temp_s0_2, s16 *, 0xA) = 0x80;
        if ((var_v0_5 != 0) && ((M2C_FIELD(temp_s0_2, s16 *, 8) + M2C_FIELD(temp_s0_2, s16 *, 0x10)) > 0)) {
            var_a3 = 0xFF000000;
            M2C_FIELD(temp_s0_2, s32 *, 0) = (s32) ((M2C_FIELD(temp_s0_2, s32 *, 0) & 0xFF000000) | (M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), s32 *, 0x107C) & 0xFFFFFF));
            M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), s32 *, 0x107C) = (s32) ((M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), s32 *, 0x107C) & 0xFF000000) | (temp_s0_2 & 0xFFFFFF));
        }
        var_s1_2 += 1;
        if (var_s1_2 < 2) {
            goto loop_38;
        }
        var_s2_2 += 1;
    } while (var_s2_2 < 4);
    func_80018610(0x1E, 0x403);
}
