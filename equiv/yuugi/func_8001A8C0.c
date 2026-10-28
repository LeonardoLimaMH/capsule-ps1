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
/* compiler: 2.8.1-psx */
#include "ghidra.h"

byte * func_8001A8C0(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;

  uVar5 = 0;
  do {
    uVar5 = uVar5 >> 1;
    while( true ) {
      if ((uVar5 & 0x100) == 0) {
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar5 = bVar1 | 0xff00;
      }
      bVar1 = *param_1;
      uVar4 = (uint)bVar1;
      if ((uVar5 & 1) == 0) break;
      if ((bVar1 & 0x80) == 0) {
        pbVar3 = param_1 + 1;
        param_1 = param_1 + 2;
        iVar2 = (bVar1 >> 2) + 2;
        uVar4 = (uint)*pbVar3 | (uVar4 & 3) << 8;
LAB_8001a944:
        do {
          iVar2 = iVar2 + -1;
          *param_2 = param_2[-uVar4];
          param_2 = param_2 + 1;
        } while (-1 < iVar2);
        uVar5 = uVar5 >> 1;
      }
      else {
        param_1 = param_1 + 1;
        if ((bVar1 & 0x40) == 0) {
          uVar4 = (uVar4 & 0xf) + 1;
          iVar2 = (bVar1 >> 4) - 7;
          goto LAB_8001a944;
        }
        iVar2 = uVar4 - 0xb9;
        pbVar3 = param_2;
        if (uVar4 == 0xff) {
          return param_2;
        }
        do {
          bVar1 = *param_1;
          param_1 = param_1 + 1;
          param_2 = pbVar3 + 1;
          iVar2 = iVar2 + -1;
          *pbVar3 = bVar1;
          pbVar3 = param_2;
        } while (-1 < iVar2);
        uVar5 = uVar5 >> 1;
      }
    }
    *param_2 = bVar1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while( true );
}

/* arg0: 0x80140000 */
/* arg1: 0x80150000 */
/* rand-mem: 0x80150000 64 256 */
/* rand-u16: 0x80140000 1 65281 */
