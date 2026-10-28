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
#define DAT_800900c0 (*(s32 *)0x800900C0)
#define DAT_80118b50 (*(s32 *)0x80118B50)
#define D_801010B0 (*(s32 *)0x801010B0)
#define D_80118710 (*(u8 *)0x80118710)
#define D_80118B54 (*(s32 *)0x80118B54)
int func_800C87C0(undefined4 param_1,int param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;

  iVar4 = D_80118B54;
  iVar2 = DAT_80118b50;
  iVar5 = *(int *)(&D_801010B0 + (uint)*(byte *)(param_2 + 9) * 0x34);
  puVar6 = &DAT_800900c0;
  bVar1 = (&D_80118710)[(uint)param_3[1] + (uint)*param_3 * 0xd];
  iVar8 = 0;
  param_3[2] = 0;
  iVar7 = (uint)bVar1 * 0x28;
  puVar3 = (uint *)((uint)param_3[1] * 4 + (uint)*param_3 * 0x34 + iVar5);
  *puVar3 = *puVar3 & 0xfff8003f | (*(ushort *)(param_3 + 6) & 0x1fff) << 6;
  iVar4 = iVar4 + (uint)bVar1 * 0xc;
  *(undefined2 *)(iVar4 + 10) = *(undefined2 *)(param_3 + 4);
  do {
    *(undefined1 *)(iVar7 + *(int *)(puVar6 + 0x684) + 0xc) =
         *(undefined1 *)((uint)*(ushort *)(iVar4 + 10) * 0xc + iVar2);
    *(undefined1 *)(iVar7 + *(int *)(puVar6 + 0x684) + 0xd) =
         *(undefined1 *)((uint)*(ushort *)(iVar4 + 10) * 0xc + iVar2 + 1);
    *(undefined1 *)(iVar7 + *(int *)(puVar6 + 0x684) + 0x14) =
         *(undefined1 *)((uint)*(ushort *)(iVar4 + 10) * 0xc + iVar2 + 2);
    *(undefined1 *)(iVar7 + *(int *)(puVar6 + 0x684) + 0x15) =
         *(undefined1 *)((uint)*(ushort *)(iVar4 + 10) * 0xc + iVar2 + 3);
    *(undefined1 *)(iVar7 + *(int *)(puVar6 + 0x684) + 0x1c) =
         *(undefined1 *)((uint)*(ushort *)(iVar4 + 10) * 0xc + iVar2 + 4);
    *(undefined1 *)(iVar7 + *(int *)(puVar6 + 0x684) + 0x1d) =
         *(undefined1 *)((uint)*(ushort *)(iVar4 + 10) * 0xc + iVar2 + 5);
    *(undefined1 *)(iVar7 + *(int *)(puVar6 + 0x684) + 0x24) =
         *(undefined1 *)((uint)*(ushort *)(iVar4 + 10) * 0xc + iVar2 + 6);
    *(undefined1 *)(iVar7 + *(int *)(puVar6 + 0x684) + 0x25) =
         *(undefined1 *)((uint)*(ushort *)(iVar4 + 10) * 0xc + iVar2 + 7);
    iVar8 = iVar8 + 1;
    *(undefined2 *)(iVar7 + *(int *)(puVar6 + 0x684) + 0x16) =
         *(undefined2 *)((uint)*(ushort *)(iVar4 + 10) * 0xc + iVar2 + 8);
    *(undefined2 *)(iVar7 + *(int *)(puVar6 + 0x684) + 0xe) =
         *(undefined2 *)((uint)*(ushort *)(iVar4 + 10) * 0xc + iVar2 + 10);
    puVar6 = puVar6 + 4;
  } while (iVar8 < 2);
  return 0;
}

/* arg1: 0x80140000 */
/* arg2: 0x80145000 */
/* rand-u16: 0x80140008 1 0 */
/* rand-u16: 0x80145000 1 0,257,3084 */
/* rand-u16: 0x80145004 1 0,1,2,7 */
/* rand-u16: 0x80145006 1 0,1,8191,65535 */
/* rand-u16: 0x801010B0 1 0 */
/* rand-u16: 0x801010B2 1 32789 */
/* rand-u16: 0x80118B54 1 0 */
/* rand-u16: 0x80118B56 1 32790 */
/* rand-u16: 0x80118B50 1 32768 */
/* rand-u16: 0x80118B52 1 32790 */
/* rand-u16: 0x80090744 1 0 */
/* rand-u16: 0x80090746 1 32791 */
/* rand-u16: 0x80090748 1 4096 */
/* rand-u16: 0x8009074A 1 32791 */
/* rand-u16: 0x80118710 85 0,257,1799 */
/* rand-u32-strided: 0x80150000 169 4 0,0xFFFFFFFF,0x12345678 */
/* rand-mem: 0x80168000 96 256 */
