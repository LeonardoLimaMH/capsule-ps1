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
#define DAT_80069b1c (*(u32 *)0x80069B1C)
#define DAT_80069b20 (*(u32 *)0x80069B20)
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008ee6b (*(u8 *)0x8008EE6B)
#define D_80069B18 (*(u32 *)0x80069B18)
#define D_80118810 (*(u8 *)0x80118810)
#define func_80012668 ((s32 (*)())0x80012668)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_8002CC74 ((s32 (*)())0x8002CC74)
#define func_8002CD50 ((s32 (*)())0x8002CD50)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800374E8 ((s32 (*)())0x800374E8)
#define func_800A46B8 ((s32 (*)())0x800A46B8)
#define func_800A4858 ((s32 (*)())0x800A4858)
#define func_800A93DC ((s32 (*)())0x800A93DC)
#define func_800B3488 ((s32 (*)())0x800B3488)
#define func_800C9B78 ((s32 (*)())0x800C9B78)
undefined4 func_800C71D4(int param_1,int param_2,int param_3,int param_4)

{
  union { u64 align; u8 bytes[0x18]; } recovered_local_frame;
#define local_38 (*(short volatile *)(recovered_local_frame.bytes + 0x0))
#define local_36 (*(short volatile *)(recovered_local_frame.bytes + 0x2))
#define local_34 (*(short volatile *)(recovered_local_frame.bytes + 0x4))
#define auStack_30 (*(undefined1 volatile (*)[8])(recovered_local_frame.bytes + 0x8))
#define auStack_28 (*(undefined1 volatile (*)[8])(recovered_local_frame.bytes + 0x10))

  bool bVar1;
  s8 cVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;






  iVar6 = *(int *)(param_3 + 0x78);
  uVar7 = 0;
  switch(DAT_8008ee54) {
  case 0:
    *(undefined1 *)(param_3 + 0x17) = 0x88;
    *(undefined1 *)(param_3 + 0x23) = 1;
    func_80012668();
    uVar7 = 0;
    break;
  case 1:
    uVar7 = 0;
    if (*(s8 *)(param_3 + 0x22) == *(s8 *)(param_3 + 0x17)) {
      func_80012668();
      uVar7 = 0;
    }
    break;
  case 2:
    uVar7 = 0;
    if (*(int *)(*(int *)(param_3 + 0x70) + 0x20) == 3) {
      *(undefined1 *)(param_3 + 0x24) = 0x46;
      *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x20000;
      func_80012668();
      uVar7 = 0;
    }
    break;
  case 3:
    *(undefined4 *)(iVar6 + 0x88) = 1;
    iVar4 = func_800C9B78(param_3,param_4);
    D_80118810 = (s8)((ulonglong)((longlong)iVar4 * 0x2aaaaaab) >> 0x20) - (s8)(iVar4 >> 0x1f);
    *(byte *)(param_2 + 0x709) = D_80118810;
    func_80034AB0(0x1c);
    func_800374E8(0x800c);
    func_80012668();
  case 4:
    func_800A46B8(param_1,*(undefined1 *)(param_4 + 0x15),*(undefined1 *)(param_4 + 0x16),auStack_30
                 );
    func_800A46B8(param_1,*(undefined1 *)(param_3 + 0x15),*(undefined1 *)(param_3 + 0x16),auStack_28
                 );
    func_800A93DC(auStack_28,auStack_30,&local_38,D_80118810,*(undefined1 *)(param_2 + 0x709),100);
    *(short *)(iVar6 + 0x6a) = local_38;
    *(short *)(iVar6 + 0x6e) = local_36 + -0x32;
    *(short *)(iVar6 + 0x72) = local_34;
    D_80069B18 = -(int)local_38;
    DAT_80069b1c = -(int)local_36;
    DAT_80069b20 = -(int)local_34;
    func_8002CC74();
    func_8002CD50();
    iVar4 = func_800A4858(param_1,*(undefined1 *)(param_3 + 0x15),*(undefined1 *)(param_3 + 0x16),
                          &local_38);
    if (iVar4 == 0) {
      *(undefined4 *)(iVar6 + 0x84) = 1;
    }
    if (DAT_8008ee6b < 2) {
      cVar2 = -1;
    }
    else {
      cVar2 = -DAT_8008ee6b;
    }
    *(s8 *)(param_2 + 0x709) = *(s8 *)(param_2 + 0x709) + cVar2;
    *(short *)(iVar6 + 0x54) =
         (short)(((uint)*(byte *)(param_2 + 0x709) * 0x5000) / (uint)D_80118810);
    uVar7 = 0;
    if (*(s8 *)(param_2 + 0x709) == '\0') {
      *(undefined2 *)(param_1 + 0xc) = 0;
      func_80012668();
      uVar7 = 0;
    }
    break;
  case 5:
    func_800B3488(param_2,param_4);
    uVar7 = func_80019F30(0x7011a,0x47);
    *(undefined4 *)(iVar6 + 0x8c) = uVar7;
    if (DAT_8008ee6b < 2) {
      uVar5 = *(ushort *)(param_1 + 0xc) + 1;
    }
    else {
      uVar5 = (uint)*(ushort *)(param_1 + 0xc) + (uint)DAT_8008ee6b;
    }
    *(short *)(param_1 + 0xc) = (short)uVar5;
    *(uint *)(iVar6 + 0x38) = *(uint *)(iVar6 + 0x38) & 0xffffffbf | (uVar5 & 4) << 4 | 0x30;
    bVar1 = *(ushort *)(param_1 + 0xc) < 0x31;
    goto LAB_800c7638;
  case 6:
    cVar2 = *(s8 *)(iVar6 + 0x5a) + '\x02';
    *(s8 *)(iVar6 + 0x5a) = cVar2;
    *(s8 *)(iVar6 + 0x59) = cVar2;
    *(s8 *)(iVar6 + 0x58) = cVar2;
    if (DAT_8008ee6b < 2) {
      uVar5 = *(ushort *)(param_1 + 0xc) + 1;
    }
    else {
      uVar5 = (uint)*(ushort *)(param_1 + 0xc) + (uint)DAT_8008ee6b;
    }
    *(short *)(param_1 + 0xc) = (short)uVar5;
    *(uint *)(iVar6 + 0x38) = *(uint *)(iVar6 + 0x38) & 0xffffffbf | (uVar5 & 4) << 4;
    if (0xfd < *(byte *)(iVar6 + 0x58)) {
      *(undefined1 *)(iVar6 + 0x5a) = 0xff;
      *(undefined1 *)(iVar6 + 0x59) = 0xff;
      *(undefined1 *)(iVar6 + 0x58) = 0xff;
      *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) | 4;
      func_80012668();
      uVar7 = 0;
    }
    break;
  case 7:
    if (DAT_8008ee6b < 2) {
      uVar5 = *(ushort *)(param_1 + 0xc) + 1;
    }
    else {
      uVar5 = (uint)*(ushort *)(param_1 + 0xc) + (uint)DAT_8008ee6b;
    }
    *(short *)(param_1 + 0xc) = (short)uVar5;
    *(uint *)(iVar6 + 0x38) = *(uint *)(iVar6 + 0x38) & 0xffffffbf | (uVar5 & 4) << 4;
    uVar7 = 0;
    if (0x84 < *(ushort *)(param_1 + 0xc)) {
      *(uint *)(param_4 + 0x1c) = *(uint *)(param_4 + 0x1c) | 8;
      *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) | 2;
      *(undefined4 *)(iVar6 + 0x84) = 2;
      func_80012668();
      uVar7 = 0;
    }
    break;
  case 8:
    if (DAT_8008ee6b < 2) {
      uVar3 = *(short *)(param_1 + 0xc) + 1;
    }
    else {
      uVar3 = *(short *)(param_1 + 0xc) + (ushort)DAT_8008ee6b;
    }
    *(ushort *)(param_1 + 0xc) = uVar3;
    bVar1 = uVar3 < 0x101;
LAB_800c7638:
    uVar7 = 0;
    if (!bVar1) {
      func_80012668();
      uVar7 = 0;
    }
    break;
  case 9:
    uVar7 = 1;
    *(undefined1 *)(param_2 + 0x60d) = 2;
  }
  return uVar7;
}

#undef local_38
#undef local_36
#undef local_34
#undef auStack_30
#undef auStack_28
