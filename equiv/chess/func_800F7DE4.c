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
#include "ghidra.h"
#define DAT_8008ed68 (*(s32 *)0x8008ED68)
#define DAT_800906a0 (*(s32 *)0x800906A0)
#define DAT_8011974d (*(u8 *)0x8011974D)
extern s32 AddPrim();
extern s32 GetTPage();
extern s32 RotAverage4();
extern s32 SetPolyG4();
extern s32 SetPolyGT4();
extern s32 SetSemiTrans();
#define func_80018610 ((s32 (*)())0x80018610)
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
extern s32 rcos();
extern s32 rsin();
void func_800F7DE4(int param_1)

{
  union { u64 align; u8 bytes[0x38]; } recovered_local_frame;
#define local_58 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x0))
#define local_54 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x4))
#define local_50 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x8))
#define local_4c (*(undefined4 volatile *)(recovered_local_frame.bytes + 0xC))
#define local_48 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x10))
#define local_44 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x14))
#define local_40 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x18))
#define local_3c (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x1C))
#define local_38 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x20))
#define local_36 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x22))
#define local_34 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x24))
#define local_32 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x26))
#define local_30 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x28))
#define local_2e (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2A))
#define local_2c (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2C))
#define local_2a (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2E))
#define auStack_28 (*(undefined1 volatile (*)[4])(recovered_local_frame.bytes + 0x30))
#define auStack_24 (*(undefined1 volatile (*)[4])(recovered_local_frame.bytes + 0x34))

  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;



















  uVar1 = GetTPage(0,1,0,0);
  if (DAT_8011974d == '\0') {
    func_8002CEC0(&DAT_800906a0);
    DAT_8011974d = '\x01';
  }
  if (*(byte *)(param_1 + 0x38) < 4) {
    *(undefined1 *)(param_1 + 0x38) = 4;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x38);
  iVar7 = 0;
  iVar2 = 0;
  do {
    iVar5 = iVar2 / (int)uVar3 + (uint)*(ushort *)(param_1 + 0x3e);
    iVar2 = rcos(iVar5);
    iVar2 = (uint)*(ushort *)(param_1 + 0x3a) * iVar2;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xfff;
    }
    local_58 = CONCAT22(*(undefined2 *)(param_1 + 0x2a),
                        *(short *)(param_1 + 0x28) + (short)(iVar2 >> 0xc));
    iVar2 = rsin(iVar5);
    iVar2 = (uint)*(ushort *)(param_1 + 0x3a) * iVar2;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xfff;
    }
    local_54 = CONCAT22((*(u16 *)((u8 *)&local_54 + 2)),*(short *)(param_1 + 0x2c) + (short)(iVar2 >> 0xc));
    iVar2 = rcos(iVar5);
    iVar2 = (uint)*(ushort *)(param_1 + 0x3c) * iVar2;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xfff;
    }
    local_50 = CONCAT22(*(undefined2 *)(param_1 + 0x2a),
                        *(short *)(param_1 + 0x28) + (short)(iVar2 >> 0xc));
    iVar2 = rsin(iVar5);
    iVar2 = (uint)*(ushort *)(param_1 + 0x3c) * iVar2;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xfff;
    }
    local_4c = CONCAT22((*(u16 *)((u8 *)&local_4c + 2)),*(short *)(param_1 + 0x2c) + (short)(iVar2 >> 0xc));
    if (iVar7 != 0) {
      iVar2 = RotAverage4(&local_58,&local_50,&local_48,&local_40,&local_38,&local_34,&local_30,
                          &local_2c,auStack_28,auStack_24);
      uVar3 = 0;
      if (*(short *)(param_1 + 0x42) == -1) {
        pvVar6 = *(void **)(DAT_8008ed68 + 0x1090);
        uVar4 = uVar3;
        if ((pvVar6 == (void *)0x0) || (uVar4 = (int)pvVar6 + 0x24, uVar4 <= DAT_8008ed68 + 0x4594U)
           ) {
          uVar3 = uVar4;
        }
        *(uint *)(DAT_8008ed68 + 0x1090) = uVar3;
        SetPolyG4(pvVar6);
        *(undefined1 *)((int)pvVar6 + 4) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)((int)pvVar6 + 5) = *(undefined1 *)(param_1 + 0x31);
        *(undefined1 *)((int)pvVar6 + 6) = *(undefined1 *)(param_1 + 0x32);
        *(undefined1 *)((int)pvVar6 + 0x14) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)((int)pvVar6 + 0x15) = *(undefined1 *)(param_1 + 0x31);
        *(undefined1 *)((int)pvVar6 + 0x16) = *(undefined1 *)(param_1 + 0x32);
        *(undefined1 *)((int)pvVar6 + 0xc) = *(undefined1 *)(param_1 + 0x34);
        *(undefined1 *)((int)pvVar6 + 0xd) = *(undefined1 *)(param_1 + 0x35);
        *(undefined1 *)((int)pvVar6 + 0xe) = *(undefined1 *)(param_1 + 0x36);
        *(undefined1 *)((int)pvVar6 + 0x1c) = *(undefined1 *)(param_1 + 0x34);
        *(undefined1 *)((int)pvVar6 + 0x1d) = *(undefined1 *)(param_1 + 0x35);
        *(undefined1 *)((int)pvVar6 + 0x1e) = *(undefined1 *)(param_1 + 0x36);
        SetSemiTrans(pvVar6,*(undefined1 *)(param_1 + 0x40));
        *(undefined2 *)((int)pvVar6 + 8) = local_38;
        *(undefined2 *)((int)pvVar6 + 10) = local_36;
        *(undefined2 *)((int)pvVar6 + 0x10) = local_34;
        *(undefined2 *)((int)pvVar6 + 0x12) = local_32;
        *(undefined2 *)((int)pvVar6 + 0x18) = local_30;
        *(undefined2 *)((int)pvVar6 + 0x1a) = local_2e;
        *(undefined2 *)((int)pvVar6 + 0x20) = local_2c;
        *(undefined2 *)((int)pvVar6 + 0x22) = local_2a;
        AddPrim((void *)(DAT_8008ed68 + iVar2 * 4 + 0x70),pvVar6);
        func_80018610(uVar1,iVar2);
      }
      else {
        pvVar6 = *(void **)(DAT_8008ed68 + 0x1090);
        if ((pvVar6 != (void *)0x0) && ((int)pvVar6 + 0x34U <= DAT_8008ed68 + 0x4594U)) {
          uVar3 = (int)pvVar6 + 0x34U;
        }
        *(uint *)(DAT_8008ed68 + 0x1090) = uVar3;
        SetPolyGT4(pvVar6);
        *(undefined1 *)((int)pvVar6 + 4) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)((int)pvVar6 + 5) = *(undefined1 *)(param_1 + 0x31);
        *(undefined1 *)((int)pvVar6 + 6) = *(undefined1 *)(param_1 + 0x32);
        *(undefined1 *)((int)pvVar6 + 0x1c) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)((int)pvVar6 + 0x1d) = *(undefined1 *)(param_1 + 0x31);
        *(undefined1 *)((int)pvVar6 + 0x1e) = *(undefined1 *)(param_1 + 0x32);
        *(undefined1 *)((int)pvVar6 + 0x10) = *(undefined1 *)(param_1 + 0x34);
        *(undefined1 *)((int)pvVar6 + 0x11) = *(undefined1 *)(param_1 + 0x35);
        *(undefined1 *)((int)pvVar6 + 0x12) = *(undefined1 *)(param_1 + 0x36);
        *(undefined1 *)((int)pvVar6 + 0x28) = *(undefined1 *)(param_1 + 0x34);
        *(undefined1 *)((int)pvVar6 + 0x29) = *(undefined1 *)(param_1 + 0x35);
        *(undefined1 *)((int)pvVar6 + 0x2a) = *(undefined1 *)(param_1 + 0x36);
        SetSemiTrans(pvVar6,*(undefined1 *)(param_1 + 0x40));
        *(undefined2 *)((int)pvVar6 + 8) = local_38;
        *(undefined2 *)((int)pvVar6 + 10) = local_36;
        *(undefined2 *)((int)pvVar6 + 0x14) = local_34;
        *(undefined2 *)((int)pvVar6 + 0x16) = local_32;
        *(undefined2 *)((int)pvVar6 + 0x20) = local_30;
        *(undefined2 *)((int)pvVar6 + 0x22) = local_2e;
        *(undefined2 *)((int)pvVar6 + 0x2c) = local_2c;
        *(undefined2 *)((int)pvVar6 + 0x2e) = local_2a;
        *(undefined2 *)((int)pvVar6 + 0x1a) = *(undefined2 *)(param_1 + 0x42);
        *(undefined2 *)((int)pvVar6 + 0xe) = *(undefined2 *)(param_1 + 0x44);
        *(undefined1 *)((int)pvVar6 + 0xc) = *(undefined1 *)(param_1 + 0x46);
        *(undefined1 *)((int)pvVar6 + 0xd) = *(undefined1 *)(param_1 + 0x47);
        *(s8 *)((int)pvVar6 + 0x18) = *(s8 *)(param_1 + 0x46) + '@';
        *(undefined1 *)((int)pvVar6 + 0x19) = *(undefined1 *)(param_1 + 0x47);
        *(undefined1 *)((int)pvVar6 + 0x24) = *(undefined1 *)(param_1 + 0x46);
        *(s8 *)((int)pvVar6 + 0x25) = *(s8 *)(param_1 + 0x47) + '@';
        *(s8 *)((int)pvVar6 + 0x30) = *(s8 *)(param_1 + 0x46) + '@';
        *(s8 *)((int)pvVar6 + 0x31) = *(s8 *)(param_1 + 0x47) + '@';
        AddPrim((void *)(DAT_8008ed68 + iVar2 * 4 + 0x70),pvVar6);
      }
    }
    local_48 = local_58;
    local_44 = local_54;
    local_40 = local_50;
    local_3c = local_4c;
    uVar3 = (uint)*(byte *)(param_1 + 0x38);
    iVar7 = iVar7 + 1;
    iVar2 = iVar7 * 0x1000;
  } while (iVar7 <= (int)uVar3);
  return;
}

#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_36
#undef local_34
#undef local_32
#undef local_30
#undef local_2e
#undef local_2c
#undef local_2a
#undef auStack_28
#undef auStack_24
