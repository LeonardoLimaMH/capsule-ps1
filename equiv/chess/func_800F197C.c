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
/* real-callee: func_800DD428 */
/* real-callee: func_80015D14 */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
#include "ghidra.h"
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define D_80119714 (*(s32 *)0x80119714)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800B3338 ((s32 (*)())0x800B3338)
#define func_800B3488 ((s32 (*)())0x800B3488)
#define func_800DD3D8 ((s32 (*)())0x800DD3D8)
#define func_800DD428 ((s32 (*)())0x800DD428)
#define func_800DDA78 ((s32 (*)())0x800DDA78)
#define func_800FBB90 ((s32 (*)())0x800FBB90)
undefined4 func_800F197C(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  union { u64 align; u8 bytes[0x28]; } recovered_local_frame;
#define local_28 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x0))
#define local_27 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x1))
#define local_26 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x2))
#define local_20 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x8))
#define local_1f (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x9))
#define local_1e (*(undefined1 volatile *)(recovered_local_frame.bytes + 0xA))

  int iVar1;







  if (DAT_8008ee54 != 2) {
    if (2 < DAT_8008ee54) {
      if (DAT_8008ee54 != 3) {
        if (DAT_8008ee54 == 99) {
          return 1;
        }
        return 0;
      }
      goto LAB_800f1b30;
    }
    if (DAT_8008ee54 == 0) {
      local_28 = 0x60;
      local_27 = 0x60;
      local_26 = 0x60;
      local_20 = 0x10;
      local_1f = 0x10;
      local_1e = 0x10;
      func_800DD428(&local_28,&local_20,0x3c);
      *(undefined1 *)(param_3 + 0x17) = 0x87;
      *(undefined1 *)(param_3 + 0x23) = 1;
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
    }
    else if (DAT_8008ee54 != 1) {
      return 0;
    }
    *(undefined4 *)(*(int *)(param_3 + 0x70) + 0x20) = 1;
    if (D_80119714 < 0x5a) {
      return 0;
    }
    D_80119714 = 0;
    local_28 = 0x10;
    local_27 = 0x10;
    local_26 = 0x10;
    local_20 = 0x60;
    local_1f = 0x60;
    local_1e = 0x60;
    DAT_8008ee54 = DAT_8008ee54 + 1;
    func_800DD428(&local_28,&local_20,0x3c);
  }
  *(uint *)(*(int *)(param_3 + 0x70) + 0x34) =
       *(uint *)(*(int *)(param_3 + 0x70) + 0x34) & 0xffffff80 | D_80119714 % 2 & 0x7fU;
  if (D_80119714 < 0x10) {
    return 0;
  }
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
  *(undefined4 *)(*(int *)(param_3 + 0x70) + 0x20) = 2;
LAB_800f1b30:
  if (D_80119714 == 10) {
    func_800FBB90(0x14);
    func_80034AB0(0x1c);
    func_800DD3D8(0x10,0x32);
    func_800B3488(param_2,param_4);
  }
  if (0x45 < D_80119714) {
    iVar1 = func_800B3338(param_1,0);
    if (iVar1 != 0) {
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
      func_800DDA78(param_4);
    }
    return 1;
  }
  return 0;
}

#undef local_28
#undef local_27
#undef local_26
#undef local_20
#undef local_1f
#undef local_1e
