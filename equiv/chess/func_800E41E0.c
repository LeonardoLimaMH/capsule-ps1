#include "common.h"

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
/* real-callee: func_800FE188 */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008f754 (*(u16 *)0x8008F754)
#define D_80119714 (*(s32 *)0x80119714)
extern s32 func_80034AB0();
extern s32 func_800FE188();
extern s32 rsin();
undefined4 func_800E41E0(undefined4 param_1,undefined4 param_2,uchar *param_3,uchar *param_4)

{
  int iVar1;
  int iVar2;
  SVECTOR local_20;
  SVECTOR local_18;

  if (DAT_8008ee54 == 2) {
    iVar2 = *(int *)(param_3 + 0x78);
    func_800FE188(param_3,&local_20);
    func_800FE188(param_4,&local_18);
    iVar1 = (int)local_20.vx + local_18.vx * 2;
    *(short *)(iVar2 + 0x6a) =
         (short)((ulonglong)((longlong)iVar1 * 0x55555556) >> 0x20) - (short)(iVar1 >> 0x1f);
    iVar1 = (int)local_20.vy + local_18.vy * 2;
    *(short *)(iVar2 + 0x6e) =
         ((short)((ulonglong)((longlong)iVar1 * 0x55555556) >> 0x20) - (short)(iVar1 >> 0x1f)) +
         -0x3c;
    iVar1 = (int)local_20.vz + local_18.vz * 2;
    *(undefined4 *)(iVar2 + 0x84) = 1;
    *(undefined4 *)(iVar2 + 0x88) = 1;
    *(short *)(iVar2 + 0x72) =
         (short)((ulonglong)((longlong)iVar1 * 0x55555556) >> 0x20) - (short)(iVar1 >> 0x1f);
    func_80034AB0(0x7f);
    *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) | 0x80000000;
    DAT_8008f754 = 300;
  }
  else {
    if (2 < DAT_8008ee54) {
      if (DAT_8008ee54 == 3) {
        iVar1 = rsin((D_80119714 * 0x1000) / 7);
        iVar1 = (short)DAT_8008f754 * iVar1;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 0xfff;
        }
        *(short *)(*(int *)(param_4 + 0x70) + 0x54) = (short)(iVar1 >> 0xc);
        DAT_8008f754 = DAT_8008f754 - 6;
        if (0 < (int)((uint)DAT_8008f754 << 0x10)) {
          return 0;
        }
      }
      else if (DAT_8008ee54 != 99) {
        return 0;
      }
      *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) ^ 0x80000000;
      return 1;
    }
    if (DAT_8008ee54 == 0) {
      param_3[0x17] = 0x87;
      param_3[0x23] = '\x01';
    }
    else {
      if (DAT_8008ee54 != 1) {
        return 0;
      }
      if (*(uint *)(*(int *)(param_3 + 0x70) + 0x20) < 3) {
        return 0;
      }
      param_3[0x24] = 'E';
      *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x8000;
    }
  }
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
  return 0;
}
