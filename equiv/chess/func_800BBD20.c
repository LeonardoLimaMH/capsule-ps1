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
#define DAT_80063953 (*(u8 *)0x80063953)
#define DAT_80069bb0 (*(s32 *)0x80069BB0)
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008ee6a (*(u8 *)0x8008EE6A)
#define DAT_8008f7a4 (*(s32 *)0x8008F7A4)
#define DAT_8008f7a8 (*(s32 *)0x8008F7A8)
#define D_80069BB4 (*(s32 *)0x80069BB4)
#define D_801187F0 (*(u16 *)0x801187F0)
#define D_80119714 (*(s32 *)0x80119714)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80015CD0 ((s32 (*)())0x80015CD0)
#define func_80015EF8 ((s32 (*)())0x80015EF8)
#define func_800161C4 ((s32 (*)())0x800161C4)
#define func_80018600 ((s32 (*)())0x80018600)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_80034BD8 ((s32 (*)())0x80034BD8)
#define func_800BCEEC ((s32 (*)())0x800BCEEC)
#define func_800DD428 ((s32 (*)())0x800DD428)
#define func_800F52C4 ((s32 (*)())0x800F52C4)
extern s32 rcos();
extern s32 rsin();
undefined4 func_800BBD20(undefined4 param_1,undefined4 param_2,byte *param_3,byte *param_4)

{
  union { u64 align; u8 bytes[0x48]; } recovered_local_frame;
#define local_48 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x0))
#define local_47 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x1))
#define local_46 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x2))
#define local_40 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x8))
#define local_3f (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x9))
#define local_3e (*(undefined1 volatile *)(recovered_local_frame.bytes + 0xA))
#define local_38 (*(int volatile (*)[4])(recovered_local_frame.bytes + 0x10))

  undefined1 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  int iVar11;








  local_38[0] = *(int *)(param_3 + 0x70);
  local_38[1] = *(int *)(param_4 + 0x70);
  switch(DAT_8008ee54) {
  case 0:
    iVar5 = func_80015B3C(func_80018600,func_800F52C4,1);
    *(undefined1 *)(iVar5 + 0x28) = 0xff;
    *(undefined1 *)(iVar5 + 0x29) = 0xff;
    *(undefined1 *)(iVar5 + 0x2a) = 0xff;
    *(undefined1 *)(iVar5 + 0x30) = 1;
    *(undefined1 *)(iVar5 + 0x2c) = 0;
    *(undefined1 *)(iVar5 + 0x2d) = 0;
    *(undefined1 *)(iVar5 + 0x2e) = 0;
    *(undefined2 *)(iVar5 + 0x32) = 0x1e;
    D_80119714 = 0;
    DAT_8008ee6a = 2;
    DAT_8008ee54 = DAT_8008ee54 + 1;
    func_80034BD8(0xffffffff,0);
    break;
  case 1:
    break;
  case 2:
    goto switchD_800bbd8c_caseD_2;
  case 3:
    goto switchD_800bbd8c_caseD_3;
  case 4:
    goto switchD_800bbd8c_caseD_4;
  default:
    goto switchD_800bbd8c_default;
  }
  uVar6 = 0;
  if (4 < D_80119714) {
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
switchD_800bbd8c_caseD_2:
    func_80034AB0(6);
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x200000;
    *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) | 0x200000;
    param_3[0x20] = 7;
    param_4[0x20] = 7;
    param_3[0x21] = 4;
    param_4[0x21] = 0xfc;
    local_48 = 0x60;
    local_47 = 0x60;
    local_46 = 0x60;
    local_40 = 0x10;
    local_3f = 0x10;
    local_3e = 0x10;
    func_800DD428(&local_48,&local_40,0xb4);
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x40000000;
    *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) | 0x40000000;
    D_801187F0 = *(undefined2 *)(*(int *)(param_3 + 0x70) + 0x4e);
    DAT_8008f7a4 = 0;
    DAT_8008f7a8 = (int)*(short *)(local_38[0] + 0x50);
    DAT_8008ee54 = DAT_8008ee54 + 1;
    D_80119714 = 0;
