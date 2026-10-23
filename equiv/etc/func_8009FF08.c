#include "common.h"

void func_8009FF08(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern s32 D_8008F788[];
    extern M2C_UNK D_800B2970[];
    extern M2C_UNK D_800B2978[];
    extern M2C_UNK D_800B2980[];
    extern M2C_UNK D_800B29FC[];
    extern M2C_UNK D_800B2A20[];
    extern M2C_UNK D_800B2A40[];
    extern M2C_UNK D_800B2A4C[];
    extern M2C_UNK D_800B2A70[];
    extern M2C_UNK D_800B2A90[];
    extern M2C_UNK D_800B2AA8[];
    extern M2C_UNK D_800B3B38[];
    extern M2C_UNK D_800B3B88[];
    extern u8 D_800B3B89[];
    M2C_UNK *var_s0;
    M2C_UNK *var_s1;
    s32 temp_v1_2;
    s32 var_s2;
    u8 *temp_v1;
    u8 temp_s2;

    temp_s2 = M2C_FIELD(arg0, u8 *, 0x5CB);
    if (temp_s2 != 4) {
        func_8002E714();
        return;
    }
    switch (M2C_FIELD((*D_8008ED68), u16 *, 0xE0)) {  /* irregular */
    case 0:
        func_80020844(-0x80, -0x48, 0x100, 0xA0, 0, 0, 0, 0, 5);
        func_8001F1A8(-0x7C, -0x3C, 0, 1, 0, (*D_800B29FC), 1, 0x11, (s32) temp_s2);
        func_8001F1A8(-0x6E, -0x2E, 0, 1, 0, (*D_800B2A20), 1, 0x10, (s32) temp_s2);
        func_8001F1A8(-0x6E, -0x20, 0, 1, 0, (*D_800B2A40), 1, 6, (s32) temp_s2);
        func_8001F1A8(-0x7C, -0xC, 0, 1, 0, (*D_800B2A4C), 1, 0x11, (s32) temp_s2);
        func_8001F1A8(-0x6E, 2, 0, 1, 0, (*D_800B2A70), 1, 0x10, (s32) temp_s2);
        func_8001F1A8(-0x6E, 0x10, 0, 1, 0, (*D_800B2A90), 1, 0xC, (s32) temp_s2);
        func_8001F1A8(-0x6E, 0x28, 1, 1, 0, (*D_800B2AA8), 1, 0xF, (s32) temp_s2);
        func_8001F1A8(-0x60, 0x60, 0, 1, 0, (*D_800B2970), 1, (s32) temp_s2, 2);
        func_8001F1A8(-0x10, 0x60, 0, 1, 0, (*D_800B2978), 1, 3, 2);
        func_8001F1A8(0x30, 0x60, 0, 1, 0, (*D_800B2980), 1, 3, 2);
        var_s2 = 0;
        var_s0 = (*D_800B3B38);
        var_s1 = (*D_8008ED68);
        do {
            if ((M2C_FIELD(var_s0, s16 *, 8) == 0) && (M2C_FIELD(var_s1, s32 *, 0x88) & 0xF000)) {
                func_80034AB0(0x84);
                temp_v1 = var_s2 + (*D_800B3B88);
                *temp_v1 ^= 1;
            } else {
                temp_v1_2 = M2C_FIELD(var_s1, s32 *, 0x88);
                if (temp_v1_2 & 0x20) {
                    if (M2C_FIELD(var_s0, s16 *, 8) == 0) {
                        func_80034AB0(0x48);
                        M2C_FIELD(var_s0, s16 *, 8) = 1;
                    }
                } else if (temp_v1_2 & 0x40) {
                    func_80034AB0(0x5D);
                    if (M2C_FIELD(var_s0, s16 *, 8) != 0) {
                        M2C_FIELD(var_s0, s16 *, 8) = 0;
                    } else {
                        M2C_FIELD((*D_800B3B38), s16 *, 0xA) = 0;
                        M2C_FIELD((*D_800B3B38), s16 *, 8) = 0;
                        M2C_FIELD((*D_800B3B88), u8 *, 1) = 0U;
                        M2C_FIELD((*D_800B3B88), u8 *, 0) = 0U;
                        func_8001D850();
                        func_80012544(6);
                    }
                }
            }
            var_s0 += 2;
            var_s2 += 1;
            var_s1 += 0x10;
        } while (var_s2 < 2);
        if ((M2C_FIELD((*D_800B3B38), s16 *, 8) != 0) && (M2C_FIELD((*D_800B3B38), s16 *, 0xA) != 0)) {
            M2C_FIELD((*D_800B3B38), s16 *, 0xA) = 0;
            M2C_FIELD((*D_800B3B38), s16 *, 8) = 0;
            if (M2C_FIELD((*D_800B3B88), u8 *, 0) == 0) {
                (*D_8008F788) = 3;
block_29:
                func_8002E708();
                M2C_FIELD(arg0, u8 *, 0x5CB) = 0U;
                func_80012578();
                return;
            }
            if (M2C_FIELD((*D_800B3B88), u8 *, 1) == 0) {
                (*D_8008F788) = 4;
                func_8002E708();
                M2C_FIELD(arg0, u8 *, 0x5CB) = 0U;
                func_800125AC(2);
                return;
            }
block_33:
            func_80012544(7);
        } else {
            return;
        }
        break;
    case 1:
        if (M2C_FIELD((*D_8008ED68), s32 *, 0xA20) == 0) {
            if ((*D_800B3B89) == 0) {
                M2C_FIELD((*D_8008ED68), s32 *, 0xA20) = (s32) temp_s2;
                goto block_29;
            }
block_32:
            M2C_FIELD((*D_8008ED68), s32 *, 0xA20) = 0;
            goto block_33;
        }
block_31:
        M2C_FIELD((*D_8008ED68), s32 *, 0xA20) = 0;
        M2C_FIELD((*D_800B3B88), u8 *, 1) = 0U;
        M2C_FIELD((*D_800B3B88), u8 *, 0) = 0U;
        func_800125AC(0);
        return;
    case 2:
        if (M2C_FIELD((*D_8008ED68), s32 *, 0xA20) != 0) {
            goto block_31;
        }
        goto block_32;
    }
}
