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
#define DAT_8008ed68 (*(s32 *)0x8008ED68)
#define DAT_800906a0 (*(s32 *)0x800906A0)
#define DAT_8011974d (*(u8 *)0x8011974D)
extern s32 AddPrim();
extern s32 GetClut();
extern s32 GetTPage();
extern s32 RotAverage4();
extern s32 SetPolyFT4();
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
extern s32 rsin();
void func_800F6320(int param_1)

{
  union { u64 align; u8 bytes[0x60]; } recovered_local_frame;
#define local_88 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x0))
#define local_84 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x4))
#define local_80 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x8))
#define local_7c (*(undefined4 volatile *)(recovered_local_frame.bytes + 0xC))
#define local_78 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x10))
#define local_74 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x14))
#define local_70 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x18))
#define local_6c (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x1C))
#define local_68 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x20))
#define local_66 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x22))
#define local_64 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x24))
#define local_62 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x26))
#define local_60 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x28))
#define local_5e (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2A))
#define local_5c (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2C))
#define local_5a (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2E))
#define auStack_58 (*(undefined1 volatile (*)[4])(recovered_local_frame.bytes + 0x30))
#define auStack_54 (*(undefined1 volatile (*)[4])(recovered_local_frame.bytes + 0x34))
#define local_50 (*(int volatile *)(recovered_local_frame.bytes + 0x38))
#define local_4c (*(int volatile *)(recovered_local_frame.bytes + 0x3C))
#define local_48 (*(int volatile *)(recovered_local_frame.bytes + 0x40))
#define local_44 (*(int volatile *)(recovered_local_frame.bytes + 0x44))
#define local_40 (*(int volatile *)(recovered_local_frame.bytes + 0x48))
#define local_3c (*(int volatile *)(recovered_local_frame.bytes + 0x4C))
#define local_38 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x50))
#define local_34 (*(int volatile *)(recovered_local_frame.bytes + 0x54))
#define local_30 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x58))
#define local_2e (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x5A))

  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *primitive;
  short sVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  int iVar9;





























  local_50 = (int)*(short *)(param_1 + 0x2a);
  local_4c = (int)*(short *)(param_1 + 0x2c);
  local_48 = (int)*(short *)(param_1 + 0x2e);
  local_44 = (int)*(short *)(param_1 + 0x32);
  local_40 = (int)*(short *)(param_1 + 0x34);
  local_3c = (int)*(short *)(param_1 + 0x36);
  local_30 = GetTPage(0,1,0x280,0x100);
  local_2e = GetClut(0x20,0x1f0);
  if (DAT_8011974d == '\0') {
    func_8002CEC0(&DAT_800906a0);
    DAT_8011974d = '\x01';
  }
  switch(*(undefined1 *)(param_1 + 0x28)) {
  case 0:
  case 4:
    local_38 = 1;
    sVar8 = 5;
    break;
  case 1:
  case 3:
  case 5:
  case 7:
    local_38 = 3;
    sVar8 = 3;
    break;
  case 2:
  case 6:
    local_38 = 5;
    sVar8 = 1;
    break;
  default:
    local_38 = 0;
    sVar8 = 0;
  }
  local_34 = 0;
  do {
    if (*(short *)(param_1 + 0x48) == 0) {
      iVar9 = (((int)*(short *)(param_1 + 0x4a) * local_34 * 0x1000) /
              (int)*(short *)(param_1 + 0x46)) / 8;
      iVar2 = (local_44 - local_50) * iVar9;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xfff;
      }
      sVar7 = (short)local_50 + (short)(iVar2 >> 0xc);
      local_88 = CONCAT22((*(u16 *)((u8 *)&local_88 + 2)),sVar7 + (short)local_38);
      iVar6 = iVar9 / 2;
      iVar3 = rsin(iVar6);
      iVar2 = (local_40 - local_4c) * iVar9;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xfff;
      }
      iVar3 = iVar3 * *(short *)(param_1 + 0x44);
      sVar5 = (short)local_4c + (short)(iVar2 >> 0xc);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xfff;
      }
      iVar9 = (local_3c - local_48) * iVar9;
      local_88 = CONCAT22(sVar5 - (short)(iVar3 >> 0xc),(undefined2)local_88);
      iVar2 = local_48;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 0xfff;
      }
    }
    else {
      iVar9 = ((((int)*(short *)(param_1 + 0x46) - (int)*(short *)(param_1 + 0x4a)) *
               (8 - local_34) * 0x1000) / (int)*(short *)(param_1 + 0x46)) / 8;
      iVar2 = (local_50 - local_44) * iVar9;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xfff;
      }
      sVar7 = (short)local_44 + (short)(iVar2 >> 0xc);
      local_88 = CONCAT22((*(u16 *)((u8 *)&local_88 + 2)),sVar7 + (short)local_38);
      iVar6 = iVar9 / 2;
      iVar3 = rsin(iVar6);
      iVar2 = (local_4c - local_40) * iVar9;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xfff;
      }
      iVar3 = iVar3 * *(short *)(param_1 + 0x44);
      sVar5 = (short)local_40 + (short)(iVar2 >> 0xc);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xfff;
      }
      iVar9 = (local_48 - local_3c) * iVar9;
      local_88 = CONCAT22(sVar5 - (short)(iVar3 >> 0xc),(undefined2)local_88);
      iVar2 = local_3c;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 0xfff;
      }
    }
    sVar1 = (short)iVar2 + (short)(iVar9 >> 0xc);
    local_84 = CONCAT22((*(u16 *)((u8 *)&local_84 + 2)),sVar1 + sVar8);
    local_80 = CONCAT22((*(u16 *)((u8 *)&local_80 + 2)),sVar7 - (short)local_38);
    iVar2 = rsin(iVar6);
    iVar2 = iVar2 * *(short *)(param_1 + 0x44);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xfff;
    }
    local_80 = CONCAT22(sVar5 - (short)(iVar2 >> 0xc),(undefined2)local_80);
    local_7c = CONCAT22((*(u16 *)((u8 *)&local_7c + 2)),sVar1 - sVar8);
    if (local_34 != 0) {
      iVar2 = RotAverage4(&local_88,&local_80,&local_78,&local_70,&local_68,&local_64,&local_60,
                          &local_5c,auStack_58,auStack_54);
      primitive = *(void **)(DAT_8008ed68 + 0x1090);
      uVar4 = 0;
      if ((primitive != (void *)0x0) && ((int)primitive + 0x28U <= DAT_8008ed68 + 0x4594U)) {
        uVar4 = (int)primitive + 0x28U;
      }
      *(uint *)(DAT_8008ed68 + 0x1090) = uVar4;
      SetPolyFT4(primitive);
      *(undefined1 *)((int)primitive + 4) = *(undefined1 *)(param_1 + 0x40);
      *(undefined1 *)((int)primitive + 5) = *(undefined1 *)(param_1 + 0x41);
      *(undefined1 *)((int)primitive + 6) = *(undefined1 *)(param_1 + 0x42);
      *(undefined2 *)((int)primitive + 8) = local_68;
      *(undefined2 *)((int)primitive + 10) = local_66;
      *(undefined2 *)((int)primitive + 0x10) = local_64;
      *(undefined2 *)((int)primitive + 0x12) = local_62;
      *(undefined2 *)((int)primitive + 0x18) = local_60;
      *(undefined2 *)((int)primitive + 0x1a) = local_5e;
      *(undefined2 *)((int)primitive + 0x20) = local_5c;
      *(undefined2 *)((int)primitive + 0x16) = local_30;
      *(undefined1 *)((int)primitive + 0xc) = 0;
      *(undefined1 *)((int)primitive + 0xd) = 0;
      *(undefined1 *)((int)primitive + 0x14) = 0x40;
      *(undefined1 *)((int)primitive + 0x15) = 0;
      *(undefined1 *)((int)primitive + 0x1c) = 0;
      *(undefined1 *)((int)primitive + 0x1d) = 0x40;
      *(undefined1 *)((int)primitive + 0x24) = 0x40;
      *(undefined1 *)((int)primitive + 0x25) = 0x40;
      *(undefined2 *)((int)primitive + 0xe) = local_2e;
      *(undefined2 *)((int)primitive + 0x22) = local_5a;
      AddPrim((void *)(DAT_8008ed68 + iVar2 * 4 + 0x70),primitive);
    }
    local_34 = local_34 + 1;
    local_78 = local_88;
    local_74 = local_84;
    local_70 = local_80;
    local_6c = local_7c;
  } while (local_34 < 9);
  return;
}

#undef local_88
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_66
#undef local_64
#undef local_62
#undef local_60
#undef local_5e
#undef local_5c
#undef local_5a
#undef auStack_58
#undef auStack_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2e
