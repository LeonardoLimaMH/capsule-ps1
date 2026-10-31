#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918__80023964", func_80023964);

#include "common.h"

extern void func_8001F8D8();

s32 func_80023A90(void) {
    func_80013668();
    return func_80012200(func_8001F8D8);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918__80023964", func_80023ABC);

void func_80023B04(void) {

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918__80023964", func_80023B0C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918__80023964", func_80023C00);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918__80023964", func_80023C74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918__80023964", func_80023ECC);

#include "common.h"

void func_80023F68(void) {
    extern M2C_UNK D_80069AD4[];
    extern M2C_UNK D_80069E4C[];
    s32 temp_a0;

    if (M2C_GFIELD(D_80069E4C, s32, 0x6C) == 0) {
        M2C_GFIELD(D_80069E4C, s32, 0x6C) = 1;
        M2C_GFIELD(D_80069E4C, s32, 0x70) = 0x40;
        return;
    }
    temp_a0 = M2C_GFIELD(D_80069E4C, s32, 0x70) - 1;
    M2C_GFIELD(D_80069E4C, s32, 0x70) = temp_a0;
    M2C_GFIELD(D_80069AD4, s32, 0xE0) = (s32) (M2C_GFIELD(D_80069AD4, s32, 0xE0) + ((s32) (M2C_GFIELD(D_80069E4C, s32, 0x68) - M2C_GFIELD(D_80069E4C, s32, 0x64)) >> 6));
    if (temp_a0 == 0) {
        M2C_GFIELD(D_80069E4C, s32, 0x6C) = 0;
        M2C_GFIELD(D_80069AD4, s32, 0xE0) = (s32) M2C_GFIELD(D_80069E4C, s32, 0x68);
        M2C_GFIELD(D_80069AD4, s32, 0x54) = 0;
    }
}

void func_80023FD8(void) {

}

void func_80023FE0(void) {

}

#include "common.h"

extern u8 D_80069E4C[];

s32 func_80023FE8(void) {
    M2C_GFIELD(D_80069E4C, s32, 0x60) = -0x800;
    M2C_GFIELD(D_80069E4C, s32, 0x64) = -0x800;
    M2C_GFIELD(D_80069E4C, s32, 0x68) = 0x1000;
    M2C_GFIELD(D_80069E4C, s32, 0x54) = 0;
    M2C_GFIELD(D_80069E4C, s32, 0x58) = 0;
    M2C_GFIELD(D_80069E4C, s32, 0x5C) = 0;
    M2C_GFIELD(D_80069E4C, s32, 0x6C) = 0;
    M2C_GFIELD(D_80069E4C, s32, 0x70) = 0;
    M2C_GFIELD(D_80069E4C, s32, 0x74) = 3;
    return (s32)D_80069E4C;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918__80023964", func_80024024);
