#include "common.h"

s32 func_800E1978(s32 arg0, void *arg1, void *arg2, void *arg3) {
    extern M2C_UNK D_80063940[];
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_80119710[];
    extern s32 D_80119714[];
    M2C_UNK sp18;
    u16 sp1A;
    M2C_UNK sp20;
    u16 sp22;
    M2C_UNK sp28;
    M2C_UNK sp30;
    M2C_UNK sp38;
    u16 sp3A;
    s32 sp40;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s2;
    s32 temp_s3_2;
    s32 temp_s3_3;
    s32 temp_s7;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 temp_v1;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s8 temp_v0_2;
    s8 temp_v0_4;
    u16 var_v0;
    u8 temp_s0_2;
    u8 temp_s3;
    void *temp_fp;
    void *temp_s0;
    void *temp_s6;

    temp_fp = M2C_FIELD(arg3, void **, 0x70);
    temp_s6 = M2C_FIELD(arg2, void **, 0x70);
    sp40 = func_800DDAD4(arg3, M2C_FIELD(temp_fp, s16 *, 0x4E)) - 0x1E;
    temp_s0 = arg1 + (M2C_FIELD(arg1, u8 *, 0x5FA) * 2);
    temp_s3 = M2C_FIELD(temp_s0, u8 *, 0x601);
    temp_s0_2 = M2C_FIELD(temp_s0, u8 *, 0x602);
    if (M2C_FIELD(temp_s6, s32 *, 0x20) == 2) {
        func_80034AB0(0x8D);
    }
    if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 3) {
        if ((s32) M2C_FIELD(D_8008ED68, u16 *, 0xEC) < 4) {
            if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 1) {
                if ((s32) M2C_FIELD(D_8008ED68, u16 *, 0xEC) < 2) {
                    if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 0) {
                        return 0;
                    }
                    M2C_FIELD(arg2, s8 *, 0x17) = 0x88;
                    M2C_FIELD(arg2, s8 *, 0x23) = 0;
                    M2C_FIELD(arg2, s8 *, 0x25) = func_800A83E0(arg0, arg2, arg3);
                    M2C_FIELD(arg2, s32 *, 0x18) = (s32) (M2C_FIELD(arg2, s32 *, 0x18) | 0x40000000 | 0x20000000);
                    var_v0 = M2C_FIELD(D_8008ED68, u16 *, 0xEC);
                    (*D_80119714) = 0;
                    goto block_33;
                }
                M2C_FIELD(arg2, s8 *, 0x25) = func_800DD1D4(arg3, temp_s3, temp_s0_2);
                M2C_FIELD(arg3, s32 *, 0x18) = (s32) (M2C_FIELD(arg3, s32 *, 0x18) | 0x80000000 | 0x10000000);
                var_v0 = M2C_FIELD(D_8008ED68, u16 *, 0xEC);
                (*D_80119714) = 0;
                goto block_33;
            }
            temp_v0 = func_800FE428(arg2, arg3);
            temp_s0_3 = M2C_FIELD(D_80119710, s32 *, 4);
            temp_s3_2 = temp_s0_3 * 2;
            func_800FF460(arg2, arg3, temp_v0, temp_s3_2, &sp18);
            temp_lo = (s32) (temp_s0_3 << 0xD) / temp_v0;
            var_v1 = rsin((s32) (temp_lo + ((u32) temp_lo >> 0x1F)) >> 1) * 0x32;
            if (var_v1 < 0) {
                var_v1 += 0xFFF;
            }
            sp1A -= var_v1 >> 0xC;
            func_800FF2CC(arg2, &sp18, 0xA);
            func_800FEBF4(&sp18);
            M2C_FIELD(temp_s6, u16 *, 0x4A) = (u16) (M2C_FIELD(temp_s6, u16 *, 0x4A) - ((s32) (sp40 * temp_s3_2) / temp_v0));
            if (temp_s3_2 >= temp_v0) {
                goto block_32;
            }
            /* Duplicate return node #37. Try simplifying control flow for better match */
            return 0;
        }
        if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 5) {
            if ((s32) M2C_FIELD(D_8008ED68, u16 *, 0xEC) >= 5) {
                switch (M2C_FIELD(D_8008ED68, u16 *, 0xEC)) { /* irregular */
                case 0x6:
                    if ((*D_80119714) >= 0xA) {
                    case 0x63:
                        return 1;
                    }
                    /* Duplicate return node #37. Try simplifying control flow for better match */
                    return 0;
                default:
                    return 0;
                }
            } else {
                func_800DD274(arg3, temp_s3, temp_s0_2);
                M2C_FIELD(arg3, s32 *, 0x18) = (s32) (M2C_FIELD(arg3, s32 *, 0x18) ^ 0x80000000 ^ 0x10000000);
                M2C_FIELD(temp_fp, s8 *, 0x57) = 0;
                M2C_FIELD(M2C_FIELD(arg3, void **, 0x74), s8 *, 0x57) = 0;
                M2C_FIELD(temp_fp, s16 *, 0x54) = 0;
                M2C_FIELD(M2C_FIELD(arg3, void **, 0x74), s16 *, 0x54) = 0;
                temp_v0_2 = func_800DD1D4(arg2, temp_s3, temp_s0_2);
                temp_v1 = temp_v0_2 + 4;
                var_v0_2 = temp_v1;
                if (temp_v1 < 0) {
                    var_v0_2 = temp_v0_2 + 0xB;
                }
                M2C_FIELD(arg2, s8 *, 0x25) = (s8) (temp_v1 - ((var_v0_2 >> 3) * 8));
                var_v0 = M2C_FIELD(D_8008ED68, u16 *, 0xEC);
                (*D_80119714) = 0;
                goto block_33;
            }
        } else {
            temp_v0_3 = func_800FE5B0(arg2, temp_s3, temp_s0_2);
            temp_s0_4 = M2C_FIELD(D_80119710, s32 *, 4);
            temp_s3_3 = temp_s0_4 * 2;
            func_800FF460(arg3, arg2, temp_v0_3, temp_s3_3, &sp38);
            temp_lo_2 = (s32) (temp_s0_4 << 0xD) / temp_v0_3;
            var_v1_2 = rsin((s32) (temp_lo_2 + ((u32) temp_lo_2 >> 0x1F)) >> 1) * 0x64;
            if (var_v1_2 < 0) {
                var_v1_2 += 0xFFF;
            }
            sp3A -= var_v1_2 >> 0xC;
            func_800FEBF4(&sp38);
            func_800FF2CC(arg2, &sp38, 0xA);
            M2C_FIELD(temp_s6, u16 *, 0x4A) = (u16) (M2C_FIELD(temp_s6, u16 *, 0x4A) - ((s32) (sp40 * (temp_v0_3 - temp_s3_3)) / temp_v0_3));
            if (temp_s3_3 >= temp_v0_3) {
                M2C_FIELD(arg2, s32 *, 0x18) = (s32) (M2C_FIELD(arg2, s32 *, 0x18) ^ 0x40000000 ^ 0x20000000);
block_32:
                var_v0 = M2C_FIELD(D_8008ED68, u16 *, 0xEC);
                M2C_FIELD(D_80119710, s32 *, 4) = 0;
                goto block_33;
            }
            /* Duplicate return node #37. Try simplifying control flow for better match */
            return 0;
        }
    } else {
        temp_s2 = M2C_FIELD(D_80119710, s32 *, 4);
        temp_s7 = func_800FE5B0(arg3, temp_s3, temp_s0_2);
        func_800FE188(arg3, &sp28);
        func_800FE21C(temp_s3, temp_s0_2, &sp30);
        func_800FF3B4(&sp28, &sp30, temp_s7, M2C_FIELD(D_80119710, s32 *, 4) * 2, &sp20);
        temp_lo_3 = (s32) (temp_s2 << 0xD) / temp_s7;
        var_v1_3 = rsin((s32) (temp_lo_3 + ((u32) temp_lo_3 >> 0x1F)) >> 1) * 0x64;
        if (var_v1_3 < 0) {
            var_v1_3 += 0xFFF;
        }
        sp22 -= var_v1_3 >> 0xC;
        func_800FEBF4(&sp20);
        func_800FF2CC(arg2, &sp20, 0xB);
        func_800FF190(arg3, &sp20, 0xA);
        M2C_FIELD(temp_s6, u16 *, 0x4A) = (u16) (M2C_FIELD(temp_s6, u16 *, 0x4A) - sp40);
        temp_v0_4 = -(M2C_FIELD(((M2C_FIELD(arg3, u8 *, 0) * 0x3C) + D_80063940), u8 *, 0x13) & 0x3F);
        M2C_FIELD(temp_fp, s8 *, 0x57) = temp_v0_4;
        M2C_FIELD(M2C_FIELD(arg3, void **, 0x74), s8 *, 0x57) = temp_v0_4;
        var_v0_3 = rsin(M2C_FIELD(D_80119710, s32 *, 4) * 0x3C) * 0x190;
        if (var_v0_3 < 0) {
            var_v0_3 += 0xFFF;
        }
        temp_v0_5 = var_v0_3 >> 0xC;
        M2C_FIELD(temp_fp, s16 *, 0x54) = (s16) temp_v0_5;
        M2C_FIELD(M2C_FIELD(arg3, void **, 0x74), s16 *, 0x54) = (s16) temp_v0_5;
        if ((temp_s2 * 2) >= temp_s7) {
            var_v0 = M2C_FIELD(D_8008ED68, u16 *, 0xEC);
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
block_33:
            M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (var_v0 + 1);
        }
        return 0;
    }
}
