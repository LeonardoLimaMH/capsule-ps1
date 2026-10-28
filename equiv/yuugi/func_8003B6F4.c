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
#define DAT_8009473c (*(s32 *)0x8009473C)
#define DAT_8009474c (*(s32 *)0x8009474C)
#define D_80078C9C (*(s32 *)0x80078C9C)
#define func_8003AAF0 ((s32 (*)())0x8003AAF0)
int func_8003B6F4(uint *param_1)

{
  s8 cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;

  uVar5 = 0;
  uVar2 = func_8003AAF0(param_1);
  do {
    iVar3 = D_80078C9C * 0x2ac;
    cVar1 = *(s8 *)(*(int *)(&DAT_8009473c + iVar3) + *param_1);
    uVar4 = *param_1 + 1;
    *param_1 = uVar4;
    uVar5 = uVar5 + 1;
    if (*(uint *)(&DAT_8009474c + iVar3) < uVar4) {
      *(undefined1 *)(param_1 + 8) = 1;
      cVar1 = -1;
    }
  } while ((cVar1 != -9) && (uVar5 < uVar2 != 0));
  return (uint)(uVar5 < uVar2);
}

/* real-callee: func_8003AAF0 */
/* arg0: 0x80130000 */
/* rand-u16: 0x80130000 1 0 */
/* rand-u16: 0x80130002 1 0 */
/* rand-u16: 0x80078C9C 1 0 */
/* rand-u16: 0x80078C9E 1 0 */
/* rand-u16: 0x8009473C 1 0 */
/* rand-u16: 0x8009473E 1 32788 */
/* rand-u16: 0x8009474C 1 20 */
/* rand-u16: 0x8009474E 1 0 */
/* rand-u16: 0x80140000 1 16645 */
/* rand-u16: 0x80140002 1 63298 */
