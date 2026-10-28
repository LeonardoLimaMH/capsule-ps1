#include "common.h"

#include "common.h"

#include "common.h"

/* task-callback */
/* callee-contract: RotAverage4 */
/* rand-u16: 0x8008ED68 1 0 */
/* rand-u16: 0x8008ED6A 1 32786 */
/* rand-u16: 0x80121090 1 8192 */
/* rand-u16: 0x80121092 1 32786 */
/* rand-u16: 0x80130014 1 0 */
/* rand-u16: 0x80130016 1 32788 */
/* rand-u16: 0x80130038 1 4,5,8,12,16 */
/* rand-u16: 0x8013003A 1 8,16,32,64,128 */
/* rand-u16: 0x8013003C 1 8,16,32,64,128 */
/* rand-u16: 0x8013003E 1 0,1,2,15,255,4095 */
/* rand-u16: 0x80130042 1 0,1,2,255,65535 */
/* rand-u16: 0x8013004E 1 0,1,2,3,4,5,6,7,65535 */
/* rand-u16: 0x80130054 1 0,1,2,3,4,5,19,20,79,80,81,100 */
/* rand-u16: 0x80130056 1 0 */
/* rand-u16: 0x80130064 1 0,1,5,19,20,40,80,100 */
/* rand-u16: 0x80130066 1 0 */
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
/* real-callee: __adddf3 */
/* real-callee: __divdf3 */
/* real-callee: __fixdfsi */
/* real-callee: __floatsidf */
/* real-callee: __muldf3 */
/* real-callee: __negdf2 */
/* real-callee: __subdf3 */
/* real-callee: _add_mant_d */
/* real-callee: _comp_mant */
/* real-callee: _dbl_shift */
/* real-callee: _dbl_shift_us */
/* real-callee: _err_math */
/* real-callee: _mainasu */
/* real-callee: _mul_mant_d */
/* real-callee: func_80015D14 */
/* real-callee: func_8004FE2C */
/* real-callee: func_800DD428 */
/* real-callee: func_800DDA78 */
/* real-callee: func_800FE188 */
/* real-callee: func_800FE21C */
/* real-callee: func_800FE74C */
/* real-callee: func_800FEBF4 */
/* real-callee: func_800FEC2C */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF190 */
/* real-callee: func_800FF2CC */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FF460 */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* compiler: 2.8.1-psx */
/* rand-u16: 0x8013007A 1 0,1,2,3,4,5,6,7,8,9,10,15,31,65535 */
/* rand-u16: 0x8013003C 1 0,1,5,19,20,29,30,31,39,40,49,50,79,80,89,90,99,100,127,128,199 */
/* rand-u16: 0x8013003E 1 0 */
/* rand-u16: 0x80130070 1 4096 */
/* rand-u16: 0x80130072 1 32788 */
/* rand-u16: 0x80130074 1 8192 */
/* rand-u16: 0x80130076 1 32788 */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ed68 (*(s32 *)0x8008ED68)
#define DAT_800906a0 (*(s32 *)0x800906A0)
#define DAT_8011974d (*(u8 *)0x8011974D)
extern s32 AddPrim();
extern s32 RotTransPers();
extern s32 SetPolyFT4();
extern s32 SetPolyGT4();
extern s32 SetSemiTrans();
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
extern s32 rcos();
extern s32 rsin();
void func_800FC42C(int param_1)

