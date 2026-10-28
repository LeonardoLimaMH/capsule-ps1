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
#define D_80118C18 (*(s32 *)0x80118C18)
extern s32 SquareRoot0();
int func_800FE5B0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  s16 local_e;

  bVar1 = *(byte *)(param_1 + 0x16);
  if ((param_2 < 0xd) && (param_3 < 0xd)) {
    local_e = ((ushort)((uint)*(undefined4 *)(param_3 * 4 + param_2 * 0x34 + D_80118C18) >> 0x13) &
              7) * -0x32;
  }
  else {
    local_e = 0;
  }
  iVar2 = (int)(short)((ushort)*(byte *)(param_1 + 0x15) * 100 + -0x226) -
          (int)(short)((short)param_2 * 100 + -0x226);
  iVar3 = (int)(short)(((ushort)((uint)*(undefined4 *)
                                        ((uint)bVar1 * 4 +
                                        (uint)*(byte *)(param_1 + 0x15) * 0x34 + D_80118C18) >> 0x13
                                ) & 7) * -0x32) - (int)local_e;
  iVar4 = (int)(short)(((ushort)bVar1 * 0x10 + (ushort)bVar1 * 8) * 4 + (ushort)bVar1 * 4 + -0x226)
          - (int)(short)((short)param_3 * 100 + -0x226);
  iVar2 = SquareRoot0(iVar2 * iVar2 + iVar3 * iVar3 + iVar4 * iVar4);
  return iVar2;
}

/* arg0: 0x80140000 */
/* arg1: small */
/* arg2: small */
/* rand-u16: 0x80140014 2 0,257,1542,3084 */
/* rand-u16: 0x80118C18 1 0 */
/* rand-u16: 0x80118C1A 1 32789 */
/* rand-u32-strided: 0x80150000 169 4 0,0x80000,0x100000,0x180000,0x380000 */
