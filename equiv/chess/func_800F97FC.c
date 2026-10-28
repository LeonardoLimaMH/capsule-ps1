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
/* callee-contract: RotTransPers */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
#include "common.h"

#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ed68 (*(s32 *)0x8008ED68)
#define DAT_8008ee6b (*(u8 *)0x8008EE6B)
#define DAT_800906a0 (*(s32 *)0x800906A0)
#define DAT_8011974d (*(u8 *)0x8011974D)
extern s32 AddPrim();
extern s32 GetTPage();
extern s32 RotTransPers();
extern s32 SetPolyG4();
extern s32 SetSemiTrans();
extern s32 SetShadeTex();
#define func_80013920 ((s32 (*)())0x80013920)
#define func_80018610 ((s32 (*)())0x80018610)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
extern s32 rcos();
extern s32 rsin();
void func_800F97FC(int param_1)

{
  union { u64 align; u8 bytes[0x68]; } recovered_local_frame;
#define local_68 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x0))
#define local_60 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x8))
#define lStack_5c (*(long volatile *)(recovered_local_frame.bytes + 0xC))
#define lStack_58 (*(long volatile *)(recovered_local_frame.bytes + 0x10))
#define local_54 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x14))
#define local_50 (*(int volatile *)(recovered_local_frame.bytes + 0x18))
#define local_4c (*(int volatile *)(recovered_local_frame.bytes + 0x1C))
#define local_48 (*(uint volatile *)(recovered_local_frame.bytes + 0x20))
#define local_44 (*(uint volatile *)(recovered_local_frame.bytes + 0x24))
#define local_40 (*(uint volatile *)(recovered_local_frame.bytes + 0x28))
#define local_38 (*(short volatile *)(recovered_local_frame.bytes + 0x30))
#define local_30 (*(int volatile *)(recovered_local_frame.bytes + 0x38))
#define local_2c (*(int volatile *)(recovered_local_frame.bytes + 0x3C))

  byte bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;














  local_48 = (uint)*(byte *)(param_1 + 0x38);
  local_44 = (uint)*(byte *)(param_1 + 0x39);
  local_40 = (uint)*(byte *)(param_1 + 0x3a);
  local_50 = (int)*(short *)(param_1 + 0x2a);
  local_4c = local_50 - *(short *)(param_1 + 0x30);
  bVar1 = *(byte *)(param_1 + 0x3d);
  iVar12 = *(byte *)(param_1 + 0x3c) + 1;
  local_38 = GetTPage(0,1,0,0);
  if (DAT_8011974d == '\0') {
    func_8002CEC0(&DAT_800906a0);
    DAT_8011974d = '\x01';
  }
  if (DAT_8008ee6b < 2) {
    iVar4 = *(int *)(param_1 + 0x40) + 1;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x40) + (uint)DAT_8008ee6b;
  }
  bVar2 = *(byte *)(param_1 + 0x3f);
  *(int *)(param_1 + 0x40) = iVar4;
  iVar4 = iVar12;
  if (bVar2 == 1) {
LAB_800f99bc:
    iVar4 = (iVar12 * *(int *)(param_1 + 0x40)) / (int)*(short *)(param_1 + 0x32);
    if (*(int *)(param_1 + 0x40) < (int)*(short *)(param_1 + 0x32)) goto LAB_800f9acc;
    *(s8 *)(param_1 + 0x3f) = *(s8 *)(param_1 + 0x3f) + '\x01';
LAB_800f99f8:
    iVar4 = iVar12;
    if (*(int *)(param_1 + 0x40) < (int)*(short *)(param_1 + 0x34)) goto LAB_800f9acc;
    *(s8 *)(param_1 + 0x3f) = *(s8 *)(param_1 + 0x3f) + '\x01';
  }
  else {
    if (bVar2 < 2) {
      if (bVar2 != 0) goto LAB_800f9acc;
      iVar11 = 0;
      iVar4 = param_1;
      if (*(s8 *)(param_1 + 0x3c) != '\0') {
        do {
          uVar5 = func_800202A4(0x1000);
          iVar8 = rsin(uVar5);
          iVar8 = (uint)*(byte *)(param_1 + 0x3e) * iVar8;
          if (iVar8 < 0) {
            iVar8 = iVar8 + 0xfff;
          }
          *(short *)(iVar4 + 0x44) = (short)(iVar8 >> 0xc);
          iVar8 = rcos(uVar5);
          iVar8 = (uint)*(byte *)(param_1 + 0x3e) * iVar8;
          if (iVar8 < 0) {
            iVar8 = iVar8 + 0xfff;
          }
          *(short *)(iVar4 + 0x46) = (short)(iVar8 >> 0xc);
          iVar11 = iVar11 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar11 < (int)(uint)*(byte *)(param_1 + 0x3c));
      }
      *(s8 *)(param_1 + 0x3f) = *(s8 *)(param_1 + 0x3f) + '\x01';
      goto LAB_800f99bc;
    }
    if (bVar2 == 2) goto LAB_800f99f8;
    if (bVar2 != 3) goto LAB_800f9acc;
  }
  iVar4 = (int)*(short *)(param_1 + 0x36);
  iVar11 = iVar4 - *(int *)(param_1 + 0x40);
  if (iVar4 <= *(int *)(param_1 + 0x40)) {
    func_80013920(param_1);
    return;
  }
  iVar4 = iVar4 - *(short *)(param_1 + 0x34);
  local_48 = (int)((uint)*(byte *)(param_1 + 0x38) * iVar11) / iVar4;
  local_44 = (int)((uint)*(byte *)(param_1 + 0x39) * iVar11) / iVar4;
  local_40 = (int)((uint)*(byte *)(param_1 + 0x3a) * iVar11) / iVar4;
  iVar4 = iVar12;
