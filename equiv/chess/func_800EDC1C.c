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
#define DAT_80063953 (*(u8 *)0x80063953)
#define DAT_80085a10 (*(u8 *)0x80085A10)
#define DAT_8008ee70 (*(s32 *)0x8008EE70)
#define DAT_8008ee74 (*(s32 *)0x8008EE74)
#define func_80015B3C ((s32 (*)())0x80015B3C)
int func_800EDC1C(undefined4 param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;

  iVar3 = func_80015B3C(-0x7ff12538,-0x7ff06eac,1);
  bVar1 = (&DAT_80063953)[(uint)(byte)(&DAT_80085a10)[param_3 * 0x2e8 + param_4 * 0x7c] * 0x3c];
  *(short *)(iVar3 + 0x2c) = *(short *)(param_2 + 0x46) + (short)(DAT_8008ee70 / 2);
  iVar4 = (bVar1 & 0x3f) * (int)*(short *)(param_2 + 0x52);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xfff;
  }
  sVar2 = (*(short *)(param_2 + 0x4a) + (short)(DAT_8008ee74 / 2)) - (short)(iVar4 >> 0xc);
  *(short *)(iVar3 + 0x2e) = sVar2;
  *(short *)(iVar3 + 0x2a) = sVar2 + -100;
  *(undefined2 *)(iVar3 + 0x28) = *(undefined2 *)(iVar3 + 0x2c);
  sVar2 = *(short *)(param_2 + 0x4e);
  *(undefined2 *)(iVar3 + 0x32) = 10;
  *(undefined2 *)(iVar3 + 0x34) = 0x14;
  *(undefined2 *)(iVar3 + 0x36) = 0x28;
  *(undefined1 *)(iVar3 + 0x38) = 0x7f;
  *(undefined1 *)(iVar3 + 0x39) = 0x7f;
  *(undefined1 *)(iVar3 + 0x3a) = 0xff;
  *(undefined1 *)(iVar3 + 0x3c) = 0x10;
  *(undefined1 *)(iVar3 + 0x3d) = 0x18;
  *(undefined1 *)(iVar3 + 0x3e) = 8;
  *(int *)(iVar3 + 0x18) = param_2;
  *(short *)(iVar3 + 0x30) = sVar2 + -10;
  return 8;
}

/* arg1: 0x80140000 */
/* arg2: small */
/* arg3: small */
/* rand-u16: 0x80140046 8 0,1,4096,32767,32768,65535 */
/* rand-u32-strided: 0x80063950 256 60 0,0x01000000,0x3F000000 */
