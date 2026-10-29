#include "common.h"
#include "yuugi.h"

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001AA44", func_8001AA70);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001AA44", func_8001AB74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001AA44", func_8001ABD4);

void func_8001AD48(s32 arg0)
{
  int new_var2;
  int new_var;
 if (arg0 || new_var2) { new_var = 1; new_var2 = 2; } else { new_var = 1; new_var2 = 2; } do { func_8001ADF8(new_var, arg0, new_var2, new_var); } while (0);
}

void func_8001AD74(s32 arg0) {
    func_8001ADF8(0, arg0, 2, 1);
}

void func_8001ADA0(s32 arg0) {
    {
        register s32 matching_a0 __asm__("$4") = (3);
        register s32 matching_a1 __asm__("$5") = (arg0);
        register s32 matching_a2 __asm__("$6") = 1;
        __asm__ volatile("" : "=r"(matching_a0), "=r"(matching_a1), "=r"(matching_a2)
        : "0"(matching_a0), "1"(matching_a1), "2"(matching_a2));
        func_8001ADF8(matching_a0, matching_a1, matching_a2, matching_a2);
    }
}

void func_8001ADCC(s32 arg0) {
    {
        register s32 matching_a0 __asm__("$4") = (2);
        register s32 matching_a1 __asm__("$5") = (arg0);
        register s32 matching_a2 __asm__("$6") = 1;
        __asm__ volatile("" : "=r"(matching_a0), "=r"(matching_a1), "=r"(matching_a2)
        : "0"(matching_a0), "1"(matching_a1), "2"(matching_a2));
        func_8001ADF8(matching_a0, matching_a1, matching_a2, matching_a2);
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001AA44", func_8001ADF8);

#include "common.h"

extern s32 (*D_80063664[])(u8 *);

s32 func_8001AFA0(u8 *obj) {
    return D_80063664[*(u16 *)(obj + 0x40)](obj);
}

void func_8001AFDC(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x40) = (u16) (M2C_FIELD(arg0, u16 *, 0x40) + 1);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001AA44", func_8001AFF0);
