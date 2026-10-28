#include "common.h"

/* rand-u16: 0x801405D9 1 0,1 */
/* rand-mem: 0x80140015 2 13 */
/* rand-mem: 0x80150015 2 13 */
/* rand-u16: 0x801010B0 1 8192 */
/* rand-u16: 0x801010B2 1 32789 */
/* rand-u16: 0x801010E4 1 16384 */
/* rand-u16: 0x801010E6 1 32789 */
/* rand-u32-strided: 0x80152000 169 4 0,0x42,0x82 */
/* rand-u32-strided: 0x80154000 169 4 0,0x42,0x82 */
/* real-callee: func_800A8EE8 */
/* real-callee: func_800A835C */
/* real-callee: func_800A46B8 */
/* real-callee: func_80020304 */
/* real-callee: func_800202A4 */
/* real-callee: func_800A8994 */
/* arg0: 0x80140000 */
/* arg1: small */
/* arg2: 0x80150000 */
/* arg3: small */
/* arg4: small */
/* arg5: small */
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
#define DAT_80100d16 (*(u16 *)0x80100D16)
#define D_80100D14 (*(u16 *)0x80100D14)
#define D_801010B0 (*(u8 *)0x801010B0)
extern s32 rcos();
extern s32 rsin();
void func_8009DB7C(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;

  iVar4 = *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 9) * 0x34);
  uVar5 = (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + 0x5fa) + 0x605);
  *(undefined1 *)(param_1 + 0x62a) = 1;
  iVar7 = (uVar5 & 0x7f) << 9;
  iVar2 = param_1 + *(s8 *)(param_1 + 0x628) * 0x7c + param_2 * 0x2e8;
  uVar1 = (uint)*(byte *)(iVar2 + 0x2d);
  uVar3 = (uint)*(byte *)(iVar2 + 0x2e);
  *(uint *)(param_1 + 0x77c) = (6 - uVar1) * 100;
  uVar1 = *(uint *)(uVar3 * 4 + uVar1 * 0x34 + iVar4);
  *(uint *)(param_1 + 0x784) = (6 - uVar3) * 100;
  *(uint *)(param_1 + 0x780) = (uVar1 >> 0x13 & 7) * 0x32;
  iVar2 = rcos(iVar7);
  iVar4 = rsin(iVar7);
  iVar6 = uVar5 * 4;
  iVar2 = iVar2 * (uint)*(ushort *)(((u8 *)0x80100D14) + iVar6) +
          iVar4 * (uint)*(ushort *)(((u8 *)0x80100D16) + iVar6);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xfff;
  }
  *(int *)(param_1 + 0x77c) = *(int *)(param_1 + 0x77c) + (iVar2 >> 0xc);
  iVar2 = rsin(iVar7);
  iVar4 = rcos(iVar7);
  iVar2 = iVar2 * (uint)*(ushort *)(((u8 *)0x80100D14) + iVar6) -
          iVar4 * (uint)*(ushort *)(((u8 *)0x80100D16) + iVar6);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xfff;
  }
  *(int *)(param_1 + 0x784) = *(int *)(param_1 + 0x784) + (iVar2 >> 0xc);
  return;
}

/* arg1: 0x00000000 */
/* rand-u16: 0x801405FA 1 0,1 */
/* rand-mem: 0x80140605 1 256 */
/* rand-u16: 0x80140628 1 0,1,5,12 */
/* rand-mem: 0x8014002D 2 13 */
