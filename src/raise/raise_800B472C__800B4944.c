#include "common.h"

#include "common.h"

extern u16 D_8006AF80[];
extern u8 D_800EEB9C[];

typedef struct {
    u8 pad[0x44];
    s32 value;
} Entry_800EEB9C;

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C__800B4944", func_800B4944);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C__800B4944", func_800B4AAC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C__800B4944", func_800B4C40);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C__800B4944", func_800B4D60);

#include "common.h"

void func_800B4E08(s32 arg0, s16 arg1) {
    extern u8 D_800EE5D0[];
    extern u8 D_800EEB9C[];
    extern u8 D_80100F38[];
    void *temp_s0;

    temp_s0 = (arg0 * 0x79C) + D_80100F38;
    M2C_FIELD(temp_s0, s32 *, 0x194) = func_800B6D98(1, 0x104, 0x48, arg1, 0, D_800EE5D0, M2C_GFIELD(D_800EEB9C, s32, 0x780) + M2C_FIELD(temp_s0, s16 *, 0x356), 0, 1, 0, 2, 1);
    M2C_FIELD(temp_s0, s32 *, 0x198) = func_800B6D98(1, 0x104, 0x5A, arg1, 0, D_800EE5D0, M2C_GFIELD(D_800EEB9C, s32, 0x780) + M2C_FIELD(temp_s0, s16 *, 0x358), 0, 1, 0, 2, 1);
    M2C_FIELD(temp_s0, s32 *, 0x19C) = func_800B6D98(1, 0x104, 0x6C, arg1, 0, D_800EE5D0, M2C_GFIELD(D_800EEB9C, s32, 0x780) + M2C_FIELD(temp_s0, s16 *, 0x35A), 0, 1, 0, 2, 1);
    M2C_FIELD(temp_s0, s32 *, 0x1A0) = func_800B6D98(1, 0x104, 0x7E, arg1, 0, D_800EE5D0, M2C_GFIELD(D_800EEB9C, s32, 0x780) + M2C_FIELD(temp_s0, s16 *, 0x35C), 0, 1, 0, 2, 1);
    M2C_FIELD(temp_s0, s32 *, 0x1A4) = func_800B6D98(1, 0x104, 0x90, arg1, 0, D_800EE5D0, M2C_GFIELD(D_800EEB9C, s32, 0x780) + M2C_FIELD(temp_s0, s16 *, 0x35E), 0, 1, 0, 2, 1);
    M2C_FIELD(temp_s0, s32 *, 0x1A8) = func_800B6D98(1, 0x104, 0xA2, arg1, 0, D_800EE5D0, M2C_GFIELD(D_800EEB9C, s32, 0x780) + M2C_FIELD(temp_s0, s16 *, 0x360), 0, 1, 0, 2, 1);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C__800B4944", func_800B5034);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C__800B4944", func_800B53D4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C__800B4944", func_800B55B8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C__800B4944", func_800B5A78);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C__800B4944", func_800B5BA0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C__800B4944", func_800B5CF4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C__800B4944", func_800B5DE8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C__800B4944", func_800B5F44);
