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
#define DAT_8008610c (*(s8 *)0x8008610C)
#define DAT_8008ee6b (*(u8 *)0x8008EE6B)
#define func_800185F8 ((s32 (*)())0x800185F8)
#define func_80020578 ((s32 (*)())0x80020578)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
void func_800C5300(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  short sVar9;

  iVar7 = *(int *)(param_1 + 0x5c);
  iVar5 = *(int *)(param_1 + 0x60);
  iVar8 = iVar7 * 0x100;
  if (*(uint *)(param_1 + 0x54) == 0x19) {
    *(undefined1 *)(iVar5 + 0x20) = 2;
    *(undefined1 *)(iVar5 + 0x21) = 4;
    *(uint *)(iVar5 + 0x18) = *(uint *)(iVar5 + 0x18) | 0x200000;
  }
  else if (0x3c < *(uint *)(param_1 + 0x54)) {
    DAT_8008610c = 1;
    func_800185F8(param_1);
    return;
  }
  sVar1 = *(short *)(param_1 + 100);
  sVar2 = *(short *)(param_1 + 0x68);
  sVar3 = *(short *)(param_1 + 0x6c);
  uVar6 = *(uint *)(param_1 + 0x54);
  if (uVar6 < 0x1a) {
    sVar9 = (short)uVar6 * 0x14;
    if ((uVar6 == 0x19) && (iVar7 == 0)) {
      func_80034AB0(7);
    }
  }
  else {
    iVar8 = iVar8 + 0x1000 + uVar6 * -0x50;
    sVar9 = 500;
  }
  func_80020578(0x32,0,(int)(short)iVar8,param_1 + 0x18,param_1 + 0x1c);
  func_80020578(0x32,0,(iVar8 + 0x100) * 0x10000 >> 0x10,param_1 + 0x20,param_1 + 0x24);
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_1 + 0x18);
  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(param_1 + 0x20);
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_1 + 0x24);
  iVar5 = param_1;
  do {
    *(short *)(iVar5 + 0x18) = *(short *)(iVar5 + 0x18) + sVar1;
    if (iVar5 < param_1 + 0x10) {
      sVar4 = sVar2 + -500;
    }
    else {
      sVar4 = sVar2 + -500 + sVar9;
    }
    *(short *)(iVar5 + 0x1a) = sVar4;
    *(short *)(iVar5 + 0x1c) = *(short *)(iVar5 + 0x1c) + sVar3;
    iVar5 = iVar5 + 8;
  } while (iVar5 < param_1 + 0x20);
  if (DAT_8008ee6b < 2) {
    iVar5 = *(int *)(param_1 + 0x54) + 1;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x54) + (uint)DAT_8008ee6b;
  }
  *(int *)(param_1 + 0x54) = iVar5;
  return;
}
