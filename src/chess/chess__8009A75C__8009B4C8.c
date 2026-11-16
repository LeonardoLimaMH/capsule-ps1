#include "ghidra.h"
#include "matching.h"
#include "common.h"

typedef struct {
    u8 unk_00[0x54];
    s32 unk_54;
    s32 unk_58;
} ChessUnk69E4C;

void func_8009B4C8(void *arg) {
    register void *arg0 asm("s1") = arg;
    struct BoardData34 {
        u8 *unk_00;
        u8 *unk_04;
        u8 unk_08[8];
        u16 unk_10[18];
    };
    extern struct BoardData34 D_801010B0[];
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
    *(s32 *)((M2C_FIELD(arg0, u8 *, 0x5D9) * 0x34) + (u32)D_801010B0) = D_80118820;
    D_801010B0[M2C_FIELD(arg0, u8 *, 0x5D9)].unk_04 = D_80118B78;
    temp_v0 = func_80019F30(temp_s0, 0) + 0x3C4;
    M2C_FIELD(D_80118B48, s32 *, 0) = temp_v0;
    temp_v0_2 = temp_v0 + (D_801010B0[M2C_FIELD(arg0, u8 *, 0x5D9)].unk_10[8] * 8);
    M2C_FIELD(D_80118B48, s32 *, 4) = temp_v0_2;
    temp_v0_3 = temp_v0_2 + (D_801010B0[M2C_FIELD(arg0, u8 *, 0x5D9)].unk_10[9] * 8);
    M2C_FIELD(D_80118B48, s32 *, 8) = temp_v0_3;
    temp_v0_4 = temp_v0_3 + (D_801010B0[M2C_FIELD(arg0, u8 *, 0x5D9)].unk_10[10] * 0xC);
    M2C_FIELD(D_80118B48, s32 *, 0xC) = temp_v0_4;
    temp_v0_5 = temp_v0_4 + (D_801010B0[M2C_FIELD(arg0, u8 *, 0x5D9)].unk_10[11] * 0xC);
    M2C_FIELD(D_80118B48, s32 *, 0x10) = temp_v0_5;
    temp_v0_6 = temp_v0_5 + (D_801010B0[M2C_FIELD(arg0, u8 *, 0x5D9)].unk_10[0] * 8);
    M2C_FIELD(D_80118B48, s32 *, 0x14) = temp_v0_6;
    temp_v0_7 = temp_v0_6 + (D_801010B0[M2C_FIELD(arg0, u8 *, 0x5D9)].unk_10[1] * 8);
    M2C_FIELD(D_80118B48, s32 *, 0x18) = temp_v0_7;
    temp_v0_8 = temp_v0_7 + (D_801010B0[M2C_FIELD(arg0, u8 *, 0x5D9)].unk_10[2] * 0xC);
    M2C_FIELD(D_80118B48, s32 *, 0x1C) = temp_v0_8;
    temp_v0_9 = temp_v0_8 + (D_801010B0[M2C_FIELD(arg0, u8 *, 0x5D9)].unk_10[3] * 0xC);
    M2C_FIELD(D_80118B48, s32 *, 0x20) = temp_v0_9;
    temp_v0_10 = temp_v0_9 + (D_801010B0[M2C_FIELD(arg0, u8 *, 0x5D9)].unk_10[4] * 8);
    M2C_FIELD(D_80118B48, s32 *, 0x24) = temp_v0_10;
    M2C_FIELD(D_80118B48, s32 *, 0x28) = (s32) (temp_v0_10 + (D_801010B0[M2C_FIELD(arg0, u8 *, 0x5D9)].unk_10[5] * 8));
}
