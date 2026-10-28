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
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ee70 (*(s32 *)0x8008EE70)
#define DAT_8008ee74 (*(s32 *)0x8008EE74)
#define DAT_800906a0 (*(s32 *)0x800906A0)
#define DAT_8011974d (*(u8 *)0x8011974D)
extern s32 RotTransPers();
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
int func_800FF0A0(int param_1,SVECTOR *param_2,short param_3)

{
  union { u64 align; u8 bytes[0x10]; } recovered_local_frame;
#define local_28 (*(short volatile *)(recovered_local_frame.bytes + 0x0))
#define local_26 (*(short volatile *)(recovered_local_frame.bytes + 0x2))
#define lStack_24 (*(long volatile *)(recovered_local_frame.bytes + 0x4))
#define alStack_20 (*(long volatile (*)[2])(recovered_local_frame.bytes + 0x8))

  int iVar1;
  long lVar2;
  ushort uVar3;





  if (DAT_8011974d == '\0') {
    func_8002CEC0(&DAT_800906a0);
    DAT_8011974d = '\x01';
  }
  lVar2 = RotTransPers(param_2,(long *)&local_28,&lStack_24,alStack_20);
  *(short *)(param_1 + 0x46) = local_28 - (short)(DAT_8008ee70 / 2);
  iVar1 = DAT_8008ee74;
  *(short *)(param_1 + 0x4e) = ((short)lVar2 + -10) - param_3;
  *(short *)(param_1 + 0x4a) = local_26 - (short)(iVar1 / 2);
  uVar3 = (ushort)(0x140000 / lVar2);
  *(ushort *)(param_1 + 0x52) = uVar3;
  *(ushort *)(param_1 + 0x50) = uVar3;
  *(ushort *)(param_1 + 0x52) = uVar3 & 0xfff0;
  *(ushort *)(param_1 + 0x50) = uVar3 & 0xfff0;
  return -0x10;
}

#undef local_28
#undef local_26
#undef lStack_24
#undef alStack_20

/* arg0: 0x80140000 */
/* arg1: 0x80150000 */
/* arg2: small */
/* rand-mem: 0x80150000 8 256 */
/* rand-u16: 0x8011974D 1 0,1 */
/* rand-u16: 0x8008EE70 1 320 */
/* rand-u16: 0x8008EE72 1 0 */
/* rand-u16: 0x8008EE74 1 240 */
/* rand-u16: 0x8008EE76 1 0 */
