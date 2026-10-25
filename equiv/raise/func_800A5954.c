#include "common.h"

s32 func_800A5954(void) {
    extern u8 D_8008ED68[];
    extern s32 D_800ED8D8[];
    extern s16 D_800EEA78[];
    extern s16 D_800EEA7A[];
    extern s16 D_800EEA7C[];
    extern s16 D_800EEA7E[];
    extern u8 D_800EFF58[];
    extern u8 D_800F0568[];
    extern u8 D_80103EE4[];
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;

    func_800D1598(D_80103EE4);
    if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x20) {
        func_80034AB0(0x48);
        if (M2C_FIELD(D_800EFF58, s32 *, 0x440) == 0x11) {
            if (M2C_FIELD(D_800EFF58, s32 *, 0x444) != 3) {
                if ((M2C_FIELD(D_800EFF58, s32 *, 0x444) < 4) && (M2C_FIELD(D_800EFF58, s32 *, 0x444) >= 0)) {
                    M2C_FIELD(D_800EFF58, s32 *, 0x43C) = (s32) M2C_FIELD(D_800EFF58, s32 *, 0x444);
                    goto block_42;
                }
                func_800BD66C(2, D_800EFF58, M2C_FIELD(D_800EFF58, s32 *, 0x440));
                (*D_800ED8D8) = 0x3C;
                return -1;
            }
            M2C_FIELD((M2C_FIELD(D_800EFF58, s32 *, 0x428) + D_800EFF58), s8 *, 0x434) = 0;
            *((M2C_FIELD(D_800EFF58, s32 *, 0x428) * 2) + D_800F0568) = 0;
            if (M2C_FIELD(D_800EFF58, s32 *, 0x428) != 7) {
                M2C_FIELD(D_800EFF58, s32 *, 0x428) = (s32) (M2C_FIELD(D_800EFF58, s32 *, 0x428) + 1);
                goto block_42;
            }
            goto block_10;
        }
        M2C_FIELD((M2C_FIELD(D_800EFF58, s32 *, 0x428) + D_800EFF58), u8 *, 0x434) = (u8) *((M2C_FIELD(D_800EFF58, s32 *, 0x444) * 0x11) + ((M2C_FIELD(D_800EFF58, s32 *, 0x43C) * 0x77) + D_800EFF58 + 0x448) + M2C_FIELD(D_800EFF58, s32 *, 0x440));
        *((M2C_FIELD(D_800EFF58, s32 *, 0x428) * 2) + D_800F0568) = 0;
        if (M2C_FIELD(D_800EFF58, s32 *, 0x428) == 7) {
block_10:
            M2C_FIELD(D_800EFF58, s32 *, 0x428) = 8;
            func_800BD66C(2, D_800EFF58, M2C_FIELD(D_800EFF58, s32 *, 0x440));
            (*D_800ED8D8) = 0x3C;
            return -1;
        }
        M2C_FIELD(D_800EFF58, s32 *, 0x428) = (s32) (M2C_FIELD(D_800EFF58, s32 *, 0x428) + 1);
        goto block_42;
    }
    if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x40) {
        func_80034AB0(0x5D);
        *((M2C_FIELD(D_800EFF58, s32 *, 0x428) * 2) + D_800F0568) = 0xA6;
        temp_v0 = M2C_FIELD(D_800EFF58, s32 *, 0x428) - 1;
        if (M2C_FIELD(D_800EFF58, s32 *, 0x428) > 0) {
            M2C_FIELD(D_800EFF58, s32 *, 0x428) = temp_v0;
            M2C_FIELD((temp_v0 + D_800EFF58), s8 *, 0x434) = 0;
            *((M2C_FIELD(D_800EFF58, s32 *, 0x428) * 2) + D_800F0568) = 0xA6;
        }
    } else {
        if (!(M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x8000)) {
            if ((M2C_FIELD(D_8008ED68, s32 *, 0xB0) != 0) && (temp_v0_2 = M2C_FIELD((((*D_800EEA78) * 4) + D_8008ED68), s32 *, 0xA4), (temp_v0_2 != 7))) {
                if ((temp_v0_2 & 7) == 7) {
                    goto block_20;
                }
            }
        } else {
block_20:
            func_800A5CF8(2, 0);
            func_800A548C(0);
            func_800A5CF8(1, 0);
        }
        if (!(M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x2000)) {
            if ((M2C_FIELD(D_8008ED68, s32 *, 0xA8) != 0) && (temp_v0_3 = M2C_FIELD((((*D_800EEA7A) * 4) + D_8008ED68), s32 *, 0xA4), (temp_v0_3 != 7))) {
                if ((temp_v0_3 & 7) == 7) {
                    goto block_27;
                }
            }
        } else {
block_27:
            func_800A5CF8(2, 0);
            func_800A548C(1);
            func_800A5CF8(1, 0);
        }
        if (!(M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x1000)) {
            if ((M2C_FIELD(D_8008ED68, s32 *, 0xA4) != 0) && (temp_v0_4 = M2C_FIELD((((*D_800EEA7C) * 4) + D_8008ED68), s32 *, 0xA4), (temp_v0_4 != 7))) {
                if ((temp_v0_4 & 7) == 7) {
                    goto block_34;
                }
            }
        } else {
block_34:
            func_800A5CF8(2, 0);
            func_800A548C(2);
            func_800A5CF8(1, 0);
        }
        if (!(M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x4000)) {
            if ((M2C_FIELD(D_8008ED68, s32 *, 0xAC) != 0) && (temp_v0_5 = M2C_FIELD((((*D_800EEA7E) * 4) + D_8008ED68), s32 *, 0xA4), (temp_v0_5 != 7))) {
                if ((temp_v0_5 & 7) == 7) {
                    goto block_41;
                }
            }
        } else {
block_41:
            func_800A5CF8(2, 0);
            func_800A548C(3);
            func_800A5CF8(1, 0);
block_42:
        }
    }
    return 0;
}
