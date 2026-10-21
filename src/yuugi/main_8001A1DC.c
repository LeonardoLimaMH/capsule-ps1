#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A1DC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A25C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A270);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A284);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A2AC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A2D4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A2FC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A324);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A34C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A374);

s32 func_8001A39C(s32 arg0) {
    return arg0 & 0xFF;
}

s32 func_8001A3A4(s32 arg0) {
    return arg0 & 0xFF000000;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A3B0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A3D8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A400);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A428);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A434);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A44C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A464);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A480);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A49C);

void func_8001A684(s32 arg0, s32 *arg1, s32 arg2) {
    s32 temp_v1;

    temp_v1 = *arg1;
    if (temp_v1 != 0) {
        *arg1 = temp_v1 + (arg0 - arg2);
        func_8001A6B8();
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A6B8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A704);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A784);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A818);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A8C0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A998);

s32 func_8001AA44(s32 arg0, s32 arg1) {
    s32 var_a2;
    s32 var_v1;

    var_a2 = 1;
    var_v1 = 0;
    if (arg1 > 0) {
        do {
            var_v1 += 1;
            var_a2 *= arg0;
        } while (var_v1 < arg1);
    }
    return var_a2;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001AA70);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001AB74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001ABD4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001AD48);

void func_8001AD74(s32 arg0) {
    func_8001ADF8(0, arg0, 2, 1);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001ADA0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001ADCC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001ADF8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001AFA0);

void func_8001AFDC(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x40) = (u16) (M2C_FIELD(arg0, u16 *, 0x40) + 1);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001AFF0);
