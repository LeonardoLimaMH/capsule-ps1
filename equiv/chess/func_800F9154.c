#include "common.h"

/* real-callee: func_80015B3C */
/* real-callee: func_800136C8 */
/* real-callee: func_80013C14 */
/* rand-u16: 0x80078B7C 1 0 */
/* rand-u16: 0x80078B7E 1 32786 */
/* rand-u16: 0x8012C554 1 0 */
/* rand-u16: 0x8012C556 1 0 */
/* rand-u16: 0x8012C578 1 4096 */
/* rand-u16: 0x8012C57A 1 32786 */
/* rand-u16: 0x8012C57C 1 0 */
/* rand-u16: 0x8012C57E 1 0 */
/* rand-u16: 0x80121008 1 0 */
/* rand-u16: 0x8012100A 1 0 */
/* rand-u16: 0x8012C558 16 0 */
/* rand-u16: 0x80121000 1 144 */
/* rand-u16: 0x80119714 1 0,1,5,19,20,29,30,31,199 */
/* rand-u16: 0x80119716 1 0 */
/* rand-ptr: 0x8008F760 3 */
/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
/* real-callee: func_800FE188 */
/* real-callee: func_800FEC2C */
/* real-callee: func_800FE21C */
/* real-callee: func_800FEBF4 */
/* real-callee: func_800FF460 */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FE74C */
/* real-callee: __fixdfsi */
/* real-callee: __floatsidf */
/* real-callee: __muldf3 */
/* real-callee: _add_mant_d */
/* real-callee: _dbl_shift */
/* real-callee: _dbl_shift_us */
/* real-callee: _err_math */
/* real-callee: _mul_mant_d */
/* real-callee: func_8004FE2C */
/* real-callee: func_800DD428 */
/* real-callee: func_80015D14 */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
#include "ghidra.h"
#define DAT_8008ed68 (*(s32 *)0x8008ED68)
#define DAT_8008ee6b (*(u8 *)0x8008EE6B)
extern s32 AddPrim();
extern s32 GetTPage();
extern s32 SetPolyG3();
extern s32 SetPolyG4();
extern s32 SetSemiTrans();
extern s32 SetShadeTex();
#define func_80013920 ((s32 (*)())0x80013920)
#define func_80018610 ((s32 (*)())0x80018610)
#define func_800202A4 ((s32 (*)())0x800202A4)
void func_800F9154(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  short local_40;
  undefined1 local_38;
  undefined1 local_34;
  undefined1 local_30;

  local_40 = 0;
  local_38 = *(undefined1 *)(param_1 + 0x38);
  uVar9 = (uint)*(byte *)(param_1 + 0x3c);
  local_34 = *(undefined1 *)(param_1 + 0x39);
  local_30 = *(undefined1 *)(param_1 + 0x3a);
  if (DAT_8008ee6b < 2) {
    iVar3 = *(int *)(param_1 + 0x40) + 1;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x40) + (uint)DAT_8008ee6b;
  }
  bVar1 = *(byte *)(param_1 + 0x3f);
  *(int *)(param_1 + 0x40) = iVar3;
  if (bVar1 == 1) {
LAB_800f92e4:
    uVar9 = (uint)*(byte *)(param_1 + 0x3c);
    uVar5 = (int)(uVar9 * *(int *)(param_1 + 0x40)) / (int)*(short *)(param_1 + 0x32);
    if (*(int *)(param_1 + 0x40) < (int)*(short *)(param_1 + 0x32)) goto LAB_800f93f8;
    *(s8 *)(param_1 + 0x3f) = *(s8 *)(param_1 + 0x3f) + '\x01';
LAB_800f9324:
    uVar5 = uVar9;
    if (*(int *)(param_1 + 0x40) < (int)*(short *)(param_1 + 0x34)) goto LAB_800f93f8;
    *(s8 *)(param_1 + 0x3f) = *(s8 *)(param_1 + 0x3f) + '\x01';
  }
  else {
    uVar5 = uVar9;
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_800f93f8;
      iVar10 = 1;
      *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)(param_1 + 0x28);
      *(undefined2 *)(param_1 + 0x46) = *(undefined2 *)(param_1 + 0x2a);
      iVar3 = param_1;
      if (1 < uVar9) {
        do {
          sVar2 = func_800202A4((uint)*(byte *)(param_1 + 0x3e) << 1 | 1);
          iVar7 = uVar9 - iVar10;
          *(ushort *)(iVar3 + 0x48) =
               ((short)((*(short *)(param_1 + 0x28) * iVar7 + *(short *)(param_1 + 0x2c) * iVar10) /
                       (int)uVar9) + sVar2) - (ushort)*(byte *)(param_1 + 0x3e);
          iVar11 = *(short *)(param_1 + 0x2e) * iVar10;
          iVar10 = iVar10 + 1;
          *(short *)(iVar3 + 0x4a) =
               (short)((*(short *)(param_1 + 0x2a) * iVar7 + iVar11) / (int)uVar9);
          iVar3 = iVar3 + 4;
        } while (iVar10 < (int)uVar9);
      }
      *(s8 *)(param_1 + 0x3f) = *(s8 *)(param_1 + 0x3f) + '\x01';
      goto LAB_800f92e4;
    }
    if (bVar1 == 2) goto LAB_800f9324;
    if (bVar1 != 3) goto LAB_800f93f8;
  }
  iVar3 = (int)*(short *)(param_1 + 0x36);
  iVar10 = iVar3 - *(int *)(param_1 + 0x40);
  if (iVar3 < *(int *)(param_1 + 0x40)) {
    func_80013920(param_1);
    return;
  }
  iVar3 = iVar3 - *(short *)(param_1 + 0x34);
  local_38 = (undefined1)((int)((uint)*(byte *)(param_1 + 0x38) * iVar10) / iVar3);
  local_34 = (undefined1)((int)((uint)*(byte *)(param_1 + 0x39) * iVar10) / iVar3);
  local_30 = (undefined1)((int)((uint)*(byte *)(param_1 + 0x3a) * iVar10) / iVar3);
  uVar5 = uVar9;
