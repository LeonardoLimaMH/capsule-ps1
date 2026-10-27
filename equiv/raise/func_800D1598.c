#include "common.h"

#include "ghidra.h"
#define DAT_8006af84 (*(s32 *)0x8006AF84)
#define DAT_80085429 (*(u8 *)0x80085429)
#define DAT_8008ed80 (*(s32 *)0x8008ED80)
#define DAT_8008edf0 (*(s32 *)0x8008EDF0)
#define DAT_80091620 (*(u8 *)0x80091620)
#define DAT_8009167a (*(u16 *)0x8009167A)
#define DAT_8009167e (*(u16 *)0x8009167E)
#define DAT_80091684 (*(u32 *)0x80091684)
#define DAT_8009168c (*(u32 *)0x8009168C)
#define DAT_800ed886 (*(u16 *)0x800ED886)
#define DAT_801012b4 (*(u16 *)0x801012B4)
#define D_8006AF80 (*(u16 *)0x8006AF80)
#define D_800F038C (*(u8 *)0x800F038C)
#define D_800F1CAC (*(u16 *)0x800F1CAC)
#define D_800F1CB8 (*(u8 *)0x800F1CB8)
#define D_800F1CC0 (*(s32 *)0x800F1CC0)
#define D_80103ED0 (*(s32 *)0x80103ED0)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_800B1260 ((s32 (*)())0x800B1260)
#define func_800B89F4 ((s32 (*)())0x800B89F4)
#define func_800D1CC4 ((s32 (*)())0x800D1CC4)
#define func_800D4B7C ((s32 (*)())0x800D4B7C)
void func_800D1598(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  if (DAT_80085429 == '\0') {
    return;
  }
  DAT_8008edf0 = DAT_8008edf0 & 0x800;
  if (*(s8 *)*param_1 == -1) {
    return;
  }
  if (D_80103ED0 != 0) {
    D_80103ED0 = D_80103ED0 + -1;
    return;
  }
  switch(*(s8 *)*param_1) {
  case -0x20:
    if ((*(ushort *)(&DAT_801012b4 + (uint)D_8006AF80 * 0x79c) & 3) != 3) {
      return;
    }
    break;
  case -0x1f:
    if ((*(ushort *)(&DAT_801012b4 + (uint)D_8006AF80 * 0x79c) & 7) != 7) {
      return;
    }
    break;
  case -0x1e:
    break;
  case -0x1d:
    iVar4 = func_800202A4(6);
    DAT_800ed886 = *(undefined2 *)
                    (&D_800F1CAC + ((int)(((uint)(iVar4 + DAT_8008ed80) % 6) * 0x10000) >> 0xf));
    break;
  case -0x1c:
    iVar4 = 1;
    do {
      uVar1 = func_800B1260(iVar4);
      if ((uVar1 & 0xffff) != 0xffff) {
        iVar3 = (uVar1 & 0xffff) * 0x79c;
        *(short *)(&DAT_801012b4 + iVar3) = *(short *)(&DAT_801012b4 + iVar3) + 1;
      }
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    break;
  case -0x1b:
    if (D_800F1CC0 != 0) {
      D_800F1CC0 = D_800F1CC0 + -1;
      return;
    }
    break;
  case -0x1a:
    D_800F1CC0 = 0x1e0;
    break;
  default:
    goto switchD_800d1630_caseD_e7;
  case -0x18:
    iVar4 = 1;
    do {
      uVar1 = func_800B1260(iVar4);
      uVar1 = uVar1 & 0xffff;
      (&DAT_8009167a)[uVar1 * 0xd4] = 1;
      iVar3 = iVar4 + -1;
      (&DAT_80091684)[uVar1 * 0x6a] = DAT_8006af84;
      func_800D4B7C(iVar4,uVar1);
      iVar4 = iVar3;
    } while (-1 < iVar3);
    uVar2 = 0x1a;
    goto LAB_800d1a08;
  case -0x17:
    iVar4 = 1;
    do {
      uVar1 = func_800B1260(iVar4);
      uVar1 = uVar1 & 0xffff;
      *(undefined2 *)(&DAT_8009167e + uVar1 * 0x1a8) = 1;
      iVar3 = iVar4 + -1;
      *(undefined4 *)(&DAT_8009168c + uVar1 * 0x1a8) = DAT_8006af84;
      func_800D4B7C(iVar4,uVar1);
      iVar4 = iVar3;
    } while (-1 < iVar3);
    uVar2 = 0x1c;
LAB_800d1a08:
    func_800D1CC4(uVar1,uVar2,0,0);
    break;
  case -0x15:
    iVar4 = 1;
    do {
      uVar1 = func_800B1260(iVar4);
      (&DAT_8009167a)[(uVar1 & 0xffff) * 0xd4] = 0;
      *(undefined2 *)(&DAT_8009167e + (uVar1 & 0xffff) * 0x1a8) = 0;
      func_800D4B7C(iVar4);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    break;
  case -0x14:
    func_800B89F4(1);
    break;
  case -0x13:
    iVar4 = 0;
    do {
      uVar1 = (uint)D_8006AF80;
      iVar3 = iVar4 + 1;
      (&D_800F038C)[iVar4] = (&D_800F1CB8)[iVar4];
      (&DAT_80091620)[uVar1 * 0x1a8 + iVar4] = (&D_800F1CB8)[iVar4];
      iVar4 = iVar3;
    } while (iVar3 < 8);
    break;
  case -0x10:
    DAT_8008edf0 = DAT_8008edf0 | 0x8000;
    break;
  case -0xf:
    DAT_8008edf0 = DAT_8008edf0 | 0x2000;
    break;
  case -0xe:
    DAT_8008edf0 = DAT_8008edf0 | 0x1000;
    break;
  case -0xd:
    DAT_8008edf0 = DAT_8008edf0 | 0x4000;
    break;
  case -0xc:
    DAT_8008edf0 = DAT_8008edf0 | 0x80;
    break;
  case -0xb:
    DAT_8008edf0 = DAT_8008edf0 | 0x20;
    break;
  case -10:
    DAT_8008edf0 = DAT_8008edf0 | 0x10;
    break;
  case -9:
    DAT_8008edf0 = DAT_8008edf0 | 0x40;
    break;
  case -8:
    DAT_8008edf0 = DAT_8008edf0 | 0x100;
    break;
  case -6:
    DAT_8008edf0 = DAT_8008edf0 | 4;
    break;
  case -5:
    DAT_8008edf0 = DAT_8008edf0 | 1;
    break;
  case -4:
    DAT_8008edf0 = DAT_8008edf0 | 8;
    break;
  case -3:
    DAT_8008edf0 = DAT_8008edf0 | 2;
    break;
  case -2:
    iVar4 = 1;
    do {
      uVar1 = func_800B1260(iVar4);
      if ((uVar1 & 0xffff) != 0xffff) {
        *(undefined2 *)(&DAT_801012b4 + (uVar1 & 0xffff) * 0x79c) = 0;
      }
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  *param_1 = *param_1 + 1;
  D_80103ED0 = 0x10;
switchD_800d1630_caseD_e7:
  return;
}
