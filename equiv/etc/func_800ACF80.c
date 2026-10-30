#include "common.h"

void func_800ACF80(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE44[];
    extern u16 D_8008EE48[];
    extern M2C_UNK D_800B25B8[];
    extern u8 D_800B3D20[];
    extern u8 D_800B3D24[];
    extern u8 D_800B3D25[];
    extern u16 D_800B3D26[];
    extern u16 D_800B3D28[];
    extern u16 D_800B3D2A[];
    extern u16 D_800B3D2C[];
    extern M2C_UNK D_800B3D38[];
    extern s32 D_800B3D50[];
    extern s32 D_800B3D54[];
    s16 temp_v0;
    s16 var_v0_2;
    s16 var_v0_4;
    s32 temp_t0;
    s32 temp_t1;
    s32 var_v0;
    u16 temp_a0;
    u16 temp_a2;
    u16 var_v0_3;

    temp_t0 = M2C_FIELD(arg0, s32 *, 0x80);
    temp_t1 = M2C_FIELD(arg0, s32 *, 0x7C);
    if (temp_t0 == 5) {
        if (((*D_8008EE44) != 6) || (((*D_800B3D24) != temp_t1) && ((*D_800B3D25) != 1))) {
            if ((u16) (*D_8008EE44) < 7U) {
                var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
                goto block_9;
            }
        } else {
            goto block_8;
        }
    } else {
        if (M2C_FIELD(((temp_t0 * 0x7C) + (temp_t1 * 0x2E8) + (u8 *)D_80085428), u8 *, 0x613) == 1) {
            var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
        } else {
block_8:
            var_v0 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
        }
block_9:
        M2C_FIELD(arg0, s32 *, 0x38) = var_v0;
    }
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xDC)) {  /* irregular */
    case 5:
        if ((M2C_FIELD(D_8008ED68, u16 *, 0xE0) == 4) && ((*D_800B3D20) == 0)) {
            var_v0_2 = 2;
            if (temp_t1 == 0) {
                var_v0_2 = -2;
            }
            M2C_FIELD(arg0, s16 *, 0x6A) = var_v0_2;
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 8);
            return;
        }
        if ((*D_8008EE48) == 1) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~8);
            return;
        }
        return;
    case 6:
        if (M2C_FIELD(D_8008ED68, u16 *, 0xE0) == 0) {
            if ((*D_800B3D20) == 0) {
                if (temp_t1 == 0) {
                    M2C_FIELD(arg0, s16 *, 0x6A) = 2;
                    var_v0_3 = ((M2C_FIELD(arg0, s32 *, 0x80) % 3) * 0x30) - 0x11A;
                } else {
                    M2C_FIELD(arg0, s16 *, 0x6A) = -2;
                    var_v0_3 = ((M2C_FIELD(arg0, s32 *, 0x80) % 3) * 0x30) + 0xBA;
                }
                M2C_FIELD(arg0, u16 *, 0x46) = var_v0_3;
                M2C_FIELD(arg0, u16 *, 0x4A) = -0x30U;
                if (((M2C_FIELD(arg0, s32 *, 0x80) / 3) != (temp_t0 >> 0x1F)) && (M2C_FIELD(arg0, u16 *, 0x4A) = 8U, ((*D_800B3D24) != temp_t1))) {
                    if ((*D_800B3D25) != 1) {
                        M2C_FIELD(arg0, u16 *, 0x46) = (u16) (M2C_FIELD(arg0, u16 *, 0x46) + 0x18);
                    }
                }
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 8);
                M2C_FIELD(arg0, u16 *, 0x4A) = (u16) (M2C_FIELD(arg0, u16 *, 0x4A) + *(u16 *)((M2C_FIELD(((temp_t0 * 0x7C) + (temp_t1 * 0x2E8) + (u8 *)D_80085428), u8 *, 0x5E8) * 2) + (u8 *)D_800B25B8));
                return;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~8);
            if (temp_t1 != (*D_800B3D24)) {
                if (*(u8 *)((temp_t1 * 6) + (u8 *)D_800B3D38 + temp_t0) == 0) {
                    var_v0_4 = (u16) M2C_FIELD(arg0, s16 *, 0x50) - 0x40;
                    if (M2C_FIELD(arg0, s16 *, 0x50) > 0) {
                        goto block_33;
                    }
                    goto block_35;
                }
                goto block_36;
            }
