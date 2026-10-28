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
#define DAT_80085a1e (*(u8 *)0x80085A1E)
#define DAT_80085a3b (*(u8 *)0x80085A3B)
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008f754 (*(s16 *)0x8008F754)
#define D_80118C18 (*(s32 *)0x80118C18)
#define D_80119714 (*(s32 *)0x80119714)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80015CD0 ((s32 (*)())0x80015CD0)
#define func_80015EF8 ((s32 (*)())0x80015EF8)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800A81D8 ((s32 (*)())0x800A81D8)
#define func_800A835C ((s32 (*)())0x800A835C)
#define func_800AADE0 ((s32 (*)())0x800AADE0)
#define func_800C94DC ((s32 (*)())0x800C94DC)
#define func_800EADFC ((s32 (*)())0x800EADFC)
#define func_800FBB90 ((s32 (*)())0x800FBB90)
#define func_800FE188 ((s32 (*)())0x800FE188)
#define func_800FE21C ((s32 (*)())0x800FE21C)
#define func_800FEC2C ((s32 (*)())0x800FEC2C)
#define func_800FF2CC ((s32 (*)())0x800FF2CC)
undefined4 func_800EAFE0(undefined4 param_1,int param_2,int param_3)

{
  union { u64 align; u8 bytes[0x18]; } recovered_local_frame;
#define SStack_40 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x0))
#define local_38 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x8))
#define SStack_30 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x10))

  byte bVar1;
  byte bVar2;
  byte bVar3;
  s8 cVar4;
  uchar uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint x;
  uint y;
  uint uVar11;
  uchar *unit;
  uint uVar12;




  bVar1 = *(byte *)(param_2 + 0x5fa);
  uVar12 = (uint)bVar1;
  iVar9 = param_2 + uVar12 * 2;
  unit = (uchar *)(param_2 + uVar12 * 0x2e8 + 0x18 + DAT_8008f754 * 0x7c);
  bVar2 = *(byte *)(iVar9 + 0x601);
  x = (uint)bVar2;
  bVar3 = *(byte *)(iVar9 + 0x602);
  y = (uint)bVar3;
  iVar9 = *(int *)(unit + 0x70);
  if (DAT_8008ee54 != 3) {
    if (3 < DAT_8008ee54) {
      if (DAT_8008ee54 != 5) {
        if (DAT_8008ee54 < 5) {
          if (0x3b < D_80119714) {
            if (DAT_8008f754 != 0xff) {
              uVar5 = func_800A835C(param_1,uVar12);
              unit[0x25] = uVar5;
            }
            DAT_8008ee54 = DAT_8008ee54 + 1;
            D_80119714 = 0;
            return 0;
          }
          return 0;
        }
        if (DAT_8008ee54 != 99) {
          return 0;
        }
      }
      *(undefined1 *)(param_2 + 0x60d) = 2;
      return 1;
    }
    if (DAT_8008ee54 == 1) {
      if (0x3b < D_80119714) {
        DAT_8008ee54 = 2;
        D_80119714 = 0;
        return 0;
      }
      return 0;
    }
    if (DAT_8008ee54 < 2) {
      if (DAT_8008ee54 != 0) {
        return 0;
      }
      *(undefined1 *)(param_3 + 0x17) = 0x88;
      *(undefined1 *)(param_3 + 0x23) = 1;
      iVar6 = func_800202A4(5);
      iVar10 = 0;
      DAT_8008f754 = 0xff;
      iVar9 = iVar6;
      do {
        iVar7 = (iVar9 % 5) * 0x7c + uVar12 * 0x2e8;
        if (((&DAT_80085a1e)[iVar7] == '\0') && ((&DAT_80085a3b)[iVar7] != '\x01')) {
          DAT_8008f754 = (short)(iVar9 % 5);
        }
        iVar10 = iVar10 + 1;
        iVar9 = iVar6 + iVar10;
      } while (iVar10 < 5);
      goto LAB_800eb514;
    }
    func_800FE21C(x,y,&SStack_40);
    iVar6 = func_800FEC2C(&SStack_40);
    if (iVar6 == 0) {
      return 0;
    }
    if (DAT_8008f754 != 0xff) {
      *(uint *)(unit + 0x18) = *(uint *)(unit + 0x18) ^ 0x100;
      unit[0x15] = bVar2;
      unit[0x16] = bVar3;
      unit[0xf] = unit[10];
      unit[0x10] = unit[0xb];
      unit[0x11] = unit[0xc];
      unit[0x12] = unit[0xd];
      unit[0xe] = unit[9] >> 1;
      *(byte *)(y * 4 + x * 0x34 + D_80118C18 + 3) = bVar1 << 7 | (s8)DAT_8008f754 + 1U;
      unit[0x28] = '\0';
      unit[0x29] = '\0';
      *(uint *)(unit + 0x18) = (*(uint *)(unit + 0x18) | 0x80000000) ^ 0x80000000 | 0x40000000;
      *(uint *)(iVar9 + 0x38) = *(uint *)(iVar9 + 0x38) | 0x40;
    }
    uVar11 = 0;
    bVar1 = *(byte *)((uint)*(byte *)(param_3 + 0x16) * 4 +
                      (uint)*(byte *)(param_3 + 0x15) * 0x34 + D_80118C18 + 3);
    func_800FE21C(x,y,&local_38);
    do {
      uVar8 = func_80019F30(0x70165,0x39);
      iVar6 = func_80015B3C(func_800EADFC,func_800AADE0,1);
      func_80015EF8(iVar6);
      func_80015CD0(iVar6 + 0x14,uVar8,1);
      func_800A81D8(param_1,iVar6,uVar12,(bVar1 & 0x7f) - 1);
      *(undefined1 *)(iVar6 + 0x5a) = 0xff;
      *(undefined1 *)(iVar6 + 0x59) = 0xff;
      *(undefined1 *)(iVar6 + 0x58) = 0xff;
      *(uint *)(iVar6 + 0x38) = *(uint *)(iVar6 + 0x38) | 0x40;
      *(uint *)(iVar6 + 0x34) = *(uint *)(iVar6 + 0x34) & 0xffff0fff | (uVar11 & 0xf) << 0xc;
      *(short *)(iVar6 + 0x6a) = local_38.vx;
      uVar11 = uVar11 + 1;
      *(short *)(iVar6 + 0x6e) = local_38.vy;
      *(undefined4 *)(iVar6 + 0x20) = 6;
      *(short *)(iVar6 + 0x72) = local_38.vz;
    } while ((int)uVar11 < 7);
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
  }
  if (D_80119714 == 0x1e) {
    func_80034AB0(0x8006);
  }
  iVar6 = D_80119714;
  if (DAT_8008f754 == 0xff) {
    if (D_80119714 < 0xb4) {
      return 0;
    }
  }
  else {
    cVar4 = func_800C94DC(param_1,0);
    func_800FE188(unit,&SStack_30);
    SStack_30.vy = SStack_30.vy - (short)(((0xb4 - iVar6) * 400) / 0xb4);
    func_800FF2CC(unit,&SStack_30,1);
    iVar10 = ((0xb4 - iVar6) * 0x10) / 0xb4;
    iVar6 = iVar10;
    if (iVar10 < 0) {
      iVar6 = iVar10 + 7;
    }
    unit[0x25] = cVar4 + (s8)iVar10 + (s8)(iVar6 >> 3) * -8;
    *(undefined1 *)(iVar9 + 0x5a) = 0x80;
    *(undefined1 *)(iVar9 + 0x59) = 0x80;
    *(undefined1 *)(iVar9 + 0x58) = 0x80;
    if (D_80119714 < 0xb4) {
      return 0;
    }
    *(uint *)(unit + 0x18) = *(uint *)(unit + 0x18) ^ 0x40000000;
    *(undefined1 *)(iVar9 + 0x5a) = 0x80;
    *(undefined1 *)(iVar9 + 0x59) = 0x80;
    *(undefined1 *)(iVar9 + 0x58) = 0x80;
    *(uint *)(iVar9 + 0x38) = *(uint *)(iVar9 + 0x38) & 0xffffff8f;
    func_80034AB0(4);
    func_80034AB0(6);
    func_800FBB90(0x1e);
  }
LAB_800eb514:
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
  return 0;
}

#undef SStack_40
#undef local_38
#undef SStack_30
