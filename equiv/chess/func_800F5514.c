#include "common.h"

void func_800F5514(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s16 temp_fp;
    s16 temp_s7;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    u16 temp_a0;
    u16 temp_v1;
    u16 temp_v1_3;
    u16 var_a0;
    u16 var_v1;
    u32 temp_a0_2;
    u32 temp_s0;
    u32 var_a1;
    u8 temp_v1_2;

    temp_fp = M2C_FIELD(arg0, s16 *, 0x28);
    temp_s7 = M2C_FIELD(arg0, s16 *, 0x2A);
    temp_v1 = M2C_FIELD(arg0, u16 *, 0x3A);
    if ((u8) M2C_FIELD((*D_8008ED68), u8 *, 0x103) >= 2U) {
        var_v1 = temp_v1 + M2C_FIELD((*D_8008ED68), u8 *, 0x103);
    } else {
        var_v1 = temp_v1 + 1;
    }
    M2C_FIELD(arg0, u16 *, 0x3A) = var_v1;
    if ((u16) M2C_FIELD(arg0, u16 *, 0x38) < (u32) (var_v1 & 0xFFFF)) {
        func_80013920(arg0);
        return;
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0x34) < 3U) {
        M2C_FIELD(arg0, u8 *, 0x34) = 3U;
    }
    temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x32);
    switch (temp_v1_2) {                            /* irregular */
    case 0:
        var_a0 = M2C_FIELD(arg0, u16 *, 0x3A);
        break;
    case 1:
        var_a0 = M2C_FIELD(arg0, u16 *, 0x38) - M2C_FIELD(arg0, u16 *, 0x3A);
        break;
    default:
        temp_a0 = M2C_FIELD(arg0, u16 *, 0x38);
        if ((u16) M2C_FIELD(arg0, u16 *, 0x3A) < (u32) (temp_a0 >> 1)) {
            var_a0 = M2C_FIELD(arg0, u16 *, 0x3A) * 2;
        } else {
            var_a0 = (temp_a0 - M2C_FIELD(arg0, u16 *, 0x3A)) * 2;
        }
        break;
    }
    temp_v1_3 = M2C_FIELD(arg0, u16 *, 0x38);
    sp14 = (s32) (M2C_FIELD(arg0, u8 *, 0x2E) * var_a0) / (s32) temp_v1_3;
    sp18 = (s32) (M2C_FIELD(arg0, u8 *, 0x2F) * var_a0) / (s32) temp_v1_3;
    var_s3 = 0;
    sp1C = (s32) (M2C_FIELD(arg0, u8 *, 0x30) * var_a0) / (s32) temp_v1_3;
    sp10 = GetTPage(0, M2C_FIELD(arg0, u8 *, 0x33), 0, 0) & 0xFFFF;
    if (M2C_FIELD(arg0, u8 *, 0x34) != 0) {
        var_v0 = 0 << 0xC;
        do {
            temp_lo = var_v0 / (s32) M2C_FIELD(arg0, u8 *, 0x34);
            temp_lo_2 = (s32) ((var_s3 + 1) << 0xC) / (s32) M2C_FIELD(arg0, u8 *, 0x34);
            var_v0_2 = M2C_FIELD(arg0, s16 *, 0x36) * rsin(temp_lo);
            if (var_v0_2 < 0) {
                var_v0_2 += 0xFFF;
            }
            var_v0_3 = M2C_FIELD(arg0, s16 *, 0x36) * rcos(temp_lo);
            if (var_v0_3 < 0) {
                var_v0_3 += 0xFFF;
            }
            var_v0_4 = M2C_FIELD(arg0, s16 *, 0x36) * rsin(temp_lo_2);
            if (var_v0_4 < 0) {
                var_v0_4 += 0xFFF;
            }
            var_v0_5 = M2C_FIELD(arg0, s16 *, 0x36) * rcos(temp_lo_2);
            var_a1 = 0;
            if (var_v0_5 < 0) {
                var_v0_5 += 0xFFF;
            }
            temp_s0 = M2C_FIELD(M2C_FIELD((*D_8008ED68), void **, 0), u32 *, 0x1090);
            if (temp_s0 != 0) {
                temp_a0_2 = temp_s0 + 0x1C;
                if ((u32) (M2C_FIELD((*D_8008ED68), void **, 0) + 0x4594) >= temp_a0_2) {
                    var_a1 = temp_a0_2;
                }
            }
            M2C_FIELD(M2C_FIELD((*D_8008ED68), void **, 0), u32 *, 0x1090) = var_a1;
            SetPolyG3((void *) temp_s0, (void *) var_a1);
            SetSemiTrans((void *) temp_s0, 1);
            M2C_FIELD(temp_s0, u8 *, 4) = (u8) sp14;
            M2C_FIELD(temp_s0, u8 *, 5) = (u8) sp18;
            M2C_FIELD(temp_s0, s8 *, 0xC) = 0;
            M2C_FIELD(temp_s0, s8 *, 0xD) = 0;
            M2C_FIELD(temp_s0, s8 *, 0xE) = 0;
            M2C_FIELD(temp_s0, s8 *, 0x14) = 0;
            M2C_FIELD(temp_s0, s8 *, 0x15) = 0;
            M2C_FIELD(temp_s0, s8 *, 0x16) = 0;
            M2C_FIELD(temp_s0, s16 *, 8) = temp_fp;
            M2C_FIELD(temp_s0, s16 *, 0xA) = temp_s7;
            M2C_FIELD(temp_s0, s16 *, 0x10) = (s16) (temp_fp + (var_v0_2 >> 0xC));
            M2C_FIELD(temp_s0, s16 *, 0x12) = (s16) (temp_s7 + (var_v0_3 >> 0xC));
            M2C_FIELD(temp_s0, s16 *, 0x18) = (s16) (temp_fp + (var_v0_4 >> 0xC));
            M2C_FIELD(temp_s0, s16 *, 0x1A) = (s16) (temp_s7 + (var_v0_5 >> 0xC));
            M2C_FIELD(temp_s0, u8 *, 6) = (u8) sp1C;
            AddPrim(M2C_FIELD((*D_8008ED68), void **, 0) + ((M2C_FIELD(arg0, s16 *, 0x2C) * 4) + 0x70), (void *) temp_s0);
            var_s3 += 1;
            var_v0 = var_s3 << 0xC;
        } while (var_s3 < (s32) M2C_FIELD(arg0, u8 *, 0x34));
    }
    func_80018610(sp10, M2C_FIELD(arg0, s16 *, 0x2C));
}
