#include "common.h"

void func_8009ECF4(void *arg0) {
    extern u8 D_80078C6C[];
    extern u8 D_80078C6D[];
    extern u8 D_80078C6F[];
    extern u8 D_8008ED68[];
    extern s32 D_8008EDF0[];
    extern u8 D_800B28A0[];
    extern u8 D_800B3B38[];
    extern s16 D_800B3B40[];
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    u8 *var_s3;
    M2C_UNK var_a1;
    M2C_UNK var_a1_2;
    M2C_UNK var_a2;
    s16 var_a0;
    s16 var_fp;
    s16 var_s0;
    s16 var_s0_2;
    s16 var_s6;
    s16 var_v0;
    u32 temp_s2;
    u32 temp_v1_2;
    s32 var_s1;
    s32 var_s5;
    s32 var_v0_2;
    u16 var_s0_3;
    u8 temp_a0;
    u8 temp_v1;

    var_s1 = 0;
    var_s3 = D_800B28A0;
    sp28 = -0x158;
    sp2C = -0x160;
    var_fp = -0x60;
    var_s6 = -0x68;
    var_s5 = 0;
    sp30 = -0xD8;
    do {
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x5D6);
        if (temp_v1 & *(s8 *)(var_s1 + D_80078C6C)) {
            if (temp_v1 & 0x80) {
                temp_v1_2 = (var_s1 & 3) * 0x48;
                var_s0 = temp_v1_2 - 0x88;
                if ((var_s1 == 1) || (var_a1 = 0x14, (var_s1 == 3))) {
                    var_s0 = temp_v1_2 - 0x80;
                    var_a1 = 0x14;
                }
                temp_s2 = var_s1 < 4;
                if (temp_s2 != 0) {
                    var_a1 = -0x4C;
                }
                func_80020844((s16) (((var_s1 & 3) * 0x48) - 0x8C), var_a1, 0x40, 0x54, 0, 0, 0, 0, 0x401);
                var_a1_2 = 0x58;
                var_a0 = var_s0;
                if (temp_s2 != 0) {
                    var_a1_2 = -8;
                }
                var_a2 = 0;
                if (M2C_FIELD(D_800B3B38, s16 *, 8) == var_s1) {
                    var_a2 = 3;
                }
            } else if (var_s1 < 3) {
                var_s0_2 = var_s6;
                if (var_s1 == 1) {
                    var_s0_2 = var_fp;
                }
                func_80020844((s16) (var_s5 - 0x6C), -0x4C, 0x40, 0x54, 0, 0, 0, 0, 0x401);
                var_a2 = 0;
                var_a0 = var_s0_2;
                if (M2C_FIELD(D_800B3B38, s16 *, 8) == var_s1) {
                    var_a2 = 3;
                }
                var_a1_2 = -8;
            } else {
                var_s0_3 = (u16) sp2C;
                if (var_s1 == 3) {
                    var_s0_3 = (u16) sp28;
                }
                func_80020844((s16) (sp30 - 0x8C), 0x14, 0x40, 0x54, 0, 0, 0, 0, 0x401);
                var_a2 = 0;
                var_a0 = (s16) var_s0_3;
                if (M2C_FIELD(D_800B3B38, s16 *, 8) == var_s1) {
                    var_a2 = 3;
                }
                var_a1_2 = 0x58;
            }
            func_8001F1A8(var_a0, var_a1_2, var_a2, 1, 0, var_s3, 1, 4, 5);
        }
        var_s3 += 8;
        var_fp += 0x50;
        var_s6 += 0x50;
        var_s5 += 0x50;
        sp28 += 0x48;
        var_s1 += 1;
        sp2C += 0x48;
        sp30 += 0x48;
    } while (var_s1 < 8);
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xE0)) {  /* irregular */
    case 0:
        if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x1000) {
            switch (M2C_FIELD(D_800B3B38, s16 *, 8)) { /* switch 3; irregular */
            case 3:                                 /* switch 3 */
                if (!(M2C_FIELD(arg0, u8 *, 0x5D6) & 0x80)) {
                    func_80034AB0(0x84);
                    M2C_FIELD(D_800B3B38, s16 *, 8) = 0;
                }
                break;
            case 4:                                 /* switch 3 */
                func_80034AB0(0x84);
                var_v0 = 1;
                if (M2C_FIELD(arg0, u8 *, 0x5D6) & 0x80) {
                    M2C_FIELD(D_800B3B38, s16 *, 8) = 0;
                } else {
                    goto block_77;
                }
                break;
            default:                                /* switch 3 */
                func_80034AB0(0x84);
                M2C_FIELD(D_800B3B38, s16 *, 8) = (s16) ((u16) M2C_FIELD(D_800B3B38, s16 *, 8) - 4);
                break;
            }
        } else if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x4000) {
            if (M2C_FIELD(D_800B3B38, s16 *, 8) >= 0) {
                if (M2C_FIELD(D_800B3B38, s16 *, 8) >= 3) {
                    if (M2C_FIELD(D_800B3B38, s16 *, 8) != 3) {

                    } else if (M2C_FIELD(arg0, u8 *, 0x5D6) & 0x80) {
                        func_80034AB0(0x84);
                        M2C_FIELD(D_800B3B38, s16 *, 8) = 7;
                    }
                } else {
                    temp_a0 = M2C_FIELD(arg0, u8 *, 0x5D6);
                    if (temp_a0 & 0x80) {
                        func_80034AB0(0x84);
                        var_v0 = (u16) M2C_FIELD(D_800B3B38, s16 *, 8) + 4;
                        goto block_77;
                    }
                    if (temp_a0 & *(s8 *)(M2C_FIELD(D_800B3B38, s16 *, 8) + D_80078C6F)) {
                        func_80034AB0(0x84);
                        var_v0 = (u16) M2C_FIELD(D_800B3B38, s16 *, 8) + 3;
                        goto block_77;
                    }
                }
            }
        } else if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x8000) {
            switch (M2C_FIELD(D_800B3B38, s16 *, 8)) { /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                break;
            case 3:                                 /* switch 2 */
                if (M2C_FIELD(arg0, u8 *, 0x5D6) & 0x80) {
                    func_80034AB0(0x84);
                    var_v0 = (u16) M2C_FIELD(D_800B3B38, s16 *, 8) - 1;
                    goto block_77;
                }
                break;
            case 4:                                 /* switch 2 */
                if (!(M2C_FIELD(arg0, u8 *, 0x5D6) & 0x80)) {
                    func_80034AB0(0x84);
                    var_v0 = (u16) M2C_FIELD(D_800B3B38, s16 *, 8) - 1;
                    goto block_77;
                }
                break;
            default:                                /* switch 2 */
                func_80034AB0(0x84);
                M2C_FIELD(D_800B3B38, s16 *, 8) = (s16) ((u16) M2C_FIELD(D_800B3B38, s16 *, 8) - 1);
                break;
            }
        } else if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x2000) {
            switch (M2C_FIELD(D_800B3B38, s16 *, 8)) { /* switch 1; irregular */
            case 2:                                 /* switch 1 */
                var_v0_2 = M2C_FIELD(arg0, u8 *, 0x5D6) & 0x80;
block_75:
                if (var_v0_2 != 0) {
block_76:
                    func_80034AB0(0x84);
                    var_v0 = (u16) M2C_FIELD(D_800B3B38, s16 *, 8) + 1;
block_77:
                    M2C_FIELD(D_800B3B38, s16 *, 8) = var_v0;
                }
                break;
            case 3:                                 /* switch 1 */
                if (!(M2C_FIELD(arg0, u8 *, 0x5D6) & 0x80)) {
                    goto block_76;
                }
                break;
            default:                                /* switch 1 */
                var_v0_2 = M2C_FIELD(arg0, u8 *, 0x5D6) & *(s8 *)(M2C_FIELD(D_800B3B38, s16 *, 8) + D_80078C6D);
                goto block_75;
            }
        } else {
        case 7:                                     /* switch 1 */
        }
        if ((*D_8008EDF0) & 0x830) {
            func_80034AB0(0x48);
            M2C_FIELD(arg0, u8 *, 0x5E5) = (u8) M2C_FIELD(D_800B3B38, s16 *, 8);
            if (M2C_FIELD(D_800B3B38, s16 *, 0x2C) == 1) {
                func_800220B8(arg0);
                M2C_FIELD(arg0, s32 *, 0x14) = func_8001F8B0(M2C_FIELD(arg0, u8 *, 0x5E5) + 8, 0);
                func_80012578();
                return;
            }
            M2C_FIELD(D_800B3B38, s16 *, 8) = 0;
block_87:
            func_800A2588(0);
            func_80012508();
        } else {
            if ((*D_8008EDF0) & 0xC0) {
                func_80034AB0(0x5D);
                (*D_800B3B40) = 0;
                func_80012544(7);
                return;
            }
            return;
        }
        break;
    case 1:
        if (func_800220D4(arg0, 1, 1, 1) != 0) {
            (*D_800B3B40) = 0;
            goto block_87;
        }
        break;
    }
}
