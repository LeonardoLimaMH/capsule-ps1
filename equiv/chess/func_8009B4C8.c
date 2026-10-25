#include "common.h"

void func_8009B4C8(void *arg0) {
    extern u8 D_801010B0[];
    extern u8 D_80118820[];
    extern u8 D_80118AC8[];
    extern u8 D_80118B48[];
    extern u8 D_80118B78[];
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;

    temp_s0 = func_800CA474() | 0x100000;
    func_8001AA70(D_80118820, func_80019F30(temp_s0, 0) + 0x120, 0x2A4);
    func_8001AA70(D_80118AC8, func_80019F30(temp_s0, 0) + 0xA0, 0x80);
    func_8001A998(D_80118B78, 0x9C);
    M2C_FIELD(D_80118B78, s32 *, 0x3C) = 1;
    if (M2C_FIELD(arg0, u8 *, 0x5D9) == 0) {
        M2C_FIELD(D_80118B78, s32 *, 0) = -1;
    }
    *(s32 *)((M2C_FIELD(arg0, u8 *, 0x5D9) * 0x34) + D_801010B0) = D_80118820;
    M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x5D9) * 0x34) + D_801010B0), u8 **, 4) = D_80118B78;
    temp_v0 = func_80019F30(temp_s0, 0) + 0x3C4;
    M2C_FIELD(D_80118B48, s32 *, 0) = temp_v0;
    temp_v0_2 = temp_v0 + (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x5D9) * 0x34) + D_801010B0), u16 *, 0x20) * 8);
    M2C_FIELD(D_80118B48, s32 *, 4) = temp_v0_2;
    temp_v0_3 = temp_v0_2 + (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x5D9) * 0x34) + D_801010B0), u16 *, 0x22) * 8);
    M2C_FIELD(D_80118B48, s32 *, 8) = temp_v0_3;
    temp_v0_4 = temp_v0_3 + (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x5D9) * 0x34) + D_801010B0), u16 *, 0x24) * 0xC);
    M2C_FIELD(D_80118B48, s32 *, 0xC) = temp_v0_4;
    temp_v0_5 = temp_v0_4 + (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x5D9) * 0x34) + D_801010B0), u16 *, 0x26) * 0xC);
    M2C_FIELD(D_80118B48, s32 *, 0x10) = temp_v0_5;
    temp_v0_6 = temp_v0_5 + (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x5D9) * 0x34) + D_801010B0), u16 *, 0x10) * 8);
    M2C_FIELD(D_80118B48, s32 *, 0x14) = temp_v0_6;
    temp_v0_7 = temp_v0_6 + (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x5D9) * 0x34) + D_801010B0), u16 *, 0x12) * 8);
    M2C_FIELD(D_80118B48, s32 *, 0x18) = temp_v0_7;
    temp_v0_8 = temp_v0_7 + (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x5D9) * 0x34) + D_801010B0), u16 *, 0x14) * 0xC);
    M2C_FIELD(D_80118B48, s32 *, 0x1C) = temp_v0_8;
    temp_v0_9 = temp_v0_8 + (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x5D9) * 0x34) + D_801010B0), u16 *, 0x16) * 0xC);
    M2C_FIELD(D_80118B48, s32 *, 0x20) = temp_v0_9;
    temp_v0_10 = temp_v0_9 + (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x5D9) * 0x34) + D_801010B0), u16 *, 0x18) * 8);
    M2C_FIELD(D_80118B48, s32 *, 0x24) = temp_v0_10;
    M2C_FIELD(D_80118B48, s32 *, 0x28) = (s32) (temp_v0_10 + (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x5D9) * 0x34) + D_801010B0), u16 *, 0x1A) * 8));
}
