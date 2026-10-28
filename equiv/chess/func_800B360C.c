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
#define D_801010B0 (*(u8 *)0x801010B0)
int func_800B360C(int param_1,int param_2,int param_3)

{
  int iVar1;

  *(uint *)(param_1 + 0x77c) =
       ((uint)*(byte *)(param_2 + 0x15) + (uint)*(byte *)(param_3 + 0x15) + -0xb) * -0x32;
  *(uint *)(param_1 + 0x780) =
       ((*(uint *)((uint)*(byte *)(param_2 + 0x16) * 4 +
                  (uint)*(byte *)(param_2 + 0x15) * 0x34 +
                  *(int *)(&D_801010B0 + (uint)*(byte *)(param_1 + 9) * 0x34)) >> 0x13 & 7) +
       (*(uint *)((uint)*(byte *)(param_3 + 0x16) * 4 +
                 (uint)*(byte *)(param_3 + 0x15) * 0x34 +
                 *(int *)(&D_801010B0 + (uint)*(byte *)(param_1 + 9) * 0x34)) >> 0x13 & 7)) * 0x19;
  iVar1 = ((uint)*(byte *)(param_2 + 0x16) + (uint)*(byte *)(param_3 + 0x16) + -0xb) * -0x32;
  *(int *)(param_1 + 0x784) = iVar1;
  return iVar1;
}

/* arg0: 0x80140000 */
/* arg1: 0x80150000 */
/* arg2: 0x80151000 */
/* rand-u16: 0x80140009 1 0,1 */
/* rand-mem: 0x80150015 2 13 */
/* rand-mem: 0x80151015 2 13 */
/* rand-u16: 0x801010B0 1 8192 */
/* rand-u16: 0x801010B2 1 32789 */
/* rand-u16: 0x801010E4 1 16384 */
/* rand-u16: 0x801010E6 1 32789 */
/* rand-mem: 0x80152000 676 256 */
/* rand-mem: 0x80154000 676 256 */
