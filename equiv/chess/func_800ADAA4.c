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
#define D_80118710 (*(u8 *)0x80118710)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80015EF8 ((s32 (*)())0x80015EF8)
#define func_800ADBC4 ((s32 (*)())0x800ADBC4)
#define func_800ADBCC ((s32 (*)())0x800ADBCC)
#define func_800ADBD8 ((s32 (*)())0x800ADBD8)
int func_800ADAA4(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int task;
  undefined4 uVar4;

  iVar3 = func_800ADBC4(param_3);
  task = func_80015B3C(-0x7ff52848,-0x7ffe9e3c,5);
  func_80015EF8(task);
  *(uint *)(task + 0x38) = *(uint *)(task + 0x38) | 1;
  bVar1 = (&D_80118710)[param_2 + param_1 * 0xd];
  *(int *)(task + 0x80) = iVar3 + -4;
  *(uint *)(task + 0x7c) = (uint)bVar1;
  if (iVar3 + -4 < 3) {
    *(uint *)(task + 0x30) = *(uint *)(task + 0x30) & 0xfffffe3f | 0x40;
  }
  uVar2 = func_800ADBD8(param_3);
  *(undefined2 *)(task + 0x66) = uVar2;
  *(undefined4 *)(task + 0x88) = param_4;
  uVar4 = func_800ADBCC(param_3);
  *(undefined4 *)(task + 0x8c) = uVar4;
  *(uint *)(task + 0x34) = *(uint *)(task + 0x34) & 0xffffff80 | param_5 & 0x7f;
  return task;
}

/* arg0: small */
/* arg1: small */
/* arg2: 0x80140000 */
/* arg3: 0x80150000 */
/* rand-mem: 0x80140000 64 256 */
