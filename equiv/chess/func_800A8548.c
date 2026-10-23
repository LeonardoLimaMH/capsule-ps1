#include "common.h"

#include "ghidra.h"
void func_800A8548(undefined4 param_1,int param_2,int param_3)

{
    extern M2C_UNK D_80085428[];
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = (undefined1 *)(param_2 + param_3 * 0x2e8 + 0x18);
  do {
    if ((((puVar2[0x17] & 0x7f) == 4) ||
        (iVar1 = func_800A8E34(param_2,param_3,iVar3), iVar1 != 0)) ||
       (puVar2[0x28] != '\0')) {
L800A86D8:
    }
    else {
      iVar1 = func_800CA6B8(param_1,param_3,param_3,iVar3);
      if (iVar1 == 0) {
        puVar2[0x17] = puVar2[0x17] & 0x7f;
        if (iVar3 != 5) {
          switch(*puVar2) {
          case 0x13:
          case 0x22:
          case 0x25:
          case 0x31:
          case 0x47:
          case 0x48:
          case 0x5c:
          case 0x5d:
            if (puVar2[0x27] == '\0') {
              puVar2[0x27] = 1;
              func_8009C278(D_80085428,param_3,iVar3,puVar2);
            }
          }
        }
        goto L800A86D8;
      }
      puVar2[0x23] = 0;
      puVar2[0x17] = puVar2[0x17] | 0x80;
      if (iVar3 == 5) goto L800A86D8;
      switch(*puVar2) {
      case 0x13:
      case 0x22:
      case 0x25:
      case 0x31:
      case 0x47:
      case 0x48:
      case 0x5c:
      case 0x5d:
        if (puVar2[0x27] == '\0') goto L800A86D8;
        puVar2[0x27] = 0;
        func_8009C5C4(D_80085428,param_3,iVar3);
        break;
      default:
        goto L800A86D8;
      }
    }
    puVar2 = puVar2 + 0x7c;
    iVar3 = iVar3 + 1;
    if (4 < iVar3) {
      return;
    }
  } while( true );
}
