#include "common.h"

#include "ghidra.h"
#define iRam800f0394 (*(s32 *)0x800F0394)
#define iRam800f0398 (*(s32 *)0x800F0398)
#define iRam800f039c (*(s32 *)0x800F039C)
extern s32 func_80034AB0();
undefined4 func_800A548C(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = iRam800f039c;
  iVar1 = iRam800f0398;
  uVar4 = 0;
  if (param_1 == 1) {
    do {
      while( true ) {
        if (iRam800f0398 == 0x10) {
          switch(iRam800f039c) {
          case 1:
          case 2:
            goto L800A5694;
          case 3:
            goto L800A56A0;
          case 4:
          case 5:
            goto L800A56A8;
          case 6:
            goto L800A56B0;
          }
          goto L800A56B4;
        }
        if (iRam800f0398 != 0x11) break;
        iRam800f0398 = 0;
        if (iRam800f039c == 3) {
          iRam800f039c = 4;
        }
        else if (iRam800f039c < 4) {
          if (iRam800f039c == 2) {
            iRam800f039c = 3;
          }
        }
        else if (iRam800f039c == 4) {
          iRam800f039c = 6;
        }
        uVar4 = 2;
        if (*(char *)(iRam800f039c * 0x11 + iRam800f0394 * 0x77 + -0x7ff0fc60) != '\0')
        goto L800A5914;
      }
      iRam800f0398 = iRam800f0398 + 1;
    } while (*(char *)(iRam800f039c * 0x11 + iRam800f0394 * 0x77 + -0x7ff0fc60 + iRam800f0398) ==
             '\0');
  }
  else if (param_1 < 2) {
    if (param_1 == 0) {
L800A5504:
      do {
        if (iRam800f0398 == 0) {
          switch(iRam800f039c) {
          case 2:
L800A5694:
            iRam800f039c = 1;
            break;
          case 3:
L800A56A0:
            iRam800f039c = 2;
            break;
          case 4:
          case 5:
L800A56A8:
            iRam800f039c = 3;
            break;
          case 6:
L800A56B0:
            iRam800f039c = 4;
          }
L800A56B4:
          iRam800f0398 = 0x11;
          uVar4 = 1;
          break;
        }
        if (iRam800f0398 != 0x11) {
          iRam800f0398 = iRam800f0398 + -1;
          if (*(char *)(iRam800f039c * 0x11 + iRam800f0394 * 0x77 + -0x7ff0fc60 + iRam800f0398) !=
              '\0') break;
          goto L800A5504;
        }
        iRam800f0398 = 0x10;
        if (iRam800f039c == 3) {
          iRam800f039c = 4;
        }
        else if (iRam800f039c < 4) {
          if (iRam800f039c == 2) {
            iRam800f039c = 3;
          }
        }
        else if (iRam800f039c == 4) {
          iRam800f039c = 6;
        }
        uVar4 = 2;
      } while (*(char *)(iRam800f039c * 0x11 + iRam800f0394 * 0x77 + -0x7ff0fc50) == '\0');
    }
  }
  else if (param_1 == 2) {
    do {
      if (iRam800f0398 == 0x11) {
        if (iRam800f039c < 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = 4;
          if (iRam800f039c < 5) {
            iVar3 = iRam800f039c;
          }
        }
        iRam800f039c = 4;
        if (iVar3 != 0) {
          iRam800f039c = iVar3 + -1;
        }
        break;
      }
      iVar3 = 6;
      if (iRam800f039c != 0) {
        iVar3 = iRam800f039c + -1;
      }
      iRam800f039c = iVar3;
    } while (*(char *)(iVar3 * 0x11 + iRam800f0394 * 0x77 + -0x7ff0fc60 + iRam800f0398) == '\0');
  }
  else if (param_1 == 3) {
    do {
      if (iRam800f0398 == 0x11) {
        if (iRam800f039c < 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = 4;
          if (iRam800f039c < 5) {
            iVar3 = iRam800f039c;
          }
        }
        iRam800f039c = 0;
        if (iVar3 != 4) {
          iRam800f039c = iVar3 + 1;
        }
        break;
      }
      iVar3 = 0;
      if (iRam800f039c != 6) {
        iVar3 = iRam800f039c + 1;
      }
      iRam800f039c = iVar3;
    } while (*(char *)(iVar3 * 0x11 + iRam800f0394 * 0x77 + -0x7ff0fc60 + iRam800f0398) == '\0');
  }
L800A5914:
  if ((iVar2 != iRam800f039c) || (iVar1 != iRam800f0398)) {
    func_80034AB0(0x84);
  }
  return uVar4;
}
