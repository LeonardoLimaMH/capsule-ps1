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
#define DAT_8011974d (*(s8 *)0x8011974D)
extern s32 AddPrim();
extern s32 GetTPage();
extern s32 RotTransPers();
extern s32 RotTransPers4();
extern s32 SetPolyF4();
extern s32 SetPolyFT4();
extern s32 SetSemiTrans();
#define func_80018610 ((s32 (*)())0x80018610)
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
extern s32 rcos();
extern s32 rsin();
void func_800FB650(int param_1)

{
  union { u64 align; u8 bytes[0x78]; } recovered_local_frame;
#define local_78 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x0))
#define local_70 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x8))
#define local_68 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x10))
#define local_60 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x18))
#define local_58 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x20))
#define local_56 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x22))
#define lStack_54 (*(long volatile *)(recovered_local_frame.bytes + 0x24))
#define lStack_50 (*(long volatile *)(recovered_local_frame.bytes + 0x28))
#define local_4c (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2C))
#define local_4a (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2E))
#define local_48 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x30))
#define local_46 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x32))
#define local_44 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x34))
#define local_42 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x36))
#define local_40 (*(int volatile *)(recovered_local_frame.bytes + 0x38))
#define local_3c (*(int volatile *)(recovered_local_frame.bytes + 0x3C))
#define local_38 (*(int volatile *)(recovered_local_frame.bytes + 0x40))
#define local_34 (*(int volatile *)(recovered_local_frame.bytes + 0x44))
#define local_30 (*(int volatile *)(recovered_local_frame.bytes + 0x48))

  short sVar1;
  short sVar2;
  undefined2 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  s8 cVar12;




















  iVar11 = 0;
  local_34 = (*(byte *)(param_1 + 0x46) & 1) << 6;
  sVar1 = *(short *)(param_1 + 0x28);
  local_40 = (int)*(short *)(param_1 + 0x2a);
  sVar2 = *(short *)(param_1 + 0x2c);
  iVar9 = (int)*(short *)(param_1 + 0x36);
  local_3c = (int)*(short *)(param_1 + 0x3c);
  uVar10 = (uint)*(byte *)(param_1 + 0x34);
  cVar12 = (*(byte *)(param_1 + 0x46) >> 1) * '@';
  func_8002CEC0(&DAT_800906a0);
  DAT_8011974d = 1;
  *(short *)(param_1 + 0x38) = *(short *)(param_1 + 0x38) + *(short *)(param_1 + 0x3e);
  lVar4 = RotTransPers((SVECTOR *)(param_1 + 0x28),(long *)&local_58,&lStack_54,&lStack_50);
  local_38 = lVar4 + -0x14;
  if (uVar10 != 0) {
    local_30 = local_38 * 4 + 0x70;
    iVar5 = 0;
    do {
      iVar7 = iVar5 / (int)uVar10 + (int)*(short *)(param_1 + 0x38);
      iVar8 = iVar7 + 0x1000 / uVar10;
      iVar5 = rcos(iVar7);
      iVar5 = iVar9 * iVar5;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xfff;
      }
      local_78.vx = sVar1 + (short)(iVar5 >> 0xc);
      local_78.vy = (short)local_40;
      iVar5 = rsin(iVar7);
      iVar5 = iVar9 * iVar5;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xfff;
      }
      local_78.vz = sVar2 + (short)(iVar5 >> 0xc);
      iVar5 = rcos(iVar8);
      iVar5 = iVar9 * iVar5;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xfff;
      }
      local_70.vx = sVar1 + (short)(iVar5 >> 0xc);
      local_70.vy = (short)local_40;
      iVar5 = rsin(iVar8);
      iVar5 = iVar9 * iVar5;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xfff;
      }
      local_70.vz = sVar2 + (short)(iVar5 >> 0xc);
      iVar7 = iVar7 + local_3c;
      iVar5 = rcos(iVar7);
      iVar5 = iVar9 * iVar5;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xfff;
      }
      local_68.vx = sVar1 + (short)(iVar5 >> 0xc);
      local_68.vy = local_78.vy - *(short *)(param_1 + 0x3a);
      iVar5 = rsin(iVar7);
      iVar5 = iVar9 * iVar5;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xfff;
      }
      local_68.vz = sVar2 + (short)(iVar5 >> 0xc);
      iVar8 = iVar8 + local_3c;
      iVar5 = rcos(iVar8);
      iVar5 = iVar9 * iVar5;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xfff;
      }
      local_60.vx = sVar1 + (short)(iVar5 >> 0xc);
      local_60.vy = local_70.vy - *(short *)(param_1 + 0x3a);
      iVar5 = rsin(iVar8);
      iVar5 = iVar9 * iVar5;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xfff;
      }
      local_60.vz = sVar2 + (short)(iVar5 >> 0xc);
      RotTransPers4(&local_60,&local_68,&local_70,&local_78,(long *)&local_4c,(long *)&local_48,
                    (long *)&local_44,(long *)&local_58,&lStack_54,&lStack_50);
      if (*(short *)(param_1 + 0x42) == -1) {
        uVar3 = GetTPage(0,1,0,0);
        iVar5 = *(int *)(DAT_8008ed68 + 0x1090);
        uVar6 = 0;
        if ((iVar5 != 0) && (iVar5 + 0x18U <= DAT_8008ed68 + 0x4594U)) {
          uVar6 = iVar5 + 0x18U;
        }
        *(uint *)(DAT_8008ed68 + 0x1090) = uVar6;
        SetPolyF4(iVar5);
        *(undefined1 *)(iVar5 + 4) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)(iVar5 + 5) = *(undefined1 *)(param_1 + 0x31);
        *(undefined1 *)(iVar5 + 6) = *(undefined1 *)(param_1 + 0x32);
        SetSemiTrans(iVar5,*(undefined1 *)(param_1 + 0x40));
        *(undefined2 *)(iVar5 + 8) = local_58;
        *(undefined2 *)(iVar5 + 10) = local_56;
        *(undefined2 *)(iVar5 + 0xc) = local_44;
        *(undefined2 *)(iVar5 + 0xe) = local_42;
        *(undefined2 *)(iVar5 + 0x10) = local_48;
        *(undefined2 *)(iVar5 + 0x12) = local_46;
        *(undefined2 *)(iVar5 + 0x14) = local_4c;
        *(undefined2 *)(iVar5 + 0x16) = local_4a;
        AddPrim(DAT_8008ed68 + local_30,iVar5);
        func_80018610(uVar3,local_38);
      }
      else {
        iVar5 = *(int *)(DAT_8008ed68 + 0x1090);
        uVar6 = 0;
        if ((iVar5 != 0) && (iVar5 + 0x28U <= DAT_8008ed68 + 0x4594U)) {
          uVar6 = iVar5 + 0x28U;
        }
        *(uint *)(DAT_8008ed68 + 0x1090) = uVar6;
        SetPolyFT4(iVar5);
        *(undefined1 *)(iVar5 + 4) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)(iVar5 + 5) = *(undefined1 *)(param_1 + 0x31);
        *(undefined1 *)(iVar5 + 6) = *(undefined1 *)(param_1 + 0x32);
        SetSemiTrans(iVar5,*(undefined1 *)(param_1 + 0x40));
        *(undefined2 *)(iVar5 + 8) = local_58;
        *(undefined2 *)(iVar5 + 10) = local_56;
        *(undefined2 *)(iVar5 + 0x10) = local_44;
        *(undefined2 *)(iVar5 + 0x12) = local_42;
        *(undefined2 *)(iVar5 + 0x18) = local_48;
        *(undefined2 *)(iVar5 + 0x1a) = local_46;
        *(undefined2 *)(iVar5 + 0x20) = local_4c;
        *(undefined2 *)(iVar5 + 0x22) = local_4a;
        *(undefined2 *)(iVar5 + 0x16) = *(undefined2 *)(param_1 + 0x42);
        uVar3 = *(undefined2 *)(param_1 + 0x44);
        *(s8 *)(iVar5 + 0xd) = cVar12;
        *(s8 *)(iVar5 + 0xc) = (s8)local_34;
        *(s8 *)(iVar5 + 0x15) = cVar12;
        *(s8 *)(iVar5 + 0x14) = (s8)local_34 + '@';
        *(s8 *)(iVar5 + 0x1d) = cVar12 + '@';
        *(s8 *)(iVar5 + 0x24) = (s8)local_34 + '@';
        *(s8 *)(iVar5 + 0x25) = cVar12 + '@';
        *(undefined2 *)(iVar5 + 0xe) = uVar3;
        *(s8 *)(iVar5 + 0x1c) = (s8)local_34;
        AddPrim(DAT_8008ed68 + local_30,iVar5);
      }
      iVar11 = iVar11 + 1;
      iVar5 = iVar11 * 0x1000;
    } while (iVar11 < (int)uVar10);
  }
  return;
}

#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_56
#undef lStack_54
#undef lStack_50
#undef local_4c
#undef local_4a
#undef local_48
#undef local_46
#undef local_44
#undef local_42
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