switchD_800bbd8c_caseD_3:
    iVar5 = 0;
    iVar11 = 0;
    local_38[2] = DAT_8008f7a4;
    D_80069BB4 = D_80069BB4 + 0x17;
    DAT_80069bb0 = DAT_80069bb0 + 2;
    do {
      iVar3 = rcos((D_80119714 << 0xc) / (200 - D_80119714 / 2));
      iVar4 = (iVar5 * -2 + 1) * local_38[2];
      iVar8 = iVar4 * 3;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 3;
      }
      iVar3 = (iVar8 >> 2) * iVar3;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xfff;
      }
      *(short *)(*(int *)((int)local_38 + iVar11) + 0x46) = (short)(iVar3 >> 0xc);
      iVar3 = rsin((D_80119714 << 0xc) / (200 - D_80119714 / 2));
      iVar3 = ((iVar4 * 2) / 5) * iVar3;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xfff;
      }
      *(short *)(*(int *)((int)local_38 + iVar11) + 0x4a) = (short)(iVar3 >> 0xc);
      if (iVar5 == 0) {
        uVar1 = (undefined1)((int)-((byte)(&DAT_80063953)[(uint)*param_3 * 0x3c] & 0x3f) / 2);
        iVar4 = local_38[0];
      }
      else {
        uVar1 = (undefined1)((int)-((byte)(&DAT_80063953)[(uint)*param_4 * 0x3c] & 0x3f) / 2);
        iVar4 = *(int *)((int)local_38 + iVar11);
      }
      *(undefined1 *)(iVar4 + 0x57) = uVar1;
      *(short *)(*(int *)((int)local_38 + iVar11) + 0x54) = (short)((D_80119714 << 0xc) / 0x32);
      iVar4 = *(int *)((int)local_38 + iVar11);
      iVar5 = iVar5 + 1;
      uVar7 = (undefined2)((uint)(DAT_8008f7a8 * (400 - D_80119714)) / 400);
      *(undefined2 *)(iVar4 + 0x52) = uVar7;
      *(undefined2 *)(iVar4 + 0x50) = uVar7;
      iVar11 = iVar11 + 4;
    } while (iVar5 < 2);
    DAT_8008f7a4 = DAT_8008f7a4 + 2;
    if (((D_80119714 == (D_80119714 / 5) * 5) && (D_80119714 < 0x46)) || (0x46 < D_80119714)) {
      iVar5 = 0;
      do {
        iVar11 = func_80015B3C(func_800BCEEC,func_800161C4,1);
        uVar6 = func_80019F30(0x70013,0x5c);
        func_80015EF8(iVar11);
        func_80015CD0(iVar11 + 0x14,uVar6,1);
        sVar2 = func_800202A4(0x1f);
        *(short *)(iVar11 + 0x46) = *(short *)(local_38[iVar5] + 0x46) + sVar2 + -0xf;
        sVar2 = func_800202A4(0x1f);
        iVar4 = iVar5 + 1;
        uVar9 = *(uint *)(iVar11 + 0x38) & 0xffffffcf;
        *(short *)(iVar11 + 0x4a) = (*(short *)(local_38[iVar5] + 0x4a) - sVar2) + 0xf;
        sVar2 = *(short *)(local_38[iVar5] + 0x4e);
        *(undefined2 *)(iVar11 + 0x52) = 0x1000;
        *(undefined2 *)(iVar11 + 0x50) = 0x1000;
        *(undefined2 *)(iVar11 + 0x78) = 0x51;
        *(uint *)(iVar11 + 0x38) = uVar9 | 0x50;
        *(undefined4 *)(iVar11 + 0x20) = 2;
        *(uint *)(iVar11 + 0x38) = uVar9 | 0x58;
        *(short *)(iVar11 + 0x4e) = sVar2 + -1;
        iVar5 = iVar4;
      } while (iVar4 < 2);
    }
    iVar5 = D_80119714 / 2;
    if (0x50 < D_80119714) {
      iVar11 = 0;
      puVar10 = &local_48;
      do {
        iVar3 = *(int *)(puVar10 + 0x10);
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 3;
        }
        uVar9 = ((iVar5 + (iVar4 >> 2) * -4) % 3) % 2 & 0x7f;
        *(uint *)(local_38[1] + 0x34) = *(uint *)(local_38[1] + 0x34) & 0xffffff80 | uVar9;
        iVar11 = iVar11 + 1;
        *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) & 0xffffff80 | uVar9;
        puVar10 = puVar10 + 4;
      } while (iVar11 < 2);
    }
    if (0x8c < D_80119714) {
      iVar11 = 0;
      uVar9 = iVar5 % 2 & 0x7f;
      puVar10 = &local_48;
      do {
        iVar5 = *(int *)(puVar10 + 0x10);
        *(uint *)(local_38[1] + 0x34) = *(uint *)(local_38[1] + 0x34) & 0xffffff80 | uVar9;
        iVar11 = iVar11 + 1;
        *(uint *)(iVar5 + 0x34) = *(uint *)(iVar5 + 0x34) & 0xffffff80 | uVar9;
        puVar10 = puVar10 + 4;
      } while (iVar11 < 2);
    }
    if (D_80119714 < 200) {
switchD_800bbd8c_default:
      uVar6 = 0;
    }
    else {
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
switchD_800bbd8c_caseD_4:
      iVar5 = func_80015B3C(func_80018600,func_800F52C4,1);
      *(undefined1 *)(iVar5 + 0x28) = 0xff;
      *(undefined1 *)(iVar5 + 0x29) = 0xff;
      *(undefined1 *)(iVar5 + 0x2a) = 0xff;
      *(undefined1 *)(iVar5 + 0x30) = 1;
      *(undefined1 *)(iVar5 + 0x2c) = 0;
      *(undefined1 *)(iVar5 + 0x2d) = 0;
      *(undefined1 *)(iVar5 + 0x2e) = 0;
      *(undefined2 *)(iVar5 + 0x32) = 0x19;
      *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) ^ 0x40000000;
      *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) ^ 0x40000000;
      *(undefined1 *)(local_38[1] + 0x57) = 0;
      *(undefined1 *)(local_38[0] + 0x57) = 0;
      func_80034AB0(4);
      uVar6 = 1;
    }
  }
  return uVar6;
}

#undef local_48
#undef local_47
#undef local_46
#undef local_40
#undef local_3f
#undef local_3e
#undef local_38
