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
extern s32 CompMatrix();
extern s32 GetTPage();
extern s32 ReadRotMatrix();
extern s32 RotAverage3();
extern s32 RotMatrix();
extern s32 SetPolyG3();
extern s32 SetRotMatrix();
extern s32 SetSemiTrans();
extern s32 SetTransMatrix();
#define func_80018610 ((s32 (*)())0x80018610)
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
extern s32 rsin();
void func_800F8374(int param_1)

{
  union { u64 align; u8 bytes[0x98]; } recovered_local_frame;
#define local_c0 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x0))
#define local_be (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2))
#define local_bc (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x4))
#define local_b8 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x8))
#define local_b6 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0xA))
#define local_b4 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0xC))
#define local_b0 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x10))
#define local_ae (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x12))
#define local_ac (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x14))
#define local_a8 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x18))
#define local_a6 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x1A))
#define local_a4 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x1C))
#define auStack_a0 (*(undefined1 volatile (*)[32])(recovered_local_frame.bytes + 0x20))
#define auStack_80 (*(undefined1 volatile (*)[20])(recovered_local_frame.bytes + 0x40))
#define local_6c (*(int volatile *)(recovered_local_frame.bytes + 0x54))
#define local_68 (*(int volatile *)(recovered_local_frame.bytes + 0x58))
#define local_64 (*(int volatile *)(recovered_local_frame.bytes + 0x5C))
#define auStack_60 (*(undefined1 volatile (*)[32])(recovered_local_frame.bytes + 0x60))
#define local_40 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x80))
#define local_3e (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x82))
#define local_3c (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x84))
#define local_3a (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x86))
#define local_38 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x88))
#define local_36 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x8A))
#define auStack_34 (*(undefined1 volatile (*)[4])(recovered_local_frame.bytes + 0x8C))
#define auStack_30 (*(undefined1 volatile (*)[8])(recovered_local_frame.bytes + 0x90))

  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *primitive;
  int iVar6;



























  iVar3 = rsin((int)*(short *)(param_1 + 0x38));
  iVar3 = *(short *)(param_1 + 0x36) * iVar3;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xfff;
  }
  uVar2 = GetTPage(0,1,0,0);
  if (DAT_8011974d == '\0') {
    func_8002CEC0(&DAT_800906a0);
    DAT_8011974d = '\x01';
  }
  ReadRotMatrix(auStack_a0);
  local_b8 = 0;
  local_b6 = 0;
  local_b4 = 0;
  local_b0 = *(undefined2 *)(param_1 + 0x36);
  local_ac = (undefined2)((iVar3 >> 0xc) - (iVar3 >> 0x1f) >> 1);
  local_ae = 0;
  local_a8 = *(undefined2 *)(param_1 + 0x36);
  local_a6 = 0;
  local_a4 = (undefined2)(-(iVar3 >> 0xc) / 2);
  iVar3 = 0;
  if (*(s8 *)(param_1 + 0x34) != '\0') {
    iVar6 = param_1;
    do {
      *(short *)(iVar6 + 0x3a) = *(short *)(iVar6 + 0x3a) + 0x14;
      *(short *)(iVar6 + 0x3c) = *(short *)(iVar6 + 0x3c) + 0x14;
      local_c0 = *(undefined2 *)(iVar6 + 0x3a);
      *(short *)(iVar6 + 0x3e) = *(short *)(iVar6 + 0x3e) + 0x14;
      local_be = *(undefined2 *)(iVar6 + 0x3c);
      local_bc = *(undefined2 *)(iVar6 + 0x3e);
      RotMatrix(&local_c0,auStack_80);
      local_6c = (int)*(short *)(param_1 + 0x28);
      local_68 = (int)*(short *)(param_1 + 0x2a);
      local_64 = (int)*(short *)(param_1 + 0x2c);
      CompMatrix(auStack_a0,auStack_80,auStack_60);
      SetRotMatrix(auStack_60);
      SetTransMatrix(auStack_60);
      iVar4 = RotAverage3(&local_b8,&local_b0,&local_a8,&local_40,&local_3c,&local_38,auStack_34,
                          auStack_30);
      primitive = *(void **)(DAT_8008ed68 + 0x1090);
      uVar5 = 0;
      if ((primitive != (void *)0x0) && ((int)primitive + 0x1cU <= DAT_8008ed68 + 0x4594U)) {
        uVar5 = (int)primitive + 0x1cU;
      }
      *(uint *)(DAT_8008ed68 + 0x1090) = uVar5;
      SetPolyG3(primitive);
      *(undefined1 *)((int)primitive + 4) = *(undefined1 *)(param_1 + 0x30);
      *(undefined1 *)((int)primitive + 5) = *(undefined1 *)(param_1 + 0x31);
      uVar1 = *(undefined1 *)(param_1 + 0x32);
      *(undefined1 *)((int)primitive + 0xc) = 0;
      *(undefined1 *)((int)primitive + 0xd) = 0;
      *(undefined1 *)((int)primitive + 0xe) = 0;
      *(undefined1 *)((int)primitive + 0x14) = 0;
      *(undefined1 *)((int)primitive + 0x15) = 0;
      *(undefined1 *)((int)primitive + 0x16) = 0;
      *(undefined1 *)((int)primitive + 6) = uVar1;
      SetSemiTrans(primitive,1);
      *(undefined2 *)((int)primitive + 8) = local_40;
      *(undefined2 *)((int)primitive + 10) = local_3e;
      *(undefined2 *)((int)primitive + 0x10) = local_3c;
      iVar6 = iVar6 + 6;
      *(undefined2 *)((int)primitive + 0x12) = local_3a;
      *(undefined2 *)((int)primitive + 0x18) = local_38;
      *(undefined2 *)((int)primitive + 0x1a) = local_36;
      AddPrim((void *)(DAT_8008ed68 + iVar4 * 4 + 0x70),primitive);
      func_80018610(uVar2,iVar4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 0x34));
  }
  return;
}

#undef local_c0
#undef local_be
#undef local_bc
#undef local_b8
#undef local_b6
#undef local_b4
#undef local_b0
#undef local_ae
#undef local_ac
#undef local_a8
#undef local_a6
#undef local_a4
#undef auStack_a0
#undef auStack_80
#undef local_6c
#undef local_68
#undef local_64
#undef auStack_60
#undef local_40
#undef local_3e
#undef local_3c
#undef local_3a
#undef local_38
#undef local_36
#undef auStack_34
#undef auStack_30
