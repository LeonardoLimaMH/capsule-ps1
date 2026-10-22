#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A1DC);

#include "ghidra.h"
undefined4 func_8001A25C(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_3 != (undefined4 *)0x0) {
    uVar1 = *param_3;
  }
  return uVar1;
}

#include "ghidra.h"
undefined4 func_8001A270(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = *(undefined4 *)(param_3 + 4);
  }
  return uVar1;
}

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

#include "ghidra.h"
void func_8001A49C(int param_1)

{
  func_8001A684(param_1,param_1 + 0x50,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x54,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x58,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x5c,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x60,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 100,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x68,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x6c,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x70,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x74,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x78,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x7c,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x80,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x84,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x8c,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x94,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x9c,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0xa4,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0xac,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0xb4,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0xbc,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0xcc,*(undefined4 *)(param_1 + 0x4c));
  func_8001A704(param_1,param_1 + 0x5c,*(undefined4 *)(param_1 + 0x4c));
  func_8001A784(param_1,param_1 + 0x60,*(undefined4 *)(param_1 + 0x4c));
  func_8001A818(param_1,param_1 + 100,*(undefined4 *)(param_1 + 0x4c));
  *(int *)(param_1 + 0x4c) = param_1;
  return;
}

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

void func_8001AD48(s32 arg0)
{
  int new_var2;
  int new_var;
 if (arg0 || new_var2) { new_var = 1; new_var2 = 2; } else { new_var = 1; new_var2 = 2; } do { func_8001ADF8(new_var, arg0, new_var2, new_var); } while (0);
}

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
