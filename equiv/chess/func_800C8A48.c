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
/* arg1: 0x80150000 */
/* arg2: small */
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
/* compiler: 2.7.2-psx */
#include "ghidra.h"
#define D_801010B0 (*(u8 *)0x801010B0)
#define func_800ADAA4 ((s32 (*)())0x800ADAA4)
#define func_800CA474 ((s32 (*)())0x800CA474)
int func_800C8A48(undefined4 param_1,int param_2,int param_3,int param_4,s8 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 *puVar4;
  int iVar5;

  iVar5 = *(int *)(&D_801010B0 + (uint)*(byte *)(param_2 + 9) * 0x34);
  puVar4 = (undefined1 *)(param_2 + (uint)*(byte *)(param_2 + 0x778) * 0xc + 0x730);
  uVar1 = func_800CA474(param_1);
  puVar4[2] = 2;
  *puVar4 = (s8)param_3;
  puVar4[1] = (s8)param_4;
  puVar4[3] = param_5 << 1;
  puVar3 = (uint *)(param_4 * 4 + param_3 * 0x34 + iVar5);
  *(ushort *)(puVar4 + 6) = (ushort)(*puVar3 >> 6) & 0x1fff;
  if (*(s8 *)(param_2 + (uint)*(byte *)(param_2 + (uint)*(byte *)(param_2 + 0x5fa) + 0x5fb) * 0x7c
                          + (uint)*(byte *)(param_2 + 0x5fa) * 0x2e8 + 0x18) == '2') {
    uVar2 = *puVar3 & 0xfff8003f | 0x1c0;
  }
  else {
    uVar2 = *puVar3 & 0xfff8003f | 0x280;
  }
  *puVar3 = uVar2;
  *(s8 *)(param_2 + 0x778) = *(s8 *)(param_2 + 0x778) + '\x01';
  iVar5 = func_800ADAA4(param_3,param_4,
                        *(uint *)(param_4 * 4 + param_3 * 0x34 + iVar5) >> 6 & 0x1fff,uVar1,1);
  *(int *)(puVar4 + 8) = iVar5;
  return iVar5;
}

/* real-callee: func_800CA474 */
/* rand-u16: 0x80150009 1 0,1 */
/* rand-u16: 0x80150778 1 0,1,2,3 */

/* real-callee: func_800ADAA4 */
