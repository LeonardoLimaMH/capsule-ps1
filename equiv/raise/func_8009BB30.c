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
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
#define DAT_8008ed68 (*(s32 *)0x8008ED68)
#define DAT_800900c0 (*(s32 *)0x800900C0)
extern s32 GetTPage();
extern s32 PopMatrix();
extern s32 PushMatrix();
extern s32 RotTransPers4();
extern s32 SetPolyG4();
extern s32 SetSemiTrans();
#define func_80018610 ((s32 (*)())0x80018610)
#define func_80020578 ((s32 (*)())0x80020578)
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
#define func_800E3810 ((s32 (*)())0x800E3810)
void func_8009BB30(short *param_1,int param_2,int param_3)

{
  union { u64 align; u8 bytes[0x40]; } recovered_local_frame;
#define local_68 (*(short volatile (*)[4])(recovered_local_frame.bytes + 0x0))
#define auStack_60 (*(undefined1 volatile (*)[2])(recovered_local_frame.bytes + 0x8))
#define local_5e (*(short volatile *)(recovered_local_frame.bytes + 0xA))
#define auStack_5c (*(undefined1 volatile (*)[4])(recovered_local_frame.bytes + 0xC))
#define auStack_58 (*(undefined1 volatile (*)[2])(recovered_local_frame.bytes + 0x10))
#define local_56 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x12))
#define auStack_54 (*(undefined1 volatile (*)[4])(recovered_local_frame.bytes + 0x14))
#define auStack_50 (*(undefined1 volatile (*)[2])(recovered_local_frame.bytes + 0x18))
#define local_4e (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x1A))
#define auStack_4c (*(undefined1 volatile (*)[4])(recovered_local_frame.bytes + 0x1C))
#define local_48 (*(short volatile *)(recovered_local_frame.bytes + 0x20))
#define local_46 (*(short volatile *)(recovered_local_frame.bytes + 0x22))
#define local_40 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x28))
#define local_3e (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2A))
#define local_3c (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2C))
#define local_3a (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2E))
#define local_38 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x30))
#define local_36 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x32))
#define local_34 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x34))
#define local_32 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x36))
#define auStack_30 (*(undefined1 volatile (*)[4])(recovered_local_frame.bytes + 0x38))
#define auStack_2c (*(undefined1 volatile (*)[4])(recovered_local_frame.bytes + 0x3C))

  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  short *psVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;























  PushMatrix();
  iVar3 = func_800E3810(1);
  func_8002CEC0(((u32 *)0x800900C0) + iVar3 * 0x2f);
  local_48 = 0x28;
  if (param_3 == 0) {
    local_48 = 0x14;
  }
  local_46 = 100;
  uVar10 = 0;
  iVar3 = 0x1000;
  do {
    iVar7 = iVar3 + param_2 * -0x50;
    iVar9 = iVar7 * 0x10000 >> 0x10;
    func_80020578((int)local_48,0,iVar9,local_68,local_68 + 2);
    iVar7 = (iVar7 + 0x100) * 0x10000 >> 0x10;
    func_80020578((int)local_48,0,iVar7,auStack_60,auStack_5c);
    func_80020578((int)local_46,0,iVar9,auStack_58,auStack_54);
    func_80020578((int)local_46,0,iVar7,auStack_50,auStack_4c);
    iVar7 = 0;
    local_4e = 0;
    local_56 = 0;
    local_5e = param_1[1];
    local_68[1] = param_1[1];
    psVar4 = local_68;
    do {
      *psVar4 = *psVar4 + *param_1;
      iVar7 = iVar7 + 1;
      psVar4[2] = psVar4[2] + param_1[2];
      psVar4 = psVar4 + 4;
    } while (iVar7 < 4);
    puVar8 = *(uint **)(DAT_8008ed68 + 0x1090);
    puVar5 = (uint *)0x0;
    if ((puVar8 == (uint *)0x0) ||
       (puVar5 = puVar8 + 9, puVar6 = (uint *)0x0, puVar5 <= (uint *)(DAT_8008ed68 + 0x4594U))) {
      puVar6 = puVar5;
    }
    *(uint **)(DAT_8008ed68 + 0x1090) = puVar6;
    SetPolyG4(puVar8);
    SetSemiTrans(puVar8,1);
    iVar7 = RotTransPers4(local_68,auStack_60,auStack_58,auStack_50,&local_40,&local_3c,&local_38,
                          &local_34,auStack_30,auStack_2c);
    if ((uVar10 & 1) == 0) {
      *(undefined1 *)((int)puVar8 + 6) = 0x20;
      *(undefined1 *)((int)puVar8 + 0x16) = 0x20;
      uVar1 = 0x50;
    }
    else {
      *(undefined1 *)((int)puVar8 + 6) = 0x50;
      *(undefined1 *)((int)puVar8 + 0x16) = 0x50;
      uVar1 = 0x20;
    }
    *(undefined1 *)(puVar8 + 1) = 0x80;
    *(undefined1 *)((int)puVar8 + 5) = 0x80;
    *(undefined1 *)(puVar8 + 5) = 0x80;
    *(undefined1 *)((int)puVar8 + 0x15) = 0x80;
    *(undefined1 *)(puVar8 + 3) = 0x80;
    *(undefined1 *)((int)puVar8 + 0xd) = 0x80;
    *(undefined1 *)((int)puVar8 + 0xe) = uVar1;
    *(undefined1 *)(puVar8 + 7) = 0x80;
    *(undefined1 *)((int)puVar8 + 0x1d) = 0x80;
    *(undefined1 *)((int)puVar8 + 0x1e) = uVar1;
    *(undefined2 *)(puVar8 + 2) = local_40;
    *(undefined2 *)((int)puVar8 + 10) = local_3e;
    *(undefined2 *)(puVar8 + 4) = local_3c;
    *(undefined2 *)((int)puVar8 + 0x12) = local_3a;
    *(undefined2 *)(puVar8 + 6) = local_38;
    *(undefined2 *)((int)puVar8 + 0x1a) = local_36;
    *(undefined2 *)(puVar8 + 8) = local_34;
    *(undefined2 *)((int)puVar8 + 0x22) = local_32;
    *puVar8 = *puVar8 & 0xff000000 | *(uint *)(iVar7 * 4 + DAT_8008ed68 + 0x70) & 0xffffff;
    uVar10 = uVar10 + 1;
    iVar9 = iVar7 * 4 + DAT_8008ed68;
    *(uint *)(iVar9 + 0x70) = *(uint *)(iVar9 + 0x70) & 0xff000000 | (uint)puVar8 & 0xffffff;
    iVar3 = iVar3 + 0x100;
  } while ((int)uVar10 < 0x10);
  uVar2 = GetTPage(0,0,0,0);
  func_80018610(uVar2,iVar7);
  PopMatrix();
  return;
}

#undef local_68
#undef auStack_60
#undef local_5e
#undef auStack_5c
#undef auStack_58
#undef local_56
#undef auStack_54
#undef auStack_50
#undef local_4e
#undef auStack_4c
#undef local_48
#undef local_46
#undef local_40
#undef local_3e
#undef local_3c
#undef local_3a
#undef local_38
#undef local_36
#undef local_34
#undef local_32
#undef auStack_30
#undef auStack_2c
