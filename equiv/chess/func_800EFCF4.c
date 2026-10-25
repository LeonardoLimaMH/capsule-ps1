#include "common.h"

s32 func_800EFCF4(void *arg1, void *arg2, u8 *arg3) {
    extern u8 D_80018600[];
    extern u8 D_80069AD4[];
    extern u8 D_8006B2A4[];
    extern u8 D_8008ED68[];
    extern u32 D_8008EE70[];
    extern u8 D_8008F754[];
    extern u8 D_800906A0[];
    extern s32 D_80118C18[];
    extern u8 D_80119710[];
    extern s32 D_80119714[];
    extern u8 D_8011974F[];
    extern int func_800F52C4();
    extern int func_800F5514();
    extern int func_800F865C();
    extern int func_800FAC74();
    u16 sp10;
    u16 sp14;
    u16 sp18;
    u16 sp1C;
    u16 sp20;
    M2C_UNK sp24;
    M2C_UNK sp28;
    u16 sp30;
    u16 sp34;
    u16 sp38;
    u16 sp3C;
    u16 sp40;
    M2C_UNK sp44;
    M2C_UNK sp48;
    u16 sp50;
    s16 sp52;
    u16 sp54;
    u16 sp58;
    u16 sp5C;
    u16 sp60;
    M2C_UNK sp64;
    M2C_UNK sp68;
    u16 sp70;
    u16 sp74;
    u16 sp78;
    u16 sp7C;
    u16 sp80;
    M2C_UNK sp84;
    M2C_UNK sp88;
    u8 *var_a3;
    s16 temp_a2_2;
    s16 var_v1;
    s16 var_v1_2;
    s16 var_v1_3;
    s16 var_v1_4;
    s32 temp_a1_2;
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_s1_4;
    s32 temp_s5;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a3_2;
    s32 var_a3_3;
    u16 temp_a1;
    u16 var_v0;
    u16 var_v1_5;
    u16 var_v1_6;
    u32 temp_s1_2;
    u32 temp_s1_3;
    u32 temp_s1_5;
    u64 temp_ret;
    u64 temp_ret_10;
    u64 temp_ret_11;
    u64 temp_ret_12;
    u64 temp_ret_2;
    u64 temp_ret_3;
    u64 temp_ret_4;
    u64 temp_ret_5;
    u64 temp_ret_6;
    u64 temp_ret_7;
    u64 temp_ret_8;
    u64 temp_ret_9;
    u64 temp_s0_2;
    u64 temp_s0_4;
    u64 temp_s0_5;
    u8 temp_a0;
    u8 var_v0_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_a1_5;
    void *temp_a2;
    void *temp_s0;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_s3;
    void *temp_s4;
    void *temp_t0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v1;
    void *var_a2;

    var_a2 = arg2;
    var_a3 = arg3;
    temp_v1 = D_8008F754 - 0x9EC;
    temp_a1 = M2C_FIELD(temp_v1, u16 *, 0xEC);
    temp_s2 = M2C_FIELD(D_8008F754, void **, 0xC);
    temp_s5 = M2C_FIELD(temp_v1, s32 *, 0xA3C);
    temp_s4 = var_a2;
    switch (temp_a1) {
    case 0:
        temp_v0 = (M2C_FIELD(temp_s4, u8 *, 0) * 0x58) + D_8006B2A4;
        M2C_FIELD(temp_v0, s32 *, 0x10) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x10) | 0x18000);
        temp_s0 = D_8011974F - 0x3F;
        M2C_FIELD(temp_s0, s8 *, 0x3E) = func_800D741C(M2C_FIELD(((M2C_FIELD(temp_s4, u8 *, 0x16) * 4) + ((M2C_FIELD(temp_s4, u8 *, 0x15) * 0x34) + (*D_80118C18))), u8 *, 3), D_8011974F, M2C_FIELD(temp_s4, u8 *, 0x25), 0x18000);
        temp_v0_2 = (M2C_FIELD(temp_s4, u8 *, 0) * 0x58) + D_8006B2A4;
        M2C_FIELD(temp_v0_2, s32 *, 0x10) = (s32) ((M2C_FIELD(temp_v0_2, s32 *, 0x10) & 0xFFFE7FFF) | 0x10000);
        M2C_FIELD(temp_s4, s8 *, 0x17) = 0x87;
        M2C_FIELD(temp_s4, s8 *, 0x23) = 1;
        func_8002CD50(0x10000);
        M2C_FIELD(D_8008ED68, s32 *, 0xA3C) = func_800202A4(2);
        M2C_FIELD(temp_s0, s32 *, 4) = 0;
        M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
    default:
block_60:
        return 0;
    case 1:
        func_800EFBA4(M2C_FIELD(temp_s4, u8 *, 0x25), temp_s5, 0x1E);
        if ((*D_80119714) >= 0x14) {
            temp_a2 = func_80015B3C(D_80018600, &func_800F865C, 1);
            if ((M2C_FIELD(temp_s4, u8 *, 0x25) & 1) == 1) {
                var_v1 = M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x70), u16 *, 0x46) + ((s32) ((*D_8008EE70) + ((u32) (*D_8008EE70) >> 0x1F)) >> 1) + ((temp_s5 * 0x12) - 9);
            } else {
                var_v1 = (M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x70), u16 *, 0x46) + ((s32) ((*D_8008EE70) + ((u32) (*D_8008EE70) >> 0x1F)) >> 1)) - ((temp_s5 * 0x12) - 9);
            }
            M2C_FIELD(temp_a2, s16 *, 0x28) = var_v1;
            M2C_FIELD(temp_a2, s8 *, 0x2C) = 0x64;
            M2C_FIELD(temp_a2, s8 *, 0x2D) = 0x64;
            M2C_FIELD(temp_a2, s8 *, 0x2E) = 0xFF;
            M2C_FIELD(temp_a2, s8 *, 0x30) = 0xF;
            M2C_FIELD(temp_a2, s16 *, 0x32) = 0;
            M2C_FIELD(temp_a2, s16 *, 0x2A) = (s16) ((M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x70), u16 *, 0x4A) + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2)) - 0x2D);
            M2C_FIELD(D_8008ED68, void **, 0x9FC) = temp_a2;
            (*D_80119714) = 0;
            M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
        }
        /* Duplicate return node #61. Try simplifying control flow for better match */
        return 0;
    case 2:
        func_800EFBA4(M2C_FIELD(temp_s4, u8 *, 0x25), temp_s5, 0x1E);
        if ((*D_80119714) >= 0x14) {
            temp_t0 = func_80015B3C(D_80018600, &func_800F5514, 1);
            if ((M2C_FIELD(temp_s4, u8 *, 0x25) & 1) == 1) {
                var_v1_2 = M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x70), u16 *, 0x46) + ((s32) ((*D_8008EE70) + ((u32) (*D_8008EE70) >> 0x1F)) >> 1) + ((temp_s5 * 0x12) - 9);
            } else {
                var_v1_2 = (M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x70), u16 *, 0x46) + ((s32) ((*D_8008EE70) + ((u32) (*D_8008EE70) >> 0x1F)) >> 1)) - ((temp_s5 * 0x12) - 9);
            }
            M2C_FIELD(temp_t0, s16 *, 0x28) = var_v1_2;
            M2C_FIELD(temp_t0, s8 *, 0x2F) = 0x82;
            M2C_FIELD(temp_t0, s8 *, 0x33) = 1;
            M2C_FIELD(temp_t0, s8 *, 0x34) = 0xA;
            M2C_FIELD(temp_t0, s16 *, 0x38) = 0x3C;
            temp_a1_2 = (s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2;
            M2C_FIELD(temp_t0, s16 *, 0x2C) = 0x64;
            M2C_FIELD(temp_t0, s8 *, 0x2E) = 0x50;
            M2C_FIELD(temp_t0, s8 *, 0x30) = 0x50;
            M2C_FIELD(temp_t0, s8 *, 0x32) = 0;
            M2C_FIELD(temp_t0, s16 *, 0x36) = 0x64;
            temp_a2_2 = (M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x70), u16 *, 0x4A) + temp_a1_2) - 0x2D;
            M2C_FIELD(temp_t0, s16 *, 0x2A) = temp_a2_2;
            func_80034AB0(0x2C, temp_a1_2, temp_a2_2, 0x64);
            (*D_80119714) = 0;
            M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
        }
        /* Duplicate return node #61. Try simplifying control flow for better match */
        return 0;
    case 3:
        func_800EFBA4(M2C_FIELD(temp_s4, u8 *, 0x25), temp_s5, 0x1E);
        func_8002CC74();
        func_8002CD50();
        temp_v1_2 = M2C_FIELD(D_80119710, s32 *, 4);
        if (temp_v1_2 == 0x28) {
            temp_v0_3 = func_80015B3C(D_80018600, &func_800F52C4, 1);
            M2C_FIELD(temp_v0_3, s8 *, 0x2C) = 0x96;
            M2C_FIELD(temp_v0_3, s8 *, 0x2D) = 0xFF;
            M2C_FIELD(temp_v0_3, s8 *, 0x2E) = 0xFF;
            M2C_FIELD(temp_v0_3, s8 *, 0x30) = 1;
            M2C_FIELD(temp_v0_3, s8 *, 0x28) = 0;
            M2C_FIELD(temp_v0_3, s8 *, 0x29) = 0;
            M2C_FIELD(temp_v0_3, s8 *, 0x2A) = 0;
            M2C_FIELD(temp_v0_3, s16 *, 0x32) = 0xF;
        }
        if (temp_v1_2 == 0x37) {
            temp_v0_4 = func_80015B3C(D_80018600, &func_800F52C4, 1);
            M2C_FIELD(temp_v0_4, s8 *, 0x28) = 0x96;
            M2C_FIELD(temp_v0_4, s8 *, 0x29) = 0xFF;
            M2C_FIELD(temp_v0_4, s8 *, 0x2A) = 0xFF;
            M2C_FIELD(temp_v0_4, s8 *, 0x30) = 1;
            M2C_FIELD(temp_v0_4, s8 *, 0x2C) = 0;
            M2C_FIELD(temp_v0_4, s8 *, 0x2D) = 0;
            M2C_FIELD(temp_v0_4, s8 *, 0x2E) = 0;
            M2C_FIELD(temp_v0_4, s16 *, 0x32) = 0x1E;
        }
        if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x37) {
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
            M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
            func_80034AB0(0x8021);
            func_80013928(M2C_FIELD(D_8008ED68, void **, 0x9FC));
            return 0;
        }
        /* Duplicate return node #61. Try simplifying control flow for better match */
        return 0;
    case 4:
        temp_s1 = func_800DDAD4(temp_s4, M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x70), s16 *, 0x4E));
        temp_s3 = func_80015B3C(D_80018600, &func_800F5514, 1);
        temp_s2_2 = func_80015B3C(D_80018600, &func_800FAC74, 1);
        func_8002CEC0(D_800906A0);
        func_800EFA28(M2C_FIELD(temp_s4, u8 *, 0x25), &sp18, &sp1C, 0x7D0);
        func_800FE188(temp_s4, &sp10);
        sp10 += sp18;
        sp14 += sp1C;
        RotTransPers(&sp10, &sp20, &sp24, &sp28);
        temp_a1_3 = M2C_FIELD(temp_s4, void **, 0x70);
        M2C_FIELD(temp_s2_2, u16 *, 0x28) = (u16) (M2C_FIELD(temp_a1_3, u16 *, 0x46) + ((s32) (M2C_FIELD(D_8008ED68, u32 *, 0x108) + ((u32) M2C_FIELD(D_8008ED68, u32 *, 0x108) >> 0x1F)) >> 1));
        temp_ret = __floatsidf((s16) M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x70), u16 *, 0x4A) + ((s32) (M2C_FIELD(D_8008ED68, s32 *, 0x10C) + ((u32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) >> 0x1F)) >> 1), temp_a1_3);
        temp_s0_2 = temp_ret;
        temp_s1_2 = (u32) temp_ret;
        temp_ret_2 = __floatsidf(temp_s1);
        temp_ret_3 = __muldf3(temp_ret_2, (u32) temp_ret_2, 0xCCCCCCCD, 0x3FECCCCC);
        temp_ret_4 = __subdf3(temp_s0_2, temp_s1_2, temp_ret_3, (u32) temp_ret_3);
        M2C_FIELD(temp_s2_2, s16 *, 0x2A) = (s16) (__fixdfsi(temp_ret_4, (u32) temp_ret_4) + 0x10);
        temp_v1_3 = temp_s5 * 0x10;
        if ((M2C_FIELD(temp_s4, u8 *, 0x25) & 1) == 1) {
            var_v0 = M2C_FIELD(temp_s2_2, u16 *, 0x28) - 8 + temp_v1_3;
        } else {
            var_v0 = (M2C_FIELD(temp_s2_2, u16 *, 0x28) + 8) - temp_v1_3;
        }
        M2C_FIELD(temp_s2_2, u16 *, 0x28) = var_v0;
        M2C_FIELD(temp_s2_2, u16 *, 0x2C) = sp20;
        M2C_FIELD(temp_s2_2, s16 *, 0x30) = 6;
        M2C_FIELD(temp_s2_2, s8 *, 0x33) = 0x78;
        M2C_FIELD(temp_s2_2, s8 *, 0x32) = 0x78;
        M2C_FIELD(temp_s2_2, s8 *, 0x34) = 0x78;
        M2C_FIELD(temp_s2_2, s8 *, 0x35) = 0x78;
        M2C_FIELD(temp_s2_2, s8 *, 0x36) = 0xF0;
        M2C_FIELD(temp_s2_2, s8 *, 0x3C) = 1;
        M2C_FIELD(temp_s2_2, s8 *, 0x3D) = 1;
        M2C_FIELD(temp_s2_2, s8 *, 0x3E) = 1;
        M2C_FIELD(temp_s2_2, u16 *, 0x2E) = sp22;
        M2C_FIELD(D_8008F754, void **, 0xC) = temp_s2_2;
        if ((M2C_FIELD(temp_s4, u8 *, 0x25) & 1) == 1) {
            var_v1_3 = M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x70), u16 *, 0x46) + ((s32) (M2C_FIELD(D_8008F754, u32 *, -0x8E4) + ((u32) M2C_FIELD(D_8008F754, u32 *, -0x8E4) >> 0x1F)) >> 1) + ((temp_s5 * 0x12) - 9);
        } else {
            var_v1_3 = (M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x70), u16 *, 0x46) + ((s32) (M2C_FIELD(D_8008F754, u32 *, -0x8E4) + ((u32) M2C_FIELD(D_8008F754, u32 *, -0x8E4) >> 0x1F)) >> 1)) - ((temp_s5 * 0x12) - 9);
        }
        M2C_FIELD(temp_s3, s16 *, 0x28) = var_v1_3;
        M2C_FIELD(temp_s3, s16 *, 0x2C) = 0x64;
        M2C_FIELD(temp_s3, s8 *, 0x2F) = 0xE6;
        M2C_FIELD(temp_s3, s8 *, 0x32) = 1;
        M2C_FIELD(temp_s3, s8 *, 0x33) = 1;
        M2C_FIELD(temp_s3, s8 *, 0x34) = 0xA;
        M2C_FIELD(temp_s3, s16 *, 0x36) = 0x46;
        M2C_FIELD(temp_s3, s16 *, 0x38) = 0x46;
        M2C_FIELD(temp_s3, s8 *, 0x2E) = 0xB4;
        M2C_FIELD(temp_s3, s8 *, 0x30) = 0xB4;
        M2C_FIELD(temp_s3, s16 *, 0x2A) = (s16) ((M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x70), u16 *, 0x4A) + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2)) - 0x2D);
        (*D_80119714) = 0;
        M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
        goto block_60;
    case 5:
        func_8002CEC0(D_800906A0, temp_a1);
        if ((*D_80119714) == (((*D_80119714) / 3) * 3)) {
            var_a3_2 = 0x2710;
        } else {
            var_a3_2 = 0x7D0;
        }
        func_800EFA28(M2C_FIELD(temp_s4, u8 *, 0x25), &sp38, &sp3C, var_a3_2);
        func_800FE188(temp_s4, &sp30);
        sp30 += sp38;
        sp34 += sp3C;
        RotTransPers(&sp30, &sp40, &sp44, &sp48);
        temp_a0 = M2C_FIELD(temp_s2, u8 *, 0x32);
        M2C_FIELD(temp_s2, u16 *, 0x2C) = sp40;
        M2C_FIELD(temp_s2, s16 *, 0x30) = 6;
        M2C_FIELD(temp_s2, u16 *, 0x2E) = sp42;
        if (temp_a0 < 7U) {
            var_v0_2 = 4;
        } else {
            var_v0_2 = temp_a0 - 3;
        }
        M2C_FIELD(temp_s2, u8 *, 0x32) = var_v0_2;
        M2C_FIELD(temp_s2, u8 *, 0x33) = (u8) M2C_FIELD(temp_s2, u8 *, 0x32);
        var_a3 = D_80119710;
        var_a2 = (void *) (M2C_FIELD(D_80119710, s32 *, 4) < 0x2D);
        M2C_FIELD(D_80069AD4, s32 *, 0xE0) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xE0) + ((M2C_FIELD(D_80119710, s32 *, 4) * 2) / 5));
        if (var_a2 == NULL) {
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
            M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
        case 6:
            temp_s0_3 = func_800DDAD4(temp_s4, M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x70), s16 *, 0x4E), (s32) var_a2, var_a3);
            func_8002CEC0(D_800906A0);
            if (!((*D_80119714) & 1)) {
                var_a3_3 = 0x2710;
            } else if (sp52 == 0) {
                var_a3_3 = 0xFA0 - ((*D_80119714) * 0x14);
            } else {
                var_a3_3 = 0x7D0;
            }
            func_800EFA28(M2C_FIELD(temp_s4, u8 *, 0x25), &sp58, &sp5C, var_a3_3);
            func_800FE188(temp_s4, &sp50);
            sp50 += sp58;
            sp54 += sp5C;
            if ((*D_80119714) < 0x32) {
                var_v1_4 = (u16) sp52 - ((*D_80119714) * 0x11);
            } else {
                var_v1_4 = (u16) sp52 - 0x6A4 + ((*D_80119714) * 0x11);
            }
            sp52 = var_v1_4;
            if (sp52 > 0) {
                sp52 = 0;
            }
            RotTransPers(&sp50, &sp60, &sp64, &sp68);
            temp_a1_4 = M2C_FIELD(temp_s4, void **, 0x70);
            M2C_FIELD(temp_s2, u16 *, 0x28) = (u16) (M2C_FIELD(temp_a1_4, u16 *, 0x46) + ((s32) (M2C_FIELD(D_8008ED68, u32 *, 0x108) + ((u32) M2C_FIELD(D_8008ED68, u32 *, 0x108) >> 0x1F)) >> 1));
            temp_ret_5 = __floatsidf((s16) M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x70), u16 *, 0x4A) + ((s32) (M2C_FIELD(D_8008ED68, s32 *, 0x10C) + ((u32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) >> 0x1F)) >> 1), temp_a1_4);
            temp_s0_4 = temp_ret_5;
            temp_s1_3 = (u32) temp_ret_5;
            temp_ret_6 = __floatsidf(temp_s0_3);
            temp_ret_7 = __muldf3(temp_ret_6, (u32) temp_ret_6, 0x33333333, 0x3FEB3333);
            temp_ret_8 = __subdf3(temp_s0_4, temp_s1_3, temp_ret_7, (u32) temp_ret_7);
            M2C_FIELD(temp_s2, u16 *, 0x2A) = (u16) (__fixdfsi(temp_ret_8, (u32) temp_ret_8) + 3);
            if ((M2C_FIELD(temp_s4, u8 *, 0x25) & 1) == 1) {
                var_v1_5 = M2C_FIELD(temp_s2, u16 *, 0x28) - 6 + (temp_s5 * 0xC);
            } else {
                var_v1_5 = (M2C_FIELD(temp_s2, u16 *, 0x28) + 6) - (temp_s5 * 0xC);
            }
            M2C_FIELD(temp_s2, u16 *, 0x28) = var_v1_5;
            M2C_FIELD(temp_s2, u16 *, 0x2C) = sp60;
            M2C_FIELD(temp_s2, s16 *, 0x30) = 6;
            M2C_FIELD(temp_s2, u16 *, 0x2E) = sp62;
            M2C_FIELD(temp_s2, s8 *, 0x34) = (s8) (((M2C_FIELD(D_80119710, s32 *, 4) * 0x87) / 180) + 0x78);
            M2C_FIELD(temp_s2, s8 *, 0x35) = (s8) (0x78 - (M2C_FIELD(D_80119710, s32 *, 4) / 9));
            M2C_FIELD(temp_s2, s8 *, 0x36) = (s8) ~((M2C_FIELD(D_80119710, s32 *, 4) * 0x9B) / 180);
            if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x79) {
                M2C_FIELD(temp_s2, u8 *, 0x33) = 3U;
                M2C_FIELD(temp_s2, u8 *, 0x32) = 3U;
            } else {
                M2C_FIELD(D_80069AD4, s32 *, 0xE0) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xE0) + 1);
            }
            if (M2C_FIELD(D_80119710, s32 *, 4) >= 0xB5) {
                M2C_FIELD(D_80119710, s32 *, 4) = 0;
                M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
            case 7:
                if (M2C_FIELD(D_80119710, s32 *, 4) >= 5) {
                    temp_v0_5 = func_80015B3C(D_80018600, &func_800F52C4, 1);
                    M2C_FIELD(D_80119710, s32 *, 4) = 0;
                    M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
                    M2C_FIELD(temp_v0_5, s8 *, 0x28) = 0x46;
                    M2C_FIELD(temp_v0_5, s8 *, 0x29) = 0x28;
                    M2C_FIELD(temp_v0_5, s8 *, 0x2A) = 0x28;
                    M2C_FIELD(temp_v0_5, s8 *, 0x30) = 1;
                    M2C_FIELD(temp_v0_5, s8 *, 0x2C) = 0;
                    M2C_FIELD(temp_v0_5, s8 *, 0x2D) = 0;
                    M2C_FIELD(temp_v0_5, s8 *, 0x2E) = 0;
                    M2C_FIELD(temp_v0_5, s16 *, 0x32) = 0x3C;
                case 8:
                    temp_s1_4 = func_800DDAD4(temp_s4, M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x70), s16 *, 0x4E));
                    func_8002CEC0(D_800906A0);
                    func_800EFA28(M2C_FIELD(temp_s4, u8 *, 0x25), &sp78, &sp7C, ((*D_80119714) * 0x4B) + 0x1F4);
                    func_800FE188(temp_s4, &sp70);
                    sp70 += sp78;
                    sp74 += sp7C;
                    RotTransPers(&sp70, &sp80, &sp84, &sp88);
                    temp_a1_5 = M2C_FIELD(temp_s4, void **, 0x70);
                    M2C_FIELD(temp_s2, u16 *, 0x28) = (u16) (M2C_FIELD(temp_a1_5, u16 *, 0x46) + ((s32) (M2C_FIELD(D_8008ED68, u32 *, 0x108) + ((u32) M2C_FIELD(D_8008ED68, u32 *, 0x108) >> 0x1F)) >> 1));
                    temp_ret_9 = __floatsidf((s16) M2C_FIELD(M2C_FIELD(temp_s4, void **, 0x70), u16 *, 0x4A) + ((s32) (M2C_FIELD(D_8008ED68, s32 *, 0x10C) + ((u32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) >> 0x1F)) >> 1), temp_a1_5);
                    temp_s0_5 = temp_ret_9;
                    temp_s1_5 = (u32) temp_ret_9;
                    temp_ret_10 = __floatsidf(temp_s1_4);
                    temp_ret_11 = __muldf3(temp_ret_10, (u32) temp_ret_10, 0xCCCCCCCD, 0x3FECCCCC);
                    temp_ret_12 = __subdf3(temp_s0_5, temp_s1_5, temp_ret_11, (u32) temp_ret_11);
                    M2C_FIELD(temp_s2, u16 *, 0x2A) = __fixdfsi(temp_ret_12, (u32) temp_ret_12);
                    M2C_FIELD(temp_s2, u16 *, 0x2C) = sp80;
                    M2C_FIELD(temp_s2, s16 *, 0x30) = 6;
                    M2C_FIELD(temp_s2, u16 *, 0x2A) = (u16) (M2C_FIELD(temp_s2, u16 *, 0x2A) + 5);
                    M2C_FIELD(temp_s2, u16 *, 0x2E) = sp82;
                    if ((M2C_FIELD(temp_s4, u8 *, 0x25) & 1) == 1) {
                        var_v1_6 = M2C_FIELD(temp_s2, u16 *, 0x28) - 6 + (temp_s5 * 0xC);
                    } else {
                        var_v1_6 = (M2C_FIELD(temp_s2, u16 *, 0x28) + 6) - (temp_s5 * 0xC);
                    }
                    M2C_FIELD(temp_s2, u16 *, 0x28) = var_v1_6;
                    if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x4B) {
                        M2C_FIELD(D_80119710, s32 *, 4) = 0;
                        M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
                    case 9:
                        func_800FBB90(0x21);
                        (*D_80119714) = 0;
                        M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
                        func_80013928(temp_s2, D_8008ED68);
                        func_80034AB0(0x8018);
                        func_8002CC74();
                        func_8002CD50();
                        M2C_FIELD(arg1, s8 *, 0x60D) = 2;
                        return 1;
                    }
                    /* Duplicate return node #61. Try simplifying control flow for better match */
                    return 0;
                }
                /* Duplicate return node #61. Try simplifying control flow for better match */
                return 0;
            }
            /* Duplicate return node #61. Try simplifying control flow for better match */
            return 0;
        }
        goto block_60;
    }
}
