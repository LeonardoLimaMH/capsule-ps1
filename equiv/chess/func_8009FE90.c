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
#define DAT_80101b4a (*(u16 *)0x80101B4A)
#define D_80100D3C (*(u16 *)0x80100D3C)
#define func_8001F8B0 ((s32 (*)())0x8001F8B0)
#define func_800CA3DC ((s32 (*)())0x800CA3DC)
int func_8009FE90(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;

  iVar1 = func_800CA3DC(param_2);
  iVar6 = 0;
  if (0 < iVar1) {
    puVar4 = &DAT_80101b4a;
    do {
      pbVar2 = (byte *)(param_2 + iVar6);
      iVar6 = iVar6 + 1;
      *puVar4 = (ushort)*pbVar2;
      puVar4 = puVar4 + 1;
    } while (iVar6 < iVar1);
  }
  iVar6 = 0;
  puVar7 = &D_80100D3C;
  do {
    iVar5 = iVar6 + iVar1;
    iVar6 = iVar6 + 1;
    (&DAT_80101b4a)[iVar5] = *puVar7;
    puVar7 = puVar7 + 1;
  } while (iVar6 < 0xe);
  *(undefined2 *)(iVar1 * 2 + -0x7fefe49a) = 0xffee;
  uVar3 = func_8001F8B0(0x19,10);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return uVar3;
}

/* real-callee: func_800CA3DC */
/* real-callee: func_8001F8B0 */
/* arg0: 0x80150000 */
/* arg1: 0x80140000 */
/* rand-u16: 0x80140000 4 0,1,65,16705 */
/* rand-u16: 0x80065374 1 0 */
/* rand-u16: 0x80065376 1 32790 */
/* rand-u32-strided: 0x80160028 1 4 0x80130000,0x80140000,0x80150000 */
