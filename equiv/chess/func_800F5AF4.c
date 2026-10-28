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
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ed68 (*(s32 *)0x8008ED68)
#define DAT_800906a0 (*(s32 *)0x800906A0)
#define DAT_8011974d (*(u8 *)0x8011974D)
extern s32 AddPrim();
extern s32 RotTransPers();
extern s32 SetPolyF3();
extern s32 SetPolyFT3();
extern s32 SetSemiTrans();
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
extern s32 rcos();
extern s32 rsin();
void func_800F5AF4(int param_1)

{
  undefined2 uVar1;
  long lVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined2 uVar12;
  SVECTOR local_e0;
  long local_d8 [32];
  undefined4 local_58;
  long lStack_54;
  long lStack_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  long *local_34;
  long *local_30;
  int local_2c;

  puVar11 = (undefined1 *)(param_1 + 0x30);
  local_4c = (*(byte *)(param_1 + 0x42) & 1) << 6;
  local_48 = (uint)(*(byte *)(param_1 + 0x42) >> 1) << 6;
  if (DAT_8011974d == '\0') {
    func_8002CEC0(&DAT_800906a0);
    DAT_8011974d = '\x01';
  }
  local_e0.vx = *(short *)(param_1 + 0x28);
  local_e0.vy = *(short *)(param_1 + 0x2a) - *(short *)(param_1 + 0x34);
  local_e0.vz = *(short *)(param_1 + 0x2c);
  local_44 = 1;
  RotTransPers(&local_e0,&local_58,&lStack_54,&lStack_50);
  local_3c = (int)(short)local_58;
  local_38 = (int)(*(u16 *)((u8 *)&local_58 + 2));
  uVar7 = (uint)*(byte *)(param_1 + 0x36);
  if (uVar7 != 0) {
    local_34 = local_d8;
    do {
      uVar8 = (uint)*(byte *)(param_1 + 0x37);
      local_40 = 0x400 - ((int)*(short *)(param_1 + 0x38) +
                         (((int)*(short *)(param_1 + 0x3a) - (int)*(short *)(param_1 + 0x38)) *
                         local_44) / (int)uVar7);
      uVar7 = 0;
      local_30 = local_34;
      local_2c = -4;
      do {
        iVar10 = (int)*(short *)(param_1 + 0x3c) +
                 (int)(uVar7 * 0x1000 + local_44 * 0x800) / (int)uVar8;
        iVar4 = rcos(iVar10);
        iVar5 = rcos(local_40);
        iVar4 = (uint)*(ushort *)(param_1 + 0x34) * iVar4;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xfff;
        }
        iVar5 = (iVar4 >> 0xc) * iVar5;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0xfff;
        }
        local_e0.vx = *(short *)(param_1 + 0x28) + (short)(iVar5 >> 0xc);
        iVar4 = rsin(local_40);
        iVar4 = (uint)*(ushort *)(param_1 + 0x34) * iVar4;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xfff;
        }
        local_e0.vy = *(short *)(param_1 + 0x2a) - (short)(iVar4 >> 0xc);
        iVar4 = rsin(iVar10);
        iVar5 = rcos(local_40);
        iVar4 = (uint)*(ushort *)(param_1 + 0x34) * iVar4;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xfff;
        }
        iVar5 = (iVar4 >> 0xc) * iVar5;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0xfff;
        }
        local_e0.vz = *(short *)(param_1 + 0x2c) + (short)(iVar5 >> 0xc);
        lVar6 = RotTransPers(&local_e0,&local_58,&lStack_54,&lStack_50);
        uVar1 = (short)local_58;
        uVar3 = (*(u16 *)((u8 *)&local_58 + 2));
        if (local_44 == 1) {
          if ((uVar7 != 0) && (*(short *)(param_1 + 0x38) == 0)) {
            uVar9 = *(undefined2 *)((int)local_34 + local_2c);
            uVar12 = ((undefined2 *)((int)local_34 + local_2c))[1];
            if (*(short *)(param_1 + 0x3e) == -1) {
LAB_800f61f0:
              iVar4 = *(int *)(DAT_8008ed68 + 0x1090);
              uVar8 = 0;
              if ((iVar4 != 0) && (iVar4 + 0x14U <= DAT_8008ed68 + 0x4594U)) {
                uVar8 = iVar4 + 0x14U;
              }
              *(uint *)(DAT_8008ed68 + 0x1090) = uVar8;
              SetPolyF3(iVar4);
              *(undefined1 *)(iVar4 + 4) = *puVar11;
              *(undefined1 *)(iVar4 + 5) = *(undefined1 *)(param_1 + 0x31);
              *(undefined1 *)(iVar4 + 6) = *(undefined1 *)(param_1 + 0x32);
              SetSemiTrans(iVar4,*(undefined1 *)(param_1 + 0x43));
              *(undefined2 *)(iVar4 + 8) = uVar1;
              *(undefined2 *)(iVar4 + 10) = uVar3;
              *(undefined2 *)(iVar4 + 0xc) = uVar9;
              *(undefined2 *)(iVar4 + 0xe) = uVar12;
              *(undefined2 *)(iVar4 + 0x10) = (undefined2)local_3c;
              *(undefined2 *)(iVar4 + 0x12) = (undefined2)local_38;
            }
            else {
              iVar4 = *(int *)(DAT_8008ed68 + 0x1090);
              uVar8 = 0;
              if ((iVar4 != 0) && (iVar4 + 0x20U <= DAT_8008ed68 + 0x4594U)) {
                uVar8 = iVar4 + 0x20U;
              }
              *(uint *)(DAT_8008ed68 + 0x1090) = uVar8;
              SetPolyFT3(iVar4);
              *(undefined1 *)(iVar4 + 4) = *puVar11;
              *(undefined1 *)(iVar4 + 5) = *(undefined1 *)(param_1 + 0x31);
              *(undefined1 *)(iVar4 + 6) = *(undefined1 *)(param_1 + 0x32);
              SetSemiTrans(iVar4,*(undefined1 *)(param_1 + 0x43));
              *(undefined2 *)(iVar4 + 8) = uVar1;
              *(undefined2 *)(iVar4 + 10) = uVar3;
              *(undefined2 *)(iVar4 + 0x10) = uVar9;
              *(undefined2 *)(iVar4 + 0x12) = uVar12;
              *(undefined2 *)(iVar4 + 0x18) = (undefined2)local_3c;
              *(undefined2 *)(iVar4 + 0x1a) = (undefined2)local_38;
              *(undefined2 *)(iVar4 + 0x16) = *(undefined2 *)(param_1 + 0x3e);
              uVar1 = *(undefined2 *)(param_1 + 0x40);
              *(s8 *)(iVar4 + 0xc) = (s8)local_4c;
              *(s8 *)(iVar4 + 0xd) = (s8)local_48;
              *(s8 *)(iVar4 + 0x14) = (s8)local_4c + '@';
              *(s8 *)(iVar4 + 0x15) = (s8)local_48;
              *(s8 *)(iVar4 + 0x1c) = (s8)local_4c;
              *(undefined2 *)(iVar4 + 0xe) = uVar1;
              *(s8 *)(iVar4 + 0x1d) = (s8)local_48 + '@';
            }
LAB_800f6294:
            AddPrim(DAT_8008ed68 + lVar6 * 4 + 0x70);
          }
        }
        else {
          if (uVar7 != *(byte *)(param_1 + 0x37)) {
            lVar2 = *local_30;
            uVar9 = *(undefined2 *)((int)local_30 + 2);
            local_3c = (int)(short)local_34[uVar7 + 1];
            local_38 = (int)*(short *)((int)(local_34 + uVar7 + 1) + 2);
            if (*(short *)(param_1 + 0x3e) == -1) {
              iVar4 = *(int *)(DAT_8008ed68 + 0x1090);
              uVar8 = 0;
              if ((iVar4 != 0) && (iVar4 + 0x14U <= DAT_8008ed68 + 0x4594U)) {
                uVar8 = iVar4 + 0x14U;
              }
              *(uint *)(DAT_8008ed68 + 0x1090) = uVar8;
              SetPolyF3(iVar4);
              *(undefined1 *)(iVar4 + 4) = *puVar11;
              *(undefined1 *)(iVar4 + 5) = *(undefined1 *)(param_1 + 0x31);
              *(undefined1 *)(iVar4 + 6) = *(undefined1 *)(param_1 + 0x32);
              SetSemiTrans(iVar4,*(undefined1 *)(param_1 + 0x43));
              *(undefined2 *)(iVar4 + 8) = uVar1;
              *(undefined2 *)(iVar4 + 10) = uVar3;
              *(short *)(iVar4 + 0xc) = (short)lVar2;
              *(undefined2 *)(iVar4 + 0xe) = uVar9;
              *(undefined2 *)(iVar4 + 0x10) = (undefined2)local_3c;
              *(undefined2 *)(iVar4 + 0x12) = (undefined2)local_38;
            }
            else {
              iVar4 = *(int *)(DAT_8008ed68 + 0x1090);
              uVar8 = 0;
              if ((iVar4 != 0) && (iVar4 + 0x20U <= DAT_8008ed68 + 0x4594U)) {
                uVar8 = iVar4 + 0x20U;
              }
              *(uint *)(DAT_8008ed68 + 0x1090) = uVar8;
              SetPolyFT3(iVar4);
              *(undefined1 *)(iVar4 + 4) = *puVar11;
              *(undefined1 *)(iVar4 + 5) = *(undefined1 *)(param_1 + 0x31);
              *(undefined1 *)(iVar4 + 6) = *(undefined1 *)(param_1 + 0x32);
              SetSemiTrans(iVar4,*(undefined1 *)(param_1 + 0x43));
              *(undefined2 *)(iVar4 + 8) = uVar1;
              *(undefined2 *)(iVar4 + 10) = uVar3;
              *(short *)(iVar4 + 0x10) = (short)lVar2;
              *(undefined2 *)(iVar4 + 0x12) = uVar9;
              *(undefined2 *)(iVar4 + 0x18) = (undefined2)local_3c;
              *(undefined2 *)(iVar4 + 0x1a) = (undefined2)local_38;
              *(undefined2 *)(iVar4 + 0x16) = *(undefined2 *)(param_1 + 0x3e);
              uVar9 = *(undefined2 *)(param_1 + 0x40);
              *(s8 *)(iVar4 + 0xc) = (s8)local_4c;
              *(s8 *)(iVar4 + 0xd) = (s8)local_48;
              *(s8 *)(iVar4 + 0x14) = (s8)local_4c + '@';
              *(s8 *)(iVar4 + 0x15) = (s8)local_48;
              *(s8 *)(iVar4 + 0x1c) = (s8)local_4c;
              *(undefined2 *)(iVar4 + 0xe) = uVar9;
              *(s8 *)(iVar4 + 0x1d) = (s8)local_48 + '@';
            }
            AddPrim(DAT_8008ed68 + lVar6 * 4 + 0x70);
          }
          if (uVar7 != 0) {
            uVar9 = (undefined2)*local_30;
            uVar12 = *(undefined2 *)((int)local_30 + 2);
            local_3c = (int)*(short *)((int)local_34 + local_2c);
            local_38 = (int)((short *)((int)local_34 + local_2c))[1];
            if (*(short *)(param_1 + 0x3e) == -1) goto LAB_800f61f0;
            iVar4 = *(int *)(DAT_8008ed68 + 0x1090);
            uVar8 = 0;
            if ((iVar4 != 0) && (iVar4 + 0x20U <= DAT_8008ed68 + 0x4594U)) {
              uVar8 = iVar4 + 0x20U;
            }
            *(uint *)(DAT_8008ed68 + 0x1090) = uVar8;
            SetPolyFT3(iVar4);
            *(undefined1 *)(iVar4 + 4) = *puVar11;
            *(undefined1 *)(iVar4 + 5) = *(undefined1 *)(param_1 + 0x31);
            *(undefined1 *)(iVar4 + 6) = *(undefined1 *)(param_1 + 0x32);
            SetSemiTrans(iVar4,*(undefined1 *)(param_1 + 0x43));
            *(undefined2 *)(iVar4 + 8) = uVar1;
            *(undefined2 *)(iVar4 + 10) = uVar3;
            *(undefined2 *)(iVar4 + 0x10) = uVar9;
            *(undefined2 *)(iVar4 + 0x12) = uVar12;
            *(undefined2 *)(iVar4 + 0x18) = (undefined2)local_3c;
            *(undefined2 *)(iVar4 + 0x1a) = (undefined2)local_38;
            *(undefined2 *)(iVar4 + 0x16) = *(undefined2 *)(param_1 + 0x3e);
            uVar1 = *(undefined2 *)(param_1 + 0x40);
            *(s8 *)(iVar4 + 0xc) = (s8)local_4c;
            *(s8 *)(iVar4 + 0xd) = (s8)local_48;
            *(s8 *)(iVar4 + 0x14) = (s8)local_4c + '@';
            *(s8 *)(iVar4 + 0x15) = (s8)local_48;
            *(s8 *)(iVar4 + 0x1c) = (s8)local_4c;
            *(undefined2 *)(iVar4 + 0xe) = uVar1;
            *(s8 *)(iVar4 + 0x1d) = (s8)local_48 + '@';
            goto LAB_800f6294;
          }
        }
        uVar7 = uVar7 + 1;
        local_2c = local_2c + 4;
        *local_30 = local_58;
        uVar8 = (uint)*(byte *)(param_1 + 0x37);
        local_30 = local_30 + 1;
      } while ((int)uVar7 <= (int)uVar8);
      uVar7 = (uint)*(byte *)(param_1 + 0x36);
      local_44 = local_44 + 1;
    } while (local_44 <= (int)uVar7);
  }
  return;
}
