#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918__80023964", func_80023964);

#include "common.h"

extern void func_8001F8D8();

s32 func_80023A90(void) {
    func_80013668();
    return func_80012200(func_8001F8D8);
}

#include "common.h"

void func_80023ABC(void)
{
  extern M2C_UNK D_80069A5C[];
  extern s32 D_80078C04;
  s8 *new_var;
  new_var = (s8 *) ((D_80078C04 * 0x18) + ((u8 *) D_80069A5C));
  func_800121B4(*((s32 *) (new_var + 4)));
  func_800121C4();
}

void func_80023B04(void) {

}

typedef struct {
    s16 x;
    s16 y;
    s32 unk4;
    u8 unk8[0x10];
} Entry_80023B0C;

extern void func_8001DBF4(s32, s32, s32, s32, void *, void *);
extern u8 D_80078C08[];
void func_80023B0C(s32 arg0, s32 arg1, s32 arg2, Entry_80023B0C *arg3) {
    if (arg0 != 0) {
        if (arg0 < 0) return;
        if (arg0 >= 3) return;
        goto single;
    }
    if (arg0 < arg1) {
        s32 i = 0;
        do {
            func_8001DBF4(arg3[i].x, arg3[i].y, 0, i == arg2, D_80078C08, arg3[i].unk8);
            i++;
        } while (i < arg1);
    }
    return;

single:
    {
        Entry_80023B0C *p = arg3 + arg2;
        func_8001DBF4(p->x, p->y, 0, arg0 == 1, D_80078C08, p->unk8);
    }
}

void func_80023C00(s32 mode, s32 a1, s32 a2) {
    extern u8 D_80069E4C[];
    extern s32 D_80069B28[];

    if (mode == 1) {
        goto case_1;
    }
    if (mode < 2) {
        goto set_b28;
    }
    if (mode == 2) {
        goto case_2;
    }
    *D_80069B28 = mode;
    goto end;

case_1:
    {
        u8 *p = D_80069E4C;
        *(s32 *)(p + 0x64) = a1;
        *(s32 *)(p + 0x68) = *(s32 *)(p + 0x60);
    }
    goto set_b28;

case_2:
    {
        u8 *p = D_80069E4C;
        *(s32 *)(p + 0x64) = a1;
        *(s32 *)(p + 0x68) = a2;
        *(s32 *)(p + 0x60) = a1;
    }

set_b28:
    *D_80069B28 = mode;

end:
    {
        u8 *p = D_80069E4C;
        *(s32 *)(p + 0x6C) = 0;
        *(s32 *)(p + 0x70) = 0x40;
    }
}

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
