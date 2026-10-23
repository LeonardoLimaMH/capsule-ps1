#include "common.h"

#include "ghidra.h"
void func_800CC000(int param_1)

{
    extern void * D_8008ED68[];
    extern M2C_UNK D_800906A0[];
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  short sStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  short sStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  short sStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  short sStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  
  if ((*(uint *)(param_1 + 0x50) & 1) != 1) {
    if (*(char *)(param_1 + 0x58) == '\0') {
      func_8002CEC0(D_800906A0);
    }
    iVar2 = func_800CD85C((short *)(param_1 + 0x18),0x1f800000);
    sStack_40 = *(short *)(param_1 + 0x18);
    uStack_3e = *(undefined2 *)(param_1 + 0x1a);
    uStack_3c = *(undefined2 *)(param_1 + 0x1c);
    sStack_38 = *(short *)(param_1 + 0x20) -
                (short)((int)(((int)*(short *)(param_1 + 0x20) - (int)*(short *)(param_1 + 0x18)) *
                             (uint)*(byte *)(param_1 + 0x4b)) / 0x32);
    uStack_36 = *(undefined2 *)(param_1 + 0x22);
    uStack_34 = *(undefined2 *)(param_1 + 0x24);
    sStack_30 = *(undefined2 *)(param_1 + 0x28);
    uStack_2e = *(undefined2 *)(param_1 + 0x2a);
    uStack_2c = *(undefined2 *)(param_1 + 0x2c);
    sStack_28 = *(short *)(param_1 + 0x30) -
                (short)((int)(((int)*(short *)(param_1 + 0x30) - (int)*(short *)(param_1 + 0x28)) *
                             (uint)*(byte *)(param_1 + 0x4b)) / 0x32);
    uStack_26 = *(undefined2 *)(param_1 + 0x32);
    uStack_24 = *(undefined2 *)(param_1 + 0x34);
    puVar7 = *(uint **)((*D_8008ED68) + 0x1090);
    puVar5 = (uint *)0x0;
    if ((puVar7 == (uint *)0x0) ||
       (puVar5 = puVar7 + 10, puVar6 = (uint *)0x0, puVar5 <= (uint *)((*D_8008ED68) + 0x4594U))) {
      puVar6 = puVar5;
    }
    *(uint **)((*D_8008ED68) + 0x1090) = puVar6;
    SetPolyFT4(puVar7);
    SetShadeTex(puVar7,0);
    SetSemiTrans(puVar7,*(uint *)(param_1 + 0x50) >> 6 & 1);
    if (*(char *)(param_1 + 0x58) == '\0') {
      func_8002CEC0(D_800906A0);
    }
    iVar3 = func_800CD85C(&sStack_40,puVar7);
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(param_1 + 0x48);
    *(undefined1 *)((int)puVar7 + 5) = *(undefined1 *)(param_1 + 0x49);
    *(undefined1 *)((int)puVar7 + 6) = *(undefined1 *)(param_1 + 0x4a);
    cVar4 = *(char *)(param_1 + 0x3c);
    *(char *)(puVar7 + 7) = cVar4;
    *(char *)(puVar7 + 3) = cVar4;
    cVar4 = cVar4 + *(char *)(param_1 + 0x40);
    *(char *)(puVar7 + 9) = cVar4;
    *(char *)(puVar7 + 5) = cVar4;
    cVar4 = (char)puVar7[3] +
            (char)(((uint)*(ushort *)(param_1 + 0x40) * (uint)*(byte *)(param_1 + 0x4b)) / 0x32);
    *(char *)(puVar7 + 7) = cVar4;
    *(char *)(puVar7 + 3) = cVar4;
    cVar4 = *(char *)(param_1 + 0x3e);
    *(char *)((int)puVar7 + 0x15) = cVar4;
    *(char *)((int)puVar7 + 0xd) = cVar4;
    cVar4 = cVar4 + *(char *)(param_1 + 0x42);
    *(char *)((int)puVar7 + 0x25) = cVar4;
    *(char *)((int)puVar7 + 0x1d) = cVar4;
    uVar1 = GetClut(*(undefined2 *)(param_1 + 0x44),*(undefined2 *)(param_1 + 0x46));
    *(undefined2 *)((int)puVar7 + 0xe) = uVar1;
    uVar1 = GetTPage(0,*(uint *)(param_1 + 0x50) >> 4 & 3,*(undefined2 *)(param_1 + 0x38),
                            *(undefined2 *)(param_1 + 0x3a));
    *(undefined2 *)((int)puVar7 + 0x16) = uVar1;
    if (iVar3 - 7U < 0x3fa) {
      iVar3 = (iVar2 + -1) * 4;
      *puVar7 = *puVar7 & 0xff000000 | *(uint *)(iVar3 + (*D_8008ED68) + 0x70) & 0xffffff;
      iVar3 = iVar3 + (*D_8008ED68);
      *(uint *)(iVar3 + 0x70) = *(uint *)(iVar3 + 0x70) & 0xff000000 | (uint)puVar7 & 0xffffff;
    }
    sStack_40 = *(short *)(param_1 + 0x20) -
                (short)((int)(((int)*(short *)(param_1 + 0x20) - (int)*(short *)(param_1 + 0x18)) *
                             (uint)*(byte *)(param_1 + 0x4b)) / 0x32);
    uStack_3e = *(undefined2 *)(param_1 + 0x1a);
    uStack_3c = *(undefined2 *)(param_1 + 0x1c);
    sStack_38 = *(undefined2 *)(param_1 + 0x20);
    uStack_36 = *(undefined2 *)(param_1 + 0x22);
    uStack_34 = *(undefined2 *)(param_1 + 0x24);
    sStack_30 = *(short *)(param_1 + 0x30) -
                (short)((int)(((int)*(short *)(param_1 + 0x30) - (int)*(short *)(param_1 + 0x28)) *
                             (uint)*(byte *)(param_1 + 0x4b)) / 0x32);
    uStack_2e = *(undefined2 *)(param_1 + 0x2a);
    uStack_2c = *(undefined2 *)(param_1 + 0x2c);
    sStack_28 = *(undefined2 *)(param_1 + 0x30);
    uStack_26 = *(undefined2 *)(param_1 + 0x32);
    uStack_24 = *(undefined2 *)(param_1 + 0x34);
    puVar7 = *(uint **)((*D_8008ED68) + 0x1090);
    puVar5 = (uint *)0x0;
    if ((puVar7 == (uint *)0x0) ||
       (puVar5 = puVar7 + 10, puVar6 = (uint *)0x0, puVar5 <= (uint *)((*D_8008ED68) + 0x4594U))) {
      puVar6 = puVar5;
    }
    *(uint **)((*D_8008ED68) + 0x1090) = puVar6;
    SetPolyFT4(puVar7);
    SetShadeTex(puVar7,0);
    SetSemiTrans(puVar7,*(uint *)(param_1 + 0x50) >> 6 & 1);
    if (*(char *)(param_1 + 0x58) == '\0') {
      func_8002CEC0(D_800906A0);
    }
    iVar3 = func_800CD85C(&sStack_40,puVar7);
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(param_1 + 0x48);
    *(undefined1 *)((int)puVar7 + 5) = *(undefined1 *)(param_1 + 0x49);
    *(undefined1 *)((int)puVar7 + 6) = *(undefined1 *)(param_1 + 0x4a);
    cVar4 = *(char *)(param_1 + 0x3c);
    *(char *)(puVar7 + 7) = cVar4;
    *(char *)(puVar7 + 3) = cVar4;
    cVar4 = cVar4 + (char)(((uint)*(ushort *)(param_1 + 0x40) * (uint)*(byte *)(param_1 + 0x4b)) /
                          0x32);
    *(char *)(puVar7 + 9) = cVar4;
    *(char *)(puVar7 + 5) = cVar4;
    cVar4 = *(char *)(param_1 + 0x3e);
    *(char *)((int)puVar7 + 0x15) = cVar4;
    *(char *)((int)puVar7 + 0xd) = cVar4;
    cVar4 = cVar4 + *(char *)(param_1 + 0x42);
    *(char *)((int)puVar7 + 0x25) = cVar4;
    *(char *)((int)puVar7 + 0x1d) = cVar4;
    uVar1 = GetClut(*(undefined2 *)(param_1 + 0x44),*(undefined2 *)(param_1 + 0x46));
    *(undefined2 *)((int)puVar7 + 0xe) = uVar1;
    uVar1 = GetTPage(0,*(uint *)(param_1 + 0x50) >> 4 & 3,*(undefined2 *)(param_1 + 0x38),
                            *(undefined2 *)(param_1 + 0x3a));
    *(undefined2 *)((int)puVar7 + 0x16) = uVar1;
    if (iVar3 - 7U < 0x3fa) {
      iVar2 = (iVar2 + -1) * 4;
      *puVar7 = *puVar7 & 0xff000000 | *(uint *)(iVar2 + (*D_8008ED68) + 0x70) & 0xffffff;
      iVar2 = iVar2 + (*D_8008ED68);
      *(uint *)(iVar2 + 0x70) = *(uint *)(iVar2 + 0x70) & 0xff000000 | (uint)puVar7 & 0xffffff;
    }
  }
  return;
}
