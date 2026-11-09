#include "common.h"

#include "ghidra.h"

typedef struct {
    u8 pad0[0xE0];
    u16 mode;
    u8 padE2[0xA18 - 0xE2];
    s32 f_a18;
    s32 f_a1c;
    u8 padA20[0xA68 - 0xA20];
    s32 f_a68;
} Unk8008ED68;
extern Unk8008ED68 D_8008ED68;
extern u16 D_800B3D22;
extern u8 D_800B3D46[];
extern u8 D_8002E38C[];
void func_800AA238(undefined4 param_1)

{
  func_8009807C(param_1,0,5);
  func_8009807C(param_1,1,5);
  func_80012508();
  return;
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800AA238", func_800AA280);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800AA238", func_800AA7DC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800AA238", func_800AAE64);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800AA238", func_800AB690);
