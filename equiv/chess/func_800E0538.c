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
#define DAT_8008f760 (*(s32 *)0x8008F760)
#define D_80119710 (*(s32 *)0x80119710)
#define D_80119714 (*(s32 *)0x80119714)
#define D_8011974C (*(u8 *)0x8011974C)
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
#define func_800FBB90 ((s32 (*)())0x800FBB90)
#define func_800FE188 ((s32 (*)())0x800FE188)
#define func_800FE428 ((s32 (*)())0x800FE428)
#define func_800FEC2C ((s32 (*)())0x800FEC2C)
#define func_800FF0A0 ((s32 (*)())0x800FF0A0)
#define func_800FF2CC ((s32 (*)())0x800FF2CC)
#define func_800FF3B4 ((s32 (*)())0x800FF3B4)
#define func_800FF460 ((s32 (*)())0x800FF460)
extern s32 ratan2();
undefined4 func_800E0538(undefined4 param_1,int param_2,uchar *param_3,uchar *param_4)

{
  union { u64 align; u8 bytes[0x30]; } recovered_local_frame;
#define SStack_58 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x0))
#define SStack_50 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x8))
#define auStack_48 (*(undefined1 volatile (*)[2])(recovered_local_frame.bytes + 0x10))
#define local_46 (*(short volatile *)(recovered_local_frame.bytes + 0x12))
#define SStack_40 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x18))
#define SStack_38 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x20))
#define SStack_30 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x28))

  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;








  iVar5 = DAT_8008f760;
  if (DAT_8008ee54 != 3) {
    if (3 < DAT_8008ee54) {
      if (DAT_8008ee54 == 5) {
        if (D_8011974C != '\0') {
          return 0;
        }
      }
      else {
        if (DAT_8008ee54 < 5) {
          if (*(int *)(*(int *)(param_3 + 0x70) + 0x1c) != 0) {
            return 0;
          }
          iVar5 = func_800FE428(param_3,param_4);
          func_800FE188(param_3,&SStack_30);
          SStack_30.vy = SStack_30.vy - (short)(((iVar5 / 2) * (10 - D_80119714)) / 10);
          func_800FF2CC(param_3,&SStack_30,1);
          if (D_80119714 < 10) {
            return 0;
          }
          *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) ^ 0x40000000;
          DAT_8008ee54 = DAT_8008ee54 + 1;
          D_80119714 = 0;
          D_8011974C = 2;
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
      *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x40000000;
      if (D_80119710 % 0x18 == 5) {
        func_80034AB0(0x8d);
      }
      iVar5 = func_800FE428(param_3,param_4);
      func_800FE188(param_3,&SStack_50);
      SStack_50.vy = SStack_50.vy - (short)(((iVar5 / 2) * D_80119714) / 10);
      func_800FF2CC(param_3,&SStack_50,1);
      if (D_80119714 < 10) {
        return 0;
      }
      goto LAB_800e09e4;
    }
    if (DAT_8008ee54 < 2) {
      if (DAT_8008ee54 != 0) {
        return 0;
      }
      iVar5 = func_800FE428(param_3,param_4);
      func_800FF460(param_3,param_4,2,1,&SStack_58);
      SStack_58.vy = SStack_58.vy - (short)(iVar5 / 2 - (iVar5 - (iVar5 >> 0x1f) >> 0x1f) >> 1);
      iVar5 = func_800FEC2C(&SStack_58);
      if (iVar5 == 0) {
        return 0;
      }
      param_3[0x17] = 0x88;
      param_3[0x23] = '\x01';
      goto LAB_800e09e4;
    }
    if (D_80119710 % 0x18 == 5) {
      func_80034AB0(0x8d);
    }
    if (D_80119714 == 0x1e) {
      func_80034AB0(0x800b);
    }
    if (*(uint *)(*(int *)(param_3 + 0x70) + 0x20) < 10) {
      return 0;
    }
    uVar6 = func_80019F30(0x7011b,0x45);
    bVar1 = *(byte *)(param_2 + 0x5fa);
    uVar2 = *(undefined1 *)(param_2 + (uint)bVar1 + 0x5fb);
    iVar5 = func_80015B3C(func_80018600,func_800AADE0,1);
    DAT_8008f760 = iVar5;
    func_80015EF8(iVar5);
    func_80015CD0(iVar5 + 0x14,uVar6,0);
    func_800A81D8(param_1,iVar5,(uint)bVar1,uVar2);
    sVar4 = ratan2(*(int *)(*(int *)(param_4 + 0x70) + 0x48) -
                   *(int *)(*(int *)(param_3 + 0x70) + 0x48),
                   *(int *)(*(int *)(param_4 + 0x70) + 0x44) -
                   *(int *)(*(int *)(param_3 + 0x70) + 0x44));
    *(short *)(iVar5 + 0x54) = sVar4 + -0x400;
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
  }
  iVar7 = func_800FE428(param_3,param_4);
  iVar3 = D_80119714 * 0x1e;
  if (-1 < iVar7 + D_80119714 * -0x1e) {
    func_800FE188(param_3,&SStack_40);
    SStack_40.vy = SStack_40.vy - (short)(iVar7 / 2);
    func_800FE188(param_4,&SStack_38);
    func_800FF3B4(&SStack_40,&SStack_38,iVar7,iVar3,auStack_48);
    local_46 = local_46 + -0x28;
    func_800FF0A0(iVar5,auStack_48,1);
    return 0;
  }
  func_800DDA78(param_4);
  func_800FBB90(4);
  func_80013928(iVar5);
LAB_800e09e4:
  DAT_8008ee54 = DAT_8008ee54 + 1;
  D_80119714 = 0;
  return 0;
}

#undef SStack_58
#undef SStack_50
#undef auStack_48
#undef local_46
#undef SStack_40
#undef SStack_38
#undef SStack_30