block_35:
block_36:
            switch ((*D_8008EE48)) {                   /* switch 1; irregular */
            case 3:                                 /* switch 1 */
                if (temp_t1 == 0) {
                    if (temp_t0 == (*D_800B3D50)) {
                        temp_a0 = M2C_FIELD(arg0, u16 *, 0x4A);
                        (*D_800B3D26) = M2C_FIELD(arg0, u16 *, 0x46);
                        (*D_800B3D2A) = temp_a0;
                        (*D_800B3D2A) = temp_a0 - *(u16 *)((M2C_FIELD(((temp_t0 * 0x7C) + (u8 *)D_80085428), u8 *, 0x5E8) * 2) + (u8 *)D_800B25B8);
                        return;
                    }
                } else if (temp_t0 == (*D_800B3D54)) {
                    temp_a2 = M2C_FIELD(arg0, u16 *, 0x4A);
                    (*D_800B3D28) = M2C_FIELD(arg0, u16 *, 0x46);
                    (*D_800B3D2C) = temp_a2;
                    (*D_800B3D2C) = temp_a2 - *(u16 *)((M2C_FIELD(((temp_t0 * 0x7C) + (temp_t1 * 0x2E8) + (u8 *)D_80085428), u8 *, 0x5E8) * 2) + (u8 *)D_800B25B8);
                    return;
                }
                break;
            case 4:                                 /* switch 1 */
                if ((*D_800B3D20) == 0) {
                    if (temp_t1 == 0) {
                        if (temp_t0 != (*D_800B3D50)) {
                            return;
                        }
                        goto block_48;
                    }
                    if (temp_t0 == (*D_800B3D54)) {
block_48:
                        var_v0_4 = (u16) M2C_FIELD(arg0, s16 *, 0x50) - 0x40;
block_33:
                        M2C_FIELD(arg0, s16 *, 0x50) = var_v0_4;
                        if ((var_v0_4 << 0x10) <= 0) {
                            M2C_FIELD(arg0, s16 *, 0x50) = 0;
                        }
                        goto block_61;
                    }
                } else if ((*D_800B3D20) == 1) {
                    if (temp_t1 == 0) {
                        if (temp_t0 == (*D_800B3D50)) {
                            M2C_FIELD(arg0, u16 *, 0x46) = (u16) (*D_800B3D28);
                            M2C_FIELD(arg0, u16 *, 0x4A) = (u16) (*D_800B3D2C);
                            M2C_FIELD(arg0, u16 *, 0x4A) = (u16) ((*D_800B3D2C) + *(u16 *)((M2C_FIELD(((temp_t0 * 0x7C) + (u8 *)D_80085428), u8 *, 0x5E8) * 2) + (u8 *)D_800B25B8));
                            return;
                        }
                    } else if (temp_t0 == (*D_800B3D54)) {
                        M2C_FIELD(arg0, u16 *, 0x46) = (u16) (*D_800B3D26);
                        M2C_FIELD(arg0, u16 *, 0x4A) = (u16) (*D_800B3D2A);
                        M2C_FIELD(arg0, u16 *, 0x4A) = (u16) ((*D_800B3D2A) + *(u16 *)((M2C_FIELD(((temp_t0 * 0x7C) + (temp_t1 * 0x2E8) + (u8 *)D_80085428), u8 *, 0x5E8) * 2) + (u8 *)D_800B25B8));
                        return;
                    }
                } else {
                    if (temp_t1 == 0) {
                        if (temp_t0 != (*D_800B3D50)) {
                            return;
                        }
                        goto block_59;
                    }
                    if (temp_t0 == (*D_800B3D54)) {
block_59:
                        temp_v0 = (u16) M2C_FIELD(arg0, s16 *, 0x50) + 0x40;
                        M2C_FIELD(arg0, s16 *, 0x50) = temp_v0;
                        if (temp_v0 >= 0x1000) {
                            M2C_FIELD(arg0, s16 *, 0x50) = 0x1000;
                        }
block_61:
                        M2C_FIELD(arg0, u16 *, 0x52) = (u16) M2C_FIELD(arg0, s16 *, 0x50);
                    }
                }
                break;
            }
        }
        break;
    }
}
