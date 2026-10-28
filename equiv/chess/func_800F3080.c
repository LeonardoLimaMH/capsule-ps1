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
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008f756 (*(s16 *)0x8008F756)
#define DAT_8008f7a4 (*(u32 *)0x8008F7A4)
#define DAT_8008f7a8 (*(u32 *)0x8008F7A8)
#define D_80119714 (*(s32 *)0x80119714)
#define _DAT_8008f7b0 (*(s32 *)0x8008F7B0)
#define _DAT_8008f7b4 (*(s32 *)0x8008F7B4)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800D7388 ((s32 (*)())0x800D7388)
#define func_800DDA78 ((s32 (*)())0x800DDA78)
extern s32 rcos();
extern s32 rsin();
undefined4 func_800F3080(undefined4 param_1,int param_2,int param_3)

{
  union { u64 align; u8 bytes[0x10]; } recovered_local_frame;
#define abStack_30 (*(byte volatile (*)[16])(recovered_local_frame.bytes + 0x0))

  uint uVar1;
  int iVar2;


  iVar2 = *(int *)(param_3 + 0x70);
  if ((*(int *)(iVar2 + 0x20) == 4) && (*(short *)(iVar2 + 0x24) == 0)) {
    *(undefined4 *)(iVar2 + 0x20) = 0;
  }
  uVar1 = _DAT_8008f7b0;
  if (DAT_8008ee54 != 2) {
    if (2 < DAT_8008ee54) {
      if (DAT_8008ee54 == 4) {
        iVar2 = *(int *)(param_3 + 0x70);
        if ((*(int *)(iVar2 + 0x20) == 4) && (*(short *)(iVar2 + 0x24) == 0)) {
          *(undefined4 *)(iVar2 + 0x20) = 0;
        }
        if (0x3b < D_80119714) {
          *(byte *)(param_3 + 0x17) = *(byte *)(param_3 + 0x17) ^ 0x87;
          return 1;
        }
        return 0;
      }
      if (3 < DAT_8008ee54) {
        if (DAT_8008ee54 == 99) {
          return 1;
        }
        return 0;
      }
      goto LAB_800f354c;
    }
    if (DAT_8008ee54 == 0) {
      *(undefined1 *)(param_3 + 0x17) = 0x87;
      *(undefined1 *)(param_3 + 0x23) = 0;
      *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x80000000;
      DAT_8008ee54 = DAT_8008ee54 + 1;
      DAT_8008f756 = 0;
      DAT_8008f7a4 = (int)*(short *)(*(int *)(param_3 + 0x70) + 0x46);
      DAT_8008f7a8 = (int)*(short *)(*(int *)(param_3 + 0x70) + 0x4a);
      _DAT_8008f7b0 = 0x50;
      _DAT_8008f7b4 = 0;
      D_80119714 = 0;
      return 0;
    }
    if (DAT_8008ee54 != 1) {
      return 0;
    }
    iVar2 = rsin((D_80119714 << 0xc) / (int)_DAT_8008f7b0 << 2);
    *(short *)(*(int *)(param_3 + 0x70) + 0x46) =
         (short)DAT_8008f7a4 - (short)((DAT_8008f756 * iVar2) / 0xf000);
    iVar2 = rcos((D_80119714 << 0xc) / (int)uVar1 << 2);
    *(short *)(*(int *)(param_3 + 0x70) + 0x4a) =
         (short)DAT_8008f7a8 + 1 + (short)((DAT_8008f756 * iVar2) / 0x32000);
    iVar2 = rsin((D_80119714 << 0xc) / 0x14);
    iVar2 = DAT_8008f756 * iVar2;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xfff;
    }
    *(short *)(*(int *)(param_3 + 0x70) + 0x54) = (short)(iVar2 >> 0xc);
    if (DAT_8008f756 < 0xfa) {
      DAT_8008f756 = DAT_8008f756 + 2;
      return 0;
    }
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
  }
  uVar1 = _DAT_8008f7b0;
  iVar2 = rsin((D_80119714 << 0xc) / (int)_DAT_8008f7b0 << 2);
  *(short *)(*(int *)(param_3 + 0x70) + 0x46) =
       (short)DAT_8008f7a4 - (short)((DAT_8008f756 * iVar2) / 0xf000);
  iVar2 = rcos((D_80119714 << 0xc) / (int)uVar1 << 2);
  *(short *)(*(int *)(param_3 + 0x70) + 0x4a) =
       (short)DAT_8008f7a8 + 1 + (short)((DAT_8008f756 * iVar2) / 0x32000);
  iVar2 = rsin((D_80119714 << 0xc) / 0x14);
  iVar2 = DAT_8008f756 * iVar2;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xfff;
  }
  *(short *)(*(int *)(param_3 + 0x70) + 0x54) = (short)(iVar2 >> 0xc);
  if (1 < _DAT_8008f7b0) {
    _DAT_8008f7b0 = _DAT_8008f7b0 - 1;
  }
  if ((10 < D_80119714) && (D_80119714 == (D_80119714 / 6) * 6)) {
    func_80034AB0(0x92);
  }
  if ((0x14 < D_80119714) && (D_80119714 == (D_80119714 / 5) * 5)) {
    uVar1 = func_800D7388(param_3,abStack_30);
    if ((uVar1 & 0xff) == 0) {
      return 1;
    }
    if (_DAT_8008f7b4 != (uVar1 & 0xff)) {
      func_800DDA78((uchar *)(param_2 + (uint)(abStack_30[_DAT_8008f7b4] >> 7) * 0x2e8 + 0x18 +
                             ((abStack_30[_DAT_8008f7b4] & 0x7f) - 1) * 0x7c));
      func_80034AB0(0x65);
      _DAT_8008f7b4 = _DAT_8008f7b4 + 1;
    }
  }
  if (1 < _DAT_8008f7b0) {
    return 0;
  }
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
LAB_800f354c:
  uVar1 = _DAT_8008f7b0;
  iVar2 = rsin((D_80119714 << 0xc) / (int)_DAT_8008f7b0 << 2);
  *(short *)(*(int *)(param_3 + 0x70) + 0x46) =
       (short)DAT_8008f7a4 - (short)((DAT_8008f756 * iVar2) / 0xf000);
  iVar2 = rcos((D_80119714 << 0xc) / (int)uVar1 << 2);
  *(short *)(*(int *)(param_3 + 0x70) + 0x4a) =
       (short)DAT_8008f7a8 + 1 + (short)((DAT_8008f756 * iVar2) / 0x32000);
  iVar2 = rsin((D_80119714 << 0xc) / 0x14);
  iVar2 = DAT_8008f756 * iVar2;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xfff;
  }
  *(short *)(*(int *)(param_3 + 0x70) + 0x54) = (short)(iVar2 >> 0xc);
  DAT_8008f756 = DAT_8008f756 + -3;
  _DAT_8008f7b0 = _DAT_8008f7b0 + 1;
  if (DAT_8008f756 < 2) {
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
    *(short *)(*(int *)(param_3 + 0x70) + 0x46) = (short)DAT_8008f7a4;
    *(short *)(*(int *)(param_3 + 0x70) + 0x4a) = (short)DAT_8008f7a8;
  }
  return 0;
}

