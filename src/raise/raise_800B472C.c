#include "common.h"

#include "common.h"

extern u16 D_8006AF80[];
extern u8 D_800EEB9C[];

void func_800B472C(void) {
    M2C_GFIELD(D_800EEB9C, s32, 0x10) = 1;
    M2C_GFIELD(D_800EEB9C, s32, 0xC) = 0;
    M2C_GFIELD(D_800EEB9C, s32, 0x14) = 0;
    M2C_GFIELD(D_800EEB9C, s32, 0x18) = 0;
    M2C_GFIELD(D_800EEB9C, s32, 0x24) = 4;
    M2C_GFIELD(D_800EEB9C, s32, 0xD0) = 0;
    if ((*D_8006AF80) == 0xFFFF) {
        (*D_8006AF80) = 0;
        M2C_GFIELD(D_800EEB9C, s32, 0x73C) = 0;
    }
    func_8001E388(D_800EEB9C);
}

void func_800B4790(void) {
    extern u8 D_800EE5D0[];
    extern s32 D_800EEBBC[];
    func_800B6D98(1, -0xB8, 0x18, 9, 0, D_800EE5D0, (*D_800EEBBC), 1, 0, 0, 2, 1);
}

#include "common.h"

typedef struct {
    u8 pad[0x44];
    s32 value;
} Entry_800EEB9C;

s32 func_800B47F0(s32 i) {
    extern u8 D_800EE5D0[];
    extern u8 D_800EEB9C[];
    return func_800B6D98(1, -0xB8, 0x18, 8, 0, D_800EE5D0, ((Entry_800EEB9C *)(D_800EEB9C + i * 4))->value, 1, 0, 0, 2, 1);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C", func_800B4860);
