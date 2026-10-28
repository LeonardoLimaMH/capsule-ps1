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
#define DAT_8008ee70 (*(s32 *)0x8008EE70)
#define DAT_8008ee74 (*(s32 *)0x8008EE74)
#define DAT_8008f7a4 (*(s32 *)0x8008F7A4)
#define DAT_8008f7c0 (*(u32 *)0x8008F7C0)
#define D_80119714 (*(s32 *)0x80119714)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80018600 ((s32 (*)())0x80018600)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_80034BA0 ((s32 (*)())0x80034BA0)
#define func_80034BD8 ((s32 (*)())0x80034BD8)
#define func_800374E8 ((s32 (*)())0x800374E8)
#define func_800C94DC ((s32 (*)())0x800C94DC)
#define func_800DD428 ((s32 (*)())0x800DD428)
#define func_800F515C ((s32 (*)())0x800F515C)
#define func_800F52C4 ((s32 (*)())0x800F52C4)
#define func_800F71B4 ((s32 (*)())0x800F71B4)
undefined4 func_800F373C(undefined4 param_1,undefined4 param_2,int param_3)

{
  union { u64 align; u8 bytes[0x20]; } recovered_local_frame;
#define local_40 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x0))
#define local_3f (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x1))
#define local_3e (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x2))
#define local_38 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x8))
#define local_37 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x9))
#define local_36 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0xA))
#define local_30 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x10))
#define local_2c (*(int volatile *)(recovered_local_frame.bytes + 0x14))
#define local_28 (*(undefined1 volatile (*)[8])(recovered_local_frame.bytes + 0x18))

  undefined1 uVar1;
  s8 cVar2;
  short sVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  short sVar7;
  int iVar8;










  iVar8 = DAT_8008f7a4;
  if (DAT_8008ee54 == 1) {
LAB_800f3824:
    if (D_80119714 < 0x3c) {
      return 0;
    }
    *(undefined1 *)(param_3 + 0x17) = 0x87;
    *(undefined1 *)(param_3 + 0x23) = 3;
    func_80034AB0(0x8020);
    iVar6 = 0;
    sVar7 = -10;
    do {
      iVar4 = func_80015B3C(func_800F515C,func_800F71B4,1);
      *(short *)(iVar4 + 0x28) =
           *(short *)(*(int *)(param_3 + 0x70) + 0x46) + (short)(DAT_8008ee70 / 2);
      *(short *)(iVar4 + 0x2a) =
           *(short *)(*(int *)(param_3 + 0x70) + 0x4a) + (short)(DAT_8008ee74 / 2) + -0x28;
      iVar6 = iVar6 + 1;
      *(short *)(iVar4 + 0x2c) = *(short *)(*(int *)(param_3 + 0x70) + 0x4e) + 10;
      cVar2 = func_800202A4(0x9c);
      *(s8 *)(iVar4 + 0x38) = cVar2 + 'd';
      cVar2 = func_800202A4(0x9c);
      *(s8 *)(iVar4 + 0x39) = cVar2 + 'd';
      cVar2 = func_800202A4(0x9c);
      *(s8 *)(iVar4 + 0x3a) = cVar2 + 'd';
      *(undefined1 *)(iVar4 + 0x2e) = 9;
      *(undefined2 *)(iVar4 + 0x36) = 0xaa;
      *(undefined2 *)(iVar4 + 0x34) = 100;
      sVar3 = func_800202A4(7);
      sVar3 = sVar3 - sVar7;
      sVar7 = sVar7 + 0xd;
      *(short *)(iVar4 + 0x30) = sVar3;
      DAT_8008f7c0 = 0;
    } while (iVar6 < 3);
    local_40 = 0x10;
    local_3f = 0x10;
    local_3e = 0x10;
    local_38 = 0x30;
    local_37 = 0x30;
    local_36 = 0x60;
    func_800DD428(&local_40,&local_38,1);
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
  }
  else {
    if (DAT_8008ee54 < 2) {
      if (DAT_8008ee54 != 0) {
        return 0;
      }
      uVar1 = func_800C94DC(param_1,0);
      *(undefined1 *)(param_3 + 0x25) = uVar1;
      local_40 = 0x60;
      local_3f = 0x60;
      local_3e = 0x60;
      local_38 = 0x10;
      local_37 = 0x10;
      local_36 = 0x10;
      func_800DD428(&local_40,&local_38,0x3c);
      func_800374E8(0x8020);
      *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x80000000;
      DAT_8008f7a4 = 0;
      func_80034BD8(0xfffffffb,0);
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
      goto LAB_800f3824;
    }
    if (DAT_8008ee54 != 2) {
      if (DAT_8008ee54 != 3) {
        return 0;
      }
      goto LAB_800f3b74;
    }
  }
  if (D_80119714 == (D_80119714 / 0x11) * 0x11) {
    iVar8 = 1;
    iVar6 = 2;
    puVar5 = &local_38;
    do {
      *(undefined4 *)(puVar5 + 0x10) = 100;
      iVar6 = iVar6 + -1;
      puVar5 = puVar5 + -4;
    } while (-1 < iVar6);
    iVar6 = func_800202A4(3);
    (&local_30)[iVar6] = 0xff;
    if (local_2c == 0xff) {
      local_2c = 0xad;
      local_30 = 0xad;
    }
  }
  if (iVar8 != 0) {
    iVar8 = func_80015B3C(func_80018600,func_800F52C4,1);
    *(undefined1 *)(iVar8 + 0x28) = (undefined1)local_30;
    *(undefined1 *)(iVar8 + 0x29) = (undefined1)local_2c;
    *(undefined1 *)(iVar8 + 0x30) = 1;
    *(undefined1 *)(iVar8 + 0x2c) = 0;
    *(undefined1 *)(iVar8 + 0x2d) = 0;
    *(undefined1 *)(iVar8 + 0x2e) = 0;
    *(undefined2 *)(iVar8 + 0x32) = 2;
    *(undefined1 *)(iVar8 + 0x2a) = local_28[0];
  }
  if (D_80119714 == 0x46) {
    local_40 = 0x30;
    local_3f = 0x30;
    local_3e = 0x60;
    local_38 = 0x60;
    local_37 = 0x30;
    local_36 = 0x30;
    func_800DD428(&local_40,&local_38,1);
  }
  if (D_80119714 == 0x8c) {
    local_40 = 0x60;
    local_3f = 0x30;
    local_3e = 0x30;
    local_38 = 0x45;
    local_37 = 0x45;
    local_36 = 0x30;
    func_800DD428(&local_40,&local_38,1);
  }
  if (D_80119714 < 0xb4) {
    return 0;
  }
  local_40 = 0x45;
  local_3f = 0x45;
  local_3e = 0x40;
  local_38 = 0x60;
  local_37 = 0x60;
  local_36 = 0x60;
  func_800DD428(&local_40,&local_38,0x1e);
  DAT_8008f7c0 = 1;
  *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) ^ 0x80000000;
  func_80034BA0(5,0xff);
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
LAB_800f3b74:
  if (D_80119714 < 0x1e) {
    return 0;
  }
  return 1;
}

#undef local_40
#undef local_3f
#undef local_3e
#undef local_38
#undef local_37
#undef local_36
#undef local_30
#undef local_2c
#undef local_28
