#include "common.h"

s32 func_800E584C(s32 arg0, void *arg1, void *arg2) {
    extern u8 D_80018600[];
    extern u8 D_8008F754[];
    extern u8 D_80119710[];
    extern s32 D_80119714[];
    extern int func_800161C4();
    M2C_UNK sp18;
    u16 sp1A;
    M2C_UNK sp20;
    M2C_UNK sp28;
    M2C_UNK sp30;
    u16 sp32;
    M2C_UNK sp38;
    M2C_UNK sp40;
    s32 temp_s1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s8 temp_v0;
    u16 temp_v1;
    u8 temp_s0;
    u8 temp_s3;
    void *temp_a1;
    void *temp_s0_2;
    void *temp_s4;
    void *temp_s5;

    temp_s4 = M2C_FIELD(arg2, void **, 0x70);
    temp_a1 = arg1 + (M2C_FIELD(arg1, u8 *, 0x5FA) * 2);
    temp_s5 = D_8008F754 - 0x9EC;
    temp_s0 = M2C_FIELD(temp_a1, u8 *, 0x601);
    temp_s3 = M2C_FIELD(temp_a1, u8 *, 0x602);
    temp_v1 = M2C_FIELD(temp_s5, u16 *, 0xEC);
    if (temp_v1 != 4) {
        if ((s32) temp_v1 < 5) {
            if (temp_v1 != 1) {
                if ((s32) temp_v1 < 2) {
                    if (temp_v1 != 0) {
                        return 0;
                    }
                    M2C_FIELD(arg2, s8 *, 0x29) = (s8) (((temp_s0 + 1) * 0x10) + (temp_s3 + 1));
                    M2C_FIELD(arg2, s8 *, 0x25) = func_800DD1D4(arg2, temp_s0, temp_s3);
                    (*D_80119714) = 0;
                    goto block_39;
                }
                switch (temp_v1) {                  /* irregular */
                case 2:
                    func_800FE188(arg2, &sp20);
                    func_800FE21C(temp_s0, temp_s3, &sp28);
                    func_800FF3B4(&sp20, &sp28, 0x1E, M2C_FIELD(D_80119710, s32 *, 4), &sp18);
                    var_v1 = rsin((s32) (M2C_FIELD(D_80119710, s32 *, 4) << 0xC) / 60) * 0x64;
                    if (var_v1 < 0) {
                        var_v1 += 0xFFF;
                    }
                    sp1A -= var_v1 >> 0xC;
                    func_800FF2CC(arg2, &sp18, 1);
                    if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x1E) {
                        func_80034AB0(0x7D);
                        M2C_FIELD(arg2, s8 *, 0x25) = func_800C94DC(arg0, 0);
                        temp_s0_2 = func_80015B3C(D_80018600, &func_800161C4, 1);
                        temp_s1 = func_80020364(M2C_FIELD(arg2, u8 *, 0));
                        func_80015EF8(temp_s0_2);
                        M2C_FIELD(temp_s0_2, s32 *, 0x18) = func_80019F30(0x60012, temp_s1 + 0x13);
                        M2C_FIELD(temp_s0_2, u16 *, 0x46) = (u16) M2C_FIELD(temp_s4, u16 *, 0x46);
                        M2C_FIELD(temp_s0_2, u16 *, 0x4A) = (u16) M2C_FIELD(temp_s4, u16 *, 0x4A);
                        M2C_FIELD(temp_s0_2, s16 *, 0x4E) = (s16) (M2C_FIELD(temp_s4, u16 *, 0x4E) + 0xA);
                        M2C_FIELD(temp_s0_2, u16 *, 0x50) = (u16) M2C_FIELD(temp_s4, u16 *, 0x50);
                        M2C_FIELD(temp_s0_2, u16 *, 0x52) = (u16) M2C_FIELD(temp_s4, u16 *, 0x52);
                        M2C_FIELD(D_8008F754, void **, 0xC) = temp_s0_2;
                        M2C_FIELD(D_80119710, s32 *, 4) = 0;
                        goto block_39;
                    }
                    /* Duplicate return node #42. Try simplifying control flow for better match */
                    return 0;
                case 3:
                    if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x1E) {
                        M2C_FIELD(arg2, s8 *, 0x17) = 0x88;
                        M2C_FIELD(arg2, s8 *, 0x23) = 1;
                        M2C_FIELD(D_80119710, s32 *, 4) = 0;
                        goto block_39;
                    }
                    /* Duplicate return node #42. Try simplifying control flow for better match */
                    return 0;
                default:
                    return 0;
                }
            } else {
                if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x1E) {
                    M2C_FIELD(arg2, s32 *, 0x18) = (s32) (M2C_FIELD(arg2, s32 *, 0x18) | 0x40000000 | 0x20000000);
                    M2C_FIELD(D_80119710, s32 *, 4) = 0;
                    goto block_39;
                }
                /* Duplicate return node #42. Try simplifying control flow for better match */
                return 0;
            }
        } else {
            if (temp_v1 != 6) {
                if ((s32) temp_v1 >= 6) {
                    if ((temp_v1 != 7) && (temp_v1 != 0x63)) {
                        return 0;
                    }
                    return 1;
                }
                if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x1E) {
                    func_80013928(M2C_FIELD(D_8008F754, void **, 0xC), temp_a1);
                    M2C_FIELD(D_80119710, s32 *, 4) = 0;
                    goto block_39;
                }
                /* Duplicate return node #42. Try simplifying control flow for better match */
                return 0;
            }
            func_800FE188(arg2, &sp38);
            func_800FE21C(temp_s0, temp_s3, &sp40);
            func_800FF3B4(&sp40, &sp38, 0x1E, M2C_FIELD(D_80119710, s32 *, 4), &sp30);
            var_v1_2 = rsin((s32) (M2C_FIELD(D_80119710, s32 *, 4) << 0xC) / 60) * 0x64;
            if (var_v1_2 < 0) {
                var_v1_2 += 0xFFF;
            }
            sp32 -= var_v1_2 >> 0xC;
            func_800FF2CC(arg2, &sp30, 1);
            if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x1E) {
                func_80034AB0(0x7D);
                M2C_FIELD(arg2, s32 *, 0x18) = (s32) (M2C_FIELD(arg2, s32 *, 0x18) ^ 0x40000000);
                goto block_38;
            }
            /* Duplicate return node #42. Try simplifying control flow for better match */
            return 0;
        }
    } else {
        temp_v1_2 = M2C_FIELD(D_80119710, s32 *, 4);
        if (temp_v1_2 == 0x3C) {
            func_80034AB0(0x3A, temp_a1);
        }
        if (temp_v1_2 == 0x46) {
            func_80034AB0(0xA);
        }
        if (M2C_FIELD(temp_s4, s32 *, 0x1C) == 0) {
            if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x78) {
                M2C_FIELD(arg2, s8 *, 0x17) = 1;
                temp_v0 = func_800DD1D4(arg2, temp_s0, temp_s3);
                temp_v1_3 = temp_v0 + 4;
                var_v0 = temp_v1_3;
                if (temp_v1_3 < 0) {
                    var_v0 = temp_v0 + 0xB;
                }
                M2C_FIELD(arg2, s8 *, 0x25) = (s8) (temp_v1_3 - ((var_v0 >> 3) * 8));
block_38:
                M2C_FIELD(D_80119710, s32 *, 4) = 0;
block_39:
                M2C_FIELD(temp_s5, u16 *, 0xEC) = (u16) (M2C_FIELD(temp_s5, u16 *, 0xEC) + 1);
            }
        }
        return 0;
    }
}
