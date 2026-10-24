#include "common.h"

void func_8009F384(void *arg0) {
    extern u8 D_8008ED68[];
    extern u16 D_8008EE48[];
    extern u8 D_800B2970[];
    extern u8 D_800B2978[];
    extern u8 D_800B2980[];
    extern u8 D_800B2988[];
    extern u8 D_800B2B94[];
    extern u8 D_800B2B9C[];
    extern u8 D_800B2BB4[];
    extern u8 D_800B2BE0[];
    extern u8 D_800B3B38[];
    extern s16 D_800B3B40[];
    extern s32 D_800B3C08[];
    M2C_UNK var_a0_2;
    s16 temp_a0_2;
    s16 temp_v0;
    s16 var_a0;
    s16 var_v0_2;
    s16 var_v0_3;
    s32 temp_v0_4;
    s32 var_v0;
    s32 var_v1;
    u8 temp_a0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 var_s2;
    u8 var_s6;
    void *temp_s5;

    temp_s5 = arg0 + 0x5D0;
    var_s2 = M2C_FIELD(temp_s5, u8 *, 6);
    temp_a0 = M2C_FIELD(arg0, u8 *, 0x5D0);
    var_s6 = M2C_FIELD(arg0, u8 *, 6);
    if (temp_a0 == 2) {
        var_s2 |= M2C_FIELD(temp_s5, u8 *, 7);
        var_s6 |= M2C_FIELD(arg0, u8 *, 7);
    }
    if ((temp_a0 != 0) || ((*D_8008EE48) == 0)) {
        func_80020844(-0xA0, 0x30, 0x140, 0x30, 0, 0, 0, 0, 3);
        func_8001F1A8(-0x98, 0x38, 0, 0, 0, D_800B2988, 1, 8, 2);
        func_8001F35C(-0x48, 0x38, 0, 0, 0, M2C_FIELD(D_800B3B38, s16 *, 8) + 1, 2, 2);
        func_8001F1A8(*((M2C_FIELD(D_800B3B38, s16 *, 8) * 2) + D_800B2B9C), 0x3C, 0, 0, 0, *((M2C_FIELD(D_800B3B38, s16 *, 8) * 4) + D_800B2BE0), 1, *((M2C_FIELD(D_800B3B38, s16 *, 8) * 4) + D_800B2BB4), 2);
    }
    if (M2C_FIELD(temp_s5, u8 *, 0) != 0) {
        func_8001F1A8(-0x60, 0x60, 0, 1, 0, D_800B2970, 1, 4, 2);
        func_8001F1A8(-0x10, 0x60, 0, 1, 0, D_800B2978, 1, 3, 2);
        func_8001F1A8(0x30, 0x60, 0, 1, 0, D_800B2980, 1, 3, 2);
        var_v1 = M2C_FIELD(D_8008ED68, s32 *, 0x88);
        var_v0 = var_v1 & 0x2000;
        if (M2C_FIELD(temp_s5, u8 *, 0) == 2) {
            var_v1 |= M2C_FIELD(D_8008ED68, s32 *, 0x98);
            var_v0 = var_v1 & 0x2000;
        }
        if (var_v0 != 0) {
            func_80034AB0(0x84);
            temp_a0_2 = (u16) M2C_FIELD(D_800B3B38, s16 *, 8) + 1;
            M2C_FIELD(D_800B3B38, s16 *, 8) = temp_a0_2;
            if (var_s2 & 0x80) {
                if (var_s6 & 8) {
                    var_a0 = ((u16) M2C_FIELD(D_800B3B38, s16 *, 8) + 1) % 11;
                } else {
                    var_a0 = ((u16) M2C_FIELD(D_800B3B38, s16 *, 8) + 1) % 10;
                }
                goto block_22;
            }
            if (var_s2 & 0x40) {
                var_a0 = ((u16) M2C_FIELD(D_800B3B38, s16 *, 8) + 1) % 9;
                goto block_22;
            }
            if (var_s2 & 0x20) {
                var_v0_2 = temp_a0_2;
                if (temp_a0_2 < 0) {
                    var_v0_2 = temp_a0_2 + 7;
                }
                M2C_FIELD(D_800B3B38, s16 *, 8) = (s16) (temp_a0_2 - ((var_v0_2 >> 3) * 8));
            } else {
                if (var_s2 & 0x10) {
                    var_a0 = ((u16) M2C_FIELD(D_800B3B38, s16 *, 8) + 1) % 7;
                } else {
                    var_a0 = ((u16) M2C_FIELD(D_800B3B38, s16 *, 8) + 1) % 6;
                }
block_22:
                M2C_FIELD(D_800B3B38, s16 *, 8) = var_a0;
            }
            goto block_33;
        }
        if (var_v1 & 0x8000) {
            func_80034AB0(0x84);
            temp_v0 = (u16) M2C_FIELD(D_800B3B38, s16 *, 8) - 1;
            M2C_FIELD(D_800B3B38, s16 *, 8) = temp_v0;
            if (temp_v0 & 0x8000) {
                if (var_s2 & 0x80) {
                    var_v0_3 = 0xA;
                    if (!(var_s6 & 8)) {
                        var_v0_3 = 9;
                    }
                } else {
                    var_v0_3 = 8;
                    if (!(var_s2 & 0x40)) {
                        var_v0_3 = 7;
                        if (!(var_s2 & 0x20)) {
                            var_v0_3 = 6;
                            if (!(var_s2 & 0x10)) {
                                var_v0_3 = 5;
                            }
                        }
                    }
                }
                M2C_FIELD(D_800B3B38, s16 *, 8) = var_v0_3;
block_33:
            }
            func_800A2588((*D_800B3B40));
            return;
        }
        if (var_v1 & 0x20) {
            func_80034AB0(0x48);
            M2C_FIELD(arg0, u8 *, 0x5D9) = (u8) M2C_FIELD(D_800B3B38, s16 *, 8);
            M2C_FIELD(D_800B3B38, s16 *, 8) = 0;
            temp_v0_2 = M2C_FIELD(temp_s5, u8 *, 0);
            switch (temp_v0_2) {                    /* switch 2; irregular */
            case 1:                                 /* switch 2 */
                func_80012508();
                var_a0_2 = 2;
                if (M2C_FIELD(D_800B3B38, s16 *, 0x2C) == 0) {
                    goto block_57;
                }
                break;
            case 2:                                 /* switch 2 */
                M2C_FIELD(D_800B3B38, s16 *, 4) = 0;
                func_80012544(0x14);
                return;
            }
        } else if (var_v1 & 0x40) {
            func_80034AB0(0x5D);
            (*D_800B3B40) = 0;
            func_800A2588(0);
            temp_v0_3 = M2C_FIELD(temp_s5, u8 *, 0);
            switch (temp_v0_3) {                    /* switch 1; irregular */
            case 1:                                 /* switch 1 */
                func_80012544(0xF);
                return;
            case 2:                                 /* switch 1 */
                func_80012544(7);
                return;
            }
        }
    } else {
        switch ((*D_8008EE48)) {                       /* irregular */
        case 0:
            temp_v0_4 = (*D_800B3C08) + 1;
            (*D_800B3C08) = temp_v0_4;
            if (temp_v0_4 >= 0x2D) {
                func_80034AB0(0x48);
                func_80012578();
                return;
            }
            return;
        case 1:
            func_800220B8(arg0);
            M2C_FIELD(arg0, s32 *, 0x14) = func_8001F8B0(M2C_FIELD(arg0, u8 *, 0x5E5) + 8, 7);
            M2C_FIELD(arg0, u8 *, 0x5DA) = (u8) *(M2C_FIELD(arg0, u8 *, 0x5E5) + D_800B2B94);
            func_80012578();
            return;
        case 2:
            if (func_800220D4(arg0, 1, 1, 1) != 0) {
                M2C_FIELD(arg0, u8 *, 0x5D9) = (u8) M2C_FIELD(D_800B3B38, s16 *, 8);
                (*D_800B3C08) = 0;
                M2C_FIELD(D_800B3B38, s16 *, 8) = 0;
                func_80012544(0x12);
                var_a0_2 = 0;
block_57:
                func_800125AC(var_a0_2);
            }
            break;
        }
    }
}
