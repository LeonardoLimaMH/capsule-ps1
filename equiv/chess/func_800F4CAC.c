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
/* real-callee: func_800FEBF4 */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_800906a0 (*(s32 *)0x800906A0)
#define D_80119714 (*(s32 *)0x80119714)
extern s32 RotTransPers();
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80018600 ((s32 (*)())0x80018600)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800F5228 ((s32 (*)())0x800F5228)
#define func_800F5514 ((s32 (*)())0x800F5514)
#define func_800FE188 ((s32 (*)())0x800FE188)
#define func_800FEBF4 ((s32 (*)())0x800FEBF4)
undefined4 func_800F4CAC(undefined4 param_1,int param_2,uchar *param_3,uchar *param_4)

{
  union { u64 align; u8 bytes[0x60]; } recovered_local_frame;
#define SStack_60 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x0))
#define local_58 (*(short volatile *)(recovered_local_frame.bytes + 0x8))
#define local_56 (*(short volatile *)(recovered_local_frame.bytes + 0xA))
#define lStack_54 (*(long volatile *)(recovered_local_frame.bytes + 0xC))
#define alStack_50 (*(long volatile (*)[2])(recovered_local_frame.bytes + 0x10))
#define local_48 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x18))
#define local_40 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x20))
#define SStack_38 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x28))
#define local_30 (*(short volatile *)(recovered_local_frame.bytes + 0x30))
#define local_2e (*(short volatile *)(recovered_local_frame.bytes + 0x32))
#define lStack_2c (*(long volatile *)(recovered_local_frame.bytes + 0x34))
#define alStack_28 (*(long volatile (*)[2])(recovered_local_frame.bytes + 0x38))

  s8 cVar1;
  undefined1 uVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;













  if (DAT_8008ee54 == 2) {
    func_8002CEC0(&DAT_800906a0);
    func_800FE188(param_3,&SStack_60);
    RotTransPers(&SStack_60,(long *)&local_58,&lStack_54,alStack_50);
    iVar6 = 0;
    do {
      iVar5 = func_80015B3C(func_800F5228,func_800F5514,1);
      sVar3 = func_800202A4(0x45);
      iVar6 = iVar6 + 1;
      *(short *)(iVar5 + 0x28) = local_58 + sVar3 + -0x22;
      sVar3 = func_800202A4(0x3b);
      *(undefined2 *)(iVar5 + 0x2c) = 100;
      *(short *)(iVar5 + 0x2a) = local_56 + sVar3 + -0x27;
      cVar1 = func_800202A4(0x50);
      *(s8 *)(iVar5 + 0x2e) = cVar1 + '\x05';
      cVar1 = func_800202A4(0x50);
      *(s8 *)(iVar5 + 0x2f) = cVar1 + '\x05';
      cVar1 = func_800202A4(0x50);
      *(s8 *)(iVar5 + 0x30) = cVar1 + '\x05';
      *(undefined1 *)(iVar5 + 0x32) = 2;
      *(undefined1 *)(iVar5 + 0x33) = 1;
      *(undefined1 *)(iVar5 + 0x34) = 8;
      sVar3 = func_800202A4(0xf);
      *(short *)(iVar5 + 0x36) = sVar3 + 0xf;
      sVar3 = func_800202A4(0xfa);
      *(short *)(iVar5 + 0x38) = sVar3 + 0x32;
    } while (iVar6 < 0xf);
    func_80034AB0(0x801c);
  }
  else {
    if (2 < DAT_8008ee54) {
      if (DAT_8008ee54 == 3) {
        if (D_80119714 == 0x46) {
          func_80034AB0(0x8006);
        }
        func_8002CEC0(&DAT_800906a0);
        func_800FE188(param_4,&SStack_38);
        RotTransPers(&SStack_38,(long *)&local_30,&lStack_2c,alStack_28);
        if (((D_80119714 == (D_80119714 / 3) * 3) && (0xb4 < D_80119714)) && (D_80119714 < 0xdc)) {
          iVar6 = func_80015B3C(func_80018600,func_800F5514,1);
          sVar3 = func_800202A4(0x2b);
          *(short *)(iVar6 + 0x28) = local_30 + sVar3 + -0x15;
          sVar3 = func_800202A4(0x2b);
          *(undefined2 *)(iVar6 + 0x2c) = 100;
          *(short *)(iVar6 + 0x2a) = local_2e + sVar3 + -0x32;
          uVar2 = func_800202A4(200);
          *(undefined1 *)(iVar6 + 0x2e) = uVar2;
          uVar2 = func_800202A4(200);
          *(undefined1 *)(iVar6 + 0x2f) = uVar2;
          uVar2 = func_800202A4(200);
          *(undefined1 *)(iVar6 + 0x30) = uVar2;
          *(undefined1 *)(iVar6 + 0x33) = 1;
          *(undefined1 *)(iVar6 + 0x32) = 2;
          *(undefined1 *)(iVar6 + 0x34) = 8;
          sVar3 = func_800202A4(0xf);
          *(short *)(iVar6 + 0x36) = sVar3 + 0xf;
          uVar4 = func_800202A4(0x28);
          *(undefined2 *)(iVar6 + 0x38) = uVar4;
        }
        func_800FE188(param_3,&local_48);
        func_800FE188(param_4,&local_40);
        local_48.vx = local_48.vx +
                      (short)((((int)local_40.vx - (int)local_48.vx) * D_80119714) / 0xfa);
        local_48.vy = local_48.vy +
                      (short)((((int)local_40.vy - (int)local_48.vy) * D_80119714) / 0xfa);
        local_48.vz = local_48.vz +
                      (short)((((int)local_40.vz - (int)local_48.vz) * D_80119714) / 0xfa);
        func_800FEBF4(&local_48);
        if (D_80119714 < 0xfa) {
          return 0;
        }
        D_80119714 = 0;
        DAT_8008ee54 = DAT_8008ee54 + 1;
      }
      else if (DAT_8008ee54 != 99) {
        return 0;
      }
      *(undefined1 *)(param_2 + 0x60d) = 2;
      return 1;
    }
    if (DAT_8008ee54 != 0) {
      if (DAT_8008ee54 != 1) {
        return 0;
      }
      if (0x2c < D_80119714) {
        DAT_8008ee54 = 2;
        D_80119714 = 0;
        return 0;
      }
      return 0;
    }
    param_3[0x17] = 0x87;
    param_3[0x23] = '\x01';
  }
  DAT_8008ee54 = DAT_8008ee54 + 1;
  D_80119714 = 0;
  return 0;
}

#undef SStack_60
#undef local_58
#undef local_56
#undef lStack_54
#undef alStack_50
#undef local_48
#undef local_40
#undef SStack_38
#undef local_30
#undef local_2e
#undef lStack_2c
#undef alStack_28
