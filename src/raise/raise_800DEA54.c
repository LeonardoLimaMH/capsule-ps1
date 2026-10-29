#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800DEA54);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800DEAE8);

s32 func_800DEB28(void) {
    extern s16 D_800F1EB8[];
    return (*D_800F1EB8) == 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800DEB38);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800DEBA0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800DEC04);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800DECA8);

#include "ghidra.h"
undefined4 func_800DED74(undefined4 param_1,undefined2 param_2,short param_3,short param_4)

{
  func_800DECA8(param_1,param_2);
  func_800DF838(param_1,param_2,(int)param_3,(int)param_4);
  return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800DEDE4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800DEE18);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800DEF3C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800DF058);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800DF1D8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800DF300);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800DF51C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800DF67C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800DF734);


extern u8 D_80092008[];

void func_800DF7EC(s32 unused, s32 idx) {
    u8 *rec = D_80092008 + (idx & 0xFFFF) * 0x44;
    u8 *slot = rec + (((*(u32 *)rec >> 11) & 0x3F) - 1) * 2;

    *(u16 *)(slot + 4) |= 0x8000;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800DF838);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800DF914);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800DFB10);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800DFB80);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800DFCA0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800E01C8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800E06A4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800E071C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800E0794);

#include "ghidra.h"
void func_800E080C(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_800B1260();
  func_800CECEC(param_1,param_2,param_3);
  return;
}

void func_800E085C(s32 arg0) {
    func_800CEF08();
    func_800B1260(arg0);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800E088C);

void func_800E0A50(void) {
    func_800CF1B4();
}

void func_800E0A70(void) {
    func_800CF2E4();
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800E0A90);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800E0C08);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800E0D84);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800E0DF8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800E0E8C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800E0FB8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800E102C);

void func_800E1068(s32 arg0) {
    s32 var_s0;

    func_800B1260();
    var_s0 = 0;
    do {
        func_800C5B30(arg0, 0, var_s0);
        var_s0 += 1;
    } while (var_s0 < 7);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800E10BC);


extern u8 D_80100F38[];

s32 func_800E1140(s32 idx) {
    u8 *obj = D_80100F38 + (idx & 0xFFFF) * 0x79C;

    if (*(s16 *)(obj + 0x228) == 1) {
        return 0;
    }
    return ((*(u32 *)(obj + 0x798) >> 5) & 1) ^ 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54", func_800E11A0);

#include "ghidra.h"
void func_800E134C(int param_1)

{
    extern s32 D_800EEBAC[];
  undefined4 uVar1;
  
  if ((*D_800EEBAC) == 0) {
    uVar1 = 3;
    if (param_1 == 0) {
      uVar1 = 2;
    }
    func_800AC34C(uVar1);
  }
  return;
}
