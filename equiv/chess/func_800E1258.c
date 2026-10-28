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
/* real-callee: func_800459CC */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* real-callee: func_800FE188 */
/* real-callee: func_800FEC2C */
/* real-callee: func_800FE21C */
/* real-callee: func_800FEBF4 */
/* real-callee: func_800FF460 */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FE74C */
/* real-callee: func_800DD428 */
/* real-callee: func_800FF190 */
/* real-callee: func_800FF2CC */
/* real-callee: func_800DDA78 */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008f754 (*(s16 *)0x8008F754)
#define DAT_8008f756 (*(s16 *)0x8008F756)
#define DAT_8008f758 (*(u16 *)0x8008F758)
#define DAT_8011974e (*(u8 *)0x8011974E)
#define DAT_8011974f (*(u8 *)0x8011974F)
#define D_80118C18 (*(s32 *)0x80118C18)
#define D_80119710 (*(s32 *)0x80119710)
#define D_80119714 (*(s32 *)0x80119714)
#define D_80119718 (*(s32 *)0x80119718)
#define D_8011974C (*(u8 *)0x8011974C)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800D3128 ((s32 (*)())0x800D3128)
#define func_800DD274 ((s32 (*)())0x800DD274)
#define func_800DD3D8 ((s32 (*)())0x800DD3D8)
#define func_800DD824 ((s32 (*)())0x800DD824)
#define func_800DDBC8 ((s32 (*)())0x800DDBC8)
#define func_800FE21C ((s32 (*)())0x800FE21C)
#define func_800FE958 ((s32 (*)())0x800FE958)
#define func_800FEBF4 ((s32 (*)())0x800FEBF4)
#define func_800FF190 ((s32 (*)())0x800FF190)
#define func_800FF3B4 ((s32 (*)())0x800FF3B4)
extern s32 rsin();
undefined4 func_800E1258(undefined4 param_1,int param_2,s8 *param_3)

