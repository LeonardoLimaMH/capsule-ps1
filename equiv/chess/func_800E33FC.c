#include "common.h"

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
s32 func_800E33FC(s32 arg0, void *arg1, void *arg2, void *arg3) {
    extern u8 D_80018600[];
    extern u8 D_8008ED68[];
    extern void * D_8008F760[];
    extern u8 D_80119710[];
    extern s32 D_80119714[];
    extern u8 D_8011974C[];
    extern int func_800AADE0();
    extern int func_800F52C4();
    M2C_UNK sp18;
    s16 temp_s0_4;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s2_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;
    u16 temp_s0;
    u8 temp_s1;
    u8 temp_s2;
    void *temp_a1;
    void *var_s4;

    var_s4 = (*D_8008F760);
    temp_v0 = func_800DD230(arg2);
    if ((temp_v0 == 1) || (var_v1 = 0x26, (temp_v0 == 7))) {
        var_v1 = 0x18;
    }
    temp_s0 = M2C_FIELD(D_8008ED68, u16 *, 0xEC);
    if (temp_s0 != 3) {
        if ((s32) temp_s0 < 4) {
            if (temp_s0 != 1) {
                if ((s32) temp_s0 < 2) {
                    if (temp_s0 != 0) {
                        return 0;
                    }
                    func_800FE958(0x80, 0, 0);
                    M2C_FIELD(D_80119710, u8 *, 0x3C) = 1U;
                    M2C_FIELD(D_80119710, s32 *, 4) = 0;
                    goto block_28;
                }
                if (M2C_FIELD(D_80119710, s32 *, 4) == var_v1) {
                    func_80034AB0(0x8018);
                }
                if ((u32) M2C_FIELD(M2C_FIELD(arg2, void **, 0x70), u32 *, 0x20) >= 2U) {
                    temp_s1 = M2C_FIELD(arg1, u8 *, 0x5FA);
                    temp_s0_2 = func_80019F30((M2C_FIELD(arg2, u8 *, 0) + 0x10D) | 0x70000, temp_v0 + 0x45);
                    temp_s2 = M2C_FIELD((arg1 + temp_s1), u8 *, 0x5FB);
                    var_s4 = func_80015B3C(D_80018600, &func_800AADE0, 1);
                    M2C_FIELD(D_8008ED68, void **, 0x9F8) = var_s4;
                    func_80015EF8(var_s4);
                    func_80015CD0(var_s4 + 0x14, temp_s0_2, 0);
                    func_800A81D8(arg0, var_s4, temp_s1, temp_s2);
                    M2C_FIELD(D_80119710, s32 *, 4) = 0;
                    M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
                    goto block_21;
                }
                /* Duplicate return node #32. Try simplifying control flow for better match */
                return 0;
            }
            if (func_800FEF04(arg2, arg3) != 0) {
                if (M2C_FIELD(D_80119710, u8 *, 0x3C) == 0) {
                    M2C_FIELD(arg2, s8 *, 0x17) = 0x88;
                    M2C_FIELD(arg2, s8 *, 0x23) = (s8) temp_s0;
                    M2C_FIELD(D_80119710, s32 *, 4) = 0;
                    M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
                }
            }
            /* Duplicate return node #32. Try simplifying control flow for better match */
            return 0;
        }
        if (temp_s0 != 5) {
            if ((s32) temp_s0 >= 5) {
                if (temp_s0 != 0x63) {
                    return 0;
                }
                goto block_30;
            }
            if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x3C) {
                M2C_FIELD(D_80119710, u8 *, 0x3C) = 2U;
                M2C_FIELD(D_80119710, s32 *, 4) = 0;
block_28:
                M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
            }
            /* Duplicate return node #32. Try simplifying control flow for better match */
            return 0;
        }
        if ((*D_8011974C) == 0) {
block_30:
            M2C_FIELD(arg1, s8 *, 0x60D) = 2;
            return 1;
        }
        goto block_31;
    }
block_21:
    temp_v0_2 = func_800FE428(arg2, arg3);
    temp_s0_3 = (*D_80119714);
    temp_s2_2 = temp_s0_3 * 0x10;
    func_800FF460(arg2, arg3, temp_v0_2, temp_s2_2, &sp18);
    func_800FF0A0(var_s4, &sp18, 0x64);
    temp_s0_4 = ((s32) (temp_s0_3 << 0x11) / temp_v0_2) + 0x1000;
    M2C_FIELD(var_s4, s16 *, 0x52) = temp_s0_4;
    M2C_FIELD(var_s4, s16 *, 0x50) = temp_s0_4;
    if (temp_s2_2 >= (temp_v0_2 - 0x78)) {
        func_80013928(var_s4);
        temp_a1 = func_80015B3C(D_80018600, &func_800F52C4, 1);
        if (M2C_FIELD(arg2, u8 *, 0) == 0x1C) {
            M2C_FIELD(temp_a1, s8 *, 0x28) = 0xFF;
            M2C_FIELD(temp_a1, s8 *, 0x29) = 0;
            M2C_FIELD(temp_a1, s8 *, 0x2A) = 0;
        } else {
            M2C_FIELD(temp_a1, s8 *, 0x28) = 0;
            M2C_FIELD(temp_a1, s8 *, 0x29) = 0;
            M2C_FIELD(temp_a1, s8 *, 0x2A) = 0xFF;
        }
        M2C_FIELD(temp_a1, s8 *, 0x30) = 1;
        M2C_FIELD(temp_a1, s8 *, 0x2C) = 0;
        M2C_FIELD(temp_a1, s8 *, 0x2D) = 0;
        M2C_FIELD(temp_a1, s8 *, 0x2E) = 0;
        M2C_FIELD(temp_a1, s16 *, 0x32) = 0x14;
        func_800DDA78(arg3, temp_a1);
        func_80034AB0(0x65);
        M2C_FIELD(arg3, s32 *, 0x1C) = (s32) (M2C_FIELD(arg3, s32 *, 0x1C) | 8);
        (*D_80119714) = 0;
        M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
    }
block_31:
    return 0;
}
