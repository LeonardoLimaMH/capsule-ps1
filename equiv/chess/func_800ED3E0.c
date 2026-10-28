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
#define DAT_8008ee6a (*(u8 *)0x8008EE6A)
#define D_80119714 (*(s32 *)0x80119714)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80018600 ((s32 (*)())0x80018600)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800DD3D8 ((s32 (*)())0x800DD3D8)
#define func_800DDB38 ((s32 (*)())0x800DDB38)
#define func_800F52C4 ((s32 (*)())0x800F52C4)
#define func_800FE188 ((s32 (*)())0x800FE188)
#define func_800FED90 ((s32 (*)())0x800FED90)
#define func_800FF190 ((s32 (*)())0x800FF190)
#define func_800FF2CC ((s32 (*)())0x800FF2CC)
#define func_800FF460 ((s32 (*)())0x800FF460)
extern s32 rsin();
undefined4 func_800ED3E0(undefined4 param_1,int param_2,uchar *param_3,uchar *param_4)

{
  union { u64 align; u8 bytes[0x28]; } recovered_local_frame;
#define SStack_50 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x0))
#define SStack_48 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x8))
#define SStack_40 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x10))
#define auStack_38 (*(undefined1 volatile (*)[2])(recovered_local_frame.bytes + 0x18))
#define local_36 (*(short volatile *)(recovered_local_frame.bytes + 0x1A))
#define SStack_30 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x20))

  undefined2 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;







  iVar3 = D_80119714;
  iVar5 = *(int *)(param_3 + 0x70);
  iVar6 = *(int *)(param_4 + 0x70);
  if (DAT_8008ee54 == 4) {
    func_800FE188(param_4,&SStack_40);
    func_800FF2CC(param_4,&SStack_40,0);
    iVar4 = (int)*(short *)(iVar6 + 0x52);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 3;
    }
    *(short *)(iVar6 + 0x52) = (short)(iVar4 >> 2);
    SStack_40.vy = SStack_40.vy + -0x1e;
    func_800FF2CC(param_3,&SStack_40,10);
    iVar6 = *(short *)(iVar5 + 0x50) * 0x2000;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xfff;
    }
    uVar1 = (undefined2)(iVar6 >> 0xc);
    *(undefined2 *)(iVar5 + 0x52) = uVar1;
    *(undefined2 *)(iVar5 + 0x50) = uVar1;
    sVar2 = func_800202A4(7);
    *(short *)(iVar5 + 0x46) = *(short *)(iVar5 + 0x46) + -3 + sVar2;
    sVar2 = func_800202A4(7);
    *(short *)(iVar5 + 0x4a) = *(short *)(iVar5 + 0x4a) + -3 + sVar2;
    if (iVar3 % 3 == 1) {
      func_800DDB38(iVar5,10,0x80);
    }
    if (iVar3 < 0x3c) {
      return 0;
    }
    DAT_8008ee6a = 0;
  }
  else if (DAT_8008ee54 < 5) {
    if (DAT_8008ee54 == 1) {
      func_800FE188(param_3,&SStack_50);
      SStack_50.vy = SStack_50.vy - (short)((iVar3 * 500) / 0x1e);
      func_800FF2CC(param_3,&SStack_50,1);
      if (iVar3 % 3 == 1) {
        func_800DDB38(iVar5,10,0x80);
      }
      if (iVar3 < 0x1e) {
        return 0;
      }
    }
    else if (DAT_8008ee54 < 2) {
      if (DAT_8008ee54 != 0) {
        return 0;
      }
      *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x40000000;
      func_80034AB0(0x3a);
    }
    else if (DAT_8008ee54 == 2) {
      iVar3 = func_800FED90(param_4);
      if (iVar3 == 0) {
        return 0;
      }
    }
    else {
      if (DAT_8008ee54 != 3) {
        return 0;
      }
      func_800FE188(param_4,&SStack_48);
      SStack_48.vy = SStack_48.vy - ((short)(((0x14 - iVar3) * 500) / 0x14) + 0x1e);
      func_800FF2CC(param_3,&SStack_48,10);
      iVar4 = *(short *)(iVar5 + 0x50) * 0x2000;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      uVar1 = (undefined2)(iVar4 >> 0xc);
      *(undefined2 *)(iVar5 + 0x52) = uVar1;
      *(undefined2 *)(iVar5 + 0x50) = uVar1;
      if (iVar3 % 3 == 1) {
        func_800DDB38(iVar5,10,0x80);
      }
      if (iVar3 < 0x14) {
        return 0;
      }
      iVar3 = func_80015B3C(func_80018600,func_800F52C4,1);
      *(undefined1 *)(iVar3 + 0x28) = 0xff;
      *(undefined1 *)(iVar3 + 0x29) = 0xbf;
      *(undefined1 *)(iVar3 + 0x2a) = 0xbf;
      *(undefined1 *)(iVar3 + 0x30) = 1;
      *(undefined2 *)(iVar3 + 0x32) = 0x1e;
      *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) | 0x40000000;
      iVar3 = (int)*(short *)(iVar6 + 0x52);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 3;
      }
      *(short *)(iVar6 + 0x52) = (short)(iVar3 >> 2);
      func_800DD3D8(0x32,0x3a);
      func_80034AB0(0x8015);
      DAT_8008ee6a = 2;
    }
  }
  else if (DAT_8008ee54 == 6) {
    func_800FE188(param_4,&SStack_30);
    func_800FF190(param_4,&SStack_30,0);
    iVar5 = rsin((iVar3 << 0xe) / 0x28);
    iVar5 = (int)*(short *)(iVar6 + 0x52) * iVar5 * 3;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0x3fff;
    }
    *(short *)(iVar6 + 0x52) =
         *(short *)(iVar6 + 0x52) - (short)(((iVar5 >> 0xe) * (0x28 - iVar3)) / 0x28);
    if (iVar3 < 0x28) {
      return 0;
    }
    *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) ^ 0x40000000;
  }
  else {
    if (5 < DAT_8008ee54) {
      if ((DAT_8008ee54 != 7) && (DAT_8008ee54 != 99)) {
        return 0;
      }
      *(undefined1 *)(param_2 + 0x60d) = 2;
      return 1;
    }
    func_800FF460(param_4,param_3,0x28,D_80119714,auStack_38);
    local_36 = local_36 - (short)(((0x28 - iVar3) * 0x1e) / 0x28);
    iVar6 = rsin((iVar3 << 0xc) / 0x50);
    iVar6 = iVar6 * 100;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xfff;
    }
    local_36 = local_36 - (short)(iVar6 >> 0xc);
    func_800FF190(param_3,auStack_38,0);
    iVar6 = *(short *)(iVar5 + 0x50) * 0x1000 * (0x28 - iVar3);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xfff;
    }
    sVar2 = *(short *)(iVar5 + 0x50) + (short)((iVar6 >> 0xc) / 0x28);
    *(short *)(iVar5 + 0x52) = sVar2;
    *(short *)(iVar5 + 0x50) = sVar2;
    if (iVar3 % 3 == 1) {
      func_800DDB38(iVar5,10,0x80);
    }
    if (iVar3 < 0x28) {
      return 0;
    }
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) ^ 0x40000000;
    *(uint *)(param_4 + 0x1c) = *(uint *)(param_4 + 0x1c) | 8;
    *(undefined1 *)(param_2 + 0x70d) = 0;
  }
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
  return 0;
}

#undef SStack_50
#undef SStack_48
#undef SStack_40
#undef auStack_38
#undef local_36
#undef SStack_30
