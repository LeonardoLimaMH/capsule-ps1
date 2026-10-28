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
/* compiler: 2.8.1-psx */
#include "ghidra.h"
#define func_8001E160 ((s32 (*)())0x8001E160)
undefined1 * func_8001E044(uint param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  if (param_1 == 0) {
    uVar2 = func_8001E160(0);
    *param_2 = uVar2;
    param_2 = param_2 + 1;
  }
  else {
    iVar3 = 8 - param_3;
    uVar4 = 100000000;
    iVar1 = param_3;
    if (iVar3 != 0) {
      while (iVar1 != 0) {
        uVar4 = uVar4 / 10;
        iVar3 = iVar3 + -1;
        iVar1 = iVar3;
      }
    }
    if (uVar4 != 0) {
      do {
        if ((param_3 != 0) || (param_1 / uVar4 != 0)) break;
        uVar4 = uVar4 / 10;
      } while (uVar4 != 0);
      while (uVar4 != 0) {
        uVar5 = param_1 / uVar4;
        param_1 = param_1 % uVar4;
        uVar6 = (uint)((ulonglong)uVar4 * 0xcccccccd >> 0x20);
        if (uVar5 < 10) {
          uVar2 = func_8001E160(uVar5);
          *param_2 = uVar2;
          param_2 = param_2 + 1;
          uVar6 = (uint)((ulonglong)uVar4 * 0xcccccccd >> 0x20);
        }
        uVar4 = uVar6 >> 3;
      }
    }
  }
  return param_2;
}

/* real-callee: func_8001E160 */
/* arg0: small */
/* arg1: 0x80140000 */
/* arg2: 0x00000000 */
