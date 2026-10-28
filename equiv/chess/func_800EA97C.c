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
#define D_80119714 (*(s32 *)0x80119714)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80018600 ((s32 (*)())0x80018600)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800D3128 ((s32 (*)())0x800D3128)
#define func_800DD3D8 ((s32 (*)())0x800DD3D8)
#define func_800DDA78 ((s32 (*)())0x800DDA78)
#define func_800EA824 ((s32 (*)())0x800EA824)
#define func_800EB5BC ((s32 (*)())0x800EB5BC)
#define func_800F52C4 ((s32 (*)())0x800F52C4)
#define func_800FE188 ((s32 (*)())0x800FE188)
undefined4 func_800EA97C(undefined4 param_1,int param_2,int param_3,uchar *param_4)

{
  union { u64 align; u8 bytes[0x10]; } recovered_local_frame;
#define local_28 (*(uint volatile *)(recovered_local_frame.bytes + 0x0))
#define local_24 (*(uint volatile *)(recovered_local_frame.bytes + 0x4))
#define local_20 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x8))

  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;




  iVar3 = *(int *)(param_3 + 0x70);
  iVar4 = *(int *)(param_4 + 0x70);
  switch(DAT_8008ee54) {
  case 0:
    local_28 = (uint)param_4[0x15];
    local_24 = (uint)param_4[0x16];
    iVar3 = func_800D3128((uint)*(byte *)(param_3 + 0x25),1,(int *)&local_28,(int *)&local_24);
    if (iVar3 == 2) {
      DAT_8008ee54 = DAT_8008ee54 + 1;
      D_80119714 = 0;
      return 0;
    }
    DAT_8008ee54 = 0xb;
    D_80119714 = 0;
    return 0;
  case 1:
    *(undefined1 *)(param_3 + 0x17) = 0x88;
    *(undefined1 *)(param_3 + 0x23) = 0;
    break;
  case 2:
    if (D_80119714 + -4 == ((D_80119714 + -4) / 0x12) * 0x12) {
      iVar3 = func_80015B3C(func_800EA824,func_80018600,1);
      *(uchar **)(iVar3 + 0x14) = param_4;
      func_800FE188(param_4,(SVECTOR *)(iVar3 + 0x2c));
      *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) | 0x80000000;
      func_80034AB0(0x45);
    }
    if (0x4f < D_80119714) {
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
      func_80034AB0(0x45);
      return 0;
    }
    return 0;
  case 3:
    if (2 < *(uint *)(iVar3 + 0x20)) {
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) | 0x80000000;
      *(ushort *)(param_2 + 0x710) = (ushort)param_4[0xe];
      iVar3 = func_80015B3C(func_80018600,func_800F52C4,1);
      *(undefined1 *)(iVar3 + 0x28) = 0xef;
      *(undefined1 *)(iVar3 + 0x29) = 0xff;
      *(undefined1 *)(iVar3 + 0x2a) = 0x9a;
      *(undefined1 *)(iVar3 + 0x30) = 1;
      *(undefined2 *)(iVar3 + 0x32) = 0x10;
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
      func_80034AB0(0x2c);
      return 0;
    }
    return 0;
  case 4:
    iVar2 = func_80015B3C(func_800EB5BC,func_80018600,1);
    *(uchar **)(iVar2 + 0x14) = param_4;
    *(short *)(iVar2 + 0x1e) = *(short *)(iVar4 + 0x46) - *(short *)(iVar3 + 0x46);
    func_800FE188(param_4,&local_20);
    *(short *)(iVar2 + 0x2e) = local_20.vx;
    *(short *)(iVar2 + 0x32) = local_20.vy;
    *(short *)(iVar2 + 0x36) = local_20.vz;
    bVar1 = *(byte *)(param_3 + 0x25);
    if (bVar1 == 2) {
      *(undefined2 *)(iVar2 + 0x3a) = 0xfff4;
    }
    else if (bVar1 < 3) {
      if (bVar1 == 0) {
        *(undefined2 *)(iVar2 + 0x42) = 0xfff4;
      }
    }
    else if (bVar1 == 4) {
      *(undefined2 *)(iVar2 + 0x42) = 0xc;
    }
    else if (bVar1 == 6) {
      *(undefined2 *)(iVar2 + 0x3a) = 0xc;
    }
    *(undefined2 *)(iVar2 + 0x3e) = 0xfff6;
    break;
  case 5:
    if (0x27 < D_80119714) {
      func_80034AB0(0x1c);
      func_800DD3D8(0xf,0x32);
      DAT_8008ee54 = 99;
      D_80119714 = 0;
      return 0;
    }
    return 0;
  default:
    goto switchD_800ea9d4_caseD_6;
  case 0xb:
    *(undefined1 *)(param_3 + 0x17) = 0x88;
    *(undefined1 *)(param_3 + 0x23) = 1;
    break;
  case 0xc:
    if (*(int *)(iVar3 + 0x20) == 0) {
      return 0;
    }
    iVar3 = func_80015B3C(func_800EA824,func_80018600,1);
    *(uchar **)(iVar3 + 0x14) = param_4;
    func_800FE188(param_4,(SVECTOR *)(iVar3 + 0x2c));
    *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) | 0x80000000;
    func_80034AB0(0x45);
    break;
  case 0xd:
    if (*(uint *)(iVar3 + 0x20) < 3) {
      return 0;
    }
    func_800DDA78(param_4);
    func_80034AB0(0x45);
    *(uint *)(param_4 + 0x1c) = *(uint *)(param_4 + 0x1c) | 8;
    *(undefined1 *)(param_2 + 0x70d) = 0;
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
  case 0xe:
    if (D_80119714 < 0x1e) {
      return 0;
    }
  case 99:
    *(undefined1 *)(param_2 + 0x70d) = 1;
    *(undefined1 *)(param_2 + 0x60d) = 2;
    return 1;
  }
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
switchD_800ea9d4_caseD_6:
  return 0;
}

#undef local_28
#undef local_24
#undef local_20
