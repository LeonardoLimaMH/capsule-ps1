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
#define DAT_8006394e (*(u8 *)0x8006394E)
#define D_80100C48 (*(u8 *)0x80100C48)
#define D_80100C68 (*(u8 *)0x80100C68)
#define D_801010B0 (*(s32 *)0x801010B0)
#define func_80020304 ((s32 (*)())0x80020304)
#define func_800CA408 ((s32 (*)())0x800CA408)
int func_80099B48(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;

  iVar10 = 0;
  iVar3 = *(int *)(&D_801010B0 + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
  do {
    iVar9 = 0xc;
    iVar2 = iVar3 + 0x30;
    do {
      *(undefined1 *)(iVar2 + 3) = 0;
      iVar9 = iVar9 + -1;
      iVar2 = iVar2 + -4;
    } while (-1 < iVar9);
    iVar10 = iVar10 + 1;
    iVar3 = iVar3 + 0x34;
  } while (iVar10 < 0xd);
  iVar3 = 0;
  puVar11 = &D_80100C68;
  iVar10 = 0x18;
  do {
    iVar2 = 0;
    pbVar8 = (byte *)(param_1 + 0x5d0 + iVar10);
    do {
      iVar9 = func_80020304(0x1d);
      iVar6 = 0;
      *pbVar8 = (&D_80100C48)[iVar9];
      pbVar4 = pbVar8;
      do {
        iVar9 = iVar6 + iVar2 * 8;
        iVar6 = iVar6 + 1;
        pbVar4[1] = puVar11[iVar9];
        pbVar4 = pbVar8 + iVar6;
      } while (iVar6 < 8);
      iVar9 = 0;
      do {
        pbVar8[iVar9 + 9] = (&DAT_8006394e)[(uint)*pbVar8 * 0x3c + iVar9];
        iVar6 = iVar9 + 1;
        pbVar8[iVar9 + 0xe] = (&DAT_8006394e)[(uint)*pbVar8 * 0x3c + iVar9];
        iVar9 = iVar6;
      } while (iVar6 < 5);
      bVar1 = pbVar8[0xe];
      iVar9 = func_80020304(100);
      uVar7 = ((uint)bVar1 * iVar9) / 100;
      if (uVar7 == 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0xff;
        if (uVar7 < 0x100) {
          uVar5 = uVar7;
        }
      }
      pbVar8[0xe] = (byte)uVar5;
      bVar1 = func_800CA408(pbVar8);
      pbVar8[0x13] = bVar1;
      iVar2 = iVar2 + 1;
      pbVar8 = pbVar8 + 0x7c;
    } while (iVar2 < 6);
    puVar11 = puVar11 + 0x30;
    iVar3 = iVar3 + 1;
    iVar10 = iVar10 + 0x2e8;
  } while (iVar3 < 2);
  return 0;
}

/* arg0: 0x80140000 */
/* rand-u16: 0x801405D8 1 0 */
/* rand-u16: 0x801010B0 1 0 */
/* rand-u16: 0x801010B2 1 32789 */
/* rand-u32-strided: 0x80150000 169 4 0,0xFF000000,0x12345678 */
/* real-callee: func_80020304 */
/* real-callee: func_800CA408 */
/* real-callee: rand */
