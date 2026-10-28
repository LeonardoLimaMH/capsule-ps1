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
#define DAT_80069bb0 (*(s32 *)0x80069BB0)
#define DAT_80069bbe (*(s16 *)0x80069BBE)
#define DAT_80069bc0 (*(s16 *)0x80069BC0)
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008f7a4 (*(u32 *)0x8008F7A4)
#define DAT_8008f7a8 (*(s32 *)0x8008F7A8)
#define DAT_8008f7b0 (*(u32 *)0x8008F7B0)
#define D_80119714 (*(s32 *)0x80119714)
#define _DAT_8008f7ac (*(s32 *)0x8008F7AC)
#define _DAT_8008f7b0 (*(u32 *)0x8008F7B0)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800C942C ((s32 (*)())0x800C942C)
#define func_800C94DC ((s32 (*)())0x800C94DC)
extern s32 rsin();
undefined4 func_800F49B8(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;

  uVar5 = 0;
  uVar2 = uVar5;
  if (DAT_8008ee54 == 1) {
    if (*(int *)(*(int *)(param_3 + 0x70) + 0x20) == 4) {
      func_80034AB0(4);
      *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x80000000;
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
    }
  }
  else if (DAT_8008ee54 < 2) {
    uVar2 = 0;
    if (DAT_8008ee54 == 0) {
      *(undefined1 *)(param_3 + 0x17) = 0x88;
      *(undefined1 *)(param_3 + 0x23) = 1;
      D_80119714 = 0;
      DAT_8008f7a4 = (int)DAT_80069bbe;
      DAT_8008ee54 = DAT_8008ee54 + 1;
      DAT_8008f7a8 = func_800C942C(param_1,*(undefined1 *)(param_3 + 0x25));
      _DAT_8008f7b0 = (int)DAT_80069bc0;
      _DAT_8008f7ac = DAT_80069bb0;
      uVar2 = uVar5;
    }
  }
  else if (DAT_8008ee54 == 2) {
    iVar4 = (int)DAT_80069bbe + (D_80119714 * 3) / 2;
    iVar3 = iVar4;
    if (iVar4 < 0) {
      iVar3 = iVar4 + 0xfff;
    }
    DAT_80069bbe = (short)iVar4 + (short)(iVar3 >> 0xc) * -0x1000;
    uVar1 = func_800C94DC(param_1,DAT_8008f7a8);
    *(undefined1 *)(param_3 + 0x25) = uVar1;
    iVar3 = rsin((D_80119714 * 0x1000) / 0x17);
    iVar3 = ((D_80119714 * 0x1e) / 0xe6) * iVar3;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xfff;
    }
    DAT_80069bb0 = DAT_80069bb0 + (iVar3 >> 0xc);
    iVar3 = rsin((D_80119714 << 0xc) / 0x11);
    iVar3 = ((D_80119714 * 0x1c2) / 0xe6) * iVar3;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xfff;
    }
    DAT_80069bc0 = (short)DAT_80069bb0 + (short)(iVar3 >> 0xc);
    uVar2 = 0;
    if (0xd1 < D_80119714) {
      iVar3 = func_80015B3C(-0x7ffe7a00,-0x7ff0ad3c,1);
      *(undefined1 *)(iVar3 + 0x28) = 0xff;
      *(undefined1 *)(iVar3 + 0x29) = 0xff;
      *(undefined1 *)(iVar3 + 0x2a) = 0xff;
      *(undefined1 *)(iVar3 + 0x2c) = 0;
      *(undefined1 *)(iVar3 + 0x2d) = 0;
      *(undefined1 *)(iVar3 + 0x2e) = 0;
      *(undefined1 *)(iVar3 + 0x30) = 1;
      *(undefined2 *)(iVar3 + 0x32) = 0x1e;
      DAT_80069bbe = (short)DAT_8008f7a4;
      DAT_80069bb0 = _DAT_8008f7ac;
      DAT_80069bc0 = DAT_8008f7b0;
      *(byte *)(param_3 + 0x17) = *(byte *)(param_3 + 0x17) ^ 0x87;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* arg2: 0x80140000 */
/* real-callee: func_800C942C */
/* real-callee: func_800C94DC */
/* real-callee: rsin */
/* rand-u32-strided: 0x80140070 1 4 0x80150000 */
/* rand-u32-strided: 0x80150020 1 4 0,1,4 */
/* rand-u32-strided: 0x80119714 1 4 0,1,22,23,209,210,229,230,65535 */
/* rand-u16: 0x80069BBE 2 0,4095,32767,32768,65535 */
/* rand-u32-strided: 0x80069BB0 1 4 0,1,4096,0x80000000,0xFFFFFFFF */
/* rand-u32-strided: 0x8008F7A4 4 4 0,1,0xFFFFFFFF,0x12345678 */
/* rand-u16: 0x8008EE54 1 2 */
