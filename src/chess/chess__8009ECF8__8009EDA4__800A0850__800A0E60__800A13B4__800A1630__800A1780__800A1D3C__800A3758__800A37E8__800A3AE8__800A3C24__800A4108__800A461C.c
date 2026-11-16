#include "ghidra.h"
#include "matching.h"
#include "common.h"

void func_800A461C(void *arg0) {
    extern u8 D_801010B0[];
    s32 var_a0;
    s32 var_a2;
    s32 var_v1;
    void *var_v0;

    var_a2 = 0;
    var_a0 = M2C_FIELD(D_801010B0, s32 *, M2C_FIELD(arg0, u8 *, 0x5D9) * 0x34);
    do {
        var_v1 = 0xC;
        var_v0 = var_a0 + 0x30;
loop_2:
        M2C_FIELD(var_v0, s8 *, 3) = 0;
        var_v1 -= 1;
        var_v0 -= 4;
        if (var_v1 >= 0) {
            goto loop_2;
        }
        /* Keep the ascending signed counter instead of a reversed countdown. */
        __asm__ volatile("" : "=r"(var_a2) : "0"(var_a2));
        var_a2 += 1;
        var_a0 += 0x34;
    } while (var_a2 < 0xD);
}

undefined4 func_800A4678(undefined4 param_1)

{
    extern int func_800CBBB4();
  undefined4 uVar1;

  uVar1 = func_80015B3C(param_1,func_800CBBB4,3);
  func_8001602C(uVar1);
  return uVar1;
}