#undef abStack_30

/* arg1: 0x800859F8 */
/* arg2: 0x80085A10 */
/* real-callee: rsin */
/* real-callee: rcos */
/* real-callee: func_800D7388 */
/* real-callee: func_800D6DA4 */
/* real-callee: func_8001A998 */
/* real-callee: func_800D4F74 */
/* rand-u32-strided: 0x80085A80 1 4 0x80140000 */
/* rand-u32-strided: 0x80085D68 1 4 0x80150000 */
/* rand-u32-strided: 0x80140020 1 4 0,4,6 */
/* rand-u16: 0x80140024 1 0,1 */
/* rand-u16: 0x8008F756 1 0,1,2,3,4,248,249,250,251 */
/* rand-u32-strided: 0x8008F7B0 1 4 1,2,3,80 */
/* rand-u32-strided: 0x8008F7B4 1 4 0 */
/* rand-u16: 0x80085A10 1 0 */
/* rand-u16: 0x80085CF8 1 0 */
/* rand-u16: 0x80085A24 1 1542 */
/* rand-u16: 0x80085A26 1 6 */
/* rand-u16: 0x80085D0C 1 1542 */
/* rand-u16: 0x80085D0E 1 6 */
/* rand-u16: 0x8006394A 1 0 */
/* rand-u32-strided: 0x80118C18 1 4 0x80160000 */
/* rand-u32-strided: 0x80160000 169 4 0x42 */
/* rand-u32-strided: 0x80160150 1 4 0x01000042 */
/* rand-u32-strided: 0x8006B2B4 1 4 0,128 */

/* rand-u16: 0x8008EE54 1 0 */
