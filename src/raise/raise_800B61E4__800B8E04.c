#include "common.h"

void func_800B8E04(void) {
    func_800A9A74();
}

s32 func_800B8E24(void) {
    return 1;
}

s32 func_800B8E2C(void) {
    return 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B8E34);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B8EF0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B8FAC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B91C8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B9284);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B9334);

void func_800B94B4(void) {
    func_800A8E48();
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B94D4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B95AC);

#include "common.h"

s32 func_800B9610(void) {
    extern u16 D_8006AF80[];
    extern s16 D_800EFA4A[];
    extern s16 D_800EFA4C[];
    s32 temp_s0;
    s32 var_s1;

    var_s1 = 1;
    (*D_800EFA4A) = 0;
    (*D_800EFA4C) = 0;
    do {
        temp_s0 = func_800B1260(var_s1) & 0xFFFF;
        if (temp_s0 != 0xFFFF) {
            func_800B4860(var_s1, temp_s0);
            func_800B4AAC(temp_s0);
        }
        var_s1 -= 1;
    } while (var_s1 >= 0);
    func_800B6FA0();
    if (func_800D1548() != 0) {
        func_800D1CC4((*D_8006AF80), 0xA, 0, 0);
    }
    func_800ABF7C(1);
    return 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B96C0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B980C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B98AC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B9914);
