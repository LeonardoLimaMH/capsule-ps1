#include "common.h"

#include "ghidra.h"
void func_800A98FC(int param_1)

{
    extern M2C_UNK D_8008ED68[];
    extern u16 D_800B3C4E[];
    extern s32 D_8008EE44[];
    extern s32 D_8008EE48[];
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (D_8008EE44 == 4) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
    uVar1 = (*D_800B3C4E);
    if (D_8008EE48 == 0) {
      if (*(short *)(param_1 + 0x76) < 0) {
        if (*(short *)(param_1 + 0x50) < 0x1001) {
          *(undefined2 *)(param_1 + 0x52) = 0x1000;
          *(undefined2 *)(param_1 + 0x50) = 0x1000;
          iVar2 = (int)((uint)(*D_800B3C4E) << 0x10) >> 0x10;
          iVar4 = iVar2 - ((int)((uint)(*D_800B3C4E) << 0x10) >> 0x1f);
          *(ushort *)(param_1 + 0x76) = ~*(ushort *)(param_1 + 0x76);
          *(ushort *)(param_1 + 0x74) = ~*(ushort *)(param_1 + 0x74);
          if (iVar2 < 0) {
            iVar2 = iVar2 + 0x1f;
          }
          iVar2 = (iVar4 >> 1) + (iVar2 >> 5);
          (*D_800B3C4E) = (ushort)iVar2;
          if (iVar2 * 0x10000 >> 0x10 < 0x1001) {
            *(undefined2 *)(param_1 + 0x76) = 0;
            *(undefined2 *)(param_1 + 0x74) = 0;
            *(undefined4 *)(param_1 + 0x18) = 0;
            uVar3 = func_80019F30(0x7000b,10);
            func_80015CD0(param_1 + 0x14,uVar3,0);
            func_80012578();
          }
        }
      }
      else if ((short)(*D_800B3C4E) <= *(short *)(param_1 + 0x50)) {
        *(ushort *)(param_1 + 0x52) = (*D_800B3C4E);
        *(ushort *)(param_1 + 0x50) = uVar1;
        *(ushort *)(param_1 + 0x74) = ~*(ushort *)(param_1 + 0x74);
        *(ushort *)(param_1 + 0x76) = ~*(ushort *)(param_1 + 0x76);
      }
      *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + *(short *)(param_1 + 0x74);
      *(short *)(param_1 + 0x74) = *(short *)(param_1 + 0x74) + -0x10;
      *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + *(short *)(param_1 + 0x76);
      *(short *)(param_1 + 0x76) = *(short *)(param_1 + 0x76) + -0x10;
      if (*(short *)(param_1 + 0x74) < -0x200) {
        *(undefined2 *)(param_1 + 0x76) = 0xfe00;
        *(undefined2 *)(param_1 + 0x74) = 0xfe00;
      }
    }
  }
  else if (D_8008EE44 != 5) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
  }
  return;
}
