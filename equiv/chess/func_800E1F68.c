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
#define DAT_8008ee70 (*(s32 *)0x8008EE70)
#define func_80013920 ((s32 (*)())0x80013920)
#define func_800F7484 ((s32 (*)())0x800F7484)
#define func_800FAC74 ((s32 (*)())0x800FAC74)
extern s32 rcos();
extern s32 rsin();
void func_800E1F68(int param_1)

{
  union { u64 align; u8 bytes[0x80]; } recovered_local_frame;
#define auStack_a8 (*(undefined1 volatile (*)[40])(recovered_local_frame.bytes + 0x0))
#define local_80 (*(short volatile *)(recovered_local_frame.bytes + 0x28))
#define local_7e (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2A))
#define local_7c (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2C))
#define local_7a (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x2E))
#define local_79 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x2F))
#define local_78 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x30))
#define local_76 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x32))
#define local_75 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x33))
#define local_74 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x34))
#define local_72 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x36))
#define local_70 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x38))
#define local_6e (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x3A))
#define local_6d (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x3B))
#define local_6c (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x3C))
#define local_6a (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x3E))
#define auStack_68 (*(undefined1 volatile (*)[40])(recovered_local_frame.bytes + 0x40))
#define local_40 (*(short volatile *)(recovered_local_frame.bytes + 0x68))
#define local_3e (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x6A))
#define local_3c (*(short volatile *)(recovered_local_frame.bytes + 0x6C))
#define local_3a (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x6E))
#define local_38 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x70))
#define local_36 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x72))
#define local_35 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x73))
#define local_34 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x74))
#define local_33 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x75))
#define local_32 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x76))
#define local_30 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x78))
#define local_2f (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x79))
#define local_2e (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x7A))
#define local_2c (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x7C))
#define local_2b (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x7D))
#define local_2a (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x7E))

  int iVar1;
  int iVar2;
  short sVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  short sVar8;
  int iVar9;


































  sVar3 = *(short *)(param_1 + 0x1c) + 1;
  *(short *)(param_1 + 0x1c) = sVar3;
  iVar6 = (int)sVar3;
  iVar9 = DAT_8008ee70 / 2;
  if (0xb4 < iVar6) {
    func_80013920();
    return;
  }
  iVar5 = iVar6 << 0xc;
  iVar1 = rsin(iVar5 / 0x5a);
  iVar1 = iVar1 * 0x200;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  iVar1 = iVar1 >> 0xc;
  iVar2 = rsin(iVar1);
  iVar2 = iVar2 * 0x50;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xfff;
  }
  sVar3 = (short)iVar9;
  sVar8 = sVar3 + (short)(iVar2 >> 0xc);
  iVar9 = rcos(iVar1);
  iVar9 = iVar9 * 0x50;
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xfff;
  }
  if (iVar6 < 10) {
    iVar2 = iVar5 / 10 + (iVar5 >> 0x1f);
  }
  else {
    iVar2 = 0x1000;
    if (iVar6 < 0x96) goto LAB_800e209c;
    iVar5 = (0xb4 - iVar6) * 0x1000;
    iVar2 = iVar5 / 0x1e + (iVar5 >> 0x1f);
  }
  iVar2 = iVar2 - (iVar5 >> 0x1f);
LAB_800e209c:
  iVar6 = iVar2 * 0xfa;
  uVar7 = (undefined2)(iVar9 >> 0xc);
  local_7c = 0;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xfff;
  }
  uVar4 = (undefined1)(iVar6 >> 0xc);
  iVar6 = iVar2 * 0xff;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xfff;
  }
  local_79 = (undefined1)(iVar6 >> 0xc);
  iVar6 = iVar2 * 0x8c;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xfff;
  }
  local_78 = (undefined1)(iVar6 >> 0xc);
  local_72 = 10;
  local_70 = 3;
  local_6e = 0x10;
  local_6c = 1;
  local_6a = (undefined2)iVar1;
  local_80 = sVar8;
  local_7e = uVar7;
  local_7a = uVar4;
  local_76 = uVar4;
  local_75 = local_79;
  local_74 = local_78;
  local_6d = iVar2 != 0x1000;
  func_800F7484(auStack_a8);
  local_3e = 0;
  local_38 = 0;
  local_35 = 2;
  local_36 = 2;
  local_2c = 0;
  local_2a = 1;
  local_40 = sVar3;
  local_3c = sVar8;
  local_3a = uVar7;
  local_34 = uVar4;
  local_33 = uVar4;
  local_32 = uVar4;
  local_30 = uVar4;
  local_2f = uVar4;
  local_2e = uVar4;
  local_2b = iVar2 != 0x1000;
  func_800FAC74(auStack_68);
  return;
}

#undef auStack_a8
#undef local_80
#undef local_7e
#undef local_7c
#undef local_7a
#undef local_79
#undef local_78
#undef local_76
#undef local_75
#undef local_74
#undef local_72
#undef local_70
#undef local_6e
#undef local_6d
#undef local_6c
#undef local_6a
#undef auStack_68
#undef local_40
#undef local_3e
#undef local_3c
#undef local_3a
#undef local_38
#undef local_36
#undef local_35
#undef local_34
#undef local_33
#undef local_32
#undef local_30
#undef local_2f
#undef local_2e
#undef local_2c
#undef local_2b
#undef local_2a
