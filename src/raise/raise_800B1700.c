#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B1700);

#include "common.h"

s32 func_800B1940(void) {
    extern s32 D_800EEB88[];
    extern s16 D_80103D38[];
    s32 var_v0;

    if ((*D_800EEB88) == 0) {
        (*D_800EEB88) = 8;
        func_800CD288((*D_80103D38), 0);
        func_800C60E0((*D_80103D38), 0);
        func_800C62A4((*D_80103D38), 0);
        func_800C5EFC((*D_80103D38), 0);
        var_v0 = 1;
        if ((*D_80103D38) == 1) {
            func_800E20A8();
            func_800CD418(0, 1);
            return 1;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_v0;
    }
    (*D_800EEB88) -= 1;
    var_v0 = 0;
    return var_v0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B19E0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B1B3C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B1DEC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B1E7C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B1EBC);

void func_800B2094(void) {

}

void func_800B209C(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B20A4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B21F0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B24B8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B284C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B2984);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B2C64);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B2EA4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B3008);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B3204);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B34FC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B3824);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B3C38);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B3D44);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B3E44);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B3F54);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B4064);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B418C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B4390);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B44B8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B4588);
