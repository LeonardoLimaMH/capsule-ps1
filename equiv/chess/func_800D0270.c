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
#define DAT_80118c22 (*(u8 *)0x80118C22)
#define DAT_80118faa (*(u8 *)0x80118FAA)
int func_800D0270(uint param_1,byte param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;

  bVar1 = DAT_80118c22;
  pbVar3 = (byte *)((int)((u32 *)0x80118FAA) +
                   (param_1 & 0x7f) * 7 + 9 +
                   ((param_1 & 0xff) >> 7) * 0x2a + (uint)DAT_80118c22 * 0x10e);
  pbVar4 = (byte *)((int)((u32 *)0x80118FAA) +
                   (uint)param_3 + (uint)param_2 * 0xd + (uint)DAT_80118c22 * 0x10e + 100);
  uVar5 = (uint)*pbVar4;
  *(undefined1 *)
   ((int)((u32 *)0x80118FAA) + (uint)pbVar3[1] + (uint)*pbVar3 * 0xd + (uint)DAT_80118c22 * 0x10e + 100) =
       0;
  *pbVar4 = (byte)param_1;
  *pbVar3 = param_2;
  pbVar3[1] = param_3;
  iVar2 = (int)((u32 *)0x80118FAA) +
          (uVar5 & 0x7f) * 7 + ((int)uVar5 >> 7) * 0x2a + 0x10 + (uint)bVar1 * 0x10e;
  *(undefined1 *)(iVar2 + -5) = 0;
  return iVar2;
}
