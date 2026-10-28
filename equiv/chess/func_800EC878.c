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
/* callee-contract: RotTransPers */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
#include "common.h"

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
/* real-callee: func_800FE188 */
/* real-callee: func_800FEBF4 */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008f754 (*(u16 *)0x8008F754)
#define DAT_8008f756 (*(u16 *)0x8008F756)
#define D_80119710 (*(s32 *)0x80119710)
#define D_80119714 (*(s32 *)0x80119714)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800DD3D8 ((s32 (*)())0x800DD3D8)
#define func_800DDA78 ((s32 (*)())0x800DDA78)
#define func_800FE188 ((s32 (*)())0x800FE188)
#define func_800FE958 ((s32 (*)())0x800FE958)
#define func_800FEBF4 ((s32 (*)())0x800FEBF4)
undefined4 func_800EC878(undefined4 param_1,int param_2,uchar *param_3,uchar *param_4)

{
  union { u64 align; u8 bytes[0x40]; } recovered_local_frame;
#define local_40 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x0))
#define local_38 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x8))
#define local_30 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x10))
#define local_2e (*(short volatile *)(recovered_local_frame.bytes + 0x12))
#define local_2c (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x14))
#define SStack_28 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x18))

  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;







  iVar5 = *(int *)(param_3 + 0x78);
  if (DAT_8008ee54 == 2) {
    *(undefined4 *)(iVar5 + 0x84) = 1;
    *(undefined4 *)(iVar5 + 0x88) = 1;
    if (*(int *)(iVar5 + 0x1c) == 0) {
      param_3[0x24] = 'G';
      uVar3 = func_80019F30(0x7016f);
      *(undefined4 *)(iVar5 + 0x8c) = uVar3;
    }
    iVar1 = D_80119710;
    func_800FE188(param_3,&local_40);
    func_800FE188(param_4,&local_38);
    iVar4 = 0x78 - iVar1;
    local_30 = (undefined2)((local_40.vx * iVar4 + local_38.vx * iVar1) / 0x78);
    local_2e = (short)((local_40.vy * iVar4 + local_38.vy * iVar1) / 0x78);
    local_2c = (undefined2)((local_40.vz * iVar4 + local_38.vz * iVar1) / 0x78);
    *(undefined2 *)(iVar5 + 0x6a) = local_30;
    *(short *)(iVar5 + 0x6e) = local_2e + -200;
    *(undefined2 *)(iVar5 + 0x72) = local_2c;
    func_800FEBF4(&local_30);
    if (0 < iVar4) {
      return 0;
    }
  }
  else {
    if (2 < DAT_8008ee54) {
      if (DAT_8008ee54 == 4) {
        if (D_80119714 < 0x1e) {
          return 0;
        }
        *(undefined1 *)(param_2 + 0x70d) = 1;
        return 1;
      }
      if (DAT_8008ee54 < 4) {
        if (D_80119710 < 0x78) {
          return 0;
        }
        func_800FE188(param_4,&SStack_28);
        DAT_8008f754 = DAT_8008f754 + 100;
        uVar2 = DAT_8008f756 + DAT_8008f754;
        DAT_8008f756 = uVar2;
        if (199 < (int)((uint)uVar2 << 0x10) >> 0x16) {
          *(undefined4 *)(iVar5 + 0x84) = 2;
          func_800DDA78(param_4);
          func_800DD3D8(0x1e,0x1e);
          func_80034AB0(0x1c);
          *(uint *)(param_4 + 0x1c) = *(uint *)(param_4 + 0x1c) | 8;
          D_80119714 = 0;
          DAT_8008ee54 = DAT_8008ee54 + 1;
        }
        *(short *)(iVar5 + 0x6e) = SStack_28.vy + -200 + ((short)uVar2 >> 6);
        return 0;
      }
      if (DAT_8008ee54 == 99) {
        return 1;
      }
      return 0;
    }
    if (DAT_8008ee54 == 0) {
      param_3[0x17] = 0x87;
      param_3[0x23] = '\x01';
    }
    else {
      if (DAT_8008ee54 != 1) {
        return 0;
      }
      param_3[0x24] = 'F';
      *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x20000;
      iVar5 = func_800202A4(2);
      uVar3 = 0xfffffe00;
      if (iVar5 != 0) {
        uVar3 = 0x200;
      }
      func_800FE958(0,uVar3,500);
      DAT_8008f754 = 0;
      DAT_8008f756 = 0;
    }
  }
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
  return 0;
}

#undef local_40
#undef local_38
#undef local_30
#undef local_2e
#undef local_2c
#undef SStack_28
