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
/* real-callee: func_800DD428 */
/* real-callee: func_800DDA78 */
/* real-callee: func_800FE188 */
/* real-callee: func_800FE21C */
/* real-callee: func_800FE74C */
/* real-callee: func_800FEBF4 */
/* real-callee: func_800FEC2C */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF190 */
/* real-callee: func_800FF2CC */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FF460 */
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
#define DAT_8008ee70 (*(s32 *)0x8008EE70)
#define DAT_8008ee74 (*(s32 *)0x8008EE74)
#define D_80119714 (*(s32 *)0x80119714)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80015CD0 ((s32 (*)())0x80015CD0)
#define func_80015EF8 ((s32 (*)())0x80015EF8)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800A81D8 ((s32 (*)())0x800A81D8)
#define func_800FE188 ((s32 (*)())0x800FE188)
undefined4 func_800EC5B0(undefined4 param_1,int param_2,uchar *param_3)

{
  union { u64 align; u8 bytes[0x8]; } recovered_local_frame;
#define local_30 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x0))

  byte bVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;


  if (DAT_8008ee54 == 2) {
    if (D_80119714 < 0x78) {
      return 0;
    }
    DAT_8008ee54 = 3;
  }
  else {
    if (2 < DAT_8008ee54) {
      if ((DAT_8008ee54 != 3) && (DAT_8008ee54 != 99)) {
        return 0;
      }
      return 1;
    }
    if (DAT_8008ee54 == 0) {
      param_3[0x17] = 0x87;
      param_3[0x23] = '\x01';
      iVar4 = func_80015B3C(-0x7ffe7a00,-0x7ff0aaec,1);
      *(short *)(iVar4 + 0x28) =
           *(short *)(*(int *)(param_3 + 0x70) + 0x46) + (short)(DAT_8008ee70 / 2);
      *(short *)(iVar4 + 0x2a) =
           *(short *)(*(int *)(param_3 + 0x70) + 0x4a) + (short)(DAT_8008ee74 / 2) + -10;
      sVar3 = *(short *)(*(int *)(param_3 + 0x70) + 0x4e);
      *(undefined1 *)(iVar4 + 0x2f) = 0x80;
      *(undefined1 *)(iVar4 + 0x33) = 3;
      *(undefined1 *)(iVar4 + 0x34) = 0x10;
      *(undefined2 *)(iVar4 + 0x36) = 0x96;
      *(undefined1 *)(iVar4 + 0x2e) = 0xff;
      *(undefined1 *)(iVar4 + 0x30) = 0xff;
      *(undefined1 *)(iVar4 + 0x32) = 2;
      *(undefined2 *)(iVar4 + 0x38) = 200;
      *(short *)(iVar4 + 0x2c) = sVar3 + -100;
    }
    else {
      if (DAT_8008ee54 != 1) {
        return 0;
      }
      iVar4 = D_80119714;
      if (D_80119714 < 0) {
        iVar4 = D_80119714 + 7;
      }
      if (D_80119714 + (iVar4 >> 3) * -8 != 1) {
        return 0;
      }
      iVar4 = func_80015B3C(-0x7ff13468,-0x7ff55220,1);
      uVar5 = func_80019F30(0x7016e,0x45);
      bVar1 = *(byte *)(param_2 + 0x5fa);
      uVar2 = *(undefined1 *)(param_2 + (uint)bVar1 + 0x5fb);
      func_80015EF8(iVar4);
      func_80015CD0(iVar4 + 0x14,uVar5,2);
      func_800A81D8(param_1,iVar4,(uint)bVar1,uVar2);
      func_800FE188(param_3,&local_30);
      *(short *)(iVar4 + 0x6a) = local_30.vx;
      *(short *)(iVar4 + 0x6e) = local_30.vy;
      *(undefined4 *)(iVar4 + 0x7c) = 0xfff85ee0;
      *(short *)(iVar4 + 0x72) = local_30.vz;
      iVar6 = func_800202A4(0x1000);
      *(int *)(iVar4 + 0x80) = iVar6 * 0x3c;
      uVar5 = func_800202A4(0x1000);
      *(undefined4 *)(iVar4 + 0x84) = uVar5;
      func_80034AB0(0x2c);
      if (D_80119714 < 0x78) {
        return 0;
      }
    }
    DAT_8008ee54 = DAT_8008ee54 + 1;
  }
  D_80119714 = 0;
  return 0;
}

#undef local_30
