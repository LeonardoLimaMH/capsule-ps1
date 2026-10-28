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
extern s32 GetTPage();
extern s32 RotTransPers4();
extern s32 SetPolyG4();
extern s32 SetPolyGT4();
extern s32 SetSemiTrans();
#define func_80018610 ((s32 (*)())0x80018610)
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
extern s32 rcos();
extern s32 rsin();
void func_800FCB5C(int param_1)

{
  union { u64 align; u8 bytes[0x68]; } recovered_local_frame;
#define local_68 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x0))
#define local_60 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x8))
#define local_58 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x10))
#define local_50 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x18))
#define local_48 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x20))
#define local_46 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x22))
#define local_44 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x24))
#define local_42 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x26))
#define local_40 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x28))
#define local_3e (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2A))
#define local_3c (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2C))
#define local_3a (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2E))
#define lStack_38 (*(long volatile *)(recovered_local_frame.bytes + 0x30))
#define lStack_34 (*(long volatile *)(recovered_local_frame.bytes + 0x34))
#define local_30 (*(int volatile *)(recovered_local_frame.bytes + 0x38))
#define local_2c (*(int volatile *)(recovered_local_frame.bytes + 0x3C))

  short sVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;

















  local_30 = (int)*(short *)(param_1 + 0x28);
  local_2c = (int)*(short *)(param_1 + 0x2a);
  sVar1 = *(short *)(param_1 + 0x2c);
  uVar10 = (uint)*(byte *)(param_1 + 0x38);
  iVar9 = 0;
  if (DAT_8011974d == '\0') {
    func_8002CEC0(&DAT_800906a0);
    DAT_8011974d = '\x01';
    iVar9 = 0;
  }
  do {
    iVar13 = 0;
    if (iVar9 == 0) {
      sVar2 = *(short *)(param_1 + 0x44);
      sVar8 = *(short *)(param_1 + 0x46);
    }
    else {
      sVar8 = *(short *)(param_1 + 0x44);
      sVar2 = *(short *)(param_1 + 0x46);
    }
    iVar12 = (int)sVar2;
    iVar11 = (int)sVar8;
    iVar4 = 0;
    if (uVar10 != 0) {
      do {
        iVar7 = iVar4 / (int)uVar10 + (int)*(short *)(param_1 + 0x48);
        iVar6 = iVar7 + 0x1000 / uVar10;
        iVar4 = rcos(iVar7);
        iVar4 = iVar11 * iVar4;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xfff;
        }
        local_68.vx = (short)local_30 + (short)(iVar4 >> 0xc);
        sVar8 = (short)iVar9;
        local_68.vy = (short)local_2c - *(short *)(param_1 + 0x42) * sVar8;
        iVar4 = rsin(iVar7);
        iVar4 = iVar11 * iVar4;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xfff;
        }
        local_68.vz = sVar1 + (short)(iVar4 >> 0xc);
        iVar4 = rcos(iVar6);
        iVar4 = iVar11 * iVar4;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xfff;
        }
        local_60.vx = (short)local_30 + (short)(iVar4 >> 0xc);
        local_60.vy = (short)local_2c - *(short *)(param_1 + 0x42) * sVar8;
        iVar4 = rsin(iVar6);
        iVar4 = iVar11 * iVar4;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xfff;
        }
        local_60.vz = sVar1 + (short)(iVar4 >> 0xc);
        iVar4 = rcos(iVar7);
        iVar4 = iVar12 * iVar4;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xfff;
        }
        local_58.vx = (short)local_30 + (short)(iVar4 >> 0xc);
        local_58.vy = (short)local_2c - (*(short *)(param_1 + 0x42) * sVar8 + 0x14);
        iVar4 = rsin(iVar7);
        iVar4 = iVar12 * iVar4;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xfff;
        }
        local_58.vz = sVar1 + (short)(iVar4 >> 0xc);
        iVar4 = rcos(iVar6);
        iVar4 = iVar12 * iVar4;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xfff;
        }
        local_50.vx = (short)local_30 + (short)(iVar4 >> 0xc);
        local_50.vy = (short)local_2c - (*(short *)(param_1 + 0x42) * sVar8 + 0x14);
        iVar4 = rsin(iVar6);
        iVar4 = iVar12 * iVar4;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xfff;
        }
        local_50.vz = sVar1 + (short)(iVar4 >> 0xc);
        RotTransPers4(&local_50,&local_58,&local_60,&local_68,(long *)&local_48,(long *)&local_44,
                      (long *)&local_40,(long *)&local_3c,&lStack_38,&lStack_34);
        if (*(short *)(param_1 + 0x3a) == -1) {
          iVar4 = *(int *)(DAT_8008ed68 + 0x1090);
          uVar5 = 0;
          if ((iVar4 != 0) && (iVar4 + 0x24U <= DAT_8008ed68 + 0x4594U)) {
            uVar5 = iVar4 + 0x24U;
          }
          *(uint *)(DAT_8008ed68 + 0x1090) = uVar5;
          SetPolyG4(iVar4);
          *(undefined1 *)(iVar4 + 4) = *(undefined1 *)(param_1 + 0x30);
          *(undefined1 *)(iVar4 + 5) = *(undefined1 *)(param_1 + 0x31);
          *(undefined1 *)(iVar4 + 6) = *(undefined1 *)(param_1 + 0x32);
          *(undefined1 *)(iVar4 + 0xc) = *(undefined1 *)(param_1 + 0x30);
          *(undefined1 *)(iVar4 + 0xd) = *(undefined1 *)(param_1 + 0x31);
          *(undefined1 *)(iVar4 + 0xe) = *(undefined1 *)(param_1 + 0x32);
          *(undefined1 *)(iVar4 + 0x14) = *(undefined1 *)(param_1 + 0x34);
          *(undefined1 *)(iVar4 + 0x15) = *(undefined1 *)(param_1 + 0x35);
          *(undefined1 *)(iVar4 + 0x16) = *(undefined1 *)(param_1 + 0x36);
          *(undefined1 *)(iVar4 + 0x1c) = *(undefined1 *)(param_1 + 0x34);
          *(undefined1 *)(iVar4 + 0x1d) = *(undefined1 *)(param_1 + 0x35);
          *(undefined1 *)(iVar4 + 0x1e) = *(undefined1 *)(param_1 + 0x36);
          SetSemiTrans(iVar4,*(undefined1 *)(param_1 + 0x40));
          *(undefined2 *)(iVar4 + 8) = local_3c;
          *(undefined2 *)(iVar4 + 10) = local_3a;
          *(undefined2 *)(iVar4 + 0x10) = local_40;
          *(undefined2 *)(iVar4 + 0x12) = local_3e;
          *(undefined2 *)(iVar4 + 0x18) = local_44;
          *(undefined2 *)(iVar4 + 0x1a) = local_42;
          *(undefined2 *)(iVar4 + 0x20) = local_48;
          *(undefined2 *)(iVar4 + 0x22) = local_46;
          iVar7 = iVar7 - (*(int *)(param_1 + 0x54) + -0x1000);
          iVar6 = iVar7;
          if (iVar7 < 0) {
            iVar6 = iVar7 + 0xfff;
          }
          if (iVar7 + (iVar6 >> 0xc) * -0x1000 < 0x801) {
LAB_800fd250:
            iVar7 = *(int *)(param_1 + 0x4c) * 4 + DAT_8008ed68 + 0x74;
          }
          else {
            iVar7 = (DAT_8008ed68 + *(int *)(param_1 + 0x4c) * 4 + 0x70) -
                    (((int)*(short *)(param_1 + 0x46) / 7) * 0x10000 >> 0xe);
          }
        }
        else {
          iVar4 = *(int *)(DAT_8008ed68 + 0x1090);
          uVar5 = 0;
          if ((iVar4 != 0) && (iVar4 + 0x34U <= DAT_8008ed68 + 0x4594U)) {
            uVar5 = iVar4 + 0x34U;
          }
          *(uint *)(DAT_8008ed68 + 0x1090) = uVar5;
          SetPolyGT4(iVar4);
          *(undefined1 *)(iVar4 + 4) = *(undefined1 *)(param_1 + 0x30);
          *(undefined1 *)(iVar4 + 5) = *(undefined1 *)(param_1 + 0x31);
          *(undefined1 *)(iVar4 + 6) = *(undefined1 *)(param_1 + 0x32);
          *(undefined1 *)(iVar4 + 0x10) = *(undefined1 *)(param_1 + 0x30);
          *(undefined1 *)(iVar4 + 0x11) = *(undefined1 *)(param_1 + 0x31);
          *(undefined1 *)(iVar4 + 0x12) = *(undefined1 *)(param_1 + 0x32);
          *(undefined1 *)(iVar4 + 0x1c) = *(undefined1 *)(param_1 + 0x34);
          *(undefined1 *)(iVar4 + 0x1d) = *(undefined1 *)(param_1 + 0x35);
          *(undefined1 *)(iVar4 + 0x1e) = *(undefined1 *)(param_1 + 0x36);
          *(undefined1 *)(iVar4 + 0x28) = *(undefined1 *)(param_1 + 0x34);
          *(undefined1 *)(iVar4 + 0x29) = *(undefined1 *)(param_1 + 0x35);
          *(undefined1 *)(iVar4 + 0x2a) = *(undefined1 *)(param_1 + 0x36);
          SetSemiTrans(iVar4,*(undefined1 *)(param_1 + 0x40));
          *(undefined2 *)(iVar4 + 8) = local_3c;
          *(undefined2 *)(iVar4 + 10) = local_3a;
          *(undefined2 *)(iVar4 + 0x14) = local_40;
          *(undefined2 *)(iVar4 + 0x16) = local_3e;
          *(undefined2 *)(iVar4 + 0x20) = local_44;
          *(undefined2 *)(iVar4 + 0x22) = local_42;
          *(undefined2 *)(iVar4 + 0x2c) = local_48;
          *(undefined2 *)(iVar4 + 0x2e) = local_46;
          *(undefined2 *)(iVar4 + 0x1a) = *(undefined2 *)(param_1 + 0x3a);
          *(undefined2 *)(iVar4 + 0xe) = *(undefined2 *)(param_1 + 0x3c);
          *(undefined1 *)(iVar4 + 0xc) = *(undefined1 *)(param_1 + 0x3e);
          *(undefined1 *)(iVar4 + 0xd) = *(undefined1 *)(param_1 + 0x3f);
          *(s8 *)(iVar4 + 0x18) = *(s8 *)(param_1 + 0x3e) + '@';
          *(undefined1 *)(iVar4 + 0x19) = *(undefined1 *)(param_1 + 0x3f);
          *(undefined1 *)(iVar4 + 0x24) = *(undefined1 *)(param_1 + 0x3e);
          *(s8 *)(iVar4 + 0x25) = *(s8 *)(param_1 + 0x3f) + '@';
          *(s8 *)(iVar4 + 0x30) = *(s8 *)(param_1 + 0x3e) + '@';
          *(s8 *)(iVar4 + 0x31) = *(s8 *)(param_1 + 0x3f) + '@';
          iVar7 = iVar7 - (*(int *)(param_1 + 0x54) + -0x1000);
          iVar6 = iVar7;
          if (iVar7 < 0) {
            iVar6 = iVar7 + 0xfff;
          }
          if (iVar7 + (iVar6 >> 0xc) * -0x1000 < 0x801) goto LAB_800fd250;
          iVar7 = (DAT_8008ed68 + *(int *)(param_1 + 0x4c) * 4 + 0x70) -
                  (((int)*(short *)(param_1 + 0x46) / 7) * 0x10000 >> 0xe);
        }
        iVar13 = iVar13 + 1;
        AddPrim(iVar7,iVar4);
        iVar4 = iVar13 * 0x1000;
      } while (iVar13 < (int)uVar10);
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 2);
  iVar9 = 0;
  if (uVar10 * 3 != 0) {
    sVar8 = (short)local_2c + -0x14;
    iVar13 = 0;
    do {
      iVar4 = (iVar13 / (int)uVar10) / 3 + (int)*(short *)(param_1 + 0x48);
      iVar11 = iVar4 + (0x1000 / uVar10) / 7;
      iVar13 = rcos(iVar4);
      iVar13 = *(short *)(param_1 + 0x44) * iVar13;
      if (iVar13 < 0) {
        iVar13 = iVar13 + 0xfff;
      }
      local_68.vx = (short)local_30 + (short)(iVar13 >> 0xc);
      local_68.vy = (short)local_2c - *(short *)(param_1 + 0x42);
      iVar13 = rsin(iVar4);
      iVar13 = *(short *)(param_1 + 0x44) * iVar13;
      if (iVar13 < 0) {
        iVar13 = iVar13 + 0xfff;
      }
      local_68.vz = sVar1 + (short)(iVar13 >> 0xc);
      iVar13 = rcos(iVar11);
      iVar13 = *(short *)(param_1 + 0x44) * iVar13;
      if (iVar13 < 0) {
        iVar13 = iVar13 + 0xfff;
      }
      local_60.vx = (short)local_30 + (short)(iVar13 >> 0xc);
      local_60.vy = (short)local_2c - *(short *)(param_1 + 0x42);
      iVar13 = rsin(iVar11);
      iVar13 = *(short *)(param_1 + 0x44) * iVar13;
      if (iVar13 < 0) {
        iVar13 = iVar13 + 0xfff;
      }
      local_60.vz = sVar1 + (short)(iVar13 >> 0xc);
      iVar13 = rcos(iVar4);
      iVar13 = *(short *)(param_1 + 0x44) * iVar13;
      if (iVar13 < 0) {
        iVar13 = iVar13 + 0xfff;
      }
      local_58.vx = (short)local_30 + (short)(iVar13 >> 0xc);
      local_58.vy = sVar8;
      iVar13 = rsin(iVar4);
      iVar13 = *(short *)(param_1 + 0x44) * iVar13;
      if (iVar13 < 0) {
        iVar13 = iVar13 + 0xfff;
      }
      local_58.vz = sVar1 + (short)(iVar13 >> 0xc);
      iVar13 = rcos(iVar11);
      iVar13 = *(short *)(param_1 + 0x44) * iVar13;
      if (iVar13 < 0) {
        iVar13 = iVar13 + 0xfff;
      }
      local_50.vx = (short)local_30 + (short)(iVar13 >> 0xc);
      local_50.vy = sVar8;
      iVar13 = rsin(iVar11);
      iVar13 = *(short *)(param_1 + 0x44) * iVar13;
      if (iVar13 < 0) {
        iVar13 = iVar13 + 0xfff;
      }
      local_50.vz = sVar1 + (short)(iVar13 >> 0xc);
      RotTransPers4(&local_50,&local_58,&local_60,&local_68,(long *)&local_48,(long *)&local_44,
                    (long *)&local_40,(long *)&local_3c,&lStack_38,&lStack_34);
      if (*(short *)(param_1 + 0x3a) == -1) {
        iVar13 = *(int *)(DAT_8008ed68 + 0x1090);
        uVar5 = 0;
        if ((iVar13 != 0) && (iVar13 + 0x24U <= DAT_8008ed68 + 0x4594U)) {
          uVar5 = iVar13 + 0x24U;
        }
        *(uint *)(DAT_8008ed68 + 0x1090) = uVar5;
        SetPolyG4(iVar13);
        *(undefined1 *)(iVar13 + 4) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)(iVar13 + 5) = *(undefined1 *)(param_1 + 0x31);
        *(undefined1 *)(iVar13 + 6) = *(undefined1 *)(param_1 + 0x32);
        *(undefined1 *)(iVar13 + 0xc) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)(iVar13 + 0xd) = *(undefined1 *)(param_1 + 0x31);
        *(undefined1 *)(iVar13 + 0xe) = *(undefined1 *)(param_1 + 0x32);
        *(undefined1 *)(iVar13 + 0x14) = *(undefined1 *)(param_1 + 0x34);
        *(undefined1 *)(iVar13 + 0x15) = *(undefined1 *)(param_1 + 0x35);
        *(undefined1 *)(iVar13 + 0x16) = *(undefined1 *)(param_1 + 0x36);
        *(undefined1 *)(iVar13 + 0x1c) = *(undefined1 *)(param_1 + 0x34);
        *(undefined1 *)(iVar13 + 0x1d) = *(undefined1 *)(param_1 + 0x35);
        *(undefined1 *)(iVar13 + 0x1e) = *(undefined1 *)(param_1 + 0x36);
        SetSemiTrans(iVar13,*(undefined1 *)(param_1 + 0x40));
        *(undefined2 *)(iVar13 + 8) = local_3c;
        *(undefined2 *)(iVar13 + 10) = local_3a;
        *(undefined2 *)(iVar13 + 0x10) = local_40;
        *(undefined2 *)(iVar13 + 0x12) = local_3e;
        *(undefined2 *)(iVar13 + 0x18) = local_44;
        *(undefined2 *)(iVar13 + 0x1a) = local_42;
        *(undefined2 *)(iVar13 + 0x20) = local_48;
        *(undefined2 *)(iVar13 + 0x22) = local_46;
        iVar4 = iVar4 - (*(int *)(param_1 + 0x54) + -0x1000);
        iVar11 = iVar4;
        if (iVar4 < 0) {
          iVar11 = iVar4 + 0xfff;
        }
        if (iVar4 + (iVar11 >> 0xc) * -0x1000 < 0x801) {
LAB_800fd914:
          iVar4 = *(int *)(param_1 + 0x4c) * 4 + DAT_8008ed68 + 0x74;
        }
        else {
          iVar4 = (DAT_8008ed68 + *(int *)(param_1 + 0x4c) * 4 + 0x70) -
                  (((int)*(short *)(param_1 + 0x46) / 7) * 0x10000 >> 0xe);
        }
      }
      else {
        iVar13 = *(int *)(DAT_8008ed68 + 0x1090);
        uVar5 = 0;
        if ((iVar13 != 0) && (iVar13 + 0x34U <= DAT_8008ed68 + 0x4594U)) {
          uVar5 = iVar13 + 0x34U;
        }
        *(uint *)(DAT_8008ed68 + 0x1090) = uVar5;
        SetPolyGT4(iVar13);
        *(undefined1 *)(iVar13 + 4) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)(iVar13 + 5) = *(undefined1 *)(param_1 + 0x31);
        *(undefined1 *)(iVar13 + 6) = *(undefined1 *)(param_1 + 0x32);
        *(undefined1 *)(iVar13 + 0x10) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)(iVar13 + 0x11) = *(undefined1 *)(param_1 + 0x31);
        *(undefined1 *)(iVar13 + 0x12) = *(undefined1 *)(param_1 + 0x32);
        *(undefined1 *)(iVar13 + 0x1c) = *(undefined1 *)(param_1 + 0x34);
        *(undefined1 *)(iVar13 + 0x1d) = *(undefined1 *)(param_1 + 0x35);
        *(undefined1 *)(iVar13 + 0x1e) = *(undefined1 *)(param_1 + 0x36);
        *(undefined1 *)(iVar13 + 0x28) = *(undefined1 *)(param_1 + 0x34);
        *(undefined1 *)(iVar13 + 0x29) = *(undefined1 *)(param_1 + 0x35);
        *(undefined1 *)(iVar13 + 0x2a) = *(undefined1 *)(param_1 + 0x36);
        SetSemiTrans(iVar13,*(undefined1 *)(param_1 + 0x40));
        *(undefined2 *)(iVar13 + 8) = local_3c;
        *(undefined2 *)(iVar13 + 10) = local_3a;
        *(undefined2 *)(iVar13 + 0x14) = local_40;
        *(undefined2 *)(iVar13 + 0x16) = local_3e;
        *(undefined2 *)(iVar13 + 0x20) = local_44;
        *(undefined2 *)(iVar13 + 0x22) = local_42;
        *(undefined2 *)(iVar13 + 0x2c) = local_48;
        *(undefined2 *)(iVar13 + 0x2e) = local_46;
        *(undefined2 *)(iVar13 + 0x1a) = *(undefined2 *)(param_1 + 0x3a);
        *(undefined2 *)(iVar13 + 0xe) = *(undefined2 *)(param_1 + 0x3c);
        *(undefined1 *)(iVar13 + 0xc) = *(undefined1 *)(param_1 + 0x3e);
        *(undefined1 *)(iVar13 + 0xd) = *(undefined1 *)(param_1 + 0x3f);
        *(s8 *)(iVar13 + 0x18) = *(s8 *)(param_1 + 0x3e) + '@';
        *(undefined1 *)(iVar13 + 0x19) = *(undefined1 *)(param_1 + 0x3f);
        *(undefined1 *)(iVar13 + 0x24) = *(undefined1 *)(param_1 + 0x3e);
        *(s8 *)(iVar13 + 0x25) = *(s8 *)(param_1 + 0x3f) + '@';
        *(s8 *)(iVar13 + 0x30) = *(s8 *)(param_1 + 0x3e) + '@';
        *(s8 *)(iVar13 + 0x31) = *(s8 *)(param_1 + 0x3f) + '@';
        iVar4 = iVar4 - (*(int *)(param_1 + 0x54) + -0x1000);
        iVar11 = iVar4;
        if (iVar4 < 0) {
          iVar11 = iVar4 + 0xfff;
        }
        if (iVar4 + (iVar11 >> 0xc) * -0x1000 < 0x801) goto LAB_800fd914;
        iVar4 = (DAT_8008ed68 + *(int *)(param_1 + 0x4c) * 4 + 0x70) -
                (((int)*(short *)(param_1 + 0x46) / 7) * 0x10000 >> 0xe);
      }
      iVar9 = iVar9 + 1;
      AddPrim(iVar4,iVar13);
      iVar13 = iVar9 * 0x1000;
    } while (iVar9 < (int)(uVar10 * 3));
  }
  if (*(short *)(param_1 + 0x3a) == -1) {
    uVar3 = GetTPage(0,1,0,0);
    func_80018610(uVar3,*(int *)(param_1 + 0x4c) + 1);
    uVar3 = GetTPage(0,1,0,0);
    func_80018610(uVar3,*(int *)(param_1 + 0x4c) -
                        (((int)*(short *)(param_1 + 0x46) / 7) * 0x10000 >> 0x10));
  }
  return;
}

#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_46
#undef local_44
#undef local_42
#undef local_40
#undef local_3e
#undef local_3c
#undef local_3a
#undef lStack_38
#undef lStack_34
#undef local_30
#undef local_2c
