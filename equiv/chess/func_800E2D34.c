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
/* real-callee: func_800FF460 */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008f754 (*(u16 *)0x8008F754)
#define DAT_8008f756 (*(u16 *)0x8008F756)
#define DAT_8008f758 (*(u16 *)0x8008F758)
#define DAT_8008f760 (*(s32 *)0x8008F760)
#define D_80119714 (*(s32 *)0x80119714)
#define func_80013928 ((s32 (*)())0x80013928)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80015CD0 ((s32 (*)())0x80015CD0)
#define func_80015EF8 ((s32 (*)())0x80015EF8)
#define func_80018600 ((s32 (*)())0x80018600)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800A81D8 ((s32 (*)())0x800A81D8)
#define func_800AADE0 ((s32 (*)())0x800AADE0)
#define func_800DDA78 ((s32 (*)())0x800DDA78)
#define func_800FE188 ((s32 (*)())0x800FE188)
#define func_800FE74C ((s32 (*)())0x800FE74C)
#define func_800FEF04 ((s32 (*)())0x800FEF04)
#define func_800FF0A0 ((s32 (*)())0x800FF0A0)
#define func_800FF3B4 ((s32 (*)())0x800FF3B4)
#define func_800FF460 ((s32 (*)())0x800FF460)
extern s32 rcos();
extern s32 rsin();
undefined4 func_800E2D34(undefined4 param_1,int param_2,byte *param_3,uchar *param_4)

{
  union { u64 align; u8 bytes[0x50]; } recovered_local_frame;
#define local_50 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x0))
#define auStack_48 (*(undefined1 volatile (*)[8])(recovered_local_frame.bytes + 0x8))
#define local_40 (*(short volatile *)(recovered_local_frame.bytes + 0x10))
#define local_3e (*(short volatile *)(recovered_local_frame.bytes + 0x12))
#define local_3c (*(short volatile *)(recovered_local_frame.bytes + 0x14))
#define SStack_38 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x18))
#define auStack_30 (*(undefined1 volatile (*)[2])(recovered_local_frame.bytes + 0x20))
#define local_2e (*(short volatile *)(recovered_local_frame.bytes + 0x22))

  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;









  iVar4 = DAT_8008f760;
  if (DAT_8008ee54 == 3) {
LAB_800e2ff8:
    local_40 = DAT_8008f754;
    local_3e = DAT_8008f756;
    local_3c = DAT_8008f758;
    iVar6 = D_80119714 * 0x1e;
    func_800FE188(param_4,&SStack_38);
    iVar8 = func_800FE74C(&local_40,&SStack_38);
    func_800FF3B4(&local_40,&SStack_38,iVar8,iVar6,auStack_48);
    func_800FF0A0(iVar4,auStack_48,10);
    if (iVar6 < iVar8) {
      return 0;
    }
    func_800DDA78(param_4);
    func_80034AB0(0x65);
    *(uint *)(param_4 + 0x1c) = *(uint *)(param_4 + 0x1c) | 8;
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
  }
  else {
    if (DAT_8008ee54 < 4) {
      if (DAT_8008ee54 == 1) {
LAB_800e2e98:
        iVar3 = D_80119714;
        func_800FE188(param_3,&local_50);
        iVar8 = (iVar3 * 0x3c) / 0x3c;
        iVar7 = (iVar3 << 0xd) / 0x3c + (uint)param_3[0x25] * 0x200;
        local_50.vy = (local_50.vy + 0x14) - (short)((iVar3 * 0x96) / 0x3c);
        iVar6 = rsin(iVar7);
        iVar6 = iVar8 * iVar6;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 0xfff;
        }
        local_50.vx = local_50.vx + (short)(iVar6 >> 0xc);
        iVar6 = rcos(iVar7);
        iVar8 = iVar8 * iVar6;
        if (iVar8 < 0) {
          iVar8 = iVar8 + 0xfff;
        }
        local_50.vz = local_50.vz + (short)(iVar8 >> 0xc);
        func_800FF0A0(iVar4,&local_50,10);
        if (iVar3 < 0x3c) {
          return 0;
        }
        D_80119714 = 0;
        DAT_8008ee54 = DAT_8008ee54 + 1;
        DAT_8008f754 = local_50.vx;
        DAT_8008f756 = local_50.vy;
        DAT_8008f758 = local_50.vz;
      }
      else if (DAT_8008ee54 < 2) {
        if (DAT_8008ee54 != 0) {
          return 0;
        }
        iVar4 = func_800FEF04(param_3,param_4);
        if (iVar4 == 0) {
          return 0;
        }
        param_3[0x17] = 0x88;
        param_3[0x23] = 1;
        uVar5 = func_80019F30(*param_3 + 0x10d | 0x70000,0x45);
        bVar1 = *(byte *)(param_2 + 0x5fa);
        uVar2 = *(undefined1 *)(param_2 + (uint)bVar1 + 0x5fb);
        iVar4 = func_80015B3C(func_80018600,func_800AADE0,1);
        DAT_8008f760 = iVar4;
        func_80015EF8(iVar4);
        func_80015CD0(iVar4 + 0x14,uVar5,0);
        func_800A81D8(param_1,iVar4,(uint)bVar1,uVar2);
        func_80034AB0(0x50);
        D_80119714 = 0;
        DAT_8008ee54 = DAT_8008ee54 + 1;
        goto LAB_800e2e98;
      }
      if (D_80119714 < 0x14) {
        return 0;
      }
      func_80034AB0(0x92);
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
      goto LAB_800e2ff8;
    }
    if (DAT_8008ee54 == 5) goto LAB_800e3170;
    if (4 < DAT_8008ee54) {
      if (DAT_8008ee54 != 99) {
        return 0;
      }
      goto LAB_800e3170;
    }
  }
  iVar8 = D_80119714;
  func_800FF460(param_4,param_3,0x28,D_80119714,auStack_30);
  iVar6 = rsin((iVar8 << 0xc) / 0x50);
  iVar6 = iVar6 * 100;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xfff;
  }
  local_2e = local_2e - (short)(iVar6 >> 0xc);
  func_800FF0A0(iVar4,auStack_30,10);
  if (iVar8 < 0x28) {
    return 0;
  }
  func_80013928(iVar4);
  func_80034AB0(0x78);
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
LAB_800e3170:
  *(undefined1 *)(param_2 + 0x60d) = 2;
  return 1;
}

#undef local_50
#undef auStack_48
#undef local_40
#undef local_3e
#undef local_3c
#undef SStack_38
#undef auStack_30
#undef local_2e
