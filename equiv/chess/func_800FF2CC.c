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
/* real-callee: func_800FE188 */
/* real-callee: func_800FEC2C */
/* real-callee: func_800FE21C */
/* real-callee: func_800FEBF4 */
/* real-callee: func_800FF460 */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FE74C */
/* real-callee: __fixdfsi */
/* real-callee: __floatsidf */
/* real-callee: __muldf3 */
/* real-callee: _add_mant_d */
/* real-callee: _dbl_shift */
/* real-callee: _dbl_shift_us */
/* real-callee: _err_math */
/* real-callee: _mul_mant_d */
/* real-callee: func_8004FE2C */
/* callee-contract: RotTransPers */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
#include "common.h"

#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ee70 (*(s32 *)0x8008EE70)
#define DAT_8008ee74 (*(s32 *)0x8008EE74)
#define DAT_800906a0 (*(s32 *)0x800906A0)
#define DAT_8011974d (*(u8 *)0x8011974D)
extern s32 RotTransPers();
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
void func_800FF2CC(int param_1,SVECTOR *param_2,short param_3)

{
  union { u64 align; u8 bytes[0x28]; } recovered_local_frame;
#define local_28 (*(short volatile *)(recovered_local_frame.bytes + 0x0))
#define local_26 (*(short volatile *)(recovered_local_frame.bytes + 0x2))
#define lStack_24 (*(long volatile *)(recovered_local_frame.bytes + 0x4))
#define alStack_20 (*(long volatile (*)[2])(recovered_local_frame.bytes + 0x8))

  int iVar1;
  long lVar2;
  ushort uVar3;
  int iVar4;





  iVar4 = *(int *)(param_1 + 0x70);
  if (DAT_8011974d == '\0') {
    func_8002CEC0(&DAT_800906a0);
    DAT_8011974d = '\x01';
  }
  lVar2 = RotTransPers(param_2,(long *)&local_28,&lStack_24,alStack_20);
  *(short *)(iVar4 + 0x46) = local_28 - (short)(DAT_8008ee70 / 2);
  iVar1 = DAT_8008ee74;
  *(short *)(iVar4 + 0x4e) = ((short)lVar2 + -0xf) - param_3;
  *(short *)(iVar4 + 0x4a) = local_26 - (short)(iVar1 / 2);
  uVar3 = (ushort)(0x140000 / lVar2);
  *(ushort *)(iVar4 + 0x50) = uVar3;
  uVar3 = uVar3 & 0xfff0;
  *(ushort *)(iVar4 + 0x52) = uVar3;
  *(ushort *)(iVar4 + 0x50) = uVar3;
  return;
}

#undef local_28
#undef local_26
#undef lStack_24
#undef alStack_20
