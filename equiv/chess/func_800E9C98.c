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
#define DAT_8008f754 (*(u16 *)0x8008F754)
#define DAT_8008f760 (*(s32 *)0x8008F760)
#define D_80118C18 (*(s32 *)0x80118C18)
#define D_80119710 (*(s32 *)0x80119710)
#define D_80119714 (*(s32 *)0x80119714)
#define func_80013928 ((s32 (*)())0x80013928)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80018600 ((s32 (*)())0x80018600)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800A835C ((s32 (*)())0x800A835C)
#define func_800B06A0 ((s32 (*)())0x800B06A0)
#define func_800C9414 ((s32 (*)())0x800C9414)
#define func_800D4C20 ((s32 (*)())0x800D4C20)
#define func_800DD1D4 ((s32 (*)())0x800DD1D4)
#define func_800DD274 ((s32 (*)())0x800DD274)
#define func_800F8374 ((s32 (*)())0x800F8374)
#define func_800FE188 ((s32 (*)())0x800FE188)
#define func_800FE21C ((s32 (*)())0x800FE21C)
#define func_800FF190 ((s32 (*)())0x800FF190)
#define func_800FF3B4 ((s32 (*)())0x800FF3B4)
extern s32 rsin();
undefined4 func_800E9C98(undefined4 param_1,int param_2,uchar *param_3)

