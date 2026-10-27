#include "common.h"

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
s32 func_800E69A8(s32 unused_arg0, s32 unused_arg1, void *arg2, void *arg3) {
    extern u8 D_8008ED68[];
    extern u8 D_80119710[];
    extern s32 D_80119714[];
    s16 temp_s4;
    s16 temp_s5;
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    void *temp_s2;

    temp_s2 = M2C_FIELD(arg3, void **, 0x70);
    if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 2) {
        if ((s32) M2C_FIELD(D_8008ED68, u16 *, 0xEC) < 3) {
            switch (M2C_FIELD(D_8008ED68, u16 *, 0xEC)) { /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                M2C_FIELD(arg2, s8 *, 0x17) = 0x88;
                M2C_FIELD(arg2, s8 *, 0x23) = 1;
                M2C_FIELD(arg3, s32 *, 0x18) = (s32) (M2C_FIELD(arg3, s32 *, 0x18) | 0x40000000);
                M2C_FIELD(D_8008ED68, u16 *, 0x9EC) = (u16) M2C_FIELD(temp_s2, u16 *, 0x46);
                M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
                (*D_80119714) = 0;
                M2C_FIELD(D_8008ED68, u16 *, 0x9EE) = (u16) M2C_FIELD(temp_s2, u16 *, 0x4A);
                goto block_22;
            case 1:                                 /* switch 1 */
                if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x14) {
                    func_80034AB0(0x8006);
                    M2C_FIELD(D_80119710, s32 *, 4) = 0;
                    goto block_19;
                }
                /* Duplicate return node #23. Try simplifying control flow for better match */
                return 0;
            default:                                /* switch 1 */
                return 0;
            }
        } else {
            switch (M2C_FIELD(D_8008ED68, u16 *, 0xEC)) { /* irregular */
            case 0x3:
                if ((*D_80119714) >= 0x1E) {
                case 0x63:
                    return 1;
                }
                /* Duplicate return node #23. Try simplifying control flow for better match */
                return 0;
            default:
                return 0;
            }
        }
    } else {
        temp_lo = (s32) (M2C_FIELD(D_80119710, s32 *, 4) << 0xD) / 90;
        temp_s4 = (s16) M2C_FIELD(D_8008ED68, u16 *, 0x9EC);
        temp_s5 = (s16) M2C_FIELD(D_8008ED68, u16 *, 0x9EE);
        temp_s3 = temp_lo + ((M2C_FIELD(D_80119710, s32 *, 4) % 2) << 0xB);
        var_v0 = rsin((s32) ((s32) (M2C_FIELD(D_80119710, s32 *, 4) << 0xC) / 90) / 2, temp_lo) * 0xC;
        if (var_v0 < 0) {
            var_v0 += 0xFFF;
        }
        temp_s0 = var_v0 >> 0xC;
        var_v0_2 = temp_s0 * rcos(temp_s3);
        if (var_v0_2 < 0) {
            var_v0_2 += 0xFFF;
        }
        M2C_FIELD(temp_s2, u16 *, 0x46) = (u16) (temp_s4 + (var_v0_2 >> 0xC));
        var_v0_3 = temp_s0 * rsin(temp_s3);
        if (var_v0_3 < 0) {
            var_v0_3 += 0xFFF;
        }
        M2C_FIELD(temp_s2, u16 *, 0x4A) = (u16) (temp_s5 + (var_v0_3 >> 0xC));
        func_800DDB38(temp_s2, 0x14, 0x60);
        if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x5A) {
            M2C_FIELD(arg3, s32 *, 0x18) = (s32) (M2C_FIELD(arg3, s32 *, 0x18) ^ 0x40000000);
            func_800FBB90(0x1E);
            func_80034AB0(4);
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
block_19:
            M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
block_22:
        }
        return 0;
    }
}
