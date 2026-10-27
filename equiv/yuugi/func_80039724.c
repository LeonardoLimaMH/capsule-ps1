#include "common.h"

#include "ghidra.h"
#define DAT_80093790 (*(u32 *)0x80093790)
#define DAT_80093794 (*(u32 *)0x80093794)
#define DAT_800937b4 (*(u32 *)0x800937B4)
#define DAT_800937ca (*(u16 *)0x800937CA)
#define DAT_800937cc (*(u16 *)0x800937CC)
#define DAT_80093d68 (*(s32 *)0x80093D68)
#define D_8007142C (*(s32 *)0x8007142C)
#define D_80078C78 (*(s32 *)0x80078C78)
extern s32 SpuGetKeyStatus();
extern s32 SpuSetKey();
extern s32 SpuSetVoiceAttr();
void func_80039724(s8 param_1,ushort param_2)

{
  int iVar1;
  undefined1 *puVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  iVar6 = 0;
  uVar4 = 0;
  uVar5 = uVar4;
  if (0 < D_80078C78) {
    puVar2 = &DAT_80093d68;
    pcVar3 = D_8007142C;
    do {
      if ((param_1 == puVar2[3]) && ((param_2 & 0xff) == *(ushort *)(puVar2 + 6))) {
        if (puVar2[0x1b] == '\0') {
          DAT_80093794 = 0x60100;
          DAT_80093790 = *(uint *)pcVar3;
          DAT_800937ca = *(undefined2 *)(puVar2 + 0x40);
          DAT_800937cc = *(undefined2 *)(puVar2 + 0x42);
          DAT_800937b4 = (uint)*(ushort *)(puVar2 + 0x44);
          SpuSetVoiceAttr(&DAT_80093790);
          uVar4 = uVar4 | *(uint *)pcVar3;
          do {
            SpuSetKey(0,*(uint *)pcVar3);
            iVar1 = SpuGetKeyStatus(*(uint *)pcVar3);
            if (iVar1 == 2) break;
          } while (iVar1 != 0);
          *(undefined2 *)(puVar2 + 0x16) = 0;
        }
        else {
          puVar2[0x1a] = puVar2[0x1a] | 0x80;
        }
      }
      puVar2 = puVar2 + 0x4e;
      iVar6 = iVar6 + 1;
      pcVar3 = pcVar3 + 4;
      uVar5 = uVar4;
    } while (iVar6 < D_80078C78);
  }
  do {
    if (uVar4 == 0) {
      return;
    }
    SpuSetKey(0,uVar5);
    uVar4 = SpuGetKeyStatus(uVar5);
  } while (uVar4 != 2);
  return;
}
