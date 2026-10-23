#include "common.h"

void func_8009DB30(s32 arg0) {
    extern M2C_UNK D_8002E2AC[];
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_800B2758[];
    extern M2C_UNK D_800B294C[];
    extern M2C_UNK D_800B2958[];
    extern M2C_UNK D_800B3B38[];
    extern u16 D_800B3C14[];
    M2C_UNK *var_v1;
    M2C_UNK var_a2;
    M2C_UNK var_a2_2;
    s32 temp_a0;
    s32 temp_v1;
    s32 var_v0;
    void *temp_s1;

    temp_s1 = arg0 + 0x5D0;
    func_8001F1A8(-0x80, 0x50, 0, 1, 0, (M2C_FIELD((*D_800B3B38), s16 *, 8) * 0x24) + (*D_800B2758), 1, 0x12, 3);
    if (M2C_FIELD((*D_800B3B38), s16 *, 0) != 0) {
        var_a2 = 0;
        if (M2C_FIELD((*D_800B3B38), s16 *, 0xC) == 0) {
            var_a2 = 3;
        }
        func_8001F1A8(-0x20, -0x18, var_a2, 1, 0, (*D_800B294C), 1, 5, 3);
        var_a2_2 = 0;
        if (M2C_FIELD((*D_800B3B38), s16 *, 0xC) == 1) {
            var_a2_2 = 3;
        }
        func_8001F1A8(-0x20, 0, var_a2_2, 1, 0, (*D_800B2958), 1, 5, 3);
        if (M2C_FIELD((*D_800B3B38), s16 *, 0) == 0) {
            goto block_6;
        }
        if (!(M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x5000)) {
            if (M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0x5000) {
                goto block_31;
            }
        } else {
block_31:
            func_80034AB0(0x84);
            M2C_FIELD((*D_800B3B38), s16 *, 0xC) = (s16) ((u16) M2C_FIELD((*D_800B3B38), s16 *, 0xC) ^ 1);
        }
        goto block_33;
    }
block_6:
    if (!(M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0xF000)) {
        if (M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0xF000) {
            goto block_8;
        }
        goto block_32;
    }
block_8:
    if (M2C_FIELD((*D_800B3B38), s16 *, 8) != 1) {
        if (M2C_FIELD((*D_800B3B38), s16 *, 8) < 2) {
            if (M2C_FIELD((*D_800B3B38), s16 *, 8) != 0) {
                var_v1 = (*D_8008ED68);
            } else {
                if (!(M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0xC000)) {
                    if (!(M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0xC000)) {
                        var_v0 = M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0x6000;
                        if (!(M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x6000)) {
                            goto block_21;
                        }
                        goto block_22;
                    }
                    goto block_28;
                }
                goto block_28;
                goto block_33;
            }
        } else if (M2C_FIELD((*D_800B3B38), s16 *, 8) != 2) {
            var_v1 = (*D_8008ED68);
        } else {
            if (!(M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x1000)) {
                if (M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0x1000) {
                    goto block_25;
                }
                if (!(M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x8000)) {
                    if (M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0x8000) {
                        goto block_28;
                    }
                } else {
block_28:
                    func_80034AB0(0x84, (*D_8008ED68));
                    M2C_FIELD((*D_800B3B38), s16 *, 8) = 1;
                }
            } else {
                goto block_25;
            }
            goto block_33;
        }
    } else {
        if (!(M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x1000)) {
            if (!(M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0x1000)) {
                var_v0 = M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0x2000;
                if (!(M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x2000)) {
block_21:
                    if (var_v0 != 0) {
                        goto block_22;
                    }
                } else {
block_22:
                    func_80034AB0(0x84, (*D_8008ED68));
                    M2C_FIELD((*D_800B3B38), s16 *, 8) = 2;
                }
            } else {
                goto block_25;
            }
        } else {
block_25:
            func_80034AB0(0x84, (*D_8008ED68));
            M2C_FIELD((*D_800B3B38), s16 *, 8) = 0;
block_32:
        }
block_33:
        var_v1 = (*D_8008ED68);
    }
    temp_a0 = M2C_FIELD(var_v1, s32 *, 0x88);
    if (!(temp_a0 & 0x830)) {
        temp_v1 = M2C_FIELD(var_v1, s32 *, 0x98);
        if (temp_v1 & 0x830) {
            goto block_36;
        }
        if (!(temp_a0 & 0xC0)) {
            if (temp_v1 & 0xC0) {
                goto block_59;
            }
        } else {
block_59:
            func_80034AB0(0x5D);
            if (M2C_FIELD((*D_800B3B38), s16 *, 0) == 0) {
                func_80013668();
                func_80034BD8(-3, 0);
                func_80033974((*D_800B3C14));
                func_80012200((*D_8002E2AC));
                return;
            }
            M2C_FIELD((*D_800B3B38), s16 *, 0) = 0;
        }
    } else {
block_36:
        if (M2C_FIELD((*D_800B3B38), s16 *, 0) == 0) {
            func_80034AB0(0x48);
            switch (M2C_FIELD((*D_800B3B38), s16 *, 8)) { /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                M2C_FIELD(temp_s1, s8 *, 0) = 0;
                M2C_FIELD(temp_s1, s8 *, 0x11) = 1;
                if ((u8) M2C_FIELD(temp_s1, u8 *, 6) >= 2U) {
                    M2C_FIELD((*D_800B3B38), s16 *, 0xC) = 1;
                } else {
                    M2C_FIELD((*D_800B3B38), s16 *, 0xC) = 0;
                }
                M2C_FIELD((*D_800B3B38), s16 *, 0) = 1;
                return;
            case 1:                                 /* switch 1 */
                M2C_FIELD(temp_s1, s8 *, 0) = (s8) M2C_FIELD((*D_800B3B38), s16 *, 8);
                M2C_FIELD(temp_s1, s8 *, 0x11) = (s8) M2C_FIELD((*D_800B3B38), s16 *, 8);
                goto block_55;
            case 2:                                 /* switch 1 */
                M2C_FIELD(temp_s1, s8 *, 0) = (s8) M2C_FIELD((*D_800B3B38), s16 *, 8);
                M2C_FIELD(temp_s1, s8 *, 0x11) = 0;
                M2C_FIELD(temp_s1, u8 *, 0x15) = 0xFFU;
                M2C_FIELD((*D_800B3B38), s16 *, 0) = 0;
                M2C_FIELD((*D_800B3B38), s16 *, 0xC) = 0;
                M2C_FIELD((*D_800B3B38), s16 *, 8) = 0;
                func_8001D748(1);
                func_80012544(0x13);
                return;
            }
        } else {
            M2C_FIELD(temp_s1, u8 *, 1) = (u8) M2C_FIELD((*D_800B3B38), s16 *, 0xC);
            switch (M2C_FIELD((*D_800B3B38), s16 *, 0xC)) { /* irregular */
            case 0:
                func_80034AB0(0x48);
                M2C_FIELD(temp_s1, u8 *, 0x15) = 0U;
                M2C_FIELD(temp_s1, u8 *, 4) = 0U;
block_55:
                M2C_FIELD((*D_800B3B38), s16 *, 0) = 0;
                M2C_FIELD((*D_800B3B38), s16 *, 0xC) = 0;
                M2C_FIELD((*D_800B3B38), s16 *, 8) = 0;
                func_80012508();
                return;
            case 1:
                if ((u8) M2C_FIELD(temp_s1, u8 *, 6) >= 2U) {
                    func_80034AB0(0x48);
                    M2C_FIELD(temp_s1, u8 *, 0x15) = (u8) M2C_FIELD(temp_s1, u8 *, 4);
                    goto block_55;
                }
                func_80034AB0(0x4C);
                return;
            }
        }
    }
}
