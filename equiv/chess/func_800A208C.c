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
#define DAT_8008edf0 (*(s32 *)0x8008EDF0)
#define func_800125D8 ((s32 (*)())0x800125D8)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800A835C ((s32 (*)())0x800A835C)
#define func_800ADF5C ((s32 (*)())0x800ADF5C)
int func_800A208C(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;

  iVar7 = param_1 + 0x5d0;
  uVar9 = (uint)*(byte *)(param_1 + 0xbca);
  *(undefined1 *)(param_1 + 0xbe0) = 5;
  *(undefined1 *)(param_1 + 0xbe5) = 0;
  *(undefined1 *)(param_1 + 0xbe9) = 1;
  if ((*(s8 *)(param_1 + 0xbea) == '\0') || (iVar3 = 5, *(s8 *)(param_1 + 0xbea) == '\x05')) {
    iVar8 = iVar7 + uVar9;
    if (*(s8 *)(iVar8 + 0x10) != '\0') {
      func_800ADF5C(iVar7,uVar9);
    }
    uVar5 = (((u32 *)0x8008EDF0))[uVar9 * 4];
    iVar3 = 0;
    if ((uVar5 & 0x20) == 0) {
      if ((uVar5 & 0x8000) == 0) {
        iVar3 = 5;
        if ((uVar5 & 0x2000) != 0) {
          if (*(s8 *)(iVar8 + 0x6d9) != '\x05') {
            func_80034AB0(0x84);
          }
          iVar7 = iVar7 + uVar9;
          do {
            *(s8 *)(iVar7 + 0x6db) = *(s8 *)(iVar7 + 0x6db) + '\x01';
            *(byte *)(iVar7 + 0x6db) = *(byte *)(iVar7 + 0x6db) % 6;
            iVar3 = 0;
          } while (((int)(uint)*(byte *)(iVar7 + 0x6dd) >> (*(byte *)(iVar7 + 0x6db) & 0x1f) & 1U)
                   != 0);
        }
      }
      else {
        if (*(s8 *)(iVar8 + 0x6d9) != '\x05') {
          func_80034AB0(0x84);
        }
        do {
          *(s8 *)(iVar8 + 0x6db) = *(s8 *)(iVar8 + 0x6db) + '\x05';
          *(byte *)(iVar8 + 0x6db) = *(byte *)(iVar8 + 0x6db) % 6;
          iVar3 = 0;
        } while (((int)(uint)*(byte *)(iVar8 + 0x6dd) >> (*(byte *)(iVar8 + 0x6db) & 0x1f) & 1U) !=
                 0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xbe5) = 1;
      *(undefined1 *)(param_1 + 0xbe0) = 0;
      bVar1 = *(byte *)(iVar8 + 0x6db);
      iVar6 = iVar7 + (uint)bVar1 * 0x7c + uVar9 * 0x2e8;
      iVar8 = iVar6;
      do {
        puVar4 = (undefined1 *)(uVar9 * 2 + iVar7 + 0x601 + iVar3);
        iVar3 = iVar3 + 1;
        *(undefined1 *)(iVar8 + 0x2d) = *puVar4;
        iVar8 = iVar6 + iVar3;
      } while (iVar3 < 2);
      iVar7 = iVar7 + (uint)bVar1 * 0x7c + uVar9 * 0x2e8;
      *(undefined1 *)(iVar7 + 0x2f) = 1;
      uVar2 = func_800A835C(param_1,uVar9);
      *(undefined1 *)(iVar7 + 0x3d) = uVar2;
      *(undefined1 *)(param_1 + 0xd77) = 0;
      iVar3 = func_800125D8();
    }
  }
  return iVar3;
}

/* arg0: 0x80140000 */
/* real-callee: func_800A835C */
/* rand-u16: 0x80140BEA 1 0,1,5,255 */
/* rand-u16: 0x801405DE 1 257,514 */
/* rand-u16: 0x801405E0 1 0,257 */
/* rand-u16: 0x80140CAB 1 0,257,1285 */
/* rand-u16: 0x80140CAD 1 0,257,771,7967 */
/* rand-u16: 0x80140BD0 3 0,257,3084 */
/* rand-u32-strided: 0x8008EDF0 2 16 0,0x20,0x2000,0x8000,0xA000,0xFFFF */
/* rand-u16: 0x80140BCA 1 0 */
