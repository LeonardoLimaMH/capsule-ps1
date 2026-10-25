#include "common.h"

#include "ghidra.h"
void func_800A84A0(undefined1 *param_1,undefined4 param_2,int param_3,int param_4)

{
    extern u8 D_80085428[];
  if (param_3 != 5) {
    switch(*param_1) {
    case 0x13:
    case 0x22:
    case 0x25:
    case 0x31:
    case 0x47:
    case 0x48:
    case 0x5c:
    case 0x5d:
      if (param_4 == 0) {
        if (param_1[0x27] == '\0') {
          param_1[0x27] = 1;
          func_8009C5C4(D_80085428,param_2,param_3,param_1);
        }
      }
      else if (param_1[0x27] != '\0') {
        param_1[0x27] = 0;
        func_8009C278(D_80085428);
      }
    }
  }
  return;
}
