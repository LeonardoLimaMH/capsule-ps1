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
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008f754 (*(s16 *)0x8008F754)
#define DAT_8008f756 (*(s16 *)0x8008F756)
#define D_80119710 (*(s32 *)0x80119710)
#define D_80119714 (*(s32 *)0x80119714)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800D3128 ((s32 (*)())0x800D3128)
#define func_800DD274 ((s32 (*)())0x800DD274)
#define func_800DD3D8 ((s32 (*)())0x800DD3D8)
#define func_800DDA78 ((s32 (*)())0x800DDA78)
#define func_800DDBC8 ((s32 (*)())0x800DDBC8)
#define func_800FE21C ((s32 (*)())0x800FE21C)
#define func_800FEBF4 ((s32 (*)())0x800FEBF4)
#define func_800FF190 ((s32 (*)())0x800FF190)
#define func_800FF3B4 ((s32 (*)())0x800FF3B4)
#define func_800FF460 ((s32 (*)())0x800FF460)
extern s32 rsin();
undefined4 func_800EC22C(undefined4 param_1,int param_2,int param_3,int param_4)

{
  union { u64 align; u8 bytes[0x28]; } recovered_local_frame;
#define SStack_50 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x0))
#define SStack_48 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x8))
#define auStack_40 (*(undefined1 volatile (*)[8])(recovered_local_frame.bytes + 0x10))
#define local_38 (*(uint volatile *)(recovered_local_frame.bytes + 0x18))
#define local_34 (*(uint volatile *)(recovered_local_frame.bytes + 0x1C))
#define auStack_30 (*(undefined1 volatile (*)[2])(recovered_local_frame.bytes + 0x20))
#define local_2e (*(short volatile *)(recovered_local_frame.bytes + 0x22))

  int iVar1;
  uint x;
  uint y;








  if (DAT_8008ee54 == 2) {
    func_800FF460(param_4,param_3,10,D_80119714,auStack_30);
    iVar1 = rsin((D_80119714 << 0xc) / 0x14);
    iVar1 = iVar1 * 0x32;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xfff;
    }
    local_2e = local_2e - (short)(iVar1 >> 0xc);
    func_800FF190(param_3,auStack_30,2);
    if (D_80119710 % 2 == 0) {
      func_800DDBC8(param_3,auStack_30,0x10,0x60);
    }
    if (D_80119714 < 10) {
      return 0;
    }
    *(undefined1 *)(param_3 + 0x17) = 1;
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) ^ 0x80000000;
  }
  else {
    if (2 < DAT_8008ee54) {
      if (DAT_8008ee54 == 3) {
        if (D_80119714 < 0x3c) {
          return 0;
        }
      }
      else if (DAT_8008ee54 != 99) {
        return 0;
      }
      *(undefined1 *)(param_2 + 0x70d) = 1;
      *(undefined1 *)(param_2 + 0x60d) = 2;
      return 1;
    }
    if (DAT_8008ee54 == 0) {
      *(undefined1 *)(param_3 + 0x17) = 0x88;
      *(undefined1 *)(param_3 + 0x23) = 0;
      *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x80000000;
      DAT_8008f754 = (ushort)*(byte *)(param_3 + 0x15);
      DAT_8008f756 = (ushort)*(byte *)(param_3 + 0x16);
    }
    else {
      if (DAT_8008ee54 != 1) {
        return 0;
      }
      x = (uint)(short)DAT_8008f754;
      y = (uint)(short)DAT_8008f756;
      local_38 = x;
      local_34 = y;
      func_800D3128((uint)*(byte *)(param_3 + 0x25),1,(int *)&local_38,(int *)&local_34);
      func_800FE21C(x,y,&SStack_50);
      func_800FE21C(local_38,local_34,&SStack_48);
      func_800FF3B4(&SStack_50,&SStack_48,4,D_80119714,auStack_40);
      func_800FF190(param_3,auStack_40,2);
      if (D_80119710 % 2 == 0) {
        func_800DDBC8(param_3,auStack_40,0x10,0x60);
      }
      func_800FEBF4(auStack_40);
      if (D_80119714 < 4) {
        return 0;
      }
      D_80119714 = 0;
      DAT_8008f754 = (ushort)local_38;
      DAT_8008f756 = (ushort)local_34;
      if (local_38 != *(byte *)(param_4 + 0x15)) {
        D_80119714 = 0;
        return 0;
      }
      if (local_34 != *(byte *)(param_4 + 0x16)) {
        D_80119714 = 0;
        return 0;
      }
      func_800DDA78(param_4);
      *(uint *)(param_4 + 0x1c) = *(uint *)(param_4 + 0x1c) | 8;
      *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) | 1;
      func_800DD3D8(0x28,0x1e);
      func_800DD274(param_3,x,y);
      func_80034AB0(0x45);
    }
  }
  DAT_8008ee54 = DAT_8008ee54 + 1;
  D_80119714 = 0;
  return 0;
}

#undef SStack_50
#undef SStack_48
#undef auStack_40
#undef local_38
#undef local_34
#undef auStack_30
#undef local_2e
