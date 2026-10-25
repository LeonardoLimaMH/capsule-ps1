#include "common.h"

s32 func_800E5D18(s32 arg0, void *arg1, void *arg2, void *arg3) {
    extern u8 D_80063940[];
    extern u8 D_8008ED68[];
    extern u16 D_8008EE54[];
    extern u8 D_8008F754[];
    extern s16 D_8008F756[];
    extern s32 D_80118C18[];
    extern u8 D_80119710[];
    extern s32 D_80119714[];
    s16 temp_s0_2;
    s16 temp_s0_4;
    s16 temp_v0_6;
    s32 temp_a0;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_t0;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_v1;
    u16 var_a1;
    u16 var_v0_3;
    u16 var_v0_4;
    u32 temp_v0;
    u32 temp_v0_5;
    u32 temp_v0_7;
    u8 temp_a2;
    u8 temp_a3;
    u8 temp_s0;
    u8 temp_s0_3;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a2_2;
    void *temp_v0_10;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_8;
    void *temp_v0_9;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *var_s0;
    void *var_v1;

    temp_a1 = (M2C_FIELD(arg2, u8 *, 0x16) * 4) + ((M2C_FIELD(arg2, u8 *, 0x15) * 0x34) + (*D_80118C18));
    temp_a2 = M2C_FIELD(temp_a1, u8 *, 3);
    temp_a3 = M2C_FIELD(((M2C_FIELD(arg3, u8 *, 0x16) * 4) + ((M2C_FIELD(arg3, u8 *, 0x15) * 0x34) + (*D_80118C18))), u8 *, 3);
    switch ((*D_8008EE54)) {
    case 0x0:
        M2C_FIELD(arg2, s8 *, 0x17) = 0x87;
        M2C_FIELD(arg2, s8 *, 0x23) = 1;
        temp_a2_2 = M2C_FIELD(arg3, void **, 0x70);
        M2C_FIELD(arg3, s32 *, 0x18) = (s32) (M2C_FIELD(arg3, s32 *, 0x18) | 0x40000000);
        M2C_FIELD(D_8008F754, u16 *, 0) = (u16) M2C_FIELD(temp_a2_2, u16 *, 0x50);
        var_a1 = func_800D24B4(temp_a2, temp_a3, temp_a2_2, temp_a3);
        temp_a0 = M2C_FIELD(arg2, u8 *, 9) - M2C_FIELD(arg2, u8 *, 0xE);
        var_v0 = var_a1 << 0x10;
        if (M2C_FIELD(arg2, u8 *, 0) == 0x30) {
            var_a1 = 0xA;
            var_v0 = 0xA << 0x10;
        }
        var_v0_2 = var_a1 << 0x10;
        if ((var_v0 >> 0x10) >= (s32) M2C_FIELD(arg3, u8 *, 0xE)) {
            var_a1 = M2C_FIELD(arg3, u8 *, 0xE) - 1;
            var_v0_2 = var_a1 << 0x10;
        }
        if (temp_a0 < (var_v0_2 >> 0x10)) {
            var_a1 = (u16) temp_a0;
        }
        M2C_FIELD(D_8008F754, u16 *, 2) = var_a1;
        var_s0 = D_8008F754 - 0x9EC;
        M2C_FIELD(var_s0, s32 *, 0xA40) = 5;
        M2C_FIELD(var_s0, s32 *, 0xA3C) = 5;
        if ((u8) M2C_FIELD(arg3, u8 *, 0xF) < 5U) {
            M2C_FIELD(var_s0, s32 *, 0xA3C) = (s32) M2C_FIELD(arg3, u8 *, 0xF);
        }
        if ((u8) M2C_FIELD(arg3, u8 *, 0x10) < 5U) {
            M2C_FIELD(var_s0, s32 *, 0xA40) = (s32) M2C_FIELD(arg3, u8 *, 0x10);
        }
        M2C_FIELD(arg1, u16 *, 0x710) = var_a1;
        M2C_FIELD(arg1, s8 *, 0x610) = 2;
        func_80034AB0(0x801B, var_a1);
        var_v0_3 = M2C_FIELD(var_s0, u16 *, 0xEC);
        (*D_80119714) = 0;
block_30:
        M2C_FIELD(var_s0, s16 *, 0xEC) = (s16) (var_v0_3 + 1);
    default:
block_54:
        return 0;
    case 0x1:
        temp_a1_2 = M2C_FIELD(arg3, void **, 0x70);
        M2C_FIELD(temp_a1_2, s8 *, 0x57) = (s8) ((s32) -(M2C_FIELD(((M2C_FIELD(arg3, u8 *, 0) * 0x3C) + D_80063940), u8 *, 0x13) & 0x3F) / 2);
        M2C_FIELD(temp_a1_2, s16 *, 0x54) = (s16) ((s32) (M2C_FIELD(D_80119710, s32 *, 4) << 0xD) / 60);
        temp_lo = (s32) ((s16) M2C_FIELD(D_8008F754, u16 *, 0) * (0x3C - M2C_FIELD(D_80119710, s32 *, 4))) / 60;
        M2C_FIELD(temp_a1_2, s16 *, 0x52) = (s16) temp_lo;
        M2C_FIELD(temp_a1_2, u16 *, 0x50) = (u16) temp_lo;
        if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x3C) {
            M2C_FIELD(arg3, s32 *, 0x1C) = (s32) (M2C_FIELD(arg3, s32 *, 0x1C) | 8);
            func_800CB9F4(arg1, temp_a3 >> 7, (temp_a3 & 0x7F) - 1, temp_a3);
            func_800CAA44(arg0, arg3);
            func_800CA7B0(arg0, arg3, 0, 0, (s32) (s16) ((s32) M2C_FIELD(D_8008F754, u16 *, 2) * -1));
            func_800CABDC(arg0, arg3, 0x10000);
            var_v1 = D_8008F754 - 0x9EC;
            var_v0_4 = M2C_FIELD(var_v1, u16 *, 0xEC);
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
block_40:
            M2C_FIELD(var_v1, s16 *, 0xEC) = (s16) (var_v0_4 + 1);
        }
        goto block_54;
    case 0x2:
        temp_a0_2 = M2C_FIELD(arg3, void **, 0x70);
        M2C_FIELD(temp_a0_2, s8 *, 0x57) = (s8) ((s32) -(M2C_FIELD(((M2C_FIELD(arg3, u8 *, 0) * 0x3C) + D_80063940), u8 *, 0x13) & 0x3F) / 2);
        M2C_FIELD(temp_a0_2, s16 *, 0x54) = (s16) ((s32) (M2C_FIELD(D_80119710, s32 *, 4) << 0xD) / 60);
        temp_lo_2 = (s32) ((s16) M2C_FIELD(D_8008F754, u16 *, 0) * M2C_FIELD(D_80119710, s32 *, 4)) / 60;
        M2C_FIELD(temp_a0_2, s16 *, 0x52) = (s16) temp_lo_2;
        M2C_FIELD(temp_a0_2, u16 *, 0x50) = (u16) temp_lo_2;
        if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x3C) {
            M2C_FIELD(temp_a0_2, s8 *, 0x57) = 0;
            M2C_FIELD(temp_a0_2, s16 *, 0x54) = 0;
            temp_lo_3 = (s32) ((s16) M2C_FIELD(D_8008F754, u16 *, 0) * (0x3C - M2C_FIELD(D_80119710, s32 *, 4))) / 60;
            M2C_FIELD(temp_a0_2, s16 *, 0x52) = (s16) temp_lo_3;
            M2C_FIELD(temp_a0_2, u16 *, 0x50) = (u16) temp_lo_3;
            M2C_FIELD(arg3, s32 *, 0x18) = (s32) (M2C_FIELD(arg3, s32 *, 0x18) ^ 0x40000000);
            var_v1 = D_8008F754 - 0x9EC;
            M2C_FIELD(arg1, s8 *, 0x70D) = 1;
            var_v0_4 = M2C_FIELD(var_v1, u16 *, 0xEC);
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
            goto block_40;
        }
        goto block_54;
    case 0x3:
        temp_s0 = M2C_FIELD(arg2, u8 *, 0);
        if (temp_s0 != 0x30) {
            M2C_FIELD(arg1, s8 *, 0x610) = 4;
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
            temp_v1 = M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 2;
            M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
            M2C_FIELD(D_8008ED68, u16 *, 0xEC) = temp_v1;
        } else {
            if ((*D_80119714) == 1) {
                func_800CB9F4(arg1, temp_a3 >> 7, (temp_a3 & 0x7F) - 1, temp_a3);
                func_800CAA44(arg0, arg3);
                if (M2C_FIELD(arg2, u8 *, 0) == temp_s0) {
                    func_800CA7B0(arg0, arg3, 1, 0, (s32) (s16) ((s32) M2C_FIELD(D_8008ED68, u16 *, 0xA3C) * -1));
                    func_800CA7B0(arg0, arg3, 2, 0, (s32) (s16) ((s32) M2C_FIELD(D_8008ED68, u16 *, 0xA40) * -1));
                }
                func_800CABDC(arg0, arg3, 0x10000);
            }
            var_s2 = 0;
            if (M2C_FIELD(D_80119710, s32 *, 4) < 0xF) {
                temp_v0 = rsin((M2C_FIELD(D_80119710, s32 *, 4) << 0xC) / 30);
                var_s2 = (s32) ((temp_v0 >> 0x1F) + temp_v0) >> 1;
            }
            temp_v0_2 = M2C_FIELD(arg3, void **, 0x70);
            func_80018C00((s16) (M2C_FIELD(temp_v0_2, u16 *, 0x46) - 0xF), (s16) (M2C_FIELD(temp_v0_2, u16 *, 0x4A) - 0x4E), 0, 0, 0xF, 5);
            temp_v0_3 = M2C_FIELD(arg3, void **, 0x70);
            func_80018C00((s16) (M2C_FIELD(temp_v0_3, u16 *, 0x46) - 0xF), (s16) (M2C_FIELD(temp_v0_3, u16 *, 0x4A) - 0x3F), 1, 0, 0xF, 5);
            temp_s0_2 = var_s2 + 0x1000;
            temp_v1_2 = M2C_FIELD(arg3, void **, 0x70);
            func_8001F524((s16) (M2C_FIELD(temp_v1_2, u16 *, 0x46) + 0xA), (s16) (M2C_FIELD(temp_v1_2, u16 *, 0x4A) - 0x55), 0, 0, (s32) M2C_FIELD(D_8008ED68, u16 *, 0xA3C), 1, (s32) temp_s0_2, (s32) temp_s0_2, 4, 2);
            temp_v0_4 = M2C_FIELD(arg3, void **, 0x70);
            func_8001F524((s16) (M2C_FIELD(temp_v0_4, u16 *, 0x46) + 0xA), (s16) (M2C_FIELD(temp_v0_4, u16 *, 0x4A) - 0x46), 0, 0, (s32) M2C_FIELD(D_8008ED68, u16 *, 0xA40), 1, (s32) temp_s0_2, (s32) temp_s0_2, 4, 2);
            if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x50) {
                M2C_FIELD(D_80119710, s32 *, 4) = 0;
                M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
            }
        }
        /* Duplicate return node #55. Try simplifying control flow for better match */
        return 0;
    case 0x4:
        M2C_FIELD(arg1, s8 *, 0x610) = 4;
        (*D_80119714) = 0;
        M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
        goto block_54;
    case 0x5:
        if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x1E) {
            func_800CB9F4(arg1, temp_a2 >> 7, (temp_a2 & 0x7F) - 1, temp_a3);
            func_800CAA44(arg0, arg2);
            func_800CA7B0(arg0, arg2, 0, 0, (s32) (s16) M2C_FIELD(D_8008F754, u16 *, 2));
            func_800CABDC(arg0, arg2, 0x10000);
            var_s0 = D_8008F754 - 0x9EC;
            var_v0_3 = M2C_FIELD(var_s0, u16 *, 0xEC);
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
            goto block_30;
        }
        /* Duplicate return node #55. Try simplifying control flow for better match */
        return 0;
    case 0x6:
        var_s0_2 = 1;
        var_t0 = 0;
        if ((*D_8008F756) >= 0xA) {
            var_s0_2 = 2;
        } else if ((*D_8008F756) >= 0x64) {
            var_s0_2 = 3;
        }
        if (M2C_FIELD(D_80119710, s32 *, 4) < 0xF) {
            temp_v0_5 = rsin((M2C_FIELD(D_80119710, s32 *, 4) << 0xC) / 30, temp_a1, temp_a2, temp_a3);
            var_t0 = (s32) ((temp_v0_5 >> 0x1F) + temp_v0_5) >> 1;
        }
        temp_v1_3 = M2C_FIELD(arg2, void **, 0x70);
        temp_v0_6 = var_t0 + 0x1000;
        func_8001F524((s16) (M2C_FIELD(temp_v1_3, u16 *, 0x46) - 5), (s16) (M2C_FIELD(temp_v1_3, u16 *, 0x4A) - 0x4B), 0, 0, (s32) (s16) M2C_FIELD(D_8008F754, u16 *, 2), var_s0_2, (s32) temp_v0_6, (s32) temp_v0_6, 4, 1);
        if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x5A) {
            var_v1 = D_8008F754 - 0x9EC;
            var_v0_4 = M2C_FIELD(var_v1, u16 *, 0xEC);
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
            goto block_40;
        }
        /* Duplicate return node #55. Try simplifying control flow for better match */
        return 0;
    case 0x7:
        temp_s0_3 = M2C_FIELD(arg2, u8 *, 0);
        if (temp_s0_3 == 0x30) {
            if ((*D_80119714) == 1) {
                func_800CB9F4(arg1, temp_a2 >> 7, (temp_a2 & 0x7F) - 1, temp_a3);
                func_800CAA44(arg0, arg2);
                if (M2C_FIELD(arg2, u8 *, 0) == temp_s0_3) {
                    func_800CA7B0(arg0, arg2, 1, 0, (s32) (s16) M2C_FIELD(D_8008ED68, u16 *, 0xA3C));
                    func_800CA7B0(arg0, arg2, 2, 0, (s32) (s16) M2C_FIELD(D_8008ED68, u16 *, 0xA40));
                }
                func_800CABDC(arg0, arg2, 0x10000);
            }
            var_s2_2 = 0;
            if (M2C_FIELD(D_80119710, s32 *, 4) < 0xF) {
                temp_v0_7 = rsin((M2C_FIELD(D_80119710, s32 *, 4) << 0xC) / 30);
                var_s2_2 = (s32) ((temp_v0_7 >> 0x1F) + temp_v0_7) >> 1;
            }
            temp_v0_8 = M2C_FIELD(arg2, void **, 0x70);
            func_80018C00((s16) (M2C_FIELD(temp_v0_8, u16 *, 0x46) - 0xF), (s16) (M2C_FIELD(temp_v0_8, u16 *, 0x4A) - 0x4E), 0, 0, 0xF, 5);
            temp_v0_9 = M2C_FIELD(arg2, void **, 0x70);
            func_80018C00((s16) (M2C_FIELD(temp_v0_9, u16 *, 0x46) - 0xF), (s16) (M2C_FIELD(temp_v0_9, u16 *, 0x4A) - 0x3F), 1, 0, 0xF, 5);
            temp_s0_4 = var_s2_2 + 0x1000;
            temp_v1_4 = M2C_FIELD(arg2, void **, 0x70);
            func_8001F524((s16) (M2C_FIELD(temp_v1_4, u16 *, 0x46) + 0xA), (s16) (M2C_FIELD(temp_v1_4, u16 *, 0x4A) - 0x55), 0, 0, (s32) M2C_FIELD(D_8008ED68, u16 *, 0xA3C), 1, (s32) temp_s0_4, (s32) temp_s0_4, 4, 1);
            temp_v0_10 = M2C_FIELD(arg2, void **, 0x70);
            func_8001F524((s16) (M2C_FIELD(temp_v0_10, u16 *, 0x46) + 0xA), (s16) (M2C_FIELD(temp_v0_10, u16 *, 0x4A) - 0x46), 0, 0, (s32) M2C_FIELD(D_8008ED68, u16 *, 0xA40), 1, (s32) temp_s0_4, (s32) temp_s0_4, 4, 1);
            if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x50) {
                M2C_FIELD(D_80119710, s32 *, 4) = 0;
                M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
            }
        } else {
block_51:
            (*D_80119714) = 0;
            M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
        }
        /* Duplicate return node #55. Try simplifying control flow for better match */
        return 0;
    case 0x8:
        if (M2C_FIELD(arg1, u8 *, 0x720) != 0) {
            goto block_51;
        }
        goto block_54;
    case 0x9:
        if ((*D_80119714) >= 0x1E) {
        case 0x63:
            M2C_FIELD(arg1, s8 *, 0x610) = 0;
            return 1;
        }
        /* Duplicate return node #55. Try simplifying control flow for better match */
        return 0;
    }
}
