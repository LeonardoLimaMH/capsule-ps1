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
/* arg2: 0x80140000 */
/* arg3: 0x80150000 */
/* rand-mem: 0x80140015 2 13 */
/* rand-mem: 0x80150015 2 13 */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008ee6a (*(s8 *)0x8008EE6A)
#define DAT_8008f7a4 (*(s32 *)0x8008F7A4)
#define D_80119714 (*(s32 *)0x80119714)
extern s32 GetClut();
extern s32 GetTPage();
#define func_80013928 ((s32 (*)())0x80013928)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80018600 ((s32 (*)())0x80018600)
#define func_80033974 ((s32 (*)())0x80033974)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800DD3D8 ((s32 (*)())0x800DD3D8)
#define func_800DD428 ((s32 (*)())0x800DD428)
#define func_800F5114 ((s32 (*)())0x800F5114)
#define func_800F52C4 ((s32 (*)())0x800F52C4)
#define func_800F5AF4 ((s32 (*)())0x800F5AF4)
#define func_800FC42C ((s32 (*)())0x800FC42C)
#define func_800FE188 ((s32 (*)())0x800FE188)
undefined4 func_800F4484(undefined4 param_1,undefined4 param_2,uchar *param_3)

{
  union { u64 align; u8 bytes[0x10]; } recovered_local_frame;
#define local_28 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x0))
#define local_27 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x1))
#define local_26 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x2))
#define local_20 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x8))
#define local_1f (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x9))
#define local_1e (*(undefined1 volatile *)(recovered_local_frame.bytes + 0xA))

  undefined2 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;







  iVar4 = DAT_8008f7a4;
  iVar3 = func_80015B3C(func_80018600,func_800F52C4,1);
  if (DAT_8008ee54 == 3) {
    iVar5 = *(int *)(param_3 + 0x70);
    if ((*(int *)(iVar5 + 0x20) == 4) && (*(short *)(iVar5 + 0x24) == 0)) {
      *(undefined4 *)(iVar5 + 0x20) = 2;
    }
    sVar2 = *(short *)(iVar4 + 0x38) + 10;
    *(short *)(iVar4 + 0x38) = sVar2;
    if (0x15e < sVar2) {
      *(undefined2 *)(iVar4 + 0x38) = 0x15e;
    }
    if (D_80119714 < 100) {
      return 0;
    }
    func_80013928(iVar4);
    *(undefined1 *)(iVar3 + 0x28) = 0xff;
    *(undefined1 *)(iVar3 + 0x29) = 0xff;
    *(undefined1 *)(iVar3 + 0x2a) = 0xff;
    *(undefined1 *)(iVar3 + 0x2c) = 0x96;
    *(undefined1 *)(iVar3 + 0x30) = 1;
    *(undefined1 *)(iVar3 + 0x2d) = 0;
    *(undefined1 *)(iVar3 + 0x2e) = 0;
    *(undefined2 *)(iVar3 + 0x32) = 0x1e;
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
    func_80034AB0(0x8004);
    return 0;
  }
  if (3 < DAT_8008ee54) {
    if (DAT_8008ee54 != 5) {
      if (4 < DAT_8008ee54) {
        if (DAT_8008ee54 != 99) {
          return 0;
        }
        goto LAB_800f4950;
      }
      iVar4 = func_80015B3C(func_800F5114,func_800F5AF4,1);
      func_800FE188(param_3,(SVECTOR *)(iVar4 + 0x28));
      *(undefined1 *)(iVar4 + 0x30) = 0xfa;
      *(undefined1 *)(iVar4 + 0x31) = 0xfa;
      *(undefined1 *)(iVar4 + 0x32) = 0xfa;
      *(undefined1 *)(iVar4 + 0x36) = 8;
      *(undefined2 *)(iVar4 + 0x3a) = 0x400;
      *(undefined2 *)(iVar4 + 0x34) = 10;
      *(undefined1 *)(iVar4 + 0x37) = 10;
      *(undefined2 *)(iVar4 + 0x38) = 0;
      *(undefined1 *)(iVar4 + 0x43) = 1;
      *(short *)(iVar4 + 0x2a) = *(short *)(iVar4 + 0x2a) + -10;
      uVar1 = GetTPage(0,1,0x280,0x100);
      *(undefined2 *)(iVar4 + 0x3e) = uVar1;
      uVar1 = GetClut(8,0x1f0);
      *(undefined2 *)(iVar4 + 0x40) = uVar1;
      *(undefined1 *)(iVar4 + 0x42) = 2;
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
    }
    iVar4 = *(int *)(param_3 + 0x70);
    if (((*(int *)(iVar4 + 0x20) == 4) && (*(short *)(iVar4 + 0x24) == 0)) && (D_80119714 < 0x87)) {
      *(undefined4 *)(iVar4 + 0x20) = 2;
    }
    if (D_80119714 == 0x50) {
      *(undefined1 *)(iVar3 + 0x28) = 0xff;
      *(undefined1 *)(iVar3 + 0x29) = 0xff;
      *(undefined1 *)(iVar3 + 0x2a) = 0xff;
      *(undefined1 *)(iVar3 + 0x2e) = 0x96;
      *(undefined1 *)(iVar3 + 0x30) = 1;
      *(undefined1 *)(iVar3 + 0x2c) = 0;
      *(undefined1 *)(iVar3 + 0x2d) = 0;
      *(undefined2 *)(iVar3 + 0x32) = 0x1e;
      func_80034AB0(0x1c);
      func_80034AB0(0x8004);
    }
    if (D_80119714 == 0x87) {
      *(undefined1 *)(iVar3 + 0x28) = 0xff;
      *(undefined1 *)(iVar3 + 0x29) = 0xff;
      *(undefined1 *)(iVar3 + 0x2a) = 0xff;
      *(undefined1 *)(iVar3 + 0x30) = 1;
      *(undefined1 *)(iVar3 + 0x2c) = 0;
      *(undefined1 *)(iVar3 + 0x2d) = 0;
      *(undefined1 *)(iVar3 + 0x2e) = 0;
      *(undefined2 *)(iVar3 + 0x32) = 0x1e;
      func_800DD3D8(0x12,0x28);
    }
    if (D_80119714 == 0xaa) {
      func_800DD3D8(5,0x1e);
    }
    if (D_80119714 < 0xe6) {
      return 0;
    }
LAB_800f4950:
    DAT_8008ee6a = 0;
    local_28 = 1;
    local_27 = 1;
    local_26 = 1;
    local_20 = 0x60;
    local_1f = 0x60;
    local_1e = 0x60;
    func_800DD428(&local_28,&local_20,100);
    func_80033974(0x8000);
    return 1;
  }
  if (DAT_8008ee54 != 1) {
    if (1 < DAT_8008ee54) goto LAB_800f45fc;
    if (DAT_8008ee54 != 0) {
      return 0;
    }
    param_3[0x17] = 0x88;
    param_3[0x23] = '\x01';
    D_80119714 = 0;
    DAT_8008ee6a = 2;
    local_28 = 0x60;
    local_27 = 0x60;
    local_26 = 0x60;
    local_20 = 1;
    local_1f = 1;
    local_1e = 1;
    DAT_8008ee54 = DAT_8008ee54 + 1;
    func_800DD428(&local_28,&local_20,0x32);
    func_800DD3D8(10,0x28);
  }
  if (D_80119714 < 0x2d) {
    return 0;
  }
  *(undefined1 *)(iVar3 + 0x28) = 0xff;
  *(undefined1 *)(iVar3 + 0x29) = 0xff;
  *(undefined1 *)(iVar3 + 0x2a) = 0xff;
  *(undefined1 *)(iVar3 + 0x30) = 1;
  *(undefined1 *)(iVar3 + 0x2c) = 0;
  *(undefined1 *)(iVar3 + 0x2d) = 0;
  *(undefined1 *)(iVar3 + 0x2e) = 0;
  *(undefined2 *)(iVar3 + 0x32) = 0x1e;
  func_80034AB0(0x8003);
  func_80034AB0(0x3f);
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
LAB_800f45fc:
  iVar4 = func_80015B3C(func_80018600,func_800FC42C,1);
  func_800FE188(param_3,(SVECTOR *)(iVar4 + 0x28));
  *(undefined1 *)(iVar4 + 0x30) = 0x50;
  *(undefined1 *)(iVar4 + 0x31) = 0x50;
  *(undefined1 *)(iVar4 + 0x32) = 0x50;
  *(undefined2 *)(iVar4 + 0x36) = 0x3c;
  *(undefined2 *)(iVar4 + 0x38) = 0x14;
  *(undefined2 *)(iVar4 + 0x3e) = 100;
  *(undefined2 *)(iVar4 + 0x42) = 100;
  *(undefined2 *)(iVar4 + 0x34) = 5;
  *(undefined2 *)(iVar4 + 0x3c) = 5;
  *(undefined2 *)(iVar4 + 0x44) = 12000;
  uVar1 = GetTPage(0,1,0x280,0x100);
  *(undefined2 *)(iVar4 + 0x46) = uVar1;
  uVar1 = GetClut(0x10,0x1f0);
  *(undefined2 *)(iVar4 + 0x48) = uVar1;
  *(undefined1 *)(iVar4 + 0x4a) = 1;
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
  DAT_8008f7a4 = iVar4;
  func_800DD3D8(0x1e,0xfa);
  return 0;
}

#undef local_28
#undef local_27
#undef local_26
#undef local_20
#undef local_1f
#undef local_1e
