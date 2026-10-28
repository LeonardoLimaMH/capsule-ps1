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
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ed68 (*(s32 *)0x8008ED68)
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008f754 (*(s16 *)0x8008F754)
#define DAT_8008f756 (*(s16 *)0x8008F756)
#define D_80119714 (*(s32 *)0x80119714)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800C94DC ((s32 (*)())0x800C94DC)
#define func_800DDB38 ((s32 (*)())0x800DDB38)
#define func_800FE188 ((s32 (*)())0x800FE188)
#define func_800FF2CC ((s32 (*)())0x800FF2CC)
extern s32 rcos();
extern s32 rsin();
undefined4 func_800ECC94(undefined4 param_1,int param_2,uchar *param_3)
{
  union { u64 align; u8 bytes[0x20]; } recovered_local_frame;
#define local_48 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x0))
#define local_40 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x8))
#define local_38 (*(int volatile *)(recovered_local_frame.bytes + 0x10))
#define local_30 (*(undefined4 * volatile *)(recovered_local_frame.bytes + 0x18))

  uchar uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int radius;
  int angle;
  int iVar7;




  iVar4 = D_80119714;
  iVar6 = *(int *)(param_3 + 0x70);
  switch(DAT_8008ee54) {
  case 0:
    param_3[0x17] = 0x88;
    param_3[0x23] = '\x01';
    uVar1 = func_800C94DC(param_1,0);
    param_3[0x25] = uVar1;
    DAT_8008f754 = *(short *)(iVar6 + 100);
    DAT_8008f756 = *(short *)(iVar6 + 100) + 1;
    if (*(short *)(iVar6 + 100) == 0) {
      DAT_8008f756 = -2;
    }
    goto LAB_800ecd64;
  case 1:
    if (param_3[0x22] != param_3[0x17]) {
      return 0;
    }
    func_80034AB0(0x8008);
LAB_800ecd64:
    DAT_8008ee54 = DAT_8008ee54 + 1;
    D_80119714 = 0;
    return 0;
  case 2:
    if (5 < *(uint *)(iVar6 + 0x20)) {
      iVar4 = func_80015B3C(-0x7ffe7a00,-0x7ff0ad3c,1);
      if (DAT_8008f754 == 0) {
        *(undefined1 *)(iVar4 + 0x28) = 0x7f;
        *(undefined1 *)(iVar4 + 0x29) = 0xff;
        *(undefined1 *)(iVar4 + 0x2a) = 0x7f;
      }
      else {
        if (DAT_8008f754 == -1) {
          *(undefined1 *)(iVar4 + 0x28) = 0x7f;
          *(undefined1 *)(iVar4 + 0x29) = 0x7f;
          uVar2 = 0xff;
        }
        else {
          *(undefined1 *)(iVar4 + 0x28) = 0xff;
          uVar2 = 0x7f;
          *(undefined1 *)(iVar4 + 0x29) = 0x7f;
        }
        *(undefined1 *)(iVar4 + 0x2a) = uVar2;
      }
      *(undefined1 *)(iVar4 + 0x30) = 1;
      *(undefined2 *)(iVar4 + 0x32) = 0x14;
      func_80034AB0(4);
      DAT_8008ee54 = DAT_8008ee54 + 1;
      D_80119714 = 0;
      return 0;
    }
    return 0;
  case 3:
    if (D_80119714 == 0x28) {
      func_80034AB0(0x8006);
      goto switchD_800eccf0_caseD_4;
    }
    goto LAB_800ece64;
  case 4:
  case 5:
switchD_800eccf0_caseD_4:
LAB_800ece64:
    iVar4 = D_80119714;
    iVar3 = D_80119714 % 3;
    func_800FE188(param_3,&local_48);
    if (DAT_8008ee54 == 4) {
      local_38 = 100;
      radius = 100;
      angle = (iVar4 << 0xd) / 0x78 + (iVar3 * 0x1000) / 3;
      if (0x77 < iVar4) {
        local_30 = &DAT_8008ed68;
        func_80034AB0(0x3f);
        D_80119714 = 0;
        *(short *)(local_30 + 0x3b) = *(short *)(local_30 + 0x3b) + 1;
      }
      goto LAB_800ed004;
    }
    if (DAT_8008ee54 < 5) {
      if (DAT_8008ee54 != 3) goto LAB_800ed004;
      radius = (iVar4 * 100) / 0x3c;
      angle = (iVar4 << 0xc) / 0x3c + (iVar3 * 0x1000) / 3;
      local_38 = radius;
      if (iVar4 < 0x3c) goto LAB_800ed004;
      DAT_8008ee54 = 4;
    }
    else {
      if (DAT_8008ee54 != 5) goto LAB_800ed004;
      angle = (iVar3 * 0x1000) / 3;
      radius = (iVar4 * 300) / 10 + 100;
      local_38 = radius;
      if (iVar4 < 10) goto LAB_800ed004;
      DAT_8008ee54 = 6;
    }
    D_80119714 = 0;
    local_38 = radius;
LAB_800ed004:
    local_48.vy = local_48.vy - (short)local_38;
    iVar4 = rsin(angle);
    iVar4 = radius * iVar4;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xfff;
    }
    local_48.vx = local_48.vx + (short)(iVar4 >> 0xc);
    iVar4 = rcos(angle);
    iVar4 = radius * iVar4;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xfff;
    }
    local_48.vz = local_48.vz + (short)(iVar4 >> 0xc);
    func_800FF2CC(param_3,&local_48,1);
    *(short *)(iVar6 + 100) = -(short)iVar3;
    *(uint *)(iVar6 + 0x38) = *(uint *)(iVar6 + 0x38) | 0x30;
    func_800DDB38(iVar6,0xc,0x80);
    *(short *)(iVar6 + 100) = DAT_8008f754;
    *(uint *)(iVar6 + 0x38) = *(uint *)(iVar6 + 0x38) & 0xffffffcf;
    return 0;
  case 6:
    if (D_80119714 < 0x1e) {
      return 0;
    }
    break;
  case 7:
    func_800FE188(param_3,&local_40);
    iVar7 = ((0x78 - iVar4) * 400) / 0x78;
    iVar5 = (iVar4 << 0xc) / 0x78 - ((int)DAT_8008f756 << 0xc) / 3;
    local_40.vy = local_40.vy - (short)iVar7;
    iVar3 = rsin(iVar5);
    iVar3 = iVar7 * iVar3;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xfff;
    }
    local_40.vx = local_40.vx + (short)(iVar3 >> 0xc);
    iVar3 = rcos(iVar5);
    iVar7 = iVar7 * iVar3;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xfff;
    }
    local_40.vz = local_40.vz + (short)(iVar7 >> 0xc);
    func_800FF2CC(param_3,&local_40,1);
    *(short *)(iVar6 + 100) = DAT_8008f756;
    *(uint *)(iVar6 + 0x38) = *(uint *)(iVar6 + 0x38) | 0x70;
    func_800DDB38(iVar6,0x10,0x80);
    *(short *)(iVar6 + 100) = DAT_8008f754;
    *(uint *)(iVar6 + 0x38) = *(uint *)(iVar6 + 0x38) & 0xffffff8f;
    if (iVar4 < 0x78) {
      return 0;
    }
    func_80034AB0(0x8017);
    break;
  case 8:
    if (D_80119714 < 10) {
      return 0;
    }
    *(short *)(iVar6 + 100) = DAT_8008f756;
    iVar4 = func_80015B3C(-0x7ffe7a00,-0x7ff0ad3c,1);
    if (DAT_8008f756 == 0) {
      *(undefined1 *)(iVar4 + 0x28) = 0x7f;
      *(undefined1 *)(iVar4 + 0x29) = 0xff;
      *(undefined1 *)(iVar4 + 0x2a) = 0x7f;
    }
    if (DAT_8008f756 == -1) {
      *(undefined1 *)(iVar4 + 0x28) = 0x7f;
      *(undefined1 *)(iVar4 + 0x29) = 0x7f;
      *(undefined1 *)(iVar4 + 0x2a) = 0xff;
    }
    if (DAT_8008f756 == -2) {
      *(undefined1 *)(iVar4 + 0x28) = 0xff;
      *(undefined1 *)(iVar4 + 0x29) = 0x7f;
      *(undefined1 *)(iVar4 + 0x2a) = 0x7f;
    }
    *(undefined1 *)(iVar4 + 0x30) = 1;
    *(undefined2 *)(iVar4 + 0x32) = 0x1e;
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x10000;
    param_3[0x24] = (s8)DAT_8008f756 + '=';
    break;
  case 9:
    if (D_80119714 == 1) {
      *(undefined4 *)(*(int *)(param_3 + 0x78) + 0x84) = 1;
      *(undefined4 *)(*(int *)(param_3 + 0x78) + 0x88) = 0;
      *(undefined2 *)(*(int *)(param_3 + 0x78) + 0x6e) = 0xffc4;
    }
    if (D_80119714 < 0x5a) {
      return 0;
    }
    *(undefined4 *)(*(int *)(param_3 + 0x78) + 0x84) = 2;
    break;
  case 10:
  case 99:
    *(undefined1 *)(param_2 + 0x60d) = 2;
    return 1;
  default:
    goto switchD_800eccf0_caseD_b;
  }
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
switchD_800eccf0_caseD_b:
  return 0;
}

#undef local_48
#undef local_40
#undef local_38
#undef local_30

/* arg0: 0x80130000 */
/* arg1: 0x80140000 */
/* arg2: 0x80150000 */
/* real-callee: rsin */
/* real-callee: rcos */
/* real-callee: func_800DDB38 */
/* rand-u32-strided: 0x80150070 1 4 0x80160000 */
/* rand-u32-strided: 0x80150074 1 4 0x80161000 */
/* rand-u32-strided: 0x80150078 1 4 0x80162000 */
/* rand-mem: 0x80150015 2 13 */
/* rand-u16: 0x80150022 1 0,1,136 */
/* rand-u16: 0x80150016 1 34816 */
/* rand-u16: 0x80160064 1 0,65535,65534 */
/* rand-u32-strided: 0x80160020 1 4 0,1,5,6,7 */
/* rand-u16: 0x8008F754 2 0,65535,65534 */
/* rand-u16: 0x80119714 1 0,1,2,3,9,10,29,30,39,40,59,60,89,90,119,120,121 */

/* rand-u16: 0x8008EE54 1 0 */
