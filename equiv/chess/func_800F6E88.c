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
/* real-callee: func_800459CC */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* real-callee: func_800FE188 */
/* real-callee: func_800FEC2C */
/* real-callee: func_800FE21C */
/* real-callee: func_800FEBF4 */
/* real-callee: func_800FF460 */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FE74C */
/* real-callee: func_800DD428 */
/* real-callee: func_800FF190 */
/* real-callee: func_800FF2CC */
/* real-callee: func_800DDA78 */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
#define DAT_8008ed68 (*(u8 **)0x8008ED68)
#define DAT_800906a0 (*(s32 *)0x800906A0)
#define DAT_8011974d (*(u8 *)0x8011974D)
extern s32 AddPrim();
extern s32 GetTPage();
extern s32 RotAverage3();
extern s32 SetPolyG3();
extern s32 SetSemiTrans();
#define func_80018610 ((s32 (*)())0x80018610)
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
extern s32 rcos();
extern s32 rsin();
s32 func_800F6E88(int param_1)

{
  union { u64 align; u8 bytes[0x30]; } recovered_local_frame;
#define local_58 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x0))
#define local_54 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x4))
#define local_50 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x8))
#define local_4c (*(undefined4 volatile *)(recovered_local_frame.bytes + 0xC))
#define local_48 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x10))
#define local_44 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x14))
#define local_40 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x18))
#define local_3e (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x1A))
#define local_3c (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x1C))
#define local_3a (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x1E))
#define local_38 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x20))
#define local_36 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x22))
#define auStack_34 (*(undefined1 volatile (*)[4])(recovered_local_frame.bytes + 0x24))
#define auStack_30 (*(undefined1 volatile (*)[4])(recovered_local_frame.bytes + 0x28))
#define local_2c (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2C))

  int iVar1;
  uint uVar2;
  int iVar3;
  void *primitive;
  int iVar4;
  int iVar5;
  uint uVar6;
















  uVar6 = (uint)*(byte *)(param_1 + 0x3d);
  local_2c = GetTPage(0,1,0,0);
  if (DAT_8011974d == '\0') {
    func_8002CEC0(&DAT_800906a0);
    DAT_8011974d = '\x01';
  }
  *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + *(short *)(param_1 + 0x44);
  local_58 = *(undefined4 *)(param_1 + 0x28);
  local_54 = *(undefined4 *)(param_1 + 0x2c);
  iVar5 = 0;
  if (uVar6 != 0) {
    iVar1 = 0;
    do {
      local_48 = local_58;
      local_44 = local_54;
      local_50 = local_58;
      local_4c = local_54;
      iVar3 = iVar1 / (int)uVar6 + (int)*(short *)(param_1 + 0x40);
      iVar4 = iVar3 + *(short *)(param_1 + 0x42);
      iVar1 = rcos(iVar3);
      iVar1 = *(short *)(param_1 + 0x3e) * iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xfff;
      }
      (*(u16 *)((u8 *)&local_50 + 0)) = (short)local_50 + (short)(iVar1 >> 0xc);
      iVar1 = rsin(iVar3);
      iVar1 = *(short *)(param_1 + 0x3e) * iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xfff;
      }
      local_50 = CONCAT22((*(u16 *)((u8 *)&local_50 + 2)) + (short)(iVar1 >> 0xc),(short)local_50);
      iVar1 = rcos(iVar4);
      iVar1 = *(short *)(param_1 + 0x3e) * iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xfff;
      }
      (*(u16 *)((u8 *)&local_48 + 0)) = (short)local_48 + (short)(iVar1 >> 0xc);
      iVar1 = rsin(iVar4);
      iVar1 = *(short *)(param_1 + 0x3e) * iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xfff;
      }
      local_48 = CONCAT22((*(u16 *)((u8 *)&local_48 + 2)) + (short)(iVar1 >> 0xc),(short)local_48);
      iVar1 = RotAverage3(&local_58,&local_50,&local_48,&local_40,&local_3c,&local_38,auStack_34,
                          auStack_30);
      primitive = *(void **)(DAT_8008ed68 + 0x1090);
      uVar2 = 0;
      if ((primitive != (void *)0x0) && ((int)primitive + 0x1cU <= DAT_8008ed68 + 0x4594U)) {
        uVar2 = (int)primitive + 0x1cU;
      }
      *(uint *)(DAT_8008ed68 + 0x1090) = uVar2;
      SetPolyG3(primitive);
      *(undefined1 *)((int)primitive + 4) = 0x7f;
      *(undefined1 *)((int)primitive + 5) = 0x7f;
      *(undefined1 *)((int)primitive + 6) = 0xff;
      *(undefined1 *)((int)primitive + 0xc) = 0;
      *(undefined1 *)((int)primitive + 0xd) = 0;
      *(undefined1 *)((int)primitive + 0xe) = 0;
      *(undefined1 *)((int)primitive + 0x14) = 0;
      *(undefined1 *)((int)primitive + 0x15) = 0;
      *(undefined1 *)((int)primitive + 0x16) = 0;
      SetSemiTrans(primitive,1);
      *(undefined2 *)((int)primitive + 8) = local_40;
      *(undefined2 *)((int)primitive + 10) = local_3e;
      *(undefined2 *)((int)primitive + 0x10) = local_3c;
      *(undefined2 *)((int)primitive + 0x12) = local_3a;
      iVar5 = iVar5 + 1;
      *(undefined2 *)((int)primitive + 0x18) = local_38;
      *(undefined2 *)((int)primitive + 0x1a) = local_36;
      AddPrim((void *)(DAT_8008ed68 + iVar1 * 4 + 0x70),primitive);
      func_80018610(local_2c,iVar1);
      iVar1 = iVar5 * 0x1000;
    } while (iVar5 < (int)uVar6);
  }
  return uVar6 != 0 ? (s32)(uVar6 << 12) : (s32)local_58;
}

#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3e
#undef local_3c
#undef local_3a
#undef local_38
#undef local_36
#undef auStack_34
#undef auStack_30
#undef local_2c

/* arg0: 0x80140000 */
/* callee-contract: RotAverage3 */
/* real-callee: rsin */
/* real-callee: rcos */
/* rand-u32-strided: 0x8008ED68 1 4 0x80130000 */
/* rand-u32-strided: 0x80131090 1 4 0x80132000 */
/* rand-u16: 0x8011974C 1 0,256 */
/* rand-u16: 0x8014003C 1 0,256,512,1280 */
/* rand-u16: 0x8014003E 4 0,1,4096,32767,32768,65535 */
/* rand-u16: 0x80140028 4 0,100,32767,32768,65535 */
