#include "common.h"

s16 func_800A8CD0(s16 arg0, s32 arg1) {
    extern s16 D_800F2D20[];
    extern s32 D_800F2D24[];
    extern s16 D_800F2D28[];

    *D_800F2D24 = func_800202A4(100);
    *D_800F2D20 = 0;
    if (arg0 > 0) {
        do {
            *D_800F2D28 = func_800A8DB8(*D_800F2D20, arg1);
            if (*D_800F2D28 >= *D_800F2D24) {
                return *D_800F2D20;
            }
            (*D_800F2D20)++;
        } while (*D_800F2D20 < arg0);
    }
    *D_800F2D20 = arg0 - 1;
    return *D_800F2D20;
}

s16 func_800A8DB8(s16 arg0, u16 *arg1) {
    s32 sum;
    s16 i;
    s32 t;

    sum = 0;
    i = 0;
    if (arg0 > 0) {
        do {
            sum += arg1[i];
            i++;
        } while (i < arg0);
    }
    t = sum - 1;
    return arg1[i] + t;
}

s32 func_800A8E1C(u16 arg0) {
    if (arg0 == 1 || arg0 == 5 || arg0 == 3) {
        return 3;
    }
    return 2;
}

void func_800A8E48(void) {
    func_800B7FA8(0);
    func_800B7ED8(1);
    func_800B7F40(0);
}

void func_800A8E78(u32 *arg0) {
    u32 a = arg0[0x34 / 4];
    u32 b = arg0[0x38 / 4];
    arg0[0x38 / 4] = b | 1;
    arg0[0x34 / 4] = (a & ~0x100) | ((~(a >> 8) & 1) << 8);
}

#include "common.h"

void func_800A8EAC(void) {
    extern s32 D_80069BB4[];
    extern s32 D_80069EAC[];
    (*D_80069EAC) = (*D_80069BB4);
    func_80023C00(1, -0x800, (*D_80069BB4));
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC__800A8CD0", func_800A8EE0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC__800A8CD0", func_800A8FF0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC__800A8CD0", func_800A91A0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC__800A8CD0", func_800A9490);

void func_800A95AC(void) {

}

void func_800A95B4(void) {

}

void func_800A95BC(void) {

}

void func_800A95C4(void) {

}

void func_800A95CC(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC__800A8CD0", func_800A95D4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC__800A8CD0", func_800A9658);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC__800A8CD0", func_800A967C);
