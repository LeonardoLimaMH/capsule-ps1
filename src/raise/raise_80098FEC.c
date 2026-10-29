#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_80098FEC", func_80098FEC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_80098FEC", func_800991D4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_80098FEC", func_80099370);

INCLUDE_ASM("asm/raise/nonmatchings/raise_80098FEC", func_80099480);

INCLUDE_ASM("asm/raise/nonmatchings/raise_80098FEC", func_800994FC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_80098FEC", func_80099C9C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_80098FEC", func_80099F54);

INCLUDE_ASM("asm/raise/nonmatchings/raise_80098FEC", func_8009A64C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_80098FEC", func_8009AA50);

INCLUDE_ASM("asm/raise/nonmatchings/raise_80098FEC", func_8009AEC8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_80098FEC", func_8009AF70);

#include "common.h"

#include "ghidra.h"
typedef struct { u8 pad_0[0x10]; ushort field_10; u8 pad_12[0x72]; ushort field_84; u8 pad_86[0x4]; ushort field_8A; u8 tail[0x11C]; } Record_8009B018;
bool func_8009B018(uint param_1)

{
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    u32 base_D_80091618=(u32)D_80091618;

  int iVar1;

  iVar1 = param_1 * 0x1a8;
  if (((Record_8009B018 *)(base_D_80091618 + (iVar1)))->field_10 != 0xFFFF) {
    if (param_1 == (*D_8006AF80)) {
      return false;
    }
    if (((Record_8009B018 *)(base_D_80091618 + (iVar1)))->field_8A == 0xFFFF) {
      return ((Record_8009B018 *)(base_D_80091618 + (iVar1)))->field_84 < 3;
    }
  }
  return false;
}
