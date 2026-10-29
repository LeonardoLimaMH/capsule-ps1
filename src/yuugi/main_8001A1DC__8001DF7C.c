#include "common.h"
#include "yuugi.h"

void *func_8001DF7C(s32 arg0, s8 *arg1, s32 arg2) {
    s32 var_s0;
    s32 var_v0;
    s8 *var_s2;
    u32 var_s1;

    var_s2 = arg1;
    var_s1 = 0xF0000000;
    var_s0 = 0x1C;
    var_v0 = 8 - arg2;
    if ((var_v0 != 0) && (arg2 != 0)) {
        do {
            var_s1 = var_s1 >> 4;
            var_v0 -= 1;
            var_s0 -= 4;
        } while (var_v0 != 0);
    }
    if (var_s0 != 0) {
loop_4:
        if ((arg2 == 0) && !(arg0 & var_s1)) {
            var_s0 -= 4;
            var_s1 = var_s1 >> 4;
            if (var_s0 != 0) {
                goto loop_4;
            }
        }
        if (var_s0 != 0) {
            do {
                *var_s2 = func_8001E160((u32) (arg0 & var_s1) >> var_s0);
                var_s2 += 1;
                var_s0 -= 4;
                var_s1 = var_s1 >> 4;
            } while (var_s0 != 0);
        }
    }
    *var_s2 = func_8001E160(arg0 & var_s1);
    return var_s2 + 1;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E044);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E160);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E180);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E1E4);

#include "ghidra.h"
void func_8001E208(undefined4 param_1)

{
  func_8001A998(param_1,0x18);
  return;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E228);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E284);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E2BC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E310);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E388);

s32 func_8001E404(void) {
    extern s32 D_8008F6F8[];
    return (*D_8008F6F8);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E414);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E4A4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001EA24);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001EC74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001EEC4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001F160);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001F1A8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001F35C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001F524);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001F7A4);
