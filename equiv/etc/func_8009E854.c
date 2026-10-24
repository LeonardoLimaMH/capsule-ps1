#include "common.h"

void func_8009E854(void *arg0) {
    extern u8 D_8002E2AC[];
    extern u8 D_8008ED68[];
    extern s32 D_8008EDF0[];
    extern u16 D_8008EE48[];
    extern s32 D_8008F7D0[];
    extern u8 D_800B29DC[];
    extern u8 D_800B29E0[];
    extern u8 D_800B29E8[];
    extern u8 D_800B2C0C[];
    extern u8 D_800B3B38[];
    extern u16 D_800B3B40[];
    extern s32 D_800B3C08[];
    extern u16 D_800B3C14[];
    extern int func_800A8CAC();
    M2C_UNK *var_a0_3;
    M2C_UNK var_a2;
    M2C_UNK var_a2_2;
    s16 var_a0_2;
    s32 var_a0;
    s32 var_a1;
    u16 temp_v0;
    u16 temp_v1;

    switch ((*D_8008EE48)) {
    case 1:
        M2C_FIELD(D_8008ED68, s32 *, 0xA24) = 0;
        M2C_FIELD(D_8008ED68, s32 *, 0xA18) = 0;
        func_800220B8(arg0);
        if (M2C_FIELD(D_8008ED68, s32 *, 0xA1C) == 0) {
            var_a1 = 1;
            goto block_7;
        }
        var_a1 = 0xB;
        if (M2C_FIELD(D_8008ED68, s32 *, 0xA1C) == 2) {
            var_a0 = 0x1E;
            var_a1 = 0;
        } else {
block_7:
            var_a0 = M2C_FIELD(arg0, u8 *, 0x5E5) + 8;
        }
block_22:
        M2C_FIELD(arg0, s32 *, 0x14) = func_8001F8B0(var_a0, var_a1);
        func_80012578();
        return;
    case 2:
        if (func_800220D4(arg0, 1, 1, 5) != 0) {
            if (M2C_FIELD(D_8008ED68, s32 *, 0xA1C) == 0) {
                temp_v1 = *((M2C_FIELD(arg0, u8 *, 0x5E5) * 2) + D_800B2C0C);
                var_a0_2 = (s16) temp_v1;
                (*D_800B3B40) = temp_v1;
block_26:
                func_800A2588(var_a0_2);
                (*D_800B3C08) = 0;
                func_80012544(0x10);
                return;
            }
            if (M2C_FIELD(D_8008ED68, s32 *, 0xA1C) == 2) {
                M2C_FIELD(D_8008ED68, s32 *, 0xA1C) = 0;
                M2C_FIELD(arg0, s8 *, 0x5D4) = 0;
                func_80034BD8(-3, 0, D_8008ED68);
                func_80033974((*D_800B3C14));
                func_8001AD74(4);
                func_800125AC(5);
                return;
            }
            M2C_FIELD(D_8008ED68, s32 *, 0xA1C) = 0;
            (*D_800B3B40) = 0;
            func_80012578();
            return;
        }
    default:
        return;
    case 3:
        func_8001F1A8(-0x44, 8, 0, 1, 0, D_800B29E8, 1, 0xA, 2);
        var_a2 = 0;
        if (M2C_FIELD(D_800B3B38, s16 *, 8) == 0) {
            var_a2 = 3;
        }
        func_8001F1A8(-0x34, 0x20, var_a2, 1, 0, D_800B29DC, 1, 2, 2);
        var_a2_2 = 0;
        if (M2C_FIELD(D_800B3B38, s16 *, 8) == 1) {
            var_a2_2 = 3;
        }
        func_8001F1A8(8, 0x20, var_a2_2, 1, 0, D_800B29E0, 1, 3, 2);
        if ((*D_8008EDF0) & 0xA000) {
            func_80034AB0(0x84);
            M2C_FIELD(D_800B3B38, s16 *, 8) = (s16) ((u16) M2C_FIELD(D_800B3B38, s16 *, 8) ^ 1);
            return;
        }
        if ((*D_8008EDF0) & 0x20) {
            func_80034AB0(0x48);
            func_800220B8(arg0);
            var_a0 = M2C_FIELD(arg0, u8 *, 0x5E5) + 8;
            var_a1 = M2C_FIELD(D_800B3B38, s16 *, 8) + 9;
            goto block_22;
        }
        break;
    case 4:
        if (func_800220D4(arg0, 1, 1, 5) != 0) {
            if (M2C_FIELD(D_800B3B38, s16 *, 8) == 0) {
                temp_v0 = *((M2C_FIELD(arg0, u8 *, 0x5E5) * 2) + D_800B2C0C);
                var_a0_2 = (s16) temp_v0;
                M2C_FIELD(D_800B3B38, s16 *, 8) = (s16) temp_v0;
                goto block_26;
            }
            func_80013668();
            func_80034BD8(-3, 0);
            func_80033974((*D_800B3C14));
            var_a0_3 = D_8002E2AC;
block_30:
            func_80012200(var_a0_3);
        }
        break;
    case 5:
        if ((*D_8008F7D0) == 0) {
            func_80013668();
            var_a0_3 = &func_800A8CAC;
            goto block_30;
        }
        break;
    }
}
