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
#define func_80012A20 ((s32 (*)())0x80012A20)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_800A8994 ((s32 (*)())0x800A8994)
int func_8009C4B0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar3 = param_1 + param_2 * 0x2e8 + 0x5e8 + param_3 * 0x7c;
  uVar1 = func_800A8994(param_1,param_2,param_3);
  iVar6 = (uint)*(byte *)(iVar3 + 0x26) * 2 + 2;
  iVar2 = func_80019F30(uVar1 | 0x10000,0);
  iVar4 = 0;
  if (*(s8 *)(iVar3 + 0x26) == '\x03') {
    iVar3 = func_80012A20(*(undefined4 *)(iVar6 * 4 + iVar2 + 0xc),3,
                          (param_3 * 0x20 + 0x2c0) * 0x10000 >> 0x10,(param_2 << 0x17) >> 0x10);
  }
  else {
    iVar5 = 0x2800000;
    iVar3 = iVar6;
    do {
      iVar4 = iVar4 + 1;
      func_80012A20(*(undefined4 *)(iVar3 * 4 + iVar2 + 0xc),3,iVar5 >> 0x10,
                    (param_2 << 0x17) >> 0x10);
      iVar5 = iVar5 + 0x200000;
      iVar3 = iVar6 + iVar4;
    } while (iVar4 < 2);
  }
  return iVar3;
}

/* arg0: 0x80140000 */
/* arg1: small */
/* arg2: small */
/* real-callee: func_800A8994 */
/* real-callee: func_80019F30 */