{
  union { u64 align; u8 bytes[0x58]; } recovered_local_frame;
#define local_80 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x0))
#define local_78 (*(SVECTOR volatile (*)[3])(recovered_local_frame.bytes + 0x8))
#define local_60 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x20))
#define lStack_5c (*(long volatile *)(recovered_local_frame.bytes + 0x24))
#define lStack_58 (*(long volatile *)(recovered_local_frame.bytes + 0x28))
#define local_54 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x2C))
#define local_50 (*(int volatile *)(recovered_local_frame.bytes + 0x30))
#define local_4c (*(int volatile *)(recovered_local_frame.bytes + 0x34))
#define local_48 (*(int volatile *)(recovered_local_frame.bytes + 0x38))
#define local_44 (*(int volatile *)(recovered_local_frame.bytes + 0x3C))
#define local_40 (*(int volatile *)(recovered_local_frame.bytes + 0x40))
#define local_3c (*(long volatile *)(recovered_local_frame.bytes + 0x44))
#define local_38 (*(long volatile *)(recovered_local_frame.bytes + 0x48))
#define local_34 (*(long * volatile *)(recovered_local_frame.bytes + 0x4C))
#define local_30 (*(int volatile *)(recovered_local_frame.bytes + 0x50))

  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  void *primitive;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
















  local_44 = (*(byte *)(param_1 + 0x4a) & 1) << 6;
  local_40 = (uint)(*(byte *)(param_1 + 0x4a) >> 1) << 6;
  local_50 = (int)*(short *)(param_1 + 0x28);
  local_4c = (int)*(short *)(param_1 + 0x2a);
  local_48 = (int)*(short *)(param_1 + 0x2c);
  if (DAT_8011974d == '\0') {
    func_8002CEC0(&DAT_800906a0);
    DAT_8011974d = '\x01';
  }
  local_34 = &lStack_5c;
  iVar11 = 0;
  local_30 = local_44 + 0x40;
  *(short *)(param_1 + 0x3a) = *(short *)(param_1 + 0x3a) - *(short *)(param_1 + 0x3c);
  *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) - *(short *)(param_1 + 0x42);
  do {
    iVar12 = (iVar11 * *(short *)(param_1 + 0x3e)) / 0x90;
    iVar7 = (int)*(short *)(param_1 + 0x3a) + (iVar11 << 0xc) / 0xc;
    iVar10 = (int)*(short *)(param_1 + 0x36) +
             (*(short *)(param_1 + 0x38) * iVar11 * iVar11) / 0x5100;
    iVar8 = (int)*(short *)(param_1 + 0x40) + (iVar11 * *(short *)(param_1 + 0x44)) / 0x90;
    iVar3 = rsin(iVar7);
    iVar4 = rsin(iVar8);
    iVar3 = iVar10 * iVar3;
    iVar4 = iVar12 * iVar4;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xfff;
    }
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xfff;
    }
    local_80.vx = (short)local_50 + (short)(iVar3 >> 0xc) + (short)(iVar4 >> 0xc);
    local_80.vy = (short)local_4c - (short)((iVar11 * *(short *)(param_1 + 0x34)) / 0x90);
    iVar3 = rcos(iVar7);
    iVar4 = rcos(iVar8);
    iVar10 = iVar10 * iVar3;
    iVar12 = iVar12 * iVar4;
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xfff;
    }
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0xfff;
    }
    local_80.vz = (short)local_48 + (short)(iVar10 >> 0xc) + (short)(iVar12 >> 0xc);
    iVar7 = iVar11 + 0xc;
    iVar12 = (iVar7 * *(short *)(param_1 + 0x3e)) / 0x90;
    iVar8 = (int)*(short *)(param_1 + 0x3a) + (iVar7 * 0x1000) / 0xc;
    iVar10 = (int)*(short *)(param_1 + 0x36) + (*(short *)(param_1 + 0x38) * iVar7 * iVar7) / 0x5100
    ;
    iVar9 = (int)*(short *)(param_1 + 0x40) + (iVar7 * *(short *)(param_1 + 0x44)) / 0x90;
    iVar3 = rsin(iVar8);
    iVar4 = rsin(iVar9);
    iVar3 = iVar10 * iVar3;
    iVar4 = iVar12 * iVar4;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xfff;
    }
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xfff;
    }
    local_78[0].vx = (short)local_50 + (short)(iVar3 >> 0xc) + (short)(iVar4 >> 0xc);
    local_78[0].vy = (short)local_4c - (short)((iVar7 * *(short *)(param_1 + 0x34)) / 0x90);
    iVar3 = rcos(iVar8);
    iVar4 = rcos(iVar9);
    iVar10 = iVar10 * iVar3;
    iVar12 = iVar12 * iVar4;
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xfff;
    }
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0xfff;
    }
    local_78[0].vz = (short)local_48 + (short)(iVar10 >> 0xc) + (short)(iVar12 >> 0xc);
    RotTransPers(&local_80,&local_60,local_34,&lStack_58);
    lVar5 = RotTransPers(local_78,&local_54,local_34,&lStack_58);
    if (iVar11 != 0) {
      if (iVar11 < 0x84) {
        primitive = *(void **)(DAT_8008ed68 + 0x1090);
        uVar6 = 0;
        if ((primitive != (void *)0x0) && ((int)primitive + 0x28U <= DAT_8008ed68 + 0x4594U)) {
          uVar6 = (int)primitive + 0x28U;
        }
        *(uint *)(DAT_8008ed68 + 0x1090) = uVar6;
        SetPolyFT4(primitive);
        *(undefined1 *)((int)primitive + 4) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)((int)primitive + 5) = *(undefined1 *)(param_1 + 0x31);
        *(undefined1 *)((int)primitive + 6) = *(undefined1 *)(param_1 + 0x32);
        SetSemiTrans(primitive,1);
        *(undefined2 *)((int)primitive + 8) = (undefined2)local_60;
        *(undefined2 *)((int)primitive + 10) = (*(u16 *)((u8 *)&local_60 + 2));
        *(undefined2 *)((int)primitive + 0x10) = (undefined2)local_54;
        *(undefined2 *)((int)primitive + 0x18) = (undefined2)local_3c;
        *(short *)((int)primitive + 0x1a) = (short)((uint)local_3c >> 0x10);
        *(undefined2 *)((int)primitive + 0x20) = (undefined2)local_38;
        *(short *)((int)primitive + 0x22) = (short)((uint)local_38 >> 0x10);
        *(undefined2 *)((int)primitive + 0x12) = (*(u16 *)((u8 *)&local_54 + 2));
        *(undefined2 *)((int)primitive + 0x16) = *(undefined2 *)(param_1 + 0x46);
        uVar2 = *(undefined2 *)(param_1 + 0x48);
        *(undefined1 *)((int)primitive + 0xc) = (undefined1)local_44;
        *(s8 *)((int)primitive + 0xd) = (s8)local_40;
        *(undefined1 *)((int)primitive + 0x14) = (undefined1)local_30;
        *(s8 *)((int)primitive + 0x15) = (s8)local_40;
        *(undefined1 *)((int)primitive + 0x1c) = (undefined1)local_44;
        *(s8 *)((int)primitive + 0x1d) = (s8)local_40 + '@';
        *(s8 *)((int)primitive + 0x25) = (s8)local_40 + '@';
        *(undefined2 *)((int)primitive + 0xe) = uVar2;
        *(undefined1 *)((int)primitive + 0x24) = (undefined1)local_30;
      }
      else {
        primitive = *(void **)(DAT_8008ed68 + 0x1090);
        uVar6 = 0;
        if ((primitive != (void *)0x0) && ((int)primitive + 0x34U <= DAT_8008ed68 + 0x4594U)) {
          uVar6 = (int)primitive + 0x34U;
        }
        *(uint *)(DAT_8008ed68 + 0x1090) = uVar6;
        SetPolyGT4(primitive);
        if (iVar11 == 0x8f) {
          *(undefined1 *)((int)primitive + 4) = 0;
          *(undefined1 *)((int)primitive + 5) = 0;
          *(undefined1 *)((int)primitive + 6) = 0;
        }
        else {
          *(undefined1 *)((int)primitive + 4) = *(undefined1 *)(param_1 + 0x30);
          *(undefined1 *)((int)primitive + 5) = *(undefined1 *)(param_1 + 0x31);
          *(undefined1 *)((int)primitive + 6) = *(undefined1 *)(param_1 + 0x32);
        }
        *(undefined1 *)((int)primitive + 0x10) = 0;
        *(undefined1 *)((int)primitive + 0x11) = 0;
        *(undefined1 *)((int)primitive + 0x12) = 0;
        *(undefined1 *)((int)primitive + 0x1c) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)((int)primitive + 0x1d) = *(undefined1 *)(param_1 + 0x31);
        uVar1 = *(undefined1 *)(param_1 + 0x32);
        *(undefined1 *)((int)primitive + 0x28) = 0;
        *(undefined1 *)((int)primitive + 0x29) = 0;
        *(undefined1 *)((int)primitive + 0x2a) = 0;
        *(undefined1 *)((int)primitive + 0x1e) = uVar1;
        SetSemiTrans(primitive,1);
        *(undefined2 *)((int)primitive + 8) = (undefined2)local_60;
        *(undefined2 *)((int)primitive + 10) = (*(u16 *)((u8 *)&local_60 + 2));
        *(undefined2 *)((int)primitive + 0x14) = (undefined2)local_54;
        *(undefined2 *)((int)primitive + 0x20) = (undefined2)local_3c;
        *(short *)((int)primitive + 0x22) = (short)((uint)local_3c >> 0x10);
        *(undefined2 *)((int)primitive + 0x2c) = (undefined2)local_38;
        *(short *)((int)primitive + 0x2e) = (short)((uint)local_38 >> 0x10);
        *(undefined2 *)((int)primitive + 0x16) = (*(u16 *)((u8 *)&local_54 + 2));
        *(undefined2 *)((int)primitive + 0x1a) = *(undefined2 *)(param_1 + 0x46);
        uVar2 = *(undefined2 *)(param_1 + 0x48);
        *(undefined1 *)((int)primitive + 0xc) = (undefined1)local_44;
        *(s8 *)((int)primitive + 0xd) = (s8)local_40;
        *(undefined1 *)((int)primitive + 0x18) = (undefined1)local_30;
        *(s8 *)((int)primitive + 0x19) = (s8)local_40;
        *(undefined1 *)((int)primitive + 0x24) = (undefined1)local_44;
        *(s8 *)((int)primitive + 0x25) = (s8)local_40 + '@';
        *(s8 *)((int)primitive + 0x31) = (s8)local_40 + '@';
        *(undefined2 *)((int)primitive + 0xe) = uVar2;
        *(undefined1 *)((int)primitive + 0x30) = (undefined1)local_30;
      }
      AddPrim((void *)(lVar5 * 4 + DAT_8008ed68 + 0x20),primitive);
    }
    local_3c = local_60;
    iVar11 = iVar11 + 1;
    local_38 = local_54;
  } while (iVar11 < 0x90);
  return;
}

#undef local_80
#undef local_78
#undef local_60
#undef lStack_5c
#undef lStack_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
