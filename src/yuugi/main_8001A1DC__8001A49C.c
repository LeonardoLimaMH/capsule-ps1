#include "common.h"
#include "ghidra.h"
#include "yuugi.h"

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001A49C", func_8001A6B8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001A49C", func_8001A704);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001A49C", func_8001A784);
