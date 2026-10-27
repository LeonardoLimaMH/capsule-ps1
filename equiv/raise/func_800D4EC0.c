#include "common.h"

#include "ghidra.h"
#define DAT_8008ee44 (*(u16 *)0x8008EE44)
#define DAT_8008f702 (*(u8 *)0x8008F702)
#define DAT_80091790 (*(s32 *)0x80091790)
#define DAT_800917b0 (*(u16 *)0x800917B0)
#define DAT_800917b2 (*(s16 *)0x800917B2)
#define DAT_800ee5dc (*(s32 *)0x800EE5DC)
#define DAT_800ef324 (*(s32 *)0x800EF324)
#define DAT_801010c0 (*(s32 *)0x801010C0)
#define DAT_801052f2 (*(u16 *)0x801052F2)
#define D_80078C20 (*(s16 *)0x80078C20)
#define D_800EE5D0 (*(s32 *)0x800EE5D0)
#define D_80100F38 (*(s32 *)0x80100F38)
#define D_801052F0 (*(s16 *)0x801052F0)
#define func_80013920 ((s32 (*)())0x80013920)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800B1260 ((s32 (*)())0x800B1260)
#define func_800C5850 ((s32 (*)())0x800C5850)
void func_800D4EC0(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;

  if (DAT_8008f702 == '\x01') {
    return;
  }
  if (((*(uint *)(param_1 + 0x34) >> 8 & 1) != (int)D_80078C20) || (0x40 < DAT_8008ee44)) {
    func_80013920(param_1);
    return;
  }
  uVar2 = func_800B1260(*(uint *)(param_1 + 0x34) >> 9 & 1);
  switch(*(undefined4 *)(((u8 *)0x801010C0) + (uVar2 & 0xffff) * 0x79c)) {
  case 0:
    iVar4 = (uVar2 & 0xffff) * 0x79c;
    D_801052F0 = 1;
    *(int *)(((u8 *)0x801010C0) + iVar4) = *(int *)(((u8 *)0x801010C0) + iVar4) + 1;
    DAT_801052f2 = 0x40;
    uVar6 = *(uint *)(param_1 + 0x34) >> 10 & 3;
    if (uVar6 == 0) {
      func_80034AB0(0x3a);
    }
    else if (uVar6 == 1) {
      func_80034AB0(0x69);
    }
    break;
  case 1:
    sVar1 = DAT_801052f2 + -1;
    if (DAT_801052f2 < 1) {
      if (D_801052F0 < 1) {
        puVar5 = ((u8 *)0x80100F38) + (uVar2 & 0xffff) * 0x79c;
        goto LAB_800d52ac;
      }
      D_801052F0 = D_801052F0 + -1;
      DAT_801052f2 = 0x40;
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
    }
    else {
      DAT_801052f2 = sVar1;
      if (sVar1 == 0x20) {
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
      }
    }
    break;
  case 2:
    uVar6 = *(uint *)(param_1 + 0x34) >> 10 & 3;
    if (uVar6 == 0) {
      uVar6 = uVar2 & 0xffff;
      sVar1 = *(short *)(((u8 *)0x800917B2) + uVar6 * 0x1a8);
      if (sVar1 != -1) {
        func_80034AB0(0x69);
        uVar3 = func_80019F30(D_800EE5D0 | 0x60000,
                              DAT_800ee5dc + *(int *)(((u8 *)0x800EF324) + sVar1 * 8));
        *(undefined4 *)(param_1 + 0x18) = uVar3;
        D_801052F0 = 1;
        *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfffff3ff | 0x400;
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
        puVar5 = ((u8 *)0x80100F38) + uVar6 * 0x79c;
        DAT_801052f2 = 0x40;
        iVar4 = *(int *)(((u8 *)0x801010C0) + uVar6 * 0x79c) + -1;
        goto LAB_800d52b8;
      }
      *(int *)(((u8 *)0x801010C0) + uVar6 * 0x79c) = *(int *)(((u8 *)0x801010C0) + uVar6 * 0x79c) + 1;
    }
    else if (uVar6 == 1) {
      puVar5 = ((u8 *)0x80100F38) + (uVar2 & 0xffff) * 0x79c;
      goto LAB_800d52ac;
    }
    break;
  case 3:
    iVar4 = (uVar2 & 0xffff) * 0x1a8;
    *(undefined2 *)(((u8 *)0x800917B2) + iVar4) = 0xffff;
    *(undefined2 *)(((u8 *)0x800917B0) + iVar4) = 0xffff;
    puVar5 = ((u8 *)0x80100F38) + (uVar2 & 0xffff) * 0x79c;
LAB_800d52ac:
    iVar4 = *(int *)(puVar5 + 0x188) + 1;
LAB_800d52b8:
    *(int *)(puVar5 + 0x188) = iVar4;
    break;
  case 4:
    goto switchD_800d4f90_caseD_4;
  }
  if ((*(uint *)(param_1 + 0x38) & 1) == 0) {
    func_800C5850((&DAT_80091790)[(uVar2 & 0xffff) * 0x6a],param_1,0,0,0xffffffff);
    *(undefined2 *)(param_1 + 0x4e) = 0x14;
  }
switchD_800d4f90_caseD_4:
  return;
}
