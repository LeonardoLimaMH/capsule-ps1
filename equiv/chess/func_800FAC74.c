#include "common.h"

void func_800FAC74(void *arg0) {
    extern void * D_8008ED68[];
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s16 temp_s4;
    s16 temp_s5;
    s16 temp_s6;
    s16 temp_s7;
    s16 var_v0;
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s2_3;
    s32 temp_v0;
    s32 var_a0;
    s32 var_s3;
    u32 temp_s0_2;
    u32 temp_s0_3;
    u32 temp_v1_3;
    u32 temp_v1_4;
    u32 var_a2;
    u32 var_a2_2;
    u8 temp_v1;
    u8 temp_v1_2;

    temp_s5 = M2C_FIELD(arg0, s16 *, 0x28);
    temp_s7 = M2C_FIELD(arg0, s16 *, 0x2C);
    temp_s2 = temp_s7 - temp_s5;
    temp_s4 = M2C_FIELD(arg0, s16 *, 0x2A);
    temp_s6 = M2C_FIELD(arg0, s16 *, 0x2E);
    temp_s0 = temp_s6 - temp_s4;
    temp_v0 = SquareRoot12(((temp_s2 * temp_s2) + (temp_s0 * temp_s0)) << 0xC);
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x32);
        sp10 = (s32) ((temp_v1 * temp_s0) << 0xC) / temp_v0;
        temp_lo = (s32) ((temp_v1 * temp_s2) << 0xC) / temp_v0;
        temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x33);
        sp14 = (s32) ((temp_v1_2 * temp_s0) << 0xC) / temp_v0;
        sp18 = (s32) ((temp_v1_2 * temp_s2) << 0xC) / temp_v0;
        if (M2C_FIELD(arg0, u8 *, 0x3C) == 0) {
            var_a2 = 0;
            temp_s0_2 = M2C_FIELD((*D_8008ED68), u32 *, 0x1090);
            if (temp_s0_2 != 0) {
                temp_v1_3 = temp_s0_2 + 0x18;
                if ((u32) ((*D_8008ED68) + 0x4594) >= temp_v1_3) {
                    var_a2 = temp_v1_3;
                }
            }
            M2C_FIELD((*D_8008ED68), u32 *, 0x1090) = var_a2;
            SetPolyF4((void *) temp_s0_2, (*D_8008ED68), (void *) var_a2);
            M2C_FIELD(temp_s0_2, u8 *, 4) = (u8) M2C_FIELD(arg0, u8 *, 0x34);
            M2C_FIELD(temp_s0_2, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 0x35);
            M2C_FIELD(temp_s0_2, u8 *, 6) = (u8) M2C_FIELD(arg0, u8 *, 0x36);
            SetShadeTex((void *) temp_s0_2, 0);
            SetSemiTrans((void *) temp_s0_2, M2C_FIELD(arg0, u8 *, 0x3D));
            M2C_FIELD(temp_s0_2, s16 *, 8) = (s16) (temp_s5 - sp10);
            M2C_FIELD(temp_s0_2, s16 *, 0xA) = (s16) (temp_s4 + temp_lo);
            M2C_FIELD(temp_s0_2, s16 *, 0xC) = (s16) (temp_s5 + sp10);
            M2C_FIELD(temp_s0_2, s16 *, 0xE) = (s16) (temp_s4 - temp_lo);
            M2C_FIELD(temp_s0_2, s16 *, 0x10) = (s16) (temp_s7 - sp14);
            M2C_FIELD(temp_s0_2, s16 *, 0x12) = (s16) (temp_s6 + sp18);
            M2C_FIELD(temp_s0_2, s16 *, 0x14) = (s16) (temp_s7 + sp14);
            M2C_FIELD(temp_s0_2, s16 *, 0x16) = (s16) (temp_s6 - sp18);
            temp_s2_2 = GetTPage(0, M2C_FIELD(arg0, u8 *, 0x3E), 0, 0);
            AddPrim((*D_8008ED68) + ((M2C_FIELD(arg0, s16 *, 0x30) * 4) + 0x70), (void *) temp_s0_2);
            var_a0 = temp_s2_2 << 0x10;
        } else {
            var_s3 = 0;
            do {
                var_a2_2 = 0;
                temp_s0_3 = M2C_FIELD((*D_8008ED68), u32 *, 0x1090);
                if (temp_s0_3 != 0) {
                    temp_v1_4 = temp_s0_3 + 0x24;
                    if ((u32) ((*D_8008ED68) + 0x4594) >= temp_v1_4) {
                        var_a2_2 = temp_v1_4;
                    }
                }
                M2C_FIELD((*D_8008ED68), u32 *, 0x1090) = var_a2_2;
                SetPolyG4((void *) temp_s0_3, (*D_8008ED68), (void *) var_a2_2);
                M2C_FIELD(temp_s0_3, u8 *, 4) = (u8) M2C_FIELD(arg0, u8 *, 0x34);
                M2C_FIELD(temp_s0_3, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 0x35);
                M2C_FIELD(temp_s0_3, u8 *, 6) = (u8) M2C_FIELD(arg0, u8 *, 0x36);
                M2C_FIELD(temp_s0_3, u8 *, 0xC) = (u8) M2C_FIELD(arg0, u8 *, 0x38);
                M2C_FIELD(temp_s0_3, u8 *, 0xD) = (u8) M2C_FIELD(arg0, u8 *, 0x39);
                M2C_FIELD(temp_s0_3, u8 *, 0xE) = (u8) M2C_FIELD(arg0, u8 *, 0x3A);
                M2C_FIELD(temp_s0_3, u8 *, 0x14) = (u8) M2C_FIELD(arg0, u8 *, 0x34);
                M2C_FIELD(temp_s0_3, u8 *, 0x15) = (u8) M2C_FIELD(arg0, u8 *, 0x35);
                M2C_FIELD(temp_s0_3, u8 *, 0x16) = (u8) M2C_FIELD(arg0, u8 *, 0x36);
                M2C_FIELD(temp_s0_3, u8 *, 0x1C) = (u8) M2C_FIELD(arg0, u8 *, 0x38);
                M2C_FIELD(temp_s0_3, u8 *, 0x1D) = (u8) M2C_FIELD(arg0, u8 *, 0x39);
                M2C_FIELD(temp_s0_3, u8 *, 0x1E) = (u8) M2C_FIELD(arg0, u8 *, 0x3A);
                SetShadeTex((void *) temp_s0_3, 0);
                SetSemiTrans((void *) temp_s0_3, M2C_FIELD(arg0, u8 *, 0x3D));
                if (var_s3 == 0) {
                    M2C_FIELD(temp_s0_3, s16 *, 8) = temp_s5;
                    M2C_FIELD(temp_s0_3, s16 *, 0xA) = temp_s4;
                    M2C_FIELD(temp_s0_3, s16 *, 0x18) = temp_s7;
                    M2C_FIELD(temp_s0_3, s16 *, 0x1A) = temp_s6;
                    M2C_FIELD(temp_s0_3, s16 *, 0x10) = (s16) (temp_s5 + sp10);
                    M2C_FIELD(temp_s0_3, s16 *, 0x12) = (s16) (temp_s4 - temp_lo);
                    M2C_FIELD(temp_s0_3, s16 *, 0x20) = (s16) (temp_s7 + sp14);
                    var_v0 = temp_s6 - sp18;
                } else {
                    M2C_FIELD(temp_s0_3, s16 *, 8) = temp_s5;
                    M2C_FIELD(temp_s0_3, s16 *, 0xA) = temp_s4;
                    M2C_FIELD(temp_s0_3, s16 *, 0x18) = temp_s7;
                    M2C_FIELD(temp_s0_3, s16 *, 0x1A) = temp_s6;
                    M2C_FIELD(temp_s0_3, s16 *, 0x10) = (s16) (temp_s5 - sp10);
                    M2C_FIELD(temp_s0_3, s16 *, 0x12) = (s16) (temp_s4 + temp_lo);
                    M2C_FIELD(temp_s0_3, s16 *, 0x20) = (s16) (temp_s7 - sp14);
                    var_v0 = temp_s6 + sp18;
                }
                M2C_FIELD(temp_s0_3, s16 *, 0x22) = var_v0;
                var_s3 += 1;
                temp_s2_3 = GetTPage(0, M2C_FIELD(arg0, u8 *, 0x3E), 0, 0);
                AddPrim((*D_8008ED68) + ((M2C_FIELD(arg0, s16 *, 0x30) * 4) + 0x70), (void *) temp_s0_3);
            } while (var_s3 < 2);
            var_a0 = temp_s2_3 << 0x10;
        }
        func_80018610(var_a0 >> 0x10, M2C_FIELD(arg0, s16 *, 0x30));
    }
}
