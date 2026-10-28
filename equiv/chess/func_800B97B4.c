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
#define func_8009C4B0 ((s32 (*)())0x8009C4B0)
#define func_800A8EE8 ((s32 (*)())0x800A8EE8)
int func_800B97B4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;

  iVar4 = param_1 + 0x5d0;
  uVar5 = (uint)*(byte *)(param_1 + 0xbca);
  uVar6 = (uint)*(byte *)(param_1 + 0xcdc);
  uVar3 = (uint)*(byte *)(iVar4 + uVar5 + 0x5fb);
  iVar1 = func_800A8EE8(iVar4,1 - uVar5,uVar6);
  *(undefined1 *)(iVar4 + uVar3 * 0x7c + uVar5 * 0x2e8 + 0x3e) = 1;
  func_8009C4B0(param_1,uVar5,uVar3);
  uVar3 = *(uint *)(iVar1 + 0x10) >> 2;
  if (((*(uint *)(iVar1 + 0x10) & 3) == 2) &&
     (((uVar2 = uVar3 & 0x1f, uVar2 == 1 || (uVar3 = 3, uVar2 == 8)) || (uVar2 == 3)))) {
    *(undefined1 *)(iVar4 + uVar6 * 0x7c + (1 - uVar5) * 0x2e8 + 0x3e) = 2;
    uVar3 = 5;
    if (uVar6 != 5) {
      uVar3 = func_8009C4B0(param_1,1 - uVar5,uVar6);
    }
  }
  *(undefined1 *)(param_1 + 0xbe9) = 0;
  return uVar3;
}

/* real-callee: func_800A8EE8 */
/* arg0: 0x80140000 */
/* rand-mem: 0x80140BCA 3 2 */
/* rand-mem: 0x80140CDC 1 13 */

/* real-callee: func_8009C4B0 */
/* real-callee: func_80019F30 */
