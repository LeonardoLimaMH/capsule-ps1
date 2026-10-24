#include "common.h"

#include "ghidra.h"
void func_8001DADC(int param_1,int param_2)

{
    extern M2C_UNK D_8008ED68[];
  *(int *)(param_2 * 4 + -0x7ff70d80) = param_1;
  func_80012FB8
            (*(undefined4 *)(param_1 + 8),(int)*(short *)(param_1 + 0xc),
             (int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0x10),
             (int)*(short *)(param_1 + 0x12));
  func_80012FF0(*(undefined4 *)(param_1 + 0x18),(int)*(short *)(param_1 + 0x1c),
                (int)*(short *)(param_1 + 0x1e),(int)*(short *)(param_1 + 0x20),
                (int)*(short *)(param_1 + 0x22));
  return;
}
