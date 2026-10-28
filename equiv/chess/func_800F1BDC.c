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
#define DAT_8008ee70 (*(s32 *)0x8008EE70)
#define DAT_8008ee74 (*(s32 *)0x8008EE74)
#define DAT_8008f7a4 (*(s32 *)0x8008F7A4)
#define DAT_8008f7a8 (*(s32 *)0x8008F7A8)
#define DAT_800906a0 (*(s32 *)0x800906A0)
#define D_80119714 (*(s32 *)0x80119714)
extern s32 RotTransPers();
#define func_80013928 ((s32 (*)())0x80013928)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80015CD0 ((s32 (*)())0x80015CD0)
#define func_80015EF8 ((s32 (*)())0x80015EF8)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800A81D8 ((s32 (*)())0x800A81D8)
#define func_800C94DC ((s32 (*)())0x800C94DC)
#define func_800FE188 ((s32 (*)())0x800FE188)
#define func_800FF0A0 ((s32 (*)())0x800FF0A0)
undefined4 func_800F1BDC(undefined4 param_1,int param_2,byte *param_3)
{
  union { u64 align; u8 bytes[0x18]; } recovered_local_frame;
#define SStack_38 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x0))
#define local_30 (*(short volatile *)(recovered_local_frame.bytes + 0x8))
#define local_2e (*(short volatile *)(recovered_local_frame.bytes + 0xA))
#define lStack_2c (*(long volatile *)(recovered_local_frame.bytes + 0xC))
#define alStack_28 (*(long volatile (*)[2])(recovered_local_frame.bytes + 0x10))

  undefined1 uVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  long lVar5;
  int task;
  int iVar6;
  undefined2 uVar7;
  int incoming_s3;





  __asm__ volatile ("move %0,$19" : "=r" (incoming_s3) : : "$19");
  if (DAT_8008ee54 == 1) {
    param_3[0x17] = 0x88;
    param_3[0x23] = 1;
    if ((D_80119714 - 0xfU < 0x1f) && (D_80119714 == (D_80119714 / 0xf) * 0xf)) {
      func_80034AB0(0x79);
    }
    if (D_80119714 < 0x46) {
      return 0;
    }
    iVar6 = func_80015B3C(-0x7ffe7a00,-0x7ff55220,1);
    func_80015EF8(iVar6);
    DAT_8008f7a8 = iVar6;
    iVar6 = func_800202A4(6);
    DAT_8008f7a4 = iVar6 + 0x3a;
    func_80034AB0(0x79);
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
  }
  else {
    if (DAT_8008ee54 < 2) {
      if (DAT_8008ee54 == 0) {
        bVar2 = func_800C94DC(param_1,0);
        param_3[0x25] = bVar2;
        DAT_8008ee54 = DAT_8008ee54 + 1;
        D_80119714 = 0;
        return 0;
      }
      return 0;
    }
    if (DAT_8008ee54 != 2) {
      if (DAT_8008ee54 != 99) {
        return 0;
      }
      goto LAB_800f1fb8;
    }
  }
  incoming_s3 = DAT_8008f7a8;
  bVar2 = *(byte *)(param_2 + 0x5fa);
  uVar1 = *(undefined1 *)(param_2 + (uint)bVar2 + 0x5fb);
  uVar4 = func_80019F30(*param_3 + 0x10d | 0x70000,DAT_8008f7a4);
  func_80015EF8(incoming_s3);
  func_80015CD0(incoming_s3 + 0x14,uVar4,2);
  func_800A81D8(param_1,incoming_s3,(uint)bVar2,uVar1);
  func_800FE188(param_3,&SStack_38);
  if (D_80119714 < 6) {
    iVar6 = D_80119714 * 9 + 0x1e;
  }
  else {
    iVar6 = D_80119714 * 0x11 - ((D_80119714 * D_80119714) / 2 + -0x23);
    if (iVar6 < 0x51) {
      iVar6 = 0x50;
    }
  }
  SStack_38.vy = SStack_38.vy - (short)iVar6;
  func_800FF0A0(incoming_s3,&SStack_38,10);
  if (D_80119714 == 0xf) {
    func_80034AB0(4);
  }
  func_8002CEC0(&DAT_800906a0);
  lVar5 = RotTransPers(&SStack_38,(long *)&local_30,&lStack_2c,alStack_28);
  if ((D_80119714 == (D_80119714 / 5) * 5) && (D_80119714 < 0x5a)) {
    task = func_80015B3C(-0x7ff22b58,-0x7ffe9e3c,1);
    uVar4 = func_80019F30(0x70013,0x5c);
    func_80015EF8(task);
    func_80015CD0(task + 0x14,uVar4,1);
    sVar3 = func_800202A4(0x3d);
    *(short *)(task + 0x46) = (local_30 - (short)(DAT_8008ee70 / 2)) + sVar3 + -0x1e;
    sVar3 = func_800202A4(0x3d);
    iVar6 = DAT_8008ee74;
    *(short *)(task + 0x4e) = (short)lVar5 + -0x15;
    *(short *)(task + 0x4a) = ((local_2e - (short)(iVar6 / 2)) - sVar3) + 0x14;
    *(uint *)(task + 0x38) = *(uint *)(task + 0x38) & 0xffffffcf | 0x50;
    uVar7 = (undefined2)(0x140000 / (lVar5 + -10));
    *(undefined2 *)(task + 0x52) = uVar7;
    *(undefined2 *)(task + 0x50) = uVar7;
  }
  if (D_80119714 < 0xaa) {
    return 0;
  }
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
LAB_800f1fb8:
  func_80013928(incoming_s3);
  return 1;
}

#undef SStack_38
#undef local_30
#undef local_2e
#undef lStack_2c
#undef alStack_28

/* arg0: 0x80130000 */
/* arg1: 0x80140000 */
/* arg2: 0x80150000 */
/* real-callee: func_800202A4 */
/* real-callee: rand */
/* real-callee: func_800A81D8 */
/* real-callee: func_800A46B8 */
/* real-callee: func_80015EF8 */
/* rand-u32-strided: 0x8008F7A8 1 4 0x80160000 */
/* rand-u16: 0x8008F7A4 1 58,59,60,61,62,63 */
/* rand-u16: 0x8008F7A6 1 0 */
/* rand-u16: 0x801305D8 1 0,256,768 */
/* rand-u32-strided: 0x801010B0 4 52 0x80170000 */
/* rand-u32-strided: 0x80170000 169 4 0x42,0x80042,0x380042 */
/* rand-u16: 0x801405FA 1 0,1,256,257,1280,1281 */
/* rand-u16: 0x801405FC 1 0,1,5 */
/* rand-mem: 0x80150015 2 13 */
/* rand-u32-strided: 0x80150070 1 4 0x80180000 */
/* rand-u16: 0x80119714 1 0,1,5,6,14,15,29,30,44,45,69,70,75,89,90,169,170,171 */

/* rand-u16: 0x8008EE54 1 0 */
