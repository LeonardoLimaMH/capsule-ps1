#include "common.h"
#include "yuugi.h"

void GsClearVcount(void) {
    ResetRCnt(0xF2000001);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013350);

s32 func_800133A4(void)
{
  extern u8 D_8008ED68[];
  s8 *new_var;
  new_var = (s8 *) D_8008ED68;
 do { } while (0);
  *((s32 *) (new_var + 0x14)) = (s32) ((*((s32 *) (((s8 *) D_8008ED68) + 0x14))) + 1);
  return 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800133C4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013440);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800134BC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800135A8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013668);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800136C8);

void func_80013920(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013928);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013A68);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013B84);

#include "ghidra.h"
void func_80013C14(undefined4 *param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = param_2 + 3;
  }
  for (param_2 = param_2 >> 2; 0 < param_2; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013C44);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013C6C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013DFC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800142E4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80014728);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80014C4C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80014D30);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80014DD8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80014EE0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800152C8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800154C4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015524);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015540);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800158C4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015944);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015A0C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015A74);

#include "ghidra.h"
void func_80015B00(int param_1)

{
  *(undefined1 *)(param_1 + 0x5a) = 0x80;
  *(undefined1 *)(param_1 + 0x59) = 0x80;
  *(undefined1 *)(param_1 + 0x58) = 0x80;
  if (*(short *)(param_1 + 0x46) < -0xe0) {
    func_800185F8();
  }
  return;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015B3C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015B74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015BE8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015C2C);

#include "ghidra.h"
void func_80015CD0(int param_1,int param_2,uint param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  
  *(int *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffff8 | param_3 & 7;
  puVar2 = *(undefined4 **)(param_2 + 4);
  *(undefined4 *)(param_1 + 4) = *puVar2;
  uVar1 = *(undefined2 *)(puVar2 + 1);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x10) = uVar1;
  return;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015D14);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015E60);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015EF8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_8001602C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800160B0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800160D4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800160F8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_8001611C);

void func_80016148(void *arg0) {
    extern u8 D_8008F702[];
    if ((*D_8008F702) == 0) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + M2C_FIELD(arg0, s32 *, 0x68));
        M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) + M2C_FIELD(arg0, s32 *, 0x6C));
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) + M2C_FIELD(arg0, s32 *, 0x70));
        M2C_FIELD(arg0, u16 *, 0x54) = (u16) (M2C_FIELD(arg0, u16 *, 0x54) + M2C_FIELD(arg0, u16 *, 0x78));
        M2C_FIELD(arg0, u16 *, 0x50) = (u16) (M2C_FIELD(arg0, u16 *, 0x50) + M2C_FIELD(arg0, u16 *, 0x74));
        M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) + M2C_FIELD(arg0, u16 *, 0x76));
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800161C4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800178F8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80017CA4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80018440);

void func_800185F8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

void func_80018600(void) {

}

void func_80018608(void) {

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80018610);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800186E4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800187E8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800188F0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80018C00);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80018EF4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80018F90);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80019088);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800190F4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80019654);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800196A0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80019C20);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80019C58);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80019CB8);

void func_80019D38(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0) = arg1;
    M2C_FIELD(arg2, s32 *, 4) = (s32) (arg0 & 0xFFFF);
}

#include "ghidra.h"
void func_80019D48(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_80019DB4(param_1,param_1 + 0x7ffU >> 0xb & 0xffff,param_2,param_3);
  return;
}

#include "ghidra.h"
void func_80019D7C(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_80019DB4(0,param_1 + 0x7ffU >> 0xb & 0xffff,param_2,param_3);
  return;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80019DB4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80019E1C);
