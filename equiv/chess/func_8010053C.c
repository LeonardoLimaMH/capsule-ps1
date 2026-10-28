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
#define DAT_80080000 (*(s32 *)0x80080000)
#define DAT_800859f0 (*(u8 *)0x800859F0)
#define DAT_8008ee48 (*(u16 *)0x8008EE48)
#define D_80119768 (*(s32 *)0x80119768)
#define func_80012508 ((s32 (*)())0x80012508)
#define func_80012578 ((s32 (*)())0x80012578)
#define func_80019654 ((s32 (*)())0x80019654)
#define func_800337EC ((s32 (*)())0x800337EC)
#define func_800338DC ((s32 (*)())0x800338DC)
int func_8010053C(void)

{
  uint uVar1;
  int iVar2;

  if (DAT_8008ee48 == 1) {
    iVar2 = func_80019654();
    if (iVar2 == 0) {
      return 0;
    }
LAB_801005c8:
    iVar2 = func_80012578();
  }
  else {
    if (DAT_8008ee48 < 2) {
      if (DAT_8008ee48 != 0) {
        return (int)&DAT_80080000;
      }
      D_80119768 = 0;
      if ((DAT_800859f0 & 4) != 0) goto LAB_801005c8;
    }
    else {
      if (DAT_8008ee48 == 2) {
        func_800338DC(0x701f);
        goto LAB_801005c8;
      }
      if (DAT_8008ee48 != 3) {
        return (int)&DAT_80080000;
      }
      if (((DAT_800859f0 & 4) != 0) && (uVar1 = func_800337EC(), (uVar1 & 0x80) == 0)) {
        return 0;
      }
    }
    iVar2 = func_80012508();
  }
  return iVar2;
}
