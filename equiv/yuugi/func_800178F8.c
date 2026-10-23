#include "common.h"

s32 func_800178F8(void *arg0, u16 arg1) {
    extern M2C_UNK D_8008ED68[];
    extern u8 D_8008F702[];
    s16 temp_a0_5;
    s16 temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 var_v0_2;
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
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 temp_a0_4;
    u8 var_v0;
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
            temp_v1 = temp_s0 + 0x18;
            if ((u32) (M2C_FIELD((*D_8008ED68), void **, 0) + 0x4594) >= temp_v1) {
                var_a2 = temp_v1;
            }
        }
        M2C_FIELD(M2C_FIELD((*D_8008ED68), void **, 0), u32 *, 0x1090) = var_a2;
        SetPolyF4((void *) temp_s0, M2C_FIELD((*D_8008ED68), void **, 0), (void *) var_a2);
        SetSemiTrans((void *) temp_s0, ((u32) M2C_FIELD(arg0, u32 *, 0x38) >> 6) & 1);
        temp_a0_2 = M2C_FIELD(arg0, u8 *, 0x58);
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
        temp_a0_3 = M2C_FIELD(arg0, u8 *, 0x59);
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
        temp_a0_4 = M2C_FIELD(arg0, u8 *, 0x5A);
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
        temp_a0_5 = M2C_FIELD(arg0, s16 *, 0x46) + ((s32) M2C_FIELD((*D_8008ED68), s32 *, 0x108) / 2) + M2C_FIELD(arg0, s16 *, 0x14);
        temp_a1 = temp_a0_5 + M2C_FIELD(arg0, u16 *, 0x18);
        M2C_FIELD(temp_s0, s16 *, 8) = temp_a0_5;
        M2C_FIELD(temp_s0, s16 *, 0x10) = temp_a0_5;
        M2C_FIELD(temp_s0, s16 *, 0xC) = temp_a1;
        M2C_FIELD(temp_s0, s16 *, 0x14) = temp_a1;
        temp_v0 = M2C_FIELD(arg0, s16 *, 0x4A) + ((s32) M2C_FIELD((*D_8008ED68), s32 *, 0x10C) / 2) + M2C_FIELD(arg0, s16 *, 0x16);
        M2C_FIELD(temp_s0, s16 *, 0xA) = temp_v0;
        M2C_FIELD(temp_s0, s16 *, 0xE) = temp_v0;
        temp_v0_2 = temp_v0 + M2C_FIELD(arg0, u16 *, 0x1A);
        M2C_FIELD(temp_s0, s16 *, 0x12) = temp_v0_2;
        M2C_FIELD(temp_s0, s16 *, 0x16) = temp_v0_2;
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
