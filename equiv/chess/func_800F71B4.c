#include "common.h"

void func_800F71B4(void *arg0) {
    extern void * D_8008ED68[];
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    u16 sp24;
    s32 sp28;
    s16 temp_fp;
    u32 temp_a1;
    u32 temp_s0;
    u32 temp_s1;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_s4;
    u16 temp_v0;
    u32 temp_a0;
    u32 temp_s0_2;
    u32 var_a1;

    sp10 = (s32) M2C_FIELD(arg0, s16 *, 0x28);
    temp_fp = M2C_FIELD(arg0, s16 *, 0x2A);
    sp14 = (s32) M2C_FIELD(arg0, s16 *, 0x2C);
    temp_s4 = M2C_FIELD(arg0, u16 *, 0x36);
    sp18 = (s32) M2C_FIELD(arg0, u8 *, 0x38);
    sp1C = (s32) M2C_FIELD(arg0, u8 *, 0x39);
    sp20 = (s32) M2C_FIELD(arg0, u8 *, 0x3A);
    temp_v0 = GetTPage(0, 1, 0, 0);
    var_s3 = 0;
    M2C_FIELD(arg0, u16 *, 0x32) = (u16) (M2C_FIELD(arg0, u16 *, 0x32) + M2C_FIELD(arg0, u16 *, 0x30));
    sp24 = temp_v0;
    if (M2C_FIELD(arg0, u8 *, 0x2E) != 0) {
        sp28 = (sp14 * 4) + 0x70;
        var_v0 = 0 << 0xC;
        do {
            temp_a1 = (var_v0 / (s32) M2C_FIELD(arg0, u8 *, 0x2E)) + (s16) M2C_FIELD(arg0, u16 *, 0x32);
            var_v0_2 = temp_a1;
            if (temp_a1 < 0) {
                var_v0_2 = temp_a1 + 0xFFF;
            }
            temp_s0 = temp_a1 - ((var_v0_2 >> 0xC) << 0xC);
            temp_s1 = temp_s0 + M2C_FIELD(arg0, s16 *, 0x34);
            if (temp_s0 >= 0x3C0) {
                var_v1 = 0xC40;
                if (temp_s0 < 0xC41) {
                    var_v1 = temp_s0;
                }
            } else {
                var_v1 = 0x3C0;
            }
            if (temp_s1 >= 0x3C0) {
                var_v1_2 = 0xC40;
                if (temp_s1 < 0xC41) {
                    var_v1_2 = temp_s1;
                }
            } else {
                var_v1_2 = 0x3C0;
            }
            if (var_v1 != var_v1_2) {
                var_v0_3 = temp_s4 * rsin(var_v1, temp_a1);
                if (var_v0_3 < 0) {
                    var_v0_3 += 0xFFF;
                }
                var_v0_4 = temp_s4 * rcos(var_v1);
                if (var_v0_4 < 0) {
                    var_v0_4 += 0xFFF;
                }
                var_v0_5 = temp_s4 * rsin(var_v1_2);
                if (var_v0_5 < 0) {
                    var_v0_5 += 0xFFF;
                }
                var_v0_6 = temp_s4 * rcos(var_v1_2);
                var_a1 = 0;
                if (var_v0_6 < 0) {
                    var_v0_6 += 0xFFF;
                }
                temp_s0_2 = M2C_FIELD((*D_8008ED68), u32 *, 0x1090);
                if (temp_s0_2 != 0) {
                    temp_a0 = temp_s0_2 + 0x1C;
                    if ((u32) ((*D_8008ED68) + 0x4594) >= temp_a0) {
                        var_a1 = temp_a0;
                    }
                }
                M2C_FIELD((*D_8008ED68), u32 *, 0x1090) = var_a1;
                SetPolyG3((void *) temp_s0_2, (void *) var_a1);
                M2C_FIELD(temp_s0_2, u8 *, 4) = (u8) sp18;
                M2C_FIELD(temp_s0_2, u8 *, 5) = (u8) sp1C;
                M2C_FIELD(temp_s0_2, s8 *, 0xC) = 0;
                M2C_FIELD(temp_s0_2, s8 *, 0xD) = 0;
                M2C_FIELD(temp_s0_2, s8 *, 0xE) = 0;
                M2C_FIELD(temp_s0_2, s8 *, 0x14) = 0;
                M2C_FIELD(temp_s0_2, s8 *, 0x15) = 0;
                M2C_FIELD(temp_s0_2, s8 *, 0x16) = 0;
                M2C_FIELD(temp_s0_2, u8 *, 6) = (u8) sp20;
                SetSemiTrans((void *) temp_s0_2, 1);
                M2C_FIELD(temp_s0_2, s16 *, 0xA) = temp_fp;
                M2C_FIELD(temp_s0_2, s16 *, 0x10) = (s16) (sp10 + (var_v0_3 >> 0xC));
                M2C_FIELD(temp_s0_2, s16 *, 0x12) = (s16) (temp_fp + (var_v0_4 >> 0xC));
                M2C_FIELD(temp_s0_2, s16 *, 0x18) = (s16) (sp10 + (var_v0_5 >> 0xC));
                M2C_FIELD(temp_s0_2, s16 *, 0x1A) = (s16) (temp_fp + (var_v0_6 >> 0xC));
                M2C_FIELD(temp_s0_2, u16 *, 8) = (u16) sp10;
                AddPrim((*D_8008ED68) + sp28, (void *) temp_s0_2);
            }
            var_s3 += 1;
            var_v0 = var_s3 << 0xC;
        } while (var_s3 < (s32) M2C_FIELD(arg0, u8 *, 0x2E));
    }
    func_80018610(sp24, sp14);
}
