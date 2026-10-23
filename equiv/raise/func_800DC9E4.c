#include "common.h"

void func_800DC9E4(s32 arg0, s32 arg1) {
    extern s32 D_8006AF84[];
    extern M2C_UNK D_8006AFCC[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_80105990[];
    M2C_UNK var_a2;
    s32 temp_a0;
    s32 temp_a1;

    temp_a1 = arg1 & 0xFFFF;
    switch (temp_a1) {
    case 15:
        M2C_FIELD((*D_8006AFCC), s16 *, 0x30) = 1;
        M2C_FIELD((*D_8006AFCC), s32 *, 0x48) = (s32) (*D_8006AF84);
        M2C_FIELD((*D_80105990), s16 *, 0) = 0;
        func_800E4724(temp_a1, (*D_8006AF84));
        func_80034AB0(1);
        var_a2 = 4;
block_13:
        temp_a0 = arg0 & 0xFFFF;
        func_800B0740(temp_a0, M2C_FIELD(((temp_a0 * 0x1A8) + (*D_80091618)), u16 *, 0x8A), var_a2, 1);
        break;
    case 33:
        M2C_FIELD((*D_8006AFCC), s16 *, 0x30) = 1;
        M2C_FIELD((*D_8006AFCC), s32 *, 0x48) = (s32) (*D_8006AF84);
        M2C_FIELD((*D_80105990), s16 *, 0) = 1;
        func_800E4724(temp_a1, (*D_8006AF84));
        var_a2 = 4;
        goto block_13;
    case 17:
        M2C_FIELD((*D_8006AFCC), s16 *, 0x32) = 1;
        M2C_FIELD((*D_8006AFCC), s32 *, 0x4C) = (s32) (*D_8006AF84);
        func_8009D2A8(temp_a1, (*D_8006AF84));
        var_a2 = 5;
        goto block_13;
    case 18:
        M2C_FIELD((*D_8006AFCC), s16 *, 0x30) = 2;
        M2C_FIELD((*D_80105990), s16 *, 0xA) = 0;
        M2C_FIELD((*D_8006AFCC), s16 *, 0x34) = 1;
        M2C_FIELD((*D_8006AFCC), s32 *, 0x50) = (s32) (*D_8006AF84);
        M2C_FIELD((*D_80105990), s16 *, 0) = 2;
        func_800E4724((s32) (*D_80105990), 2, (*D_8006AF84));
        func_80034AB0(0x1F);
        var_a2 = 6;
        goto block_13;
    case 19:
        M2C_FIELD((*D_8006AFCC), s16 *, 0x36) = 1;
        M2C_FIELD((*D_8006AFCC), s32 *, 0x54) = (s32) (*D_8006AF84);
        func_80034AB0(0x8001, temp_a1, (*D_8006AF84));
        func_80024990(M2C_FIELD((((arg0 & 0xFFFF) * 0x1A8) + (*D_80091618)), s32 *, 0x18C), 2, 4, 0xF);
        var_a2 = 7;
        goto block_13;
    case 20:
        M2C_FIELD((*D_8006AFCC), s16 *, 0x38) = 1;
        M2C_FIELD((*D_8006AFCC), s32 *, 0x58) = (s32) (*D_8006AF84);
        func_80034AB0(0x8002, temp_a1, (*D_8006AF84));
        func_80024990(M2C_FIELD((((arg0 & 0xFFFF) * 0x1A8) + (*D_80091618)), s32 *, 0x18C), 2, 3, 0xE);
        var_a2 = 8;
        goto block_13;
    case 21:
        M2C_FIELD((*D_8006AFCC), s16 *, 0x3A) = 1;
        M2C_FIELD((*D_8006AFCC), s32 *, 0x5C) = (s32) (*D_8006AF84);
        func_8009D21C(temp_a1, (*D_8006AF84));
        var_a2 = 9;
        goto block_13;
    case 22:
        M2C_FIELD((*D_8006AFCC), s16 *, 0x3C) = 1;
        M2C_FIELD((*D_8006AFCC), s32 *, 0x60) = (s32) (*D_8006AF84);
        func_8009CDE4(temp_a1, (*D_8006AF84));
        var_a2 = 0xA;
        goto block_13;
    case 23:
        M2C_FIELD((*D_8006AFCC), s16 *, 0x3E) = 1;
        M2C_FIELD((*D_8006AFCC), s32 *, 0x64) = (s32) (*D_8006AF84);
        func_8009C4D4(temp_a1, (*D_8006AF84));
        var_a2 = 0xB;
        goto block_13;
    case 24:
        M2C_FIELD((*D_8006AFCC), s16 *, 0x40) = 1;
        M2C_FIELD((*D_8006AFCC), s32 *, 0x68) = (s32) (*D_8006AF84);
        func_8009CCEC(temp_a1, (*D_8006AF84));
        var_a2 = 0xC;
        goto block_13;
    case 25:
        M2C_FIELD((*D_8006AFCC), s16 *, 0x42) = 1;
        M2C_FIELD((*D_8006AFCC), s32 *, 0x6C) = (s32) (*D_8006AF84);
        func_8009CA78(temp_a1, (*D_8006AF84));
        var_a2 = 0xD;
        goto block_13;
    }
}
