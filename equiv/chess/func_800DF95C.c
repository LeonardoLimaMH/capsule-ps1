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

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
#include "ghidra.h"
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008ee70 (*(s32 *)0x8008EE70)
#define DAT_8008ee74 (*(s32 *)0x8008EE74)
#define DAT_8008f760 (*(s32 *)0x8008F760)
#define D_80119714 (*(s32 *)0x80119714)
#define D_8011974C (*(u8 *)0x8011974C)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800DD230 ((s32 (*)())0x800DD230)
#define func_800DF67C ((s32 (*)())0x800DF67C)
#define func_800DF7CC ((s32 (*)())0x800DF7CC)
#define func_800FAC74 ((s32 (*)())0x800FAC74)
#define func_800FBB90 ((s32 (*)())0x800FBB90)
#define func_800FE428 ((s32 (*)())0x800FE428)
#define func_800FE958 ((s32 (*)())0x800FE958)
#define func_800FEF04 ((s32 (*)())0x800FEF04)
undefined4 func_800DF95C(undefined4 param_1,int param_2,int param_3,int param_4)

{
  union { u64 align; u8 bytes[0x40]; } recovered_local_frame;
#define local_40 (*(short volatile (*)[2])(recovered_local_frame.bytes + 0x0))
#define local_3c (*(short volatile (*)[2])(recovered_local_frame.bytes + 0x4))
#define local_38 (*(int volatile *)(recovered_local_frame.bytes + 0x8))
#define local_34 (*(int volatile *)(recovered_local_frame.bytes + 0xC))
#define local_30 (*(int volatile *)(recovered_local_frame.bytes + 0x10))

  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;






  iVar3 = DAT_8008f760;
  iVar11 = *(int *)(param_3 + 0x70);
  iVar9 = *(int *)(param_4 + 0x70);
  if (DAT_8008ee54 == 3) {
    if (*(s8 *)(DAT_8008f760 + 0x15) == '\0') {
      return 0;
    }
    DAT_8008ee54 = 4;
    D_80119714 = 0;
  }
  else {
    if (DAT_8008ee54 < 4) {
      if (DAT_8008ee54 == 1) {
        iVar3 = func_800FEF04(param_3,param_4);
        if (iVar3 == 0) {
          return 0;
        }
        if (D_8011974C == '\0') {
          *(undefined1 *)(param_3 + 0x17) = 0x87;
          *(undefined1 *)(param_3 + 0x23) = 0;
          DAT_8008ee54 = DAT_8008ee54 + 1;
          D_80119714 = 0;
          return 0;
        }
        return 0;
      }
      if (1 < DAT_8008ee54) {
        if (2 < *(uint *)(iVar11 + 0x20)) {
          iVar3 = func_800DD230(param_3);
          iVar8 = 0;
          iVar10 = iVar3 + 4;
          local_38 = (int)*(short *)(iVar11 + 0x46) + DAT_8008ee70 / 2;
          iVar4 = DAT_8008ee74 / 2;
          local_34 = *(short *)(iVar11 + 0x4a) + iVar4;
          sVar1 = *(short *)(iVar9 + 0x4a);
          local_30 = (int)*(short *)(iVar9 + 0x46) + DAT_8008ee70 / 2;
          uVar2 = func_800FE428(param_3,param_4);
          do {
            iVar5 = func_80015B3C(func_800DF7CC,func_800FAC74,1);
            func_800DF67C(iVar3,iVar8,local_40,local_3c);
            *(short *)(iVar5 + 0x28) = local_40[0] + (short)local_38;
            *(short *)(iVar5 + 0x2a) = local_3c[0] + (short)local_34;
            if (*(short *)(iVar11 + 0x4e) < *(short *)(iVar9 + 0x4e)) {
              *(undefined2 *)(iVar5 + 0x30) = *(undefined2 *)(iVar11 + 0x4e);
            }
            else {
              *(undefined2 *)(iVar5 + 0x30) = *(undefined2 *)(iVar9 + 0x4e);
            }
            if ((iVar3 != 2) && (iVar3 != 6)) {
              *(short *)(iVar5 + 0x30) = *(short *)(iVar5 + 0x30) + 2;
            }
            *(undefined1 *)(iVar5 + 0x33) = 4;
            *(undefined1 *)(iVar5 + 0x32) = 4;
            *(undefined1 *)(iVar5 + 0x34) = 0xfa;
            *(undefined1 *)(iVar5 + 0x35) = 0xfe;
            *(undefined1 *)(iVar5 + 0x36) = 0x89;
            *(undefined1 *)(iVar5 + 0x3c) = 1;
            *(undefined1 *)(iVar5 + 0x3d) = 1;
            *(undefined1 *)(iVar5 + 0x3e) = 1;
            iVar6 = iVar10;
            if (iVar10 < 0) {
              iVar6 = iVar3 + 0xb;
            }
            func_800DF67C(iVar10 + (iVar6 >> 3) * -8,iVar8 + -1,local_40,local_3c);
            iVar8 = iVar8 + 1;
            *(undefined2 *)(iVar5 + 0x20) = uVar2;
            *(short *)(iVar5 + 0x1c) = local_40[0] + (short)local_30;
            *(short *)(iVar5 + 0x1e) = local_3c[0] + sVar1 + (short)iVar4;
            DAT_8008f760 = iVar5;
          } while (iVar8 < 2);
          func_80034AB0(0x8011);
          DAT_8008ee54 = DAT_8008ee54 + 1;
          D_80119714 = 0;
          return 0;
        }
        return 0;
      }
      if (DAT_8008ee54 == 0) {
        func_800FE958(0x80,0,0);
        DAT_8008ee54 = DAT_8008ee54 + 1;
        D_80119714 = 0;
        D_8011974C = 1;
        return 0;
      }
      return 0;
    }
    if (DAT_8008ee54 == 5) goto LAB_800dfd00;
    if (4 < DAT_8008ee54) {
      if (DAT_8008ee54 == 6) {
        if (D_8011974C != '\0') {
          return 0;
        }
      }
      else if (DAT_8008ee54 != 99) {
        return 0;
      }
      *(undefined1 *)(param_2 + 0x60d) = 2;
      return 1;
    }
  }
  uVar7 = *(uint *)(iVar9 + 0x34) & 0xffffff80;
  *(uint *)(iVar9 + 0x34) = uVar7 | D_80119714 % 2 & 0x7fU;
  if (*(byte *)(iVar3 + 0x15) < 2) {
    return 0;
  }
  *(uint *)(iVar9 + 0x34) = uVar7;
  *(undefined1 *)(param_3 + 0x17) = 1;
  func_800FBB90(4);
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
LAB_800dfd00:
  if (2 < *(byte *)(iVar3 + 0x15)) {
    D_8011974C = 2;
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
    return 0;
  }
  return 0;
}

#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