LAB_800f9acc:
  local_68.vy = (short)local_4c;
  local_68.vx = *(short *)(param_1 + 0x28);
  iVar11 = 0;
  local_68.vz = *(short *)(param_1 + 0x2c);
  RotTransPers(&local_68,&local_60,&lStack_5c,&lStack_58);
  if (-1 < iVar4) {
    local_2c = 0;
    do {
      if (iVar11 == iVar12) {
        (*(u32 *)((u8 *)&local_68 + 0)) = *(undefined4 *)(param_1 + 0x28);
        (*(u32 *)((u8 *)&local_68 + 4)) = *(undefined4 *)(param_1 + 0x2c);
      }
      else {
        iVar8 = param_1 + (iVar11 + -1) * 4;
        local_68.vy = (short)((local_2c + local_4c * (iVar12 - iVar11)) / iVar12);
        local_68.vx = *(short *)(param_1 + 0x28) + *(short *)(iVar8 + 0x44);
        local_68.vz = *(short *)(param_1 + 0x2c) + *(short *)(iVar8 + 0x46);
      }
      lVar6 = RotTransPers(&local_68,&local_54,&lStack_5c,&lStack_58);
      iVar8 = 0;
      local_30 = lVar6 * 4 + 0x70;
      do {
        iVar10 = *(int *)(DAT_8008ed68 + 0x1090);
        uVar7 = 0;
        if ((iVar10 == 0) || (uVar7 = iVar10 + 0x24, uVar9 = 0, uVar7 <= DAT_8008ed68 + 0x4594U)) {
          uVar9 = uVar7;
        }
        *(uint *)(DAT_8008ed68 + 0x1090) = uVar9;
        SetPolyG4(iVar10);
        *(undefined1 *)(iVar10 + 4) = (undefined1)local_48;
        *(undefined1 *)(iVar10 + 5) = (undefined1)local_44;
        *(undefined1 *)(iVar10 + 0xc) = 0;
        *(undefined1 *)(iVar10 + 0xd) = 0;
        *(undefined1 *)(iVar10 + 0xe) = 0;
        *(undefined1 *)(iVar10 + 6) = (undefined1)local_40;
        *(undefined1 *)(iVar10 + 0x14) = (undefined1)local_48;
        *(undefined1 *)(iVar10 + 0x15) = (undefined1)local_44;
        *(undefined1 *)(iVar10 + 0x1c) = 0;
        *(undefined1 *)(iVar10 + 0x1d) = 0;
        *(undefined1 *)(iVar10 + 0x1e) = 0;
        *(undefined1 *)(iVar10 + 0x16) = (undefined1)local_40;
        SetShadeTex(iVar10,0);
        SetSemiTrans(iVar10,1);
        if (iVar11 < iVar4) {
          if (iVar8 == 0) {
            *(short *)(iVar10 + 8) = (short)local_54;
            *(undefined2 *)(iVar10 + 10) = (*(u16 *)((u8 *)&local_54 + 2));
            *(ushort *)(iVar10 + 0x10) = (short)local_54 + (ushort)bVar1;
            *(undefined2 *)(iVar10 + 0x12) = (*(u16 *)((u8 *)&local_54 + 2));
            *(short *)(iVar10 + 0x18) = (short)local_60;
            *(undefined2 *)(iVar10 + 0x1a) = (*(u16 *)((u8 *)&local_60 + 2));
            sVar3 = (short)local_60 + (ushort)bVar1;
          }
          else {
            *(short *)(iVar10 + 8) = (short)local_54;
            *(undefined2 *)(iVar10 + 10) = (*(u16 *)((u8 *)&local_54 + 2));
            sVar3 = (short)local_54 - (ushort)bVar1;
code_r0x800f9d74:
            *(short *)(iVar10 + 0x10) = sVar3;
            *(undefined2 *)(iVar10 + 0x12) = (*(u16 *)((u8 *)&local_54 + 2));
            *(short *)(iVar10 + 0x18) = (short)local_60;
            *(undefined2 *)(iVar10 + 0x1a) = (*(u16 *)((u8 *)&local_60 + 2));
            sVar3 = (short)local_60 - (ushort)bVar1;
          }
        }
        else {
          if (iVar8 != 0) {
            *(short *)(iVar10 + 8) = (short)local_54;
            *(undefined2 *)(iVar10 + 10) = (*(u16 *)((u8 *)&local_54 + 2));
            sVar3 = (short)local_54;
            goto code_r0x800f9d74;
          }
          *(short *)(iVar10 + 8) = (short)local_54;
          *(undefined2 *)(iVar10 + 10) = (*(u16 *)((u8 *)&local_54 + 2));
          *(short *)(iVar10 + 0x10) = (short)local_54;
          *(undefined2 *)(iVar10 + 0x12) = (*(u16 *)((u8 *)&local_54 + 2));
          *(short *)(iVar10 + 0x18) = (short)local_60;
          *(undefined2 *)(iVar10 + 0x1a) = (*(u16 *)((u8 *)&local_60 + 2));
          sVar3 = (short)local_60 + (ushort)bVar1;
        }
        *(short *)(iVar10 + 0x20) = sVar3;
        *(undefined2 *)(iVar10 + 0x22) = (*(u16 *)((u8 *)&local_60 + 2));
        iVar8 = iVar8 + 1;
        AddPrim(DAT_8008ed68 + local_30,iVar10);
      } while (iVar8 < 2);
      func_80018610((int)local_38,lVar6);
      iVar11 = iVar11 + 1;
      local_60 = local_54;
      local_2c = local_2c + local_50;
    } while (iVar11 <= iVar4);
  }
  return;
}

#undef local_68
#undef local_60
#undef lStack_5c
#undef lStack_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_38
#undef local_30
#undef local_2c