{
  union { u64 align; u8 bytes[0x40]; } recovered_local_frame;
#define local_60 (*(uint volatile *)(recovered_local_frame.bytes + 0x0))
#define local_5c (*(uint volatile *)(recovered_local_frame.bytes + 0x4))
#define SStack_58 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x8))
#define SStack_50 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x10))
#define auStack_48 (*(undefined1 volatile (*)[8])(recovered_local_frame.bytes + 0x18))
#define local_40 (*(int volatile *)(recovered_local_frame.bytes + 0x20))
#define local_3c (*(int volatile *)(recovered_local_frame.bytes + 0x24))
#define auStack_38 (*(undefined1 volatile (*)[2])(recovered_local_frame.bytes + 0x28))
#define local_36 (*(short volatile *)(recovered_local_frame.bytes + 0x2A))
#define SStack_30 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x30))
#define SStack_28 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x38))

  byte bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int x;
  int y;
  int x_00;












  if (DAT_8008ee54 == 2) {
    x = ((int)DAT_8008f754 / 0xd) * 0x10000 >> 0x10;
    iVar4 = ((int)DAT_8008f754 % 0xd) * 0x10000 >> 0x10;
    x_00 = ((int)DAT_8008f758 / 0xd) * 0x10000 >> 0x10;
    y = ((int)DAT_8008f758 % 0xd) * 0x10000 >> 0x10;
    if ((x == x_00) && (iVar4 == y)) {
      DAT_8008ee54 = 3;
      D_80119714 = 0;
    }
    else {
      func_800FE21C(x,iVar4,&SStack_30);
      func_800FE21C(x_00,y,&SStack_28);
      func_800FF3B4(&SStack_30,&SStack_28,0x1e,D_80119714,auStack_38);
      iVar4 = rsin((D_80119714 << 0xc) / 0x3c);
      iVar4 = iVar4 * 0x1e;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      local_36 = local_36 - (short)(iVar4 >> 0xc);
      func_800FF190(param_3,auStack_38,0);
      if (D_80119714 < 0x1e) {
        return 0;
      }
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
    }
  }
  else if (DAT_8008ee54 < 3) {
    if (DAT_8008ee54 == 0) {
      local_60 = (uint)(byte)param_3[0x15];
      param_3[0x17] = -0x78;
      param_3[0x23] = '\0';
      *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x80000000;
      (*(u16 *)((u8 *)&local_5c + 0)) = (ushort)(byte)param_3[0x16];
      DAT_8008f754 = (ushort)(byte)param_3[0x15] * 0xd + (ushort)local_5c;
      DAT_8008f758 = DAT_8008f754;
      local_5c = (uint)(byte)param_3[0x16];
      func_800D3128((uint)(byte)param_3[0x25],1,(int *)&local_60,(int *)&local_5c);
      DAT_8008f756 = (ushort)local_5c + (short)local_60 * 0xd;
      func_800FE958(0,0,500);
      D_8011974C = 1;
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
      func_80034AB0(0x3f);
      return 0;
    }
    if (DAT_8008ee54 != 1) {
      return 0;
    }
    local_40 = ((int)DAT_8008f756 / 0xd) * 0x10000 >> 0x10;
    local_3c = ((int)DAT_8008f756 % 0xd) * 0x10000 >> 0x10;
    func_800FE21C(((int)DAT_8008f754 / 0xd) * 0x10000 >> 0x10,
                  ((int)DAT_8008f754 % 0xd) * 0x10000 >> 0x10,&SStack_58);
    func_800FE21C(local_40,local_3c,&SStack_50);
    func_800FF3B4(&SStack_58,&SStack_50,6,D_80119714,auStack_48);
    func_800FF190(param_3,auStack_48,1);
    if ((D_80119710 & 1) != 0) {
      func_800DDBC8(param_3,auStack_48,10,0x80);
    }
    func_800FEBF4(auStack_48);
    if (D_80119714 < 6) {
      return 0;
    }
    puVar2 = (uint *)(local_3c * 4 + local_40 * 0x34 + D_80118C18);
    bVar1 = *(byte *)((int)puVar2 + 3);
    if (bVar1 == 0) {
      if ((*puVar2 >> 6 & 0x1fff) != 2) {
        DAT_8008f758 = (short)local_40 * 0xd + (short)local_3c;
      }
    }
    else {
      func_800DD824((uint)(bVar1 >> 7) * 0x2e8 + -0x7ff7a66c + (bVar1 & 0x7f) * 0x7c,local_40,
                    local_3c,0,0);
      uVar3 = (uint)DAT_8011974e;
      DAT_8011974e = DAT_8011974e + 1;
      (&DAT_8011974f)[uVar3] = bVar1;
      func_80034AB0(0x65);
      D_80119718 = 0;
    }
    DAT_8008f754 = (short)local_40 * 0xd + (short)local_3c;
    iVar4 = func_800D3128((uint)(byte)param_3[0x25],1,&local_40,&local_3c);
    if (iVar4 == 0) {
      bVar1 = *(byte *)(local_3c * 4 + local_40 * 0x34 + D_80118C18 + 3);
      if ((bVar1 == 0) || ((bVar1 & 0x7f) != 6)) {
        if ((*param_3 != 'C') ||
           ((*(uint *)(local_3c * 4 + local_40 * 0x34 + D_80118C18) >> 6 & 0x1fff) != 2)) {
          DAT_8008f756 = (short)local_3c + (short)local_40 * 0xd;
          D_80119714 = 0;
          return 0;
        }
        func_800DD3D8(0x32,10);
      }
      else {
        func_800DD3D8(0x32,10);
      }
    }
    else {
      func_800DD3D8(0x32,10);
    }
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
  }
  else if (DAT_8008ee54 == 4) {
    if (D_8011974C != '\0') {
      return 0;
    }
    if (0x77 < D_80119718) goto LAB_800e1940;
  }
  else {
    if (3 < DAT_8008ee54) {
      if (DAT_8008ee54 != 99) {
        return 0;
      }
LAB_800e1940:
      *(undefined1 *)(param_2 + 0x60d) = 2;
      return 1;
    }
    func_800DD274(param_3,((int)DAT_8008f758 / 0xd) * 0x10000 >> 0x10,
                  ((int)DAT_8008f758 % 0xd) * 0x10000 >> 0x10);
    param_3[0x17] = '\x01';
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) ^ 0x80000000;
    D_8011974C = '\x02';
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
  }
  return 0;
}

#undef local_60
#undef local_5c
#undef SStack_58
#undef SStack_50
#undef auStack_48
#undef local_40
#undef local_3c
#undef auStack_38
#undef local_36
#undef SStack_30
#undef SStack_28

/* arg1: 0x80140000 */
/* arg2: 0x80150000 */
/* real-callee: rsin */
/* real-callee: func_800D3128 */
/* real-callee: func_800DDBC8 */
/* rand-u32-strided: 0x80150070 1 4 0x80160000 */
/* rand-u32-strided: 0x80150074 1 4 0x80161000 */
/* rand-mem: 0x80150015 2 13 */
/* rand-u16: 0x80150024 1 0,256,512,768,1024,1280,1536,1792 */
/* rand-u16: 0x80150000 1 0,1,67 */
/* rand-u16: 0x8008F754 3 0,1,12,13,14,84,155,167,168 */
/* rand-u16: 0x8011974C 1 0,1,2 */
/* rand-u16: 0x8011974E 1 0,1,5,11 */
/* rand-u16: 0x80119718 1 0,119,120,121 */
/* rand-u16: 0x8011971A 1 0 */
/* rand-u32-strided: 0x80118C18 1 4 0x80170000 */
/* rand-u32-strided: 0x80170000 169 4 0x42,0x82,0x01000042,0x81000042,0x06000042,0x86000042 */

/* rand-u16: 0x8008EE54 1 0 */
