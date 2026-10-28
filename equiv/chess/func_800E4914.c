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
#define D_80119714 (*(s32 *)0x80119714)
#define D_8011974C (*(u8 *)0x8011974C)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800D3274 ((s32 (*)())0x800D3274)
#define func_800E4764 ((s32 (*)())0x800E4764)
#define func_800F6320 ((s32 (*)())0x800F6320)
#define func_800FE188 ((s32 (*)())0x800FE188)
#define func_800FE21C ((s32 (*)())0x800FE21C)
#define func_800FE958 ((s32 (*)())0x800FE958)
undefined4 func_800E4914(undefined4 param_1,undefined4 param_2,uchar *param_3)

{
  union { u64 align; u8 bytes[0x8]; } recovered_local_frame;
#define local_20 (*(byte volatile *)(recovered_local_frame.bytes + 0x0))
#define local_1f (*(byte volatile (*)[7])(recovered_local_frame.bytes + 0x1))

  s8 cVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;



  if (DAT_8008ee54 == 2) {
    bVar4 = 0;
    do {
      local_20 = param_3[0x15];
      local_1f[0] = param_3[0x16];
      iVar2 = func_800D3274(bVar4,&local_20,local_1f);
      if (iVar2 < 2) {
        iVar2 = func_80015B3C(func_800E4764,func_800F6320,1);
        *(byte *)(iVar2 + 0x28) = bVar4;
        func_800FE188(param_3,(SVECTOR *)(iVar2 + 0x2a));
        func_800FE21C((uint)local_20,(uint)local_1f[0],(SVECTOR *)(iVar2 + 0x32));
        *(undefined2 *)(iVar2 + 0x44) = 0xa0;
        *(undefined2 *)(iVar2 + 0x46) = 0x10;
        *(undefined1 *)(iVar2 + 0x40) = 0xff;
        *(ushort *)(iVar2 + 0x3c) = (ushort)local_20;
        *(ushort *)(iVar2 + 0x3e) = (ushort)local_1f[0];
        cVar1 = func_800202A4(0x80);
        *(s8 *)(iVar2 + 0x41) = cVar1 + '?';
        cVar1 = func_800202A4(0x80);
        *(s8 *)(iVar2 + 0x42) = cVar1 + '?';
      }
      bVar4 = bVar4 + 1;
    } while (bVar4 < 8);
  }
  else if (DAT_8008ee54 < 3) {
    if (DAT_8008ee54 != 0) {
      if (DAT_8008ee54 != 1) {
        return 0;
      }
      DAT_8008ee54 = 2;
      D_80119714 = 0;
      return 0;
    }
    DAT_8008ee6a = 2;
    param_3[0x17] = 0x88;
    param_3[0x23] = '\x01';
    iVar2 = func_800202A4(2);
    uVar3 = 0xffffff06;
    if (iVar2 != 0) {
      uVar3 = 0xfa;
    }
    func_800FE958(0x80,uVar3,0);
    D_8011974C = '\x01';
    func_80034AB0(0x801a);
  }
  else {
    if (DAT_8008ee54 == 4) {
      if (D_8011974C != '\0') {
        return 0;
      }
      DAT_8008ee6a = 0;
      return 1;
    }
    if (3 < DAT_8008ee54) {
      if (DAT_8008ee54 != 99) {
        return 0;
      }
      DAT_8008ee6a = 0;
      return 1;
    }
    if (D_80119714 < 0xb4) {
      return 0;
    }
    D_8011974C = '\x02';
  }
  DAT_8008ee54 = DAT_8008ee54 + 1;
  D_80119714 = 0;
  return 0;
}

#undef local_20
#undef local_1f
