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

int func_8001A6B8(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int *piVar2;

  piVar2 = (int *)*param_2;
  iVar1 = -1;
  if (*piVar2 != -1) {
    iVar1 = *piVar2 + (param_1 - param_3);
    do {
      *piVar2 = iVar1;
      piVar2 = piVar2 + 1;
      iVar1 = *piVar2 + (param_1 - param_3);
    } while (*piVar2 != -1);
  }
  return iVar1;
}

/* arg0: 0x80130000 */
/* arg1: 0x80140000 */
/* arg2: 0x80120000 */
/* rand-u16: 0x80140000 1 0 */
/* rand-u16: 0x80140002 1 32789 */
/* rand-u32-strided: 0x80150000 3 4 0,4,8,0x100,0xFFFFFFFE */
/* rand-u16: 0x8015000C 1 65535 */
/* rand-u16: 0x8015000E 1 65535 */
