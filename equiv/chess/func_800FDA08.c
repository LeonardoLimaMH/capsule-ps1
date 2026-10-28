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
extern s32 GetTPage();
extern s32 RotTransPers4();
extern s32 SetPolyG4();
extern s32 SetPolyGT4();
extern s32 SetSemiTrans();
#define func_80018610 ((s32 (*)())0x80018610)
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
extern s32 rcos();
extern s32 rsin();
void func_800FDA08(int param_1)

{
  union { u64 align; u8 bytes[0x40]; } recovered_local_frame;
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

  short sVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
















  local_30 = (int)*(short *)(param_1 + 0x28);
  sVar1 = *(short *)(param_1 + 0x2a);
  sVar2 = *(short *)(param_1 + 0x2c);
  uVar12 = (uint)*(byte *)(param_1 + 0x38);
  if (DAT_8011974d == '\0') {
    func_8002CEC0(&DAT_800906a0);
    DAT_8011974d = '\x01';
  }
  iVar11 = 0;
  if (uVar12 != 0) {
    do {
      iVar9 = (int)*(short *)(param_1 + 0x46);
      iVar7 = (iVar11 * *(short *)(param_1 + 0x4a) * 0x1000) / (int)uVar12 +
              (int)*(short *)(param_1 + 0x48);
      iVar10 = iVar7 + (0x1000 / uVar12) * (int)*(short *)(param_1 + 0x4a);
      if (iVar11 == 0) {
        iVar4 = rcos(iVar7);
        iVar4 = iVar9 * iVar4;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xfff;
        }
        local_68.vx = (short)local_30 + (short)(iVar4 >> 0xc);
        local_68.vy = (sVar1 - *(short *)(param_1 + 0x42)) - *(short *)(param_1 + 0x44);
        iVar4 = rsin(iVar7);
        iVar4 = iVar9 * iVar4;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xfff;
        }
        local_68.vz = sVar2 + (short)(iVar4 >> 0xc);
        iVar4 = rcos(iVar7);
        iVar4 = iVar9 * iVar4;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xfff;
        }
        local_58.vx = (short)local_30 + (short)(iVar4 >> 0xc);
        local_58.vy = sVar1 - *(short *)(param_1 + 0x44);
        iVar7 = rsin(iVar7);
        iVar7 = iVar9 * iVar7;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 0xfff;
        }
        local_58.vz = sVar2 + (short)(iVar7 >> 0xc);
      }
      else {
        local_68.vx = local_60.vx;
        local_68.vy = local_60.vy;
        local_68.vz = local_60.vz;
        local_58.vx = local_50.vx;
        local_58.vy = local_50.vy;
        local_58.vz = local_50.vz;
      }
      iVar7 = rcos(iVar10);
      iVar7 = iVar9 * iVar7;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0xfff;
      }
      local_60.vx = (short)local_30 + (short)(iVar7 >> 0xc);
      local_60.vy = (sVar1 - *(short *)(param_1 + 0x42)) - *(short *)(param_1 + 0x44);
      iVar7 = rsin(iVar10);
      iVar7 = iVar9 * iVar7;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0xfff;
      }
      local_60.vz = sVar2 + (short)(iVar7 >> 0xc);
      iVar7 = rcos(iVar10);
      iVar7 = iVar9 * iVar7;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0xfff;
      }
      local_50.vx = (short)local_30 + (short)(iVar7 >> 0xc);
      local_50.vy = sVar1 - *(short *)(param_1 + 0x44);
      iVar7 = rsin(iVar10);
      iVar7 = iVar9 * iVar7;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0xfff;
      }
      local_50.vz = sVar2 + (short)(iVar7 >> 0xc);
      lVar5 = RotTransPers4(&local_50,&local_58,&local_60,&local_68,(long *)&local_48,
                            (long *)&local_44,(long *)&local_40,(long *)&local_3c,&lStack_38,
                            &lStack_34);
      iVar7 = lVar5 + -10;
      if (*(short *)(param_1 + 0x3a) == -1) {
        uVar3 = GetTPage(0,1,0,0);
        pvVar8 = *(void **)(DAT_8008ed68 + 0x1090);
        uVar6 = 0;
        if ((pvVar8 != (void *)0x0) && ((int)pvVar8 + 0x24U <= DAT_8008ed68 + 0x4594U)) {
          uVar6 = (int)pvVar8 + 0x24U;
        }
        *(uint *)(DAT_8008ed68 + 0x1090) = uVar6;
        SetPolyG4(pvVar8);
        *(undefined1 *)((int)pvVar8 + 4) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)((int)pvVar8 + 5) = *(undefined1 *)(param_1 + 0x31);
        *(undefined1 *)((int)pvVar8 + 6) = *(undefined1 *)(param_1 + 0x32);
        *(undefined1 *)((int)pvVar8 + 0xc) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)((int)pvVar8 + 0xd) = *(undefined1 *)(param_1 + 0x31);
        *(undefined1 *)((int)pvVar8 + 0xe) = *(undefined1 *)(param_1 + 0x32);
        *(undefined1 *)((int)pvVar8 + 0x14) = *(undefined1 *)(param_1 + 0x34);
        *(undefined1 *)((int)pvVar8 + 0x15) = *(undefined1 *)(param_1 + 0x35);
        *(undefined1 *)((int)pvVar8 + 0x16) = *(undefined1 *)(param_1 + 0x36);
        *(undefined1 *)((int)pvVar8 + 0x1c) = *(undefined1 *)(param_1 + 0x34);
        *(undefined1 *)((int)pvVar8 + 0x1d) = *(undefined1 *)(param_1 + 0x35);
        *(undefined1 *)((int)pvVar8 + 0x1e) = *(undefined1 *)(param_1 + 0x36);
        SetSemiTrans(pvVar8,*(undefined1 *)(param_1 + 0x40));
        *(undefined2 *)((int)pvVar8 + 8) = local_3c;
        *(undefined2 *)((int)pvVar8 + 10) = local_3a;
        *(undefined2 *)((int)pvVar8 + 0x10) = local_40;
        *(undefined2 *)((int)pvVar8 + 0x12) = local_3e;
        *(undefined2 *)((int)pvVar8 + 0x18) = local_44;
        *(undefined2 *)((int)pvVar8 + 0x1a) = local_42;
        *(undefined2 *)((int)pvVar8 + 0x20) = local_48;
        *(undefined2 *)((int)pvVar8 + 0x22) = local_46;
        AddPrim((void *)(DAT_8008ed68 + iVar7 * 4 + 0x70 + (iVar9 / 7) * -4),pvVar8);
        func_80018610(uVar3,iVar7 - iVar9 / 7);
      }
      else {
        pvVar8 = *(void **)(DAT_8008ed68 + 0x1090);
        uVar6 = 0;
        if ((pvVar8 != (void *)0x0) && ((int)pvVar8 + 0x34U <= DAT_8008ed68 + 0x4594U)) {
          uVar6 = (int)pvVar8 + 0x34U;
        }
        *(uint *)(DAT_8008ed68 + 0x1090) = uVar6;
        SetPolyGT4(pvVar8);
        *(undefined1 *)((int)pvVar8 + 4) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)((int)pvVar8 + 5) = *(undefined1 *)(param_1 + 0x31);
        *(undefined1 *)((int)pvVar8 + 6) = *(undefined1 *)(param_1 + 0x32);
        *(undefined1 *)((int)pvVar8 + 0x10) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)((int)pvVar8 + 0x11) = *(undefined1 *)(param_1 + 0x31);
        *(undefined1 *)((int)pvVar8 + 0x12) = *(undefined1 *)(param_1 + 0x32);
        *(undefined1 *)((int)pvVar8 + 0x1c) = *(undefined1 *)(param_1 + 0x34);
        *(undefined1 *)((int)pvVar8 + 0x1d) = *(undefined1 *)(param_1 + 0x35);
        *(undefined1 *)((int)pvVar8 + 0x1e) = *(undefined1 *)(param_1 + 0x36);
        *(undefined1 *)((int)pvVar8 + 0x28) = *(undefined1 *)(param_1 + 0x34);
        *(undefined1 *)((int)pvVar8 + 0x29) = *(undefined1 *)(param_1 + 0x35);
        *(undefined1 *)((int)pvVar8 + 0x2a) = *(undefined1 *)(param_1 + 0x36);
        SetSemiTrans(pvVar8,*(undefined1 *)(param_1 + 0x40));
        *(undefined2 *)((int)pvVar8 + 8) = local_3c;
        *(undefined2 *)((int)pvVar8 + 10) = local_3a;
        *(undefined2 *)((int)pvVar8 + 0x14) = local_40;
        *(undefined2 *)((int)pvVar8 + 0x16) = local_3e;
        *(undefined2 *)((int)pvVar8 + 0x20) = local_44;
        *(undefined2 *)((int)pvVar8 + 0x22) = local_42;
        *(undefined2 *)((int)pvVar8 + 0x2c) = local_48;
        *(undefined2 *)((int)pvVar8 + 0x2e) = local_46;
        *(undefined2 *)((int)pvVar8 + 0x1a) = *(undefined2 *)(param_1 + 0x3a);
        *(undefined2 *)((int)pvVar8 + 0xe) = *(undefined2 *)(param_1 + 0x3c);
        *(undefined1 *)((int)pvVar8 + 0xc) = *(undefined1 *)(param_1 + 0x3e);
        *(undefined1 *)((int)pvVar8 + 0xd) = *(undefined1 *)(param_1 + 0x3f);
        *(s8 *)((int)pvVar8 + 0x18) = *(s8 *)(param_1 + 0x3e) + '@';
        *(undefined1 *)((int)pvVar8 + 0x19) = *(undefined1 *)(param_1 + 0x3f);
        *(undefined1 *)((int)pvVar8 + 0x24) = *(undefined1 *)(param_1 + 0x3e);
        *(s8 *)((int)pvVar8 + 0x25) = *(s8 *)(param_1 + 0x3f) + '@';
        *(s8 *)((int)pvVar8 + 0x30) = *(s8 *)(param_1 + 0x3e) + '@';
        *(s8 *)((int)pvVar8 + 0x31) = *(s8 *)(param_1 + 0x3f) + '@';
        AddPrim((void *)(DAT_8008ed68 + iVar7 * 4 + 0x70 + (iVar9 / 7) * -4),pvVar8);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)(uVar12 << 1));
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
