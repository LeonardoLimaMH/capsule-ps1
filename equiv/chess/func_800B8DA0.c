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
/* real-callee: func_800DD428 */
/* real-callee: func_800DDA78 */
/* real-callee: func_800FE188 */
/* real-callee: func_800FE21C */
/* real-callee: func_800FE74C */
/* real-callee: func_800FEBF4 */
/* real-callee: func_800FEC2C */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF190 */
/* real-callee: func_800FF2CC */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FF460 */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
#define DAT_8008610f (*(u8 *)0x8008610F)
#define func_800185F8 ((s32 (*)())0x800185F8)
void func_800B8DA0(int param_1)

{
  ushort uVar1;
  s8 cVar2;

  if (*(int *)(*(int *)(param_1 + 0x40) + 0x10) == 0) {
    func_800185F8();
  }
  if ((*(uint *)(param_1 + 0x34) & 0x7f) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x7a);
    if (uVar1 == 1) {
      *(undefined2 *)(param_1 + 0x4a) = 0x1c;
      *(undefined2 *)(param_1 + 0x4e) = 4;
      *(undefined1 *)(param_1 + 0x5a) = 0;
      *(undefined1 *)(param_1 + 0x59) = 0;
      *(undefined1 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x46) = 0;
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
      *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
    }
    else if (uVar1 < 2) {
      if ((uVar1 == 0) && (DAT_8008610f != '\0')) {
        *(undefined2 *)(param_1 + 0x7a) = 1;
      }
    }
    else if (uVar1 == 2) {
      cVar2 = *(s8 *)(param_1 + 0x5a) + '\x02';
      *(s8 *)(param_1 + 0x5a) = cVar2;
      *(s8 *)(param_1 + 0x59) = cVar2;
      *(s8 *)(param_1 + 0x58) = cVar2;
      if (cVar2 == -0x80) {
        *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
      }
    }
  }
  return;
}
