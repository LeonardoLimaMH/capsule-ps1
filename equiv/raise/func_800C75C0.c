#include "common.h"

#include "ghidra.h"
#define DAT_80063950 (*(s32 *)0x80063950)
#define DAT_80063954 (*(s32 *)0x80063954)
#define DAT_80091618 (*(u16 *)0x80091618)
#define DAT_800ee5e8 (*(s32 *)0x800EE5E8)
#define DAT_801010c4 (*(s32 *)0x801010C4)
#define DAT_80101160 (*(u16 *)0x80101160)
#define DAT_801011f2 (*(u16 *)0x801011F2)
#define DAT_801011f4 (*(s32 *)0x801011F4)
#define DAT_8010127c (*(s16 *)0x8010127C)
#define D_80078C28 (*(s16 *)0x80078C28)
#define D_800EE5D0 (*(s32 *)0x800EE5D0)
#define D_800EF300 (*(s32 *)0x800EF300)
#define D_800F1920 (*(s16 *)0x800F1920)
#define D_800F1A58 (*(u16 *)0x800F1A58)
#define func_80015CD0 ((s32 (*)())0x80015CD0)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800B1260 ((s32 (*)())0x800B1260)
#define func_800D4CC4 ((s32 (*)())0x800D4CC4)
#define func_800E16EC ((s32 (*)())0x800E16EC)
#define func_800E66A4 ((s32 (*)())0x800E66A4)
undefined4 func_800C75C0(int param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;

  uVar4 = func_800B1260(param_2);
  uVar9 = uVar4 & 0xffff;
  iVar5 = uVar9 * 0x79c;
  sVar1 = *(short *)(((u8 *)0x801011F2) + iVar5);
  iVar7 = *(int *)(((u8 *)0x801010C4) + iVar5);
  if (iVar7 == 0) goto LAB_800c79b4;
  sVar2 = *(short *)(((u8 *)0x8010127C) + iVar5);
  if (sVar2 == 1) {
    uVar3 = (&DAT_80091618)[uVar9 * 0xd4];
    uVar6 = func_80019F30(D_800EE5D0 | 0x70000,DAT_800ee5e8 + (&D_800EF300)[sVar1]);
    func_80015CD0(*(int *)(((u8 *)0x801010C4) + iVar5) + 0x14,uVar6,1);
    *(uint *)(*(int *)(((u8 *)0x801010C4) + iVar5) + 0x38) =
         *(uint *)(*(int *)(((u8 *)0x801010C4) + iVar5) + 0x38) & 0xfffffffe;
    uVar8 = *(uint *)(((u8 *)0x80063950) + (uint)uVar3 * 0x3c) >> 0x18 & 0x3f;
    if (((&DAT_80063954)[(uint)uVar3 * 0xf] & 3) == 0 &&
        *(uint *)(((u8 *)0x80063950) + (uint)uVar3 * 0x3c) >> 0x1e == 0) {
      uVar8 = (uint)((ulonglong)((longlong)(int)(uVar8 << 2) * 0x66666667) >> 0x21);
    }
    iVar7 = *(int *)(((u8 *)0x801010C4) + iVar5);
    *(undefined2 *)(iVar7 + 0x46) = *(undefined2 *)(param_1 + 0x46);
    *(short *)(iVar7 + 0x4a) = *(short *)(param_1 + 0x4a) - (short)uVar8;
    *(short *)(iVar7 + 0x4e) = *(short *)(param_1 + 0x4e) + -1;
    *(undefined2 *)(((u8 *)0x8010127C) + iVar5) = 2;
LAB_800c77ac:
    if ((*(uint *)(*(int *)(((u8 *)0x801010C4) + iVar5) + 0x38) & 1) != 1) {
      if (D_80078C28 == 1) {
        iVar7 = func_800E16EC();
        if (iVar7 == 1) {
          *(uint *)(*(int *)(((u8 *)0x801010C4) + iVar5) + 0x38) =
               *(uint *)(*(int *)(((u8 *)0x801010C4) + iVar5) + 0x38) | 1;
          goto LAB_800c79b4;
        }
        uVar8 = *(uint *)(((u8 *)0x80063950) +
                         (uint)(ushort)(&DAT_80091618)[(uVar4 & 0xffff) * 0xd4] * 0x3c) >> 0x18 &
                0x3f;
        if (((&DAT_80063954)[(uint)(ushort)(&DAT_80091618)[(uVar4 & 0xffff) * 0xd4] * 0xf] & 3) == 0
            && *(uint *)(((u8 *)0x80063950) +
                        (uint)(ushort)(&DAT_80091618)[(uVar4 & 0xffff) * 0xd4] * 0x3c) >> 0x1e == 0)
        {
          uVar8 = (uint)((ulonglong)((longlong)(int)(uVar8 << 2) * 0x66666667) >> 0x21);
        }
        iVar7 = *(int *)(((u8 *)0x801010C4) + iVar5);
        *(undefined2 *)(iVar7 + 0x46) = *(undefined2 *)(param_1 + 0x46);
        *(short *)(iVar7 + 0x4a) = *(short *)(param_1 + 0x4a) - (short)uVar8;
        *(short *)(iVar7 + 0x4e) = *(short *)(param_1 + 0x4e) + -1;
      }
      iVar7 = *(int *)(((u8 *)0x801010C4) + iVar5);
      if (*(short *)(iVar7 + 0x24) < 0) {
        *(undefined2 *)(((u8 *)0x8010127C) + iVar5) = 3;
      }
      else {
        if (*(short *)(((u8 *)0x800F1920) + (uint)(sVar1 != 0x14) * 2) == 1) {
          if (((uint)*(ushort *)(iVar7 + 0x24) !=
               *(uint *)(*(int *)(*(int *)(iVar7 + 0x1c) + 4) + 4)) || (*(int *)(iVar7 + 0x20) != 0)
             ) goto LAB_800c79b4;
        }
        else if (((uint)*(ushort *)(iVar7 + 0x20) !=
                  (int)*(short *)(((u8 *)0x800F1920) + (uint)(sVar1 != 0x14) * 2) - 1U) ||
                (*(short *)(iVar7 + 0x24) != 0)) goto LAB_800c79b4;
        uVar6 = 0x97;
        if (*(short *)(((u8 *)0x801011F2) + iVar5) == 0x14) {
          uVar6 = 0x88;
        }
        func_80034AB0(uVar6);
      }
    }
  }
  else {
    if (sVar2 < 2) {
      if (sVar2 == 0) {
        *(undefined2 *)(((u8 *)0x80101160) + iVar5) = 0;
        *(undefined2 *)(((u8 *)0x8010127C) + iVar5) = 1;
        (&D_800F1A58)[uVar9] = 1;
        goto LAB_800c79b4;
      }
    }
    else {
      if (sVar2 == 2) goto LAB_800c77ac;
      if (sVar2 == 3) {
        *(uint *)(iVar7 + 0x38) = *(uint *)(iVar7 + 0x38) | 1;
        func_800E66A4(uVar9,*(undefined2 *)(((u8 *)0x801011F2) + iVar5));
        (&D_800F1A58)[uVar9] = 0;
        func_800D4CC4(param_2);
      }
    }
    iVar7 = (&DAT_801011f4)[uVar9 * 0x1e7];
    *(undefined2 *)(((u8 *)0x8010127C) + iVar5) = 0;
    (&DAT_801011f4)[uVar9 * 0x1e7] = iVar7 + 1;
  }
LAB_800c79b4:
  return (&DAT_801011f4)[uVar9 * 0x1e7];
}
