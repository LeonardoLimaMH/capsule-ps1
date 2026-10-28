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
#define DAT_80063950 (*(u8 *)0x80063950)
#define DAT_80063954 (*(s32 *)0x80063954)
#define DAT_801010e0 (*(u8 *)0x801010E0)
int func_800C9560(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;

  if (*(byte *)(param_1 + 0xbea) < 5) {
    iVar2 = (int)*(short *)(param_2 + 0x4e);
    if (iVar2 < 1) {
      return 1;
    }
    if (param_4 == 0) {
      uVar1 = (uint)(0x140000 / iVar2);
      *(ushort *)(param_2 + 0x52) = uVar1;
      *(ushort *)(param_2 + 0x50) = uVar1;
      uVar1 = uVar1 & 0xfffffff0;
    }
    else {
      uVar1 = (uint)((int)(((((((u32 *)0x80063954))[param_3 * 0xf] & 3) << 2 |
                              *(uint *)(&DAT_80063950 + param_3 * 0x3c) >> 0x1e) * 8 + 0x100) *
                            0x1000) / iVar2);
      *(ushort *)(param_2 + 0x52) = uVar1;
      *(ushort *)(param_2 + 0x50) = uVar1;
      uVar1 = uVar1 & 0xfffffff0;
    }
  }
  else {
    uVar1 = (uint)(0xc00000 / *(ushort *)(&DAT_801010e0 + (uint)*(byte *)(param_1 + 0x5d9) * 0x34)
                    );
  }
  *(ushort *)(param_2 + 0x52) = uVar1;
  *(ushort *)(param_2 + 0x50) = uVar1;
  return uVar1;
}

/* arg0: 0x80140000 */
/* arg1: 0x80150000 */
/* arg2: small */
/* arg3: small */
/* rand-u16: 0x80140BEA 1 0,1,4,5,6 */
/* rand-u16: 0x801405D9 1 0,1 */
/* rand-u16: 0x8015004E 1 0,1,10,100,65535 */
/* rand-u16: 0x801010E0 1 1,10,50,100 */
/* rand-u16: 0x80101114 1 1,10,50,100 */