{
  union { u64 align; u8 bytes[0xC8]; } recovered_local_frame;
#define uStack_f0 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x0))
#define abStack_ef (*(byte volatile (*)[175])(recovered_local_frame.bytes + 0x1))
#define auStack_40 (*(undefined1 volatile (*)[2])(recovered_local_frame.bytes + 0xB0))
#define local_3e (*(short volatile *)(recovered_local_frame.bytes + 0xB2))
#define SStack_38 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0xB8))
#define SStack_30 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0xC0))

  byte bVar1;
  uchar uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint y;
  uint x;
  int iVar7;
  uint y_00;
  uint uVar8;
  uint uVar9;







  iVar4 = DAT_8008f760;
  if (DAT_8008ee54 == 4) {
    *(short *)(DAT_8008f760 + 0x38) = (short)(((0x1e - D_80119714) * 100) / 0x1e);
    *(s8 *)(iVar4 + 0x30) = (s8)(((0x1e - D_80119714) * 0x47) / 0x1e);
    *(s8 *)(iVar4 + 0x31) = (s8)(((0x1e - D_80119714) * 8) / 0x1e);
    *(s8 *)(iVar4 + 0x32) = (s8)(((0x1e - D_80119714) * 0xdc) / 0x1e);
    if (D_80119714 < 0x1e) {
      return 0;
    }
    func_80013928(iVar4);
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x80000000;
  }
  else if (DAT_8008ee54 < 5) {
    if (DAT_8008ee54 == 1) {
      iVar7 = 0;
      *(undefined4 *)(*(int *)(param_3 + 0x78) + 0x84) = 1;
      iVar4 = func_80015B3C(func_80018600,func_800F8374,1);
      DAT_8008f760 = iVar4;
      func_800FE188(param_3,(SVECTOR *)(iVar4 + 0x28));
      *(undefined1 *)(iVar4 + 0x34) = 0xc;
      *(undefined2 *)(iVar4 + 0x36) = 0;
      *(undefined2 *)(iVar4 + 0x38) = 100;
      *(short *)(iVar4 + 0x2a) = *(short *)(iVar4 + 0x2a) + -0x82;
      do {
        uVar3 = func_800202A4(0x1000);
        *(undefined2 *)(iVar4 + 0x3a) = uVar3;
        uVar3 = func_800202A4(0x1000);
        *(undefined2 *)(iVar4 + 0x3c) = uVar3;
        uVar3 = func_800202A4(0x1000);
        *(undefined2 *)(iVar4 + 0x3e) = uVar3;
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + 6;
      } while (iVar7 < 0xc);
      DAT_8008ee54 = DAT_8008ee54 + 1;
      D_80119714 = 0;
      return 0;
    }
    if (DAT_8008ee54 < 2) {
      if (DAT_8008ee54 != 0) {
        return 0;
      }
      if (D_80119710 != 1) {
        iVar4 = func_800C9414();
        if (iVar4 == 0) {
          uVar5 = func_800D4C20(((uint)*(byte *)(param_2 + 0x5fa) << 7 |
                                *(byte *)((uint)*(byte *)(param_2 + 0x5fa) + param_2 + 0x5fb) + 1) &
                                0xff,&uStack_f0);
          do {
            iVar4 = func_800202A4((uVar5 & 0xff) - 1);
            bVar1 = abStack_ef[iVar4];
          } while (*(s8 *)(((uint)bVar1 % 0xd) * 4 + (bVar1 / 0xd) * 0x34 + D_80118C18 + 3) !=
                   '\0');
          DAT_8008f754 = (ushort)bVar1;
          param_3[0x17] = 0x88;
          param_3[0x23] = '\x01';
          param_3[0x24] = 'E';
          *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x10000;
          func_80034AB0(0x8011);
          DAT_8008ee54 = DAT_8008ee54 + 1;
          D_80119714 = 0;
          return 0;
        }
        return 0;
      }
      iVar4 = param_2 + (uint)*(byte *)(param_2 + 0x5fa) * 2;
      uVar2 = func_800DD1D4(param_3,*(undefined1 *)(iVar4 + 0x601),*(undefined1 *)(iVar4 + 0x602));
      param_3[0x25] = uVar2;
      *(uchar *)(param_2 + (uint)*(byte *)(param_2 + 0x5fa) * 2 + 0x601) = param_3[0x15];
      *(uchar *)(param_2 + (uint)*(byte *)(param_2 + 0x5fa) * 2 + 0x602) = param_3[0x16];
      func_800B06A0(param_1,0x1e);
      return 0;
    }
    if (DAT_8008ee54 != 2) {
      if (DAT_8008ee54 != 3) {
        return 0;
      }
      if (0x3b < D_80119714) {
        DAT_8008ee54 = 4;
        D_80119714 = 0;
        return 0;
      }
      return 0;
    }
    *(short *)(DAT_8008f760 + 0x36) = (short)((D_80119714 * 400) / 0x1e);
    *(s8 *)(iVar4 + 0x30) = (s8)((D_80119714 * 0x47) / 0x1e);
    *(s8 *)(iVar4 + 0x31) = (s8)((D_80119714 << 3) / 0x1e);
    *(s8 *)(iVar4 + 0x32) = (s8)((D_80119714 * 0xdc) / 0x1e);
    if (D_80119714 < 0x1e) {
      return 0;
    }
  }
  else if (DAT_8008ee54 == 6) {
    iVar4 = func_800C9414();
    if (iVar4 != 0) {
      return 0;
    }
    uVar2 = func_800A835C(param_1,*(undefined1 *)(param_2 + 0x5fa));
    param_3[0x25] = uVar2;
  }
  else {
    if (5 < DAT_8008ee54) {
      if (DAT_8008ee54 == 7) {
        if (D_80119714 < 0x1e) {
          return 0;
        }
      }
      else if (DAT_8008ee54 != 99) {
        return 0;
      }
      return 1;
    }
    x = (uint)param_3[0x15];
    y = (uint)param_3[0x16];
    uVar9 = ((int)(short)DAT_8008f754 / 0xd) * 0x10000 >> 0x10;
    uVar8 = ((int)(short)DAT_8008f754 % 0xd) * 0x10000 >> 0x10;
    iVar4 = uVar9 - x;
    iVar7 = uVar8 - y;
    uVar5 = x;
    if (iVar4 != 0) {
      iVar6 = iVar4;
      if (iVar4 < 0) {
        iVar6 = -iVar4;
      }
      uVar5 = x + iVar4 / iVar6;
    }
    y_00 = y;
    if (iVar7 != 0) {
      iVar4 = iVar7;
      if (iVar7 < 0) {
        iVar4 = -iVar7;
      }
      y_00 = y + iVar7 / iVar4;
    }
    func_800FE21C(x,y,&SStack_38);
    func_800FE21C(uVar5,y_00,&SStack_30);
    func_800FF3B4(&SStack_38,&SStack_30,0x1c,D_80119714,auStack_40);
    iVar4 = rsin((D_80119714 << 0xc) / 0x38);
    iVar4 = iVar4 * 100;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xfff;
    }
    local_3e = local_3e - (short)(iVar4 >> 0xc);
    func_800FF190(param_3,auStack_40,1);
    if (D_80119714 == 1) {
      *(s8 *)(param_2 + (uint)*(byte *)(param_2 + 0x5fa) * 2 + 0x601) = (s8)uVar5;
      *(s8 *)(param_2 + (uint)*(byte *)(param_2 + 0x5fa) * 2 + 0x602) = (s8)y_00;
      func_800B06A0(param_1,8);
    }
    if (D_80119714 < 0x1c) {
      return 0;
    }
    func_80034AB0(0x8c);
    func_800DD274(param_3,uVar5,y_00);
    if (uVar5 != uVar9) {
      D_80119714 = 0;
      return 0;
    }
    if (y_00 != uVar8) {
      D_80119714 = 0;
      return 0;
    }
    *(undefined4 *)(*(int *)(param_3 + 0x78) + 0x84) = 2;
    param_3[0x17] = '\x01';
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) ^ 0x80000000;
  }
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
  return 0;
}

#undef uStack_f0
#undef abStack_ef
#undef auStack_40
#undef local_3e
#undef SStack_38
#undef SStack_30
