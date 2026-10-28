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
#define D_801010B0 (*(s32 *)0x801010B0)
undefined4 func_800A9100(undefined4 param_1,int param_2,int param_3,int param_4)

{
  s8 cVar1;
  int iVar2;
  uint uVar3;
  s8 *pcVar4;
  undefined4 uVar5;

  uVar5 = 0;
  iVar2 = param_2 + param_4 * 0x7c + param_3 * 0x2e8;
  pcVar4 = (s8 *)(param_2 + param_3 * 0x2e8 + 0x18 + param_4 * 0x7c);
  *(undefined1 *)
   ((uint)*(byte *)(iVar2 + 0x2e) * 4 +
    (uint)*(byte *)(iVar2 + 0x2d) * 0x34 +
    *(int *)(&D_801010B0 + (uint)*(byte *)(param_2 + 9) * 0x34) + 3) = 0;
  pcVar4[0x15] = -1;
  pcVar4[0x16] = -1;
  pcVar4[0x6a] = '\0';
  pcVar4[0x28] = '\0';
  if ((*pcVar4 != '.') || (pcVar4[0x29] != -2)) {
    pcVar4[0x29] = '\0';
  }
  *(undefined2 *)(*(int *)(pcVar4 + 0x70) + 100) = 0;
  iVar2 = 0;
  if (param_4 == 5) {
    uVar5 = 2;
  }
  param_3 = param_3 * 0x2e8;
  do {
    uVar3 = *(uint *)(param_2 + param_3 + 0x30);
    cVar1 = '\x02';
    if ((uVar3 & 0x100) == 0) {
      cVar1 = (uVar3 & 0x200) != 0;
    }
    if (cVar1 == '\0') break;
    iVar2 = iVar2 + 1;
    param_3 = param_3 + 0x7c;
  } while (iVar2 < 5);
  if (iVar2 == 5) {
    uVar5 = 1;
  }
  return uVar5;
}

/* arg1: 0x80130000 */
/* arg2: 0x00000000 */
/* rand-u16: 0x801010B0 1 0 */
/* rand-u16: 0x801010B2 1 32789 */
/* rand-u32-strided: 0x80130088 6 124 0x80160000 */
/* arg3: 0x00000000 */
/* rand-u32-strided: 0x80130030 6 124 0,0x100,0x200 */
/* rand-u16: 0x80130008 1 0 */
/* rand-u32-strided: 0x8013002C 6 124 0 */
