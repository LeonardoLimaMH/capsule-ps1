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
/* real-callee: func_800DD428 */
/* real-callee: func_800DDA78 */
/* real-callee: func_800FE188 */
/* real-callee: func_800FE21C */
/* real-callee: func_800FE74C */
/* real-callee: func_800FEBF4 */
/* real-callee: func_800FEC2C */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF190 */
/* real-callee: func_800FF2CC */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FF460 */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
#define DAT_80085a1e (*(u8 *)0x80085A1E)
#define DAT_80085a1f (*(u8 *)0x80085A1F)
#define DAT_80085a20 (*(u8 *)0x80085A20)
#define DAT_80085a21 (*(u8 *)0x80085A21)
extern u64 __adddf3();
extern u64 __divdf3();
extern s32 __fixdfsi();
extern u64 __floatsidf();
extern u64 __muldf3();
uint func_800D2FA0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;

  iVar3 = ((param_1 & 0x7f) - 1) * 0x7c + ((param_1 & 0xff) >> 7) * 0x2e8;
  uVar4 = __floatsidf((byte)(&DAT_80085a1e)[iVar3] - 0x73);
  uVar4 = __muldf3(uVar4,0x3fe0000000000000);
  uVar5 = __floatsidf((byte)(&DAT_80085a1f)[iVar3] - 0x3c);
  uVar4 = __adddf3(uVar4,uVar5);
  uVar5 = __floatsidf((byte)(&DAT_80085a20)[iVar3] - 0x1e);
  uVar4 = __adddf3(uVar4,uVar5);
  uVar5 = __floatsidf((byte)(&DAT_80085a21)[iVar3] - 3);
  uVar5 = __muldf3(uVar5,0x4024000000000000);
  uVar4 = __adddf3(uVar4,uVar5);
  uVar4 = __adddf3(uVar4,0x4039000000000000);
  uVar4 = __divdf3(uVar4,0x4032000000000000);
  uVar4 = __adddf3(uVar4,0x3ff0000000000000);
  uVar1 = __fixdfsi(uVar4);
  if ((int)uVar1 < 1) {
    uVar2 = 1;
  }
  else {
    uVar2 = 5;
    if ((int)uVar1 < 6) {
      uVar2 = uVar1;
    }
  }
  return uVar2 & 0xff;
}
