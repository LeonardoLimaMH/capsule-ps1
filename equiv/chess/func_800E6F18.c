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
/* rand-u16: 0x8013007A 1 0,1,2,3,4,5,6,7,8,9,10,15,31,65535 */
/* rand-u16: 0x8013003C 1 0,1,5,19,20,29,30,31,39,40,49,50,79,80,89,90,99,100,127,128,199 */
/* rand-u16: 0x8013003E 1 0 */
/* rand-u16: 0x80130070 1 4096 */
/* rand-u16: 0x80130072 1 32788 */
/* rand-u16: 0x80130074 1 8192 */
/* rand-u16: 0x80130076 1 32788 */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
#define DAT_80069bbe (*(s16 *)0x80069BBE)
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define D_80119714 (*(s32 *)0x80119714)
#define func_80013920 ((s32 (*)())0x80013920)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80015CD0 ((s32 (*)())0x80015CD0)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800FF0A0 ((s32 (*)())0x800FF0A0)
extern s32 rcos();
extern s32 rsin();
void func_800E6F18(int param_1)

{
  union { u64 align; u8 bytes[0x10]; } recovered_local_frame;
#define local_38 (*(short volatile *)(recovered_local_frame.bytes + 0x0))
#define local_36 (*(short volatile *)(recovered_local_frame.bytes + 0x2))
#define local_34 (*(short volatile *)(recovered_local_frame.bytes + 0x4))
#define local_30 (*(short volatile *)(recovered_local_frame.bytes + 0x8))
#define local_2e (*(short volatile *)(recovered_local_frame.bytes + 0xA))
#define local_2c (*(short volatile *)(recovered_local_frame.bytes + 0xC))

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;







  iVar5 = *(int *)(param_1 + 0x8c);
  iVar3 = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(param_1 + 0x3c) = iVar3;
  iVar1 = DAT_80069bbe + 0x100;
  iVar6 = iVar5 << 9;
  if (iVar1 < 0) {
    iVar1 = DAT_80069bbe + 0x2ff;
  }
  iVar4 = (iVar1 >> 9) + iVar5;
  iVar1 = iVar4;
  if (iVar4 < 0) {
    iVar1 = iVar4 + 7;
  }
  iVar4 = iVar4 + (iVar1 >> 3) * -8;
  switch(*(undefined2 *)(param_1 + 0x7a)) {
  case 0:
    local_38 = *(short *)(param_1 + 0x6a);
    local_36 = *(short *)(param_1 + 0x6e);
    local_34 = *(short *)(param_1 + 0x72);
    iVar1 = rsin(iVar6);
    iVar1 = iVar3 * 0x50 * iVar1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xfff;
    }
    iVar4 = (iVar3 * 0x1000) / 0x28;
    local_38 = local_38 + (short)((iVar1 >> 0xc) / 0x28);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 3;
    }
    iVar1 = rcos(iVar4 >> 2);
    iVar1 = iVar1 * 100;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xfff;
    }
    local_36 = local_36 + (100 - (short)(iVar1 >> 0xc));
    iVar1 = rcos(iVar6);
    iVar1 = iVar3 * 0x50 * iVar1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xfff;
    }
    local_34 = local_34 + (short)((iVar1 >> 0xc) / 0x28);
    func_800FF0A0(param_1,&local_38,5);
    if (0x27 < iVar3) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
      if (iVar5 == 0) {
        D_80119714 = 0;
        DAT_8008ee54 = DAT_8008ee54 + 1;
      }
    }
    break;
  case 1:
    uVar2 = func_80019F30(0x7014d,iVar4 + 0x39);
    func_80015CD0(param_1 + 0x14,uVar2,1);
    *(undefined4 *)(param_1 + 0x20) = 5;
    if (iVar5 == 0) {
      func_80034AB0(10);
    }
    goto LAB_800e72bc;
  case 2:
    if (0x59 < iVar3) {
      if (iVar5 == 0) {
        iVar1 = func_80015B3C(-0x7ffe7a00,-0x7ff0ad3c,1);
        *(undefined1 *)(iVar1 + 0x28) = 200;
        *(undefined1 *)(iVar1 + 0x29) = 200;
        *(undefined1 *)(iVar1 + 0x2a) = 0xff;
        *(undefined1 *)(iVar1 + 0x30) = 1;
        *(undefined2 *)(iVar1 + 0x32) = 8;
      }
      iVar1 = iVar4;
      if (iVar4 < 0) {
        iVar1 = iVar4 + 7;
      }
      uVar2 = func_80019F30(0x6014d,(iVar4 + (iVar1 >> 3) * -8) * 3);
      *(undefined4 *)(param_1 + 0x18) = uVar2;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
    }
    break;
  case 3:
    local_30 = *(short *)(param_1 + 0x6a);
    local_2e = *(short *)(param_1 + 0x6e);
    local_2c = *(short *)(param_1 + 0x72);
    iVar1 = rsin(iVar6);
    iVar5 = (0x28 - iVar3) * 0x50;
    iVar1 = iVar5 * iVar1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xfff;
    }
    iVar4 = ((0x28 - iVar3) * 0x1000) / 0x28;
    local_30 = local_30 + (short)((iVar1 >> 0xc) / 0x28);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 3;
    }
    iVar1 = rcos(iVar4 >> 2);
    iVar1 = iVar1 * 100;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xfff;
    }
    local_2e = local_2e + (100 - (short)(iVar1 >> 0xc));
    iVar1 = rcos(iVar6);
    iVar5 = iVar5 * iVar1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xfff;
    }
    local_2c = local_2c + (short)((iVar5 >> 0xc) / 0x28);
    func_800FF0A0(param_1,&local_30,5);
    if (iVar3 < 0x28) {
      return;
    }
LAB_800e72bc:
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
    break;
  case 4:
    if (iVar5 == 0) {
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
    }
    func_80013920(param_1);
  }
  return;
}

#undef local_38
#undef local_36
#undef local_34
#undef local_30
#undef local_2e
#undef local_2c
