#include "common.h"

void func_80018C00(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    extern M2C_UNK D_8008ED68[];
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s32 temp_a2;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v0_9;
    s8 temp_v1;
    u32 temp_a0;
    u32 temp_s0;
    u32 var_a2;
    u8 temp_v0_2;

    var_a2 = 0;
    temp_s0 = M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), u32 *, 0x1090);
    if (temp_s0 != 0) {
        temp_a0 = temp_s0 + 0x28;
        if ((u32) (M2C_FIELD(D_8008ED68, void **, 0) + 0x4594) >= temp_a0) {
            var_a2 = temp_a0;
        }
    }
    M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), u32 *, 0x1090) = var_a2;
    SetPolyFT4((void *) temp_s0, (void *) var_a2);
    SetShadeTex((void *) temp_s0, 0);
    SetSemiTrans((void *) temp_s0, 0);
    if (M2C_FIELD(D_8008ED68, s32 *, 0xA6C) == 0x1000) {
        var_v0 = 0x80;
    } else {
        var_v0_2 = M2C_FIELD(D_8008ED68, s32 *, 0xA6C) << 7;
        if (M2C_FIELD(D_8008ED68, s32 *, 0xA6C) < 0x1000) {
            if (M2C_FIELD(D_8008ED68, s32 *, 0xA6C) & 0x01000000) {
                var_v0_2 += 0xFFF;
            }
            var_v0 = var_v0_2 >> 0xC;
        } else {
            var_v0_3 = (M2C_FIELD(D_8008ED68, s32 *, 0xA6C) - 0x1000) * 0x7F;
            if (var_v0_3 < 0) {
                var_v0_3 += 0xFFF;
            }
            var_v0 = (var_v0_3 >> 0xC) + 0x80;
        }
    }
    M2C_FIELD(temp_s0, s8 *, 4) = (s8) var_v0;
    if (M2C_FIELD(D_8008ED68, s32 *, 0xA70) == 0x1000) {
        var_v0_4 = 0x80;
    } else {
        var_v0_5 = M2C_FIELD(D_8008ED68, s32 *, 0xA70) << 7;
        if (M2C_FIELD(D_8008ED68, s32 *, 0xA70) < 0x1000) {
            if (M2C_FIELD(D_8008ED68, s32 *, 0xA70) & 0x01000000) {
                var_v0_5 += 0xFFF;
            }
            var_v0_4 = var_v0_5 >> 0xC;
        } else {
            var_v0_6 = (M2C_FIELD(D_8008ED68, s32 *, 0xA70) - 0x1000) * 0x7F;
            if (var_v0_6 < 0) {
                var_v0_6 += 0xFFF;
            }
            var_v0_4 = (var_v0_6 >> 0xC) + 0x80;
        }
    }
    M2C_FIELD(temp_s0, s8 *, 5) = (s8) var_v0_4;
    if (M2C_FIELD(D_8008ED68, s32 *, 0xA74) == 0x1000) {
        var_v0_7 = 0x80;
    } else {
        var_v0_8 = M2C_FIELD(D_8008ED68, s32 *, 0xA74) << 7;
        if (M2C_FIELD(D_8008ED68, s32 *, 0xA74) < 0x1000) {
            if (M2C_FIELD(D_8008ED68, s32 *, 0xA74) & 0x01000000) {
                var_v0_8 += 0xFFF;
            }
            var_v0_7 = var_v0_8 >> 0xC;
        } else {
            var_v0_9 = (M2C_FIELD(D_8008ED68, s32 *, 0xA74) - 0x1000) * 0x7F;
            if (var_v0_9 < 0) {
                var_v0_9 += 0xFFF;
            }
            var_v0_7 = (var_v0_9 >> 0xC) + 0x80;
        }
    }
    M2C_FIELD(temp_s0, s8 *, 6) = (s8) var_v0_7;
    temp_v0 = (arg2 + 1) * 0xA;
    temp_v1 = temp_v0 - 0x80;
    temp_v0_2 = temp_v0 - 0x76;
    M2C_FIELD(temp_s0, u8 *, 0x24) = temp_v0_2;
    M2C_FIELD(temp_s0, u8 *, 0x14) = temp_v0_2;
    M2C_FIELD(temp_s0, s8 *, 0x15) = 0xEE;
    M2C_FIELD(temp_s0, s8 *, 0xD) = 0xEE;
    M2C_FIELD(temp_s0, u8 *, 0x25) = 0xF8U;
    M2C_FIELD(temp_s0, u8 *, 0x1D) = 0xF8U;
    M2C_FIELD(temp_s0, s8 *, 0x1C) = temp_v1;
    M2C_FIELD(temp_s0, s8 *, 0xC) = temp_v1;
    if (arg4 >= 0x14) {
        M2C_FIELD(temp_s0, u8 *, 0x14) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x14) - 1);
        M2C_FIELD(temp_s0, u8 *, 0x24) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x24) - 1);
        M2C_FIELD(temp_s0, u8 *, 0x1D) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x1D) - 1);
        M2C_FIELD(temp_s0, u8 *, 0x25) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x25) - 1);
    }
    temp_a2 = (s32) (arg4 + ((u32) arg4 >> 0x1F)) >> 1;
    temp_v0_3 = (arg0 + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2)) - temp_a2;
    M2C_FIELD(temp_s0, s16 *, 0x18) = temp_v0_3;
    M2C_FIELD(temp_s0, s16 *, 8) = temp_v0_3;
    temp_v0_4 = temp_v0_3 + arg4;
    M2C_FIELD(temp_s0, s16 *, 0x20) = temp_v0_4;
    M2C_FIELD(temp_s0, s16 *, 0x10) = temp_v0_4;
    temp_v0_5 = (arg1 + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2)) - temp_a2;
    M2C_FIELD(temp_s0, s16 *, 0x12) = temp_v0_5;
    M2C_FIELD(temp_s0, s16 *, 0xA) = temp_v0_5;
    temp_v0_6 = temp_v0_5 + arg4;
    M2C_FIELD(temp_s0, s16 *, 0x22) = temp_v0_6;
    M2C_FIELD(temp_s0, s16 *, 0x1A) = temp_v0_6;
    M2C_FIELD(temp_s0, s16 *, 0xE) = GetClut(0x3E0, arg3 + 0x178, temp_a2);
    M2C_FIELD(temp_s0, s16 *, 0x16) = GetTPage(0, 0, 0x2A0, 0x180);
    AddPrim(M2C_FIELD(D_8008ED68, void **, 0) + ((arg5 * 4) + 0x70), (void *) temp_s0);
}
