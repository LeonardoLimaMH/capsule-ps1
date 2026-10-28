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
/* real-callee: func_800FF190 */
/* real-callee: func_800FF2CC */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ed68 (*(s32 *)0x8008ED68)
#define DAT_800906a0 (*(s32 *)0x800906A0)
#define DAT_8011974d (*(u8 *)0x8011974D)
extern s32 AddPrim();
extern s32 RotAverage3();
extern s32 RotTransPers();
extern s32 SetPolyG3();
extern s32 SetPolyGT3();
extern s32 SetSemiTrans();
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
extern s32 rcos();
extern s32 rsin();
void func_800F68C8(int param_1)

{
  union { u64 align; u8 bytes[0x48]; } recovered_local_frame;
#define local_70 (*(short volatile *)(recovered_local_frame.bytes + 0x0))
#define local_6e (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2))
#define local_6c (*(short volatile *)(recovered_local_frame.bytes + 0x4))
#define local_68 (*(short volatile *)(recovered_local_frame.bytes + 0x8))
#define local_66 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0xA))
#define local_64 (*(short volatile *)(recovered_local_frame.bytes + 0xC))
#define local_60 (*(short volatile *)(recovered_local_frame.bytes + 0x10))
#define local_5e (*(short volatile *)(recovered_local_frame.bytes + 0x12))
#define local_5c (*(short volatile *)(recovered_local_frame.bytes + 0x14))
#define local_58 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x18))
#define local_56 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x1A))
#define lStack_54 (*(long volatile *)(recovered_local_frame.bytes + 0x1C))
#define lStack_50 (*(long volatile *)(recovered_local_frame.bytes + 0x20))
#define local_4c (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x24))
#define local_4a (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x26))
#define local_48 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x28))
#define local_46 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2A))
#define local_44 (*(int volatile *)(recovered_local_frame.bytes + 0x2C))
#define local_40 (*(int volatile *)(recovered_local_frame.bytes + 0x30))
#define local_3c (*(int volatile *)(recovered_local_frame.bytes + 0x34))
#define local_38 (*(int volatile *)(recovered_local_frame.bytes + 0x38))
#define local_34 (*(long volatile *)(recovered_local_frame.bytes + 0x3C))
#define local_30 (*(int volatile *)(recovered_local_frame.bytes + 0x40))

  s8 cVar1;
  s8 cVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
























  local_44 = (int)*(short *)(param_1 + 0x28);
  local_40 = (int)*(short *)(param_1 + 0x2a);
  local_3c = (int)*(short *)(param_1 + 0x2c);
  iVar9 = (int)*(short *)(param_1 + 0x3e);
  if (DAT_8011974d == '\0') {
    func_8002CEC0(&DAT_800906a0);
    DAT_8011974d = '\x01';
  }
  local_34 = RotTransPers((SVECTOR *)(param_1 + 0x28),(long *)&local_58,&lStack_54,&lStack_50);
  uVar5 = (uint)*(byte *)(param_1 + 0x3c);
  local_38 = (int)*(short *)(param_1 + 0x44);
  iVar11 = (int)*(short *)(param_1 + 0x40);
  iVar10 = 0;
  if (uVar5 != 0) {
    local_30 = local_34 * 4 + 0x70;
    iVar4 = 0;
    do {
      iVar6 = iVar4 / (int)uVar5 + (int)*(short *)(param_1 + 0x42);
      iVar7 = iVar6 + 0x1000 / uVar5;
      iVar8 = (iVar6 + iVar7) / 2;
      iVar4 = rcos(iVar6);
      iVar4 = iVar9 * iVar4;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      local_70 = (short)local_44 + (short)(iVar4 >> 0xc);
      local_6e = (undefined2)local_40;
      iVar4 = rsin(iVar6);
      iVar4 = iVar9 * iVar4;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      local_6c = (short)local_3c + (short)(iVar4 >> 0xc);
      iVar4 = rcos(iVar7);
      iVar4 = iVar9 * iVar4;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      local_68 = (short)local_44 + (short)(iVar4 >> 0xc);
      local_66 = (undefined2)local_40;
      iVar4 = rsin(iVar7);
      iVar4 = iVar9 * iVar4;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      local_64 = (short)local_3c + (short)(iVar4 >> 0xc);
      iVar4 = rcos(local_38);
      iVar6 = rcos(iVar8);
      iVar4 = iVar11 * iVar4;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      iVar6 = (iVar9 - (iVar4 >> 0xc)) * iVar6;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xfff;
      }
      local_60 = (short)local_44 + (short)(iVar6 >> 0xc);
      iVar4 = rsin(local_38);
      iVar4 = iVar11 * iVar4;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      local_5e = (short)local_40 - (short)(iVar4 >> 0xc);
      iVar4 = rcos(local_38);
      iVar6 = rsin(iVar8);
      iVar4 = iVar11 * iVar4;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      iVar6 = (iVar9 - (iVar4 >> 0xc)) * iVar6;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xfff;
      }
      local_5c = (short)local_3c + (short)(iVar6 >> 0xc);
      iVar4 = RotAverage3(&local_70,&local_68,&local_60,&local_58,&local_4c,&local_48,&lStack_54,
                          &lStack_50);
      uVar5 = 0;
      if (*(short *)(param_1 + 0x48) == -1) {
        iVar6 = *(int *)(DAT_8008ed68 + 0x1090);
        if ((iVar6 != 0) && (iVar6 + 0x1cU <= DAT_8008ed68 + 0x4594U)) {
          uVar5 = iVar6 + 0x1cU;
        }
        *(uint *)(DAT_8008ed68 + 0x1090) = uVar5;
        SetPolyG3(iVar6);
        *(undefined1 *)(iVar6 + 4) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)(iVar6 + 5) = *(undefined1 *)(param_1 + 0x31);
        *(undefined1 *)(iVar6 + 6) = *(undefined1 *)(param_1 + 0x32);
        *(undefined1 *)(iVar6 + 0xc) = *(undefined1 *)(param_1 + 0x34);
        *(undefined1 *)(iVar6 + 0xd) = *(undefined1 *)(param_1 + 0x35);
        *(undefined1 *)(iVar6 + 0xe) = *(undefined1 *)(param_1 + 0x36);
        *(undefined1 *)(iVar6 + 0x14) = *(undefined1 *)(param_1 + 0x38);
        *(undefined1 *)(iVar6 + 0x15) = *(undefined1 *)(param_1 + 0x39);
        *(undefined1 *)(iVar6 + 0x16) = *(undefined1 *)(param_1 + 0x3a);
        *(undefined2 *)(iVar6 + 8) = local_58;
        *(undefined2 *)(iVar6 + 10) = local_56;
        *(undefined2 *)(iVar6 + 0x10) = local_4c;
        *(undefined2 *)(iVar6 + 0x12) = local_4a;
        *(undefined2 *)(iVar6 + 0x18) = local_48;
        *(undefined2 *)(iVar6 + 0x1a) = local_46;
        SetSemiTrans(iVar6,*(undefined1 *)(param_1 + 0x4c));
        if (local_34 < iVar4) {
          iVar4 = DAT_8008ed68 + local_30 + -4;
        }
        else {
LAB_800f6e10:
          iVar4 = DAT_8008ed68 + iVar4 * 4 + 0x70;
        }
      }
      else {
        cVar1 = *(s8 *)(param_1 + 0x4d);
        iVar6 = *(int *)(DAT_8008ed68 + 0x1090);
        cVar2 = *(s8 *)(param_1 + 0x4e);
        if ((iVar6 != 0) && (iVar6 + 0x28U <= DAT_8008ed68 + 0x4594U)) {
          uVar5 = iVar6 + 0x28U;
        }
        *(uint *)(DAT_8008ed68 + 0x1090) = uVar5;
        SetPolyGT3(iVar6);
        *(undefined1 *)(iVar6 + 4) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)(iVar6 + 5) = *(undefined1 *)(param_1 + 0x31);
        *(undefined1 *)(iVar6 + 6) = *(undefined1 *)(param_1 + 0x32);
        *(undefined1 *)(iVar6 + 0x10) = *(undefined1 *)(param_1 + 0x34);
        *(undefined1 *)(iVar6 + 0x11) = *(undefined1 *)(param_1 + 0x35);
        *(undefined1 *)(iVar6 + 0x12) = *(undefined1 *)(param_1 + 0x36);
        *(undefined1 *)(iVar6 + 0x1c) = *(undefined1 *)(param_1 + 0x38);
        *(undefined1 *)(iVar6 + 0x1d) = *(undefined1 *)(param_1 + 0x39);
        *(undefined1 *)(iVar6 + 0x1e) = *(undefined1 *)(param_1 + 0x3a);
        *(undefined2 *)(iVar6 + 8) = local_58;
        *(undefined2 *)(iVar6 + 10) = local_56;
        *(undefined2 *)(iVar6 + 0x14) = local_4c;
        *(undefined2 *)(iVar6 + 0x16) = local_4a;
        *(undefined2 *)(iVar6 + 0x20) = local_48;
        *(undefined2 *)(iVar6 + 0x22) = local_46;
        SetSemiTrans(iVar6,*(undefined1 *)(param_1 + 0x4c));
        *(undefined2 *)(iVar6 + 0x1a) = *(undefined2 *)(param_1 + 0x48);
        uVar3 = *(undefined2 *)(param_1 + 0x4a);
        *(s8 *)(iVar6 + 0x18) = cVar1 + '@';
        *(s8 *)(iVar6 + 0xc) = cVar1;
        *(s8 *)(iVar6 + 0xd) = cVar2;
        *(s8 *)(iVar6 + 0x19) = cVar2;
        *(s8 *)(iVar6 + 0x24) = cVar1;
        *(s8 *)(iVar6 + 0x25) = cVar2 + '@';
        *(undefined2 *)(iVar6 + 0xe) = uVar3;
        if (iVar4 <= local_34) goto LAB_800f6e10;
        iVar4 = DAT_8008ed68 + local_30 + -4;
      }
      iVar10 = iVar10 + 1;
      AddPrim(iVar4,iVar6);
      uVar5 = (uint)*(byte *)(param_1 + 0x3c);
      iVar4 = iVar10 * 0x1000;
    } while (iVar10 < (int)uVar5);
  }
  *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + *(short *)(param_1 + 0x46);
  return;
}

#undef local_70
#undef local_6e
#undef local_6c
#undef local_68
#undef local_66
#undef local_64
#undef local_60
#undef local_5e
#undef local_5c
#undef local_58
#undef local_56
#undef lStack_54
#undef lStack_50
#undef local_4c
#undef local_4a
#undef local_48
#undef local_46
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
