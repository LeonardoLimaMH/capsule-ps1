#include "common.h"

void func_800C2AEC(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE4C[];
    s32 temp_s2;
    s32 temp_s3;
    s32 var_s4;
    s32 var_v0_2;
    s32 var_v0_3;
    s8 temp_s7;
    u32 temp_fp;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 temp_v0_4;
    u32 temp_v0_5;
    u32 temp_v0_6;
    u32 temp_v0_7;
    u32 temp_v0_8;
    u32 temp_v1_2;
    u8 temp_v1;
    u8 var_s6;
    u8 var_v0;
    void *temp_s0;

    temp_s2 = M2C_FIELD(arg0, s32 *, 0x5C);
    temp_s3 = M2C_FIELD(arg0, s32 *, 0x60);
    temp_s0 = M2C_FIELD(arg0, void **, 0x14);
    var_s6 = 1;
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_s6 = M2C_FIELD(D_8008ED68, u8 *, 0x103);
    }
    var_s4 = 0;
    if (var_s6 != 0) {
        temp_s7 = temp_s2 * 2;
        temp_fp = temp_s2 * 3;
        do {
            temp_v1 = M2C_FIELD(temp_s0, u8 *, 0xEE);
            switch (temp_v1) {
            case 0:
                func_800CB6A0(arg0);
                temp_v0 = M2C_FIELD(arg0, u32 *, 0x54) + 1;
                M2C_FIELD(arg0, u32 *, 0x54) = temp_v0;
                if (temp_v0 >= 0x30U) {
                    func_800CB844(temp_s0);
                    M2C_FIELD(temp_s0, s16 *, 0x28) = 0x60;
                    M2C_FIELD(temp_s0, u8 *, 0xEE) = (u8) (M2C_FIELD(temp_s0, u8 *, 0xEE) + 1);
                    M2C_FIELD(arg0, u32 *, 0x54) = 0U;
                }
            default:
block_43:
                var_s4 += 1;
                break;
            case 1:
                temp_v0_2 = M2C_FIELD(arg0, u32 *, 0x54) + 1;
                M2C_FIELD(arg0, u32 *, 0x54) = temp_v0_2;
                if (temp_v0_2 >= 0xAU) {
                    var_v0 = M2C_FIELD(temp_s0, u8 *, 0xEE) + 1;
block_32:
                    M2C_FIELD(temp_s0, u8 *, 0xEE) = var_v0;
                    M2C_FIELD(arg0, u32 *, 0x54) = 0U;
                }
                goto block_43;
            case 2:
                func_800CB6A0(arg0);
                temp_v0_3 = M2C_FIELD(arg0, u32 *, 0x54) + 1;
                M2C_FIELD(arg0, u32 *, 0x54) = temp_v0_3;
                if (temp_v0_3 >= 0x20U) {
                    var_v0 = M2C_FIELD(temp_s0, u8 *, 0xEE) + 1;
                    goto block_32;
                }
                goto block_43;
            case 3:
                temp_v1_2 = M2C_FIELD(arg0, u32 *, 0x54) + 1;
                M2C_FIELD(arg0, u32 *, 0x54) = temp_v1_2;
                if (temp_s3 != 0) {
                    if (temp_fp >= temp_v1_2) {
                        var_s4 += 1;
                    } else {
                        goto block_16;
                    }
                } else {
                    if ((u32) (temp_s2 * 5) < temp_v1_2) {
block_16:
                        M2C_FIELD(temp_s0, u8 *, 0xEE) = (u8) (M2C_FIELD(temp_s0, u8 *, 0xEE) + 1);
                        if (temp_s2 == 0) {
                            if (M2C_FIELD(arg0, s32 *, 0x64) == 0) {
                                func_80034AB0(0x8005);
                            }
                        }
                        M2C_FIELD(arg0, u32 *, 0x54) = 0U;
                        M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) + 1);
                    }
                    goto block_43;
                }
                break;
            case 4:
                M2C_FIELD(temp_s0, u16 *, 0xC4) = (u16) (M2C_FIELD(temp_s0, u16 *, 0xC4) + 0x140);
                M2C_FIELD(temp_s0, u16 *, 0xCA) = (u16) (M2C_FIELD(temp_s0, u16 *, 0xCA) + 0x140);
                M2C_FIELD(temp_s0, u16 *, 0xD0) = (u16) (M2C_FIELD(temp_s0, u16 *, 0xD0) + 0x140);
                M2C_FIELD(temp_s0, u8 *, 0x60) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x60) + 0x14);
                M2C_FIELD(temp_s0, u8 *, 0x61) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x61) + 0x14);
                M2C_FIELD(temp_s0, u8 *, 0x62) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x62) + 0x14);
                temp_v0_4 = M2C_FIELD(arg0, u32 *, 0x54) + 1;
                M2C_FIELD(arg0, u32 *, 0x54) = temp_v0_4;
                if (temp_v0_4 >= 4U) {
                    var_v0 = M2C_FIELD(temp_s0, u8 *, 0xEE) + 1;
                    goto block_32;
                }
                goto block_43;
            case 5:
                temp_v0_5 = M2C_FIELD(arg0, u32 *, 0x54) + 1;
                M2C_FIELD(arg0, u32 *, 0x54) = temp_v0_5;
                if (temp_v0_5 >= 2U) {
                    var_v0 = M2C_FIELD(temp_s0, u8 *, 0xEE) + 1;
                    goto block_32;
                }
                goto block_43;
            case 6:
                M2C_FIELD(temp_s0, u16 *, 0xC4) = (u16) (M2C_FIELD(temp_s0, u16 *, 0xC4) - 0x140);
                M2C_FIELD(temp_s0, u16 *, 0xCA) = (u16) (M2C_FIELD(temp_s0, u16 *, 0xCA) - 0x140);
                M2C_FIELD(temp_s0, u16 *, 0xD0) = (u16) (M2C_FIELD(temp_s0, u16 *, 0xD0) - 0x140);
                M2C_FIELD(temp_s0, u8 *, 0x60) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x60) - 0x14);
                M2C_FIELD(temp_s0, u8 *, 0x61) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x61) - 0x14);
                M2C_FIELD(temp_s0, u8 *, 0x62) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x62) - 0x14);
                temp_v0_6 = M2C_FIELD(arg0, u32 *, 0x54) + 1;
                M2C_FIELD(arg0, u32 *, 0x54) = temp_v0_6;
                if (temp_v0_6 >= 4U) {
                    var_v0_2 = temp_s2;
                    if (temp_s3 != 0) {
                        var_v0_2 = temp_s2 + 2;
                    }
                    M2C_FIELD(D_80085428, s8 *, 0xD77) = (s8) var_v0_2;
                    var_v0 = 7;
                    goto block_32;
                }
                goto block_43;
            case 7:
                if ((u16) (*D_8008EE4C) >= 3U) {
                    M2C_FIELD(D_80085428, u8 *, 0xD78) = (u8) (M2C_FIELD(D_80085428, u8 *, 0xD78) + (temp_s2 + 1));
                    var_v0 = M2C_FIELD(temp_s0, u8 *, 0xEE) + 1;
                    goto block_32;
                }
                temp_v0_7 = M2C_FIELD(arg0, u32 *, 0x54) + 1;
                M2C_FIELD(arg0, u32 *, 0x54) = temp_v0_7;
                var_v0 = 4;
                if (temp_v0_7 >= 0x32U) {
                    goto block_32;
                }
                goto block_43;
            case 8:
                var_v0_3 = 0xF;
                if (temp_s3 != 0) {
                    var_v0_3 = 6;
                }
                if (M2C_FIELD(D_80085428, u8 *, 0xD78) == var_v0_3) {
                    func_800CB844(temp_s0);
                    M2C_FIELD(temp_s0, u8 *, 0xEE) = (u8) (M2C_FIELD(temp_s0, u8 *, 0xEE) + 1);
                    M2C_FIELD(arg0, u32 *, 0x54) = 0U;
                    M2C_FIELD(temp_s0, s32 *, 0x40) = 0x18;
                }
                goto block_43;
            case 9:
                func_800CB6A0(arg0);
                temp_v0_8 = M2C_FIELD(arg0, u32 *, 0x54) + 1;
                M2C_FIELD(arg0, u32 *, 0x54) = temp_v0_8;
                if (temp_v0_8 >= 0x78U) {
                    M2C_FIELD(temp_s0, u8 *, 0xEE) = (u8) (M2C_FIELD(temp_s0, u8 *, 0xEE) + 1);
                }
                goto block_43;
            case 10:
                func_800185F8(arg0);
                if (temp_s3 != 0) {
                    M2C_FIELD(D_80085428, s8 *, 0xD77) = (s8) ((temp_s2 + 2) * 2);
                } else {
                    M2C_FIELD(D_80085428, s8 *, 0xD77) = temp_s7;
                }
                M2C_FIELD(D_80085428, s8 *, 0xBE0) = 0;
                goto block_43;
            }
        } while (var_s4 < (s32) var_s6);
    }
}
