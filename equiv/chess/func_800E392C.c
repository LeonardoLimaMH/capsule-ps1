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
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8006b2b4 (*(s32 *)0x8006B2B4)
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8011974e (*(u8 *)0x8011974E)
#define DAT_8011974f (*(s32 *)0x8011974F)
#define D_80118C18 (*(s32 *)0x80118C18)
#define D_80119714 (*(s32 *)0x80119714)
#define D_8011974C (*(u8 *)0x8011974C)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80015CD0 ((s32 (*)())0x80015CD0)
#define func_80015EF8 ((s32 (*)())0x80015EF8)
#define func_800161C4 ((s32 (*)())0x800161C4)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_8009CA60 ((s32 (*)())0x8009CA60)
#define func_800D3128 ((s32 (*)())0x800D3128)
#define func_800D741C ((s32 (*)())0x800D741C)
#define func_800DD230 ((s32 (*)())0x800DD230)
#define func_800DD4A8 ((s32 (*)())0x800DD4A8)
#define func_800FE188 ((s32 (*)())0x800FE188)
#define func_800FE21C ((s32 (*)())0x800FE21C)
#define func_800FE2C4 ((s32 (*)())0x800FE2C4)
#define func_800FE958 ((s32 (*)())0x800FE958)
#define func_800FEC2C ((s32 (*)())0x800FEC2C)
#define func_800FF0A0 ((s32 (*)())0x800FF0A0)
#define func_800FF3B4 ((s32 (*)())0x800FF3B4)
extern s32 rcos();
extern s32 rsin();
undefined4 func_800E392C(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  SVECTOR SStack_40;
  SVECTOR SStack_38;
  SVECTOR SStack_30;
  uint local_28;
  uint local_24;
  SVECTOR local_20;

  if (DAT_8008ee54 == 4) {
    if ((param_3[0x25] & 1) == 0) {
      iVar4 = D_80119714 * 0x7c;
    }
    else {
      iVar4 = D_80119714 * 0xb0;
    }
    iVar5 = ((iVar4 + D_80119714) * 2) / 0x1e + 0x78;
    func_800FE188(param_3,&local_20);
    iVar4 = rsin((uint)param_3[0x25] << 9);
    iVar4 = iVar5 * iVar4;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xfff;
    }
    local_20.vx = local_20.vx - (short)(iVar4 >> 0xc);
    iVar4 = rcos((uint)param_3[0x25] << 9);
    iVar5 = iVar5 * iVar4;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xfff;
    }
    local_20.vz = local_20.vz - (short)(iVar5 >> 0xc);
    sVar3 = func_800202A4(0x29);
    local_20.vx = local_20.vx + -0x14 + sVar3;
    iVar4 = func_800202A4(0x29);
    iVar4 = ((ushort)local_20.vz - 0x14) + iVar4;
    local_20.vz = (short)iVar4;
    local_20.vy = func_800FE2C4((int)local_20.vx,iVar4 * 0x10000 >> 0x10);
    local_20.vy = local_20.vy + -0x1e;
    iVar4 = func_80015B3C(func_800DD4A8,func_800161C4,1);
    uVar6 = func_80019F30(0x70013,0x5d);
    sVar3 = func_800DD230(param_3);
    func_80015EF8(iVar4);
    func_80015CD0(iVar4 + 0x14,uVar6,2);
    func_800FF0A0(iVar4,&local_20,10);
    *(short *)(iVar4 + 0x54) = sVar3 << 9;
    *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) & 0xffffffcf | 0x50;
    if (D_80119714 < 0x1e) {
      return 0;
    }
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
  }
  else {
    if (DAT_8008ee54 < 5) {
      if (DAT_8008ee54 == 1) {
        local_28 = (uint)param_3[0x15];
        local_24 = (uint)param_3[0x16];
        func_800FE188(param_3,&SStack_40);
        func_800D3128((uint)param_3[0x25],3,(int *)&local_28,(int *)&local_24);
        func_800FE21C(local_28,local_24,&SStack_38);
        func_800FF3B4(&SStack_40,&SStack_38,2,1,&SStack_30);
        iVar4 = func_800FEC2C(&SStack_30);
        if (iVar4 == 0) {
          return 0;
        }
        param_3[0x17] = 0x87;
        param_3[0x23] = 1;
        func_80034AB0(0x801f);
      }
      else {
        if (1 < DAT_8008ee54) {
          if (DAT_8008ee54 == 2) {
            iVar4 = func_80015B3C(func_800DD4A8,func_800161C4,1);
            iVar5 = func_800DD230(param_3);
            iVar8 = 0;
            if (*param_3 == 0x1d) {
              iVar8 = iVar5 + 0x5e;
            }
            if (*param_3 == 0x5c) {
              iVar8 = iVar5 + 0x66;
            }
            uVar6 = func_80019F30(0x70013,iVar8);
            func_80015EF8(iVar4);
            func_80015CD0(iVar4 + 0x14,uVar6,2);
            *(uint *)(iVar4 + 0x30) = *(uint *)(iVar4 + 0x30) & 0xfffffe3f | 0x40;
            *(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(*(int *)(param_3 + 0x70) + 0x44);
            *(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(*(int *)(param_3 + 0x70) + 0x48);
            uVar2 = *(undefined2 *)(*(int *)(param_3 + 0x70) + 0x50);
            *(undefined2 *)(iVar4 + 0x52) = uVar2;
            *(undefined2 *)(iVar4 + 0x50) = uVar2;
            if (iVar5 - 3U < 3) {
              sVar3 = *(short *)(*(int *)(param_3 + 0x70) + 0x4e) + 8;
            }
            else {
              sVar3 = *(short *)(*(int *)(param_3 + 0x70) + 0x4e) + -2;
            }
            *(short *)(iVar4 + 0x4e) = sVar3;
            DAT_8008ee54 = DAT_8008ee54 + 1;
            D_80119714 = 0;
            return 0;
          }
          if (DAT_8008ee54 == 3) {
            bVar7 = *param_3;
            if (bVar7 == 0x1d) {
              if (0x1c < D_80119714) {
                DAT_8008ee54 = 4;
                D_80119714 = 0;
              }
              bVar7 = *param_3;
            }
            if (bVar7 == 0x5c) {
              if (0x2c < D_80119714) {
                DAT_8008ee54 = DAT_8008ee54 + 1;
                D_80119714 = 0;
                return 0;
              }
              return 0;
            }
            return 0;
          }
          return 0;
        }
        if (DAT_8008ee54 != 0) {
          return 0;
        }
        uVar1 = *(undefined1 *)
                 ((uint)param_3[0x16] * 4 + (uint)param_3[0x15] * 0x34 + D_80118C18 + 3);
        *(uint *)(((u8 *)0x8006B2B4) + (uint)*param_3 * 0x58) =
             *(uint *)(((u8 *)0x8006B2B4) + (uint)*param_3 * 0x58) | 0x18000;
        DAT_8011974e = func_800D741C(uVar1,&DAT_8011974f,param_3[0x25]);
        *(uint *)(((u8 *)0x8006B2B4) + (uint)*param_3 * 0x58) =
             *(uint *)(((u8 *)0x8006B2B4) + (uint)*param_3 * 0x58) & 0xfffe7fff | 0x10000;
        func_8009CA60(3);
        bVar7 = *param_3;
        if (bVar7 == 0x1d) {
          func_8009CA60(4);
          bVar7 = *param_3;
        }
        if (bVar7 == 0x5c) {
          func_8009CA60(5);
        }
        func_800FE958(0x80,0,0);
        D_8011974C = '\x01';
      }
      DAT_8008ee54 = DAT_8008ee54 + 1;
      D_80119714 = 0;
      return 0;
    }
    if (DAT_8008ee54 == 6) goto LAB_800e3f18;
    if (5 < DAT_8008ee54) {
      if (DAT_8008ee54 == 7) {
        if (D_8011974C != '\0') {
          return 0;
        }
      }
      else if (DAT_8008ee54 != 99) {
        return 0;
      }
      return 1;
    }
  }
  if (D_80119714 < 0x3c) {
    return 0;
  }
  DAT_8008ee54 = DAT_8008ee54 + 1;
LAB_800e3f18:
  D_8011974C = 2;
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
  return 0;
}
