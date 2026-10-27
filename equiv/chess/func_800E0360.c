#include "common.h"

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
s32 func_800E0360(s32 unused_arg0, s32 unused_arg1, void *arg2) {
    extern u8 D_8008ED68[];
    extern u8 D_80119710[];
    extern int func_800161C4();
    extern int func_800E01D8();
    void *temp_s0;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg2, void **, 0x70);
    if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 2) {
        if ((s32) M2C_FIELD(D_8008ED68, u16 *, 0xEC) < 3) {
            switch (M2C_FIELD(D_8008ED68, u16 *, 0xEC)) { /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                M2C_FIELD(arg2, s8 *, 0x17) = 0x88;
                M2C_FIELD(arg2, s8 *, 0x23) = 1;
                M2C_FIELD(D_8008ED68, void **, 0x9F8) = temp_s1;
                goto block_14;
            case 1:                                 /* switch 1 */
                func_80034AB0(0x78);
                goto block_13;
            default:                                /* switch 1 */
                return 0;
            }
        } else {
            switch (M2C_FIELD(D_8008ED68, u16 *, 0xEC)) { /* irregular */
            case 0x3:
                if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x3C) {
                case 0x63:
                    return 1;
                }
                /* Duplicate return node #18. Try simplifying control flow for better match */
                return 0;
            default:
                return 0;
            }
        }
    } else {
        if (((M2C_FIELD(D_80119710, s32 *, 4) / 6) * 6) == (M2C_FIELD(D_80119710, s32 *, 4) - 1)) {
            temp_s0 = func_80015B3C(&func_800E01D8, &func_800161C4, 1, M2C_FIELD(D_80119710, s32 *, 4) / 6);
            func_80019F30(0x70013, 0x5C);
            func_80015EF8(temp_s0);
            M2C_FIELD(temp_s0, s32 *, 0x18) = func_80019F30(0x60013, 0xE);
            M2C_FIELD(temp_s0, u16 *, 0x46) = (u16) M2C_FIELD(temp_s1, u16 *, 0x46);
            M2C_FIELD(temp_s0, s16 *, 0x4A) = (s16) (M2C_FIELD(temp_s1, u16 *, 0x4A) - ((s32) (M2C_FIELD(D_8008ED68, u32 *, 0x10C) + ((u32) M2C_FIELD(D_8008ED68, u32 *, 0x10C) >> 0x1F)) >> 1));
            M2C_FIELD(temp_s0, u16 *, 0x4E) = (u16) M2C_FIELD(temp_s1, u16 *, 0x4E);
            M2C_FIELD(temp_s0, u16 *, 0x46) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x46) - 0x19 + func_800202A4(0x33));
            M2C_FIELD(temp_s0, s16 *, 0x44) = func_800202A4(0x10000);
        }
        if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x3C) {
block_13:
block_14:
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
            M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
        }
        return 0;
    }
}
