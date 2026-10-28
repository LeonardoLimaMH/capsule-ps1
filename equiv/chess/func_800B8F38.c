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
#define D_80100FA8 (*(s8 *)0x80100FA8)
#define D_801010B0 (*(u8 *)0x801010B0)
undefined4 func_800B8F38(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  s8 *pcVar5;
  int iVar6;

  iVar6 = 0;
  pcVar5 = ((u8 *)0x80100FA8);
  while( true ) {
    uVar4 = (uint)*(byte *)(param_3 + 0x15) + (int)*pcVar5;
    iVar2 = (uint)*(byte *)(param_3 + 0x16) + (int)pcVar5[1];
    if ((((uVar4 < 0xd) && (-1 < iVar2)) && (iVar2 < 0xd)) &&
       (((puVar3 = (uint *)(iVar2 * 4 +
                           uVar4 * 0x34 +
                           *(int *)(&D_801010B0 + (uint)*(byte *)(param_2 + 9) * 0x34)),
         1 < (*puVar3 & 0x3f) && (bVar1 = *(byte *)((int)puVar3 + 3), bVar1 != 0)) &&
        ((bVar1 >> 7 != param_4 && ((bVar1 & 0x7f) != 6)))))) break;
    iVar6 = iVar6 + 1;
    pcVar5 = pcVar5 + 2;
    if (3 < iVar6) {
      return 0;
    }
  }
  return 1;
}

/* arg1: 0x80140000 */
/* arg2: 0x80150000 */
/* arg3: small */
/* rand-u16: 0x80140009 1 0,1 */
/* rand-mem: 0x80150015 2 13 */
/* rand-u16: 0x801010B0 1 8192 */
/* rand-u16: 0x801010B2 1 32789 */
/* rand-u16: 0x801010E4 1 16384 */
/* rand-u16: 0x801010E6 1 32789 */
/* rand-mem: 0x80152000 676 256 */
/* rand-mem: 0x80154000 676 256 */
