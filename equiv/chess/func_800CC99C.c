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
#define DAT_8008ed68 (*(s32 *)0x8008ED68)
#define DAT_800906a0 (*(s32 *)0x800906A0)
extern s32 GetTPage();
extern s32 SetPolyG4();
extern s32 SetSemiTrans();
#define func_80018610 ((s32 (*)())0x80018610)
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
#define func_800CD658 ((s32 (*)())0x800CD658)
#define func_800CD768 ((s32 (*)())0x800CD768)
void func_800CC99C(int param_1)

{
  union { u64 align; u8 bytes[0x10]; } recovered_local_frame;
#define local_28 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x0))
#define local_26 (*(short volatile *)(recovered_local_frame.bytes + 0x2))
#define local_24 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x4))
#define auStack_20 (*(undefined1 volatile (*)[8])(recovered_local_frame.bytes + 0x8))

  undefined2 uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;





  iVar6 = *(int *)(*(int *)(param_1 + 0x60) + 0x70);
  if ((*(uint *)(param_1 + 0x50) & 1) != 1) {
    puVar5 = *(uint **)(DAT_8008ed68 + 0x1090);
    puVar3 = (uint *)0x0;
    if ((puVar5 == (uint *)0x0) ||
       (puVar3 = puVar5 + 9, puVar4 = (uint *)0x0, puVar3 <= (uint *)(DAT_8008ed68 + 0x4594U))) {
      puVar4 = puVar3;
    }
    *(uint **)(DAT_8008ed68 + 0x1090) = puVar4;
    SetPolyG4(puVar5);
    SetSemiTrans(puVar5,*(uint *)(param_1 + 0x50) >> 6 & 1);
    if (*(s8 *)(param_1 + 0x58) == '\0') {
      func_8002CEC0(&DAT_800906a0);
    }
    func_800CD768(param_1 + 0x18,puVar5);
    local_28 = (undefined2)(((int)*(short *)(param_1 + 0x28) + (int)*(short *)(param_1 + 0x30)) / 2)
    ;
    local_26 = (short)(((int)*(short *)(param_1 + 0x2a) + (int)*(short *)(param_1 + 0x32)) / 2) +
               -100;
    local_24 = (undefined2)(((int)*(short *)(param_1 + 0x2c) + (int)*(short *)(param_1 + 0x34)) / 2)
    ;
    iVar2 = func_800CD658(&local_28,auStack_20);
    iVar6 = (int)*(short *)(iVar6 + 0x4e);
    iVar7 = iVar6 + 1;
    if (iVar2 <= iVar6) {
      iVar7 = iVar6 + -1;
    }
    *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(param_1 + 0x38);
    *(undefined1 *)((int)puVar5 + 5) = *(undefined1 *)(param_1 + 0x39);
    *(undefined1 *)((int)puVar5 + 6) = *(undefined1 *)(param_1 + 0x3a);
    *(undefined1 *)(puVar5 + 3) = *(undefined1 *)(param_1 + 0x3b);
    *(undefined1 *)((int)puVar5 + 0xd) = *(undefined1 *)(param_1 + 0x3c);
    *(undefined1 *)((int)puVar5 + 0xe) = *(undefined1 *)(param_1 + 0x3d);
    *(undefined1 *)(puVar5 + 5) = *(undefined1 *)(param_1 + 0x3e);
    *(undefined1 *)((int)puVar5 + 0x15) = *(undefined1 *)(param_1 + 0x3f);
    *(undefined1 *)((int)puVar5 + 0x16) = *(undefined1 *)(param_1 + 0x40);
    *(undefined1 *)(puVar5 + 7) = *(undefined1 *)(param_1 + 0x41);
    *(undefined1 *)((int)puVar5 + 0x1d) = *(undefined1 *)(param_1 + 0x42);
    *(undefined1 *)((int)puVar5 + 0x1e) = *(undefined1 *)(param_1 + 0x43);
    if (iVar7 - 6U < 0x3fa) {
      *puVar5 = *puVar5 & 0xff000000 | *(uint *)(iVar7 * 4 + DAT_8008ed68 + 0x70) & 0xffffff;
      iVar6 = iVar7 * 4 + DAT_8008ed68;
      *(uint *)(iVar6 + 0x70) = *(uint *)(iVar6 + 0x70) & 0xff000000 | (uint)puVar5 & 0xffffff;
      uVar1 = GetTPage(0,*(uint *)(param_1 + 0x50) >> 4 & 3,0,0);
      func_80018610(uVar1,iVar7);
    }
  }
  return;
}

#undef local_28
#undef local_26
#undef local_24
#undef auStack_20