LAB_800f93f8:
  iVar3 = 0;
  if (0 < (int)(uVar5 - 1)) {
    iVar11 = 4;
    iVar10 = param_1;
    do {
      iVar8 = 0;
      iVar7 = param_1 + iVar11;
      do {
        iVar6 = *(int *)(DAT_8008ed68 + 0x1090);
        uVar9 = 0;
        if ((iVar6 == 0) || (uVar9 = iVar6 + 0x24, uVar4 = 0, uVar9 <= DAT_8008ed68 + 0x4594U)) {
          uVar4 = uVar9;
        }
        *(uint *)(DAT_8008ed68 + 0x1090) = uVar4;
        SetPolyG4(iVar6);
        local_40 = GetTPage(0,1,0,0);
        *(undefined1 *)(iVar6 + 4) = local_38;
        *(undefined1 *)(iVar6 + 5) = local_34;
        *(undefined1 *)(iVar6 + 0xc) = 0;
        *(undefined1 *)(iVar6 + 0xd) = 0;
        *(undefined1 *)(iVar6 + 0xe) = 0;
        *(undefined1 *)(iVar6 + 6) = local_30;
        *(undefined1 *)(iVar6 + 0x14) = local_38;
        *(undefined1 *)(iVar6 + 0x15) = local_34;
        *(undefined1 *)(iVar6 + 0x1c) = 0;
        *(undefined1 *)(iVar6 + 0x1d) = 0;
        *(undefined1 *)(iVar6 + 0x1e) = 0;
        *(undefined1 *)(iVar6 + 0x16) = local_30;
        SetShadeTex(iVar6,0);
        SetSemiTrans(iVar6,1);
        if (iVar8 == 0) {
          *(short *)(iVar6 + 8) = *(short *)(iVar10 + 0x44) + -1;
          *(undefined2 *)(iVar6 + 10) = *(undefined2 *)(iVar10 + 0x46);
          *(ushort *)(iVar6 + 0x10) = *(short *)(iVar10 + 0x44) + (ushort)*(byte *)(param_1 + 0x3d);
          *(undefined2 *)(iVar6 + 0x12) = *(undefined2 *)(iVar10 + 0x46);
          *(short *)(iVar6 + 0x18) = *(short *)(iVar7 + 0x44) + -1;
          *(undefined2 *)(iVar6 + 0x1a) = *(undefined2 *)(iVar7 + 0x46);
          sVar2 = *(short *)(iVar7 + 0x44) + (ushort)*(byte *)(param_1 + 0x3d);
        }
        else {
          *(short *)(iVar6 + 8) = *(short *)(iVar10 + 0x44) + 1;
          *(undefined2 *)(iVar6 + 10) = *(undefined2 *)(iVar10 + 0x46);
          *(ushort *)(iVar6 + 0x10) = *(short *)(iVar10 + 0x44) - (ushort)*(byte *)(param_1 + 0x3d);
          *(undefined2 *)(iVar6 + 0x12) = *(undefined2 *)(iVar10 + 0x46);
          *(short *)(iVar6 + 0x18) = *(short *)(iVar7 + 0x44) + 1;
          *(undefined2 *)(iVar6 + 0x1a) = *(undefined2 *)(iVar7 + 0x46);
          sVar2 = *(short *)(iVar7 + 0x44) - (ushort)*(byte *)(param_1 + 0x3d);
        }
        *(short *)(iVar6 + 0x20) = sVar2;
        *(undefined2 *)(iVar6 + 0x22) = *(undefined2 *)(iVar7 + 0x46);
        iVar8 = iVar8 + 1;
        AddPrim(DAT_8008ed68 + *(short *)(param_1 + 0x30) * 4 + 0x70,iVar6);
      } while (iVar8 < 2);
      iVar11 = iVar11 + 4;
      iVar3 = iVar3 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar3 < (int)(uVar5 - 1));
  }
  if (1 < *(byte *)(param_1 + 0x3f)) {
    iVar10 = 0;
    iVar3 = param_1 + (uVar5 - 1) * 4;
    do {
      iVar11 = *(int *)(DAT_8008ed68 + 0x1090);
      uVar9 = 0;
      if ((iVar11 == 0) || (uVar9 = iVar11 + 0x1c, uVar5 = 0, uVar9 <= DAT_8008ed68 + 0x4594U)) {
        uVar5 = uVar9;
      }
      *(uint *)(DAT_8008ed68 + 0x1090) = uVar5;
      SetPolyG3(iVar11);
      local_40 = GetTPage(0,1,0,0);
      *(undefined1 *)(iVar11 + 4) = local_38;
      *(undefined1 *)(iVar11 + 5) = local_34;
      *(undefined1 *)(iVar11 + 0xc) = 0;
      *(undefined1 *)(iVar11 + 0xd) = 0;
      *(undefined1 *)(iVar11 + 0xe) = 0;
      *(undefined1 *)(iVar11 + 0x14) = 0;
      *(undefined1 *)(iVar11 + 0x15) = 0;
      *(undefined1 *)(iVar11 + 0x16) = 0;
      *(undefined1 *)(iVar11 + 6) = local_30;
      SetShadeTex(iVar11,0);
      SetSemiTrans(iVar11,1);
      if (iVar10 == 0) {
        *(short *)(iVar11 + 8) = *(short *)(iVar3 + 0x44) + -1;
        *(undefined2 *)(iVar11 + 10) = *(undefined2 *)(iVar3 + 0x46);
        *(ushort *)(iVar11 + 0x10) = *(short *)(iVar3 + 0x44) + (ushort)*(byte *)(param_1 + 0x3d);
        *(undefined2 *)(iVar11 + 0x12) = *(undefined2 *)(iVar3 + 0x46);
        sVar2 = *(short *)(param_1 + 0x2c) + -1;
      }
      else {
        *(short *)(iVar11 + 8) = *(short *)(iVar3 + 0x44) + 1;
        *(undefined2 *)(iVar11 + 10) = *(undefined2 *)(iVar3 + 0x46);
        *(ushort *)(iVar11 + 0x10) = *(short *)(iVar3 + 0x44) - (ushort)*(byte *)(param_1 + 0x3d);
        *(undefined2 *)(iVar11 + 0x12) = *(undefined2 *)(iVar3 + 0x46);
        sVar2 = *(short *)(param_1 + 0x2c) + 1;
      }
      *(short *)(iVar11 + 0x18) = sVar2;
      *(undefined2 *)(iVar11 + 0x1a) = *(undefined2 *)(param_1 + 0x2e);
      iVar10 = iVar10 + 1;
      AddPrim(DAT_8008ed68 + *(short *)(param_1 + 0x30) * 4 + 0x70,iVar11);
    } while (iVar10 < 2);
  }
  func_80018610((int)local_40,(int)*(short *)(param_1 + 0x30));
  return;
}
