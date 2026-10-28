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
/* real-callee: func_800FF190 */
/* real-callee: func_800FF2CC */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008ee6b (*(u8 *)0x8008EE6B)
#define func_80012668 ((s32 (*)())0x80012668)
#define func_800A46B8 ((s32 (*)())0x800A46B8)
#define func_800A4858 ((s32 (*)())0x800A4858)
#define func_800B91F0 ((s32 (*)())0x800B91F0)
extern s32 rsin();
undefined4 func_800BB344(int param_1,int param_2,int param_3,int param_4)

{
  union { u64 align; u8 bytes[0x18]; } recovered_local_frame;
#define local_38 (*(short volatile *)(recovered_local_frame.bytes + 0x0))
#define local_36 (*(short volatile *)(recovered_local_frame.bytes + 0x2))
#define local_34 (*(short volatile *)(recovered_local_frame.bytes + 0x4))
#define local_30 (*(short volatile (*)[2])(recovered_local_frame.bytes + 0x8))
#define local_2c (*(short volatile *)(recovered_local_frame.bytes + 0xC))
#define local_28 (*(short volatile *)(recovered_local_frame.bytes + 0x10))
#define local_26 (*(short volatile *)(recovered_local_frame.bytes + 0x12))
#define local_24 (*(short volatile *)(recovered_local_frame.bytes + 0x14))

  s8 cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;









  iVar4 = *(int *)(param_3 + 0x78);
  uVar5 = 0;
  switch(DAT_8008ee54) {
  case 0:
    uVar5 = 0;
    if (*(s8 *)(param_3 + 0x22) == *(s8 *)(param_3 + 0x17)) {
      func_80012668();
      uVar5 = 0;
    }
    break;
  case 1:
  case 5:
    *(undefined1 *)(param_3 + 0x24) = 0x45;
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x20000;
    func_80012668();
    uVar5 = 0;
    break;
  case 2:
  case 6:
    if (*(int *)(*(int *)(param_3 + 0x70) + 0x20) != 1) {
      return 0;
    }
    uVar3 = *(uint *)(*(int *)(param_3 + 0x70) + 0x8c);
    if ((uVar3 < 2) || (uVar3 == 7)) {
      *(undefined4 *)(iVar4 + 0x88) = 4;
    }
    else {
      *(undefined4 *)(iVar4 + 0x88) = 1;
    }
    *(undefined1 *)(param_2 + 0x709) = 0x14;
    func_80012668();
  case 3:
  case 7:
    func_800A46B8(param_1,*(undefined1 *)(param_4 + 0x15),*(undefined1 *)(param_4 + 0x16),local_30);
    func_800A46B8(param_1,*(undefined1 *)(param_3 + 0x15),*(undefined1 *)(param_3 + 0x16),&local_28)
    ;
    uVar3 = (uint)*(byte *)(param_2 + 0x709);
    local_38 = local_30[0] - (short)((int)(((int)local_30[0] - (int)local_28) * uVar3) / 0x14);
    local_34 = local_2c - (short)((int)(((int)local_2c - (int)local_24) * uVar3) / 0x14);
    iVar2 = rsin((int)((0x14 - uVar3) * 0x400) / 0x14);
    iVar2 = iVar2 * 0x32;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xfff;
    }
    local_36 = local_26 - (short)(iVar2 >> 0xc);
    *(short *)(iVar4 + 0x6a) = local_38;
    *(short *)(iVar4 + 0x6e) = local_36 + -0x1e;
    *(short *)(iVar4 + 0x72) = local_34;
    iVar2 = func_800A4858(param_1,*(undefined1 *)(param_3 + 0x15),*(undefined1 *)(param_3 + 0x16),
                          &local_38);
    if (iVar2 == 0) {
      *(undefined4 *)(iVar4 + 0x84) = 1;
    }
    if (DAT_8008ee6b < 2) {
      cVar1 = *(s8 *)(param_2 + 0x709) + -1;
    }
    else {
      cVar1 = *(s8 *)(param_2 + 0x709) - DAT_8008ee6b;
    }
    *(s8 *)(param_2 + 0x709) = cVar1;
    uVar5 = 0;
    if (cVar1 == '\0') {
      if (*(short *)(param_2 + 0x710) == 0) {
        if ((*(uint *)(param_4 + 0x1c) & 0x20000) != 0) {
          func_800B91F0(param_2,param_4);
        }
      }
      else {
        *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) | 2;
      }
      if (DAT_8008ee54 == 7) {
        *(uint *)(param_4 + 0x1c) = *(uint *)(param_4 + 0x1c) | 8;
      }
      *(undefined2 *)(param_1 + 0xc) = 0;
      func_80012668();
      uVar5 = 0;
    }
    break;
  case 4:
  case 8:
    uVar5 = 0;
    if (*(short *)(iVar4 + 0x24) < 0) {
      *(undefined4 *)(iVar4 + 0x84) = 2;
      func_80012668();
      uVar5 = 0;
    }
    break;
  case 9:
    uVar5 = 1;
  }
  return uVar5;
}

#undef local_38
#undef local_36
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_26
#undef local_24
