#include "common.h"

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
void func_800E9294(s32 arg0, void *arg1, s32 unused_arg2, void *arg3) {
    extern u8 D_80018600[];
    extern u8 D_8008ED68[];
    extern u8 D_8008F754[];
    extern u8 D_80119710[];
    extern s32 D_80119714[];
    extern int func_800AADE0();
    M2C_UNK var_a1;
    M2C_UNK var_s2;
    s32 temp_a1;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_v1;
    s32 var_v0;
    u8 temp_s4;
    u8 temp_s5;
    void *temp_s0;
    void *temp_s2;
    void *temp_s3;
    void *temp_v0;

    temp_s2 = M2C_FIELD(arg3, void **, 0x70);
    temp_s3 = M2C_FIELD(D_8008F754, void **, 0xC);
    switch (M2C_FIELD(D_8008F754, u16 *, -0x900)) { /* switch 1 */
    case 3:                                         /* switch 1 */
        temp_v1 = M2C_FIELD(D_80119710, s32 *, 4);
        if (temp_v1 == 1) {
            func_80034AB0(0x2C);
        }
        M2C_FIELD(temp_s3, u16 *, 0x4A) = (u16) (M2C_FIELD(temp_s2, u16 *, 0x4A) + ((s32) (temp_v1 * 0x64) / 20));
        if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x14) {
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
block_36:
            M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
            return;
        }
    default:                                        /* switch 1 */
        return;
    case 4:                                         /* switch 1 */
        var_a1 = 0;
        switch (M2C_FIELD(D_8008F754, s16 *, 0)) { /* switch 2 */
        case 0:                                     /* switch 2 */
            var_a1 = 0x3B;
            break;
        case 1:                                     /* switch 2 */
            var_a1 = 0x3C;
            break;
        case 2:                                     /* switch 2 */
            var_a1 = 0x3E;
            break;
        case 3:                                     /* switch 2 */
        case 4:                                     /* switch 2 */
        case 5:                                     /* switch 2 */
        case 6:                                     /* switch 2 */
        case 7:                                     /* switch 2 */
            var_a1 = 0x3F;
            break;
        }
        func_80015CD0(temp_s3 + 0x14, func_80019F30(0x7015B, var_a1), 1);
        func_80034AB0(0x85);
        (*D_80119714) = 0;
        M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
        return;
    case 5:                                         /* switch 1 */
        temp_s5 = M2C_FIELD(arg1, u8 *, 0x5FA);
        temp_s4 = M2C_FIELD((arg1 + temp_s5), u8 *, 0x5FB);
        var_s2 = 0;
        switch (M2C_FIELD(D_8008F754, s16 *, 0)) { /* switch 3 */
        case 1:                                     /* switch 3 */
            var_s2 = 0x3D;
            break;
        case 0:                                     /* switch 3 */
        case 2:                                     /* switch 3 */
            var_s2 = 0;
            break;
        case 3:                                     /* switch 3 */
            var_s2 = 0x40;
            break;
        case 4:                                     /* switch 3 */
            var_s2 = 0x45;
            break;
        case 5:                                     /* switch 3 */
            var_s2 = 0x46;
            break;
        case 6:                                     /* switch 3 */
            var_s2 = 0x47;
            break;
        case 7:                                     /* switch 3 */
            var_s2 = 0x48;
            break;
        }
        temp_v0 = func_80015B3C(D_80018600, &func_800AADE0, 1);
        M2C_FIELD(D_8008F754, void **, 0x10) = temp_v0;
        func_80015EF8(temp_v0);
        func_80015CD0(temp_v0 + 0x14, func_80019F30(0x7015B, var_s2), 1);
        func_800A81D8(arg0, temp_v0, temp_s5, temp_s4);
        M2C_FIELD(temp_v0, u16 *, 0x46) = (u16) M2C_FIELD(temp_s3, u16 *, 0x46);
        M2C_FIELD(temp_v0, s16 *, 0x4A) = (s16) (M2C_FIELD(temp_s3, u16 *, 0x4A) - 0x6E);
        temp_s0 = D_8008F754 - 0x9EC;
        M2C_FIELD(temp_v0, s16 *, 0x52) = 0;
        M2C_FIELD(temp_v0, s16 *, 0x50) = 0;
        M2C_FIELD(temp_v0, s16 *, 0x4E) = (s16) (M2C_FIELD(temp_s3, u16 *, 0x4E) - 2);
        (*D_80119714) = 0;
        M2C_FIELD(temp_s0, u16 *, 0xEC) = (u16) (M2C_FIELD(temp_s0, u16 *, 0xEC) + 1);
        return;
    case 6:                                         /* switch 1 */
        temp_lo = (s32) (M2C_FIELD(D_80119710, s32 *, 4) << 0xD) / 60;
        M2C_FIELD(M2C_FIELD(D_8008F754, void **, 0x10), s16 *, 0x4A) = (s16) ((M2C_FIELD(temp_s3, u16 *, 0x4A) - 0x6E) - ((s32) (M2C_FIELD(D_80119710, s32 *, 4) * 0x3C) / 60));
        temp_lo_2 = (s32) (M2C_FIELD(temp_s3, s16 *, 0x50) * M2C_FIELD(D_80119710, s32 *, 4)) / 60;
        M2C_FIELD(M2C_FIELD(D_8008F754, void **, 0x10), s16 *, 0x54) = (s16) temp_lo;
        temp_a1 = M2C_FIELD(D_80119710, s32 *, 4) < 0x3C;
        M2C_FIELD(M2C_FIELD(D_8008F754, void **, 0x10), s16 *, 0x52) = (s16) temp_lo_2;
        M2C_FIELD(M2C_FIELD(D_8008F754, void **, 0x10), s16 *, 0x50) = (s16) temp_lo_2;
        if (temp_a1 == 0) {
            M2C_FIELD(M2C_FIELD(D_8008F754, void **, 0x10), s32 *, 0x34) = (s32) ((M2C_FIELD(M2C_FIELD(D_8008F754, void **, 0x10), s32 *, 0x34) & ~0x7F) | 1);
            func_80034AB0(4, temp_a1, temp_lo);
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
            goto block_36;
        }
        break;
    case 7:                                         /* switch 1 */
        if (M2C_FIELD(D_80119710, s32 *, 4) == 6) {
            M2C_FIELD(M2C_FIELD(D_8008F754, void **, 0x10), s32 *, 0x34) = (s32) (M2C_FIELD(M2C_FIELD(D_8008F754, void **, 0x10), s32 *, 0x34) & ~0x7F);
        }
        var_v0 = M2C_FIELD(D_80119710, s32 *, 4) < 0x1E;
block_34:
        if (var_v0 == 0) {
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
            goto block_36;
        }
        break;
    case 8:                                         /* switch 1 */
        if ((*D_80119714) < 0x10) {
            M2C_FIELD(M2C_FIELD(D_8008F754, void **, 0x10), s16 *, 0x52) = (s16) ((s32) (M2C_FIELD(temp_s3, s16 *, 0x50) * (0x12 - (*D_80119714))) / 18);
        } else {
            M2C_FIELD(M2C_FIELD(D_8008F754, void **, 0x10), s16 *, 0x50) = (s16) ((s32) (M2C_FIELD(temp_s3, s16 *, 0x52) * (0x20 - (*D_80119714))) / 16);
        }
        if (M2C_FIELD(D_80119710, s32 *, 4) >= (0x10 * 2)) {
            func_80013928(M2C_FIELD(D_8008F754, void **, 0x10), 0x12, 0x10);
            func_800E8994(arg0, arg1, arg3);
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
            goto block_36;
        }
        break;
    case 9:                                         /* switch 1 */
        M2C_FIELD(temp_s3, u16 *, 0x4A) = (u16) (M2C_FIELD(temp_s3, u16 *, 0x4A) - 0x10);
        var_v0 = M2C_FIELD(D_80119710, s32 *, 4) < 0xC;
        goto block_34;
    case 10:                                        /* switch 1 */
        if ((M2C_FIELD(D_80119710, s32 *, 4) >= 0x1E) && ((M2C_FIELD(D_8008F754, s16 *, 0) != 3) || (M2C_FIELD(arg1, u8 *, 0x720) != 0))) {
            M2C_FIELD(arg1, s8 *, 0x70D) = 1;
            M2C_FIELD(D_8008F754, u16 *, -0x900) = 0x63U;
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
        }
        break;
    }
}
