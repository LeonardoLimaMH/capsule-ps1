#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10", func_80033C10);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10", func_80033CEC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10", func_80033E5C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10", func_800340B4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10", func_80034148);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10", func_8003422C);

#include "ghidra.h"
void func_800342CC(void)

{
  undefined1 auStack_18 [16];
  
  auStack_18[0] = 0x50;
  func_80036DB0(auStack_18);
  return;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10", func_800342F4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10", func_800343C4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10", func_80034714);

void func_80034AB0(s32 arg0) {
    func_80034714(arg0 & 0xFFFF, 0);
}

#include "common.h"

void func_80034AD4(void) {
    extern s16 D_80078D3C;
    extern u8 D_80078D4E;
    extern M2C_UNK D_800934D0[];
    SpuSetTransferCallback(0);
    D_80078D4E += 1;
    SpuSetKeyOnWithAttr(D_800934D0);
    D_80078D3C = 0;
}

#include "common.h"

void func_80034B14(void) {
    extern M2C_UNK D_800922F0[];
    s32 temp_v0;

    M2C_GFIELD(D_800922F0, s16, 0x1194) = 0;
    M2C_GFIELD(D_800922F0, s16, 0x1196) = 0;
    M2C_GFIELD(D_800922F0, s16, 0x118C) = -1;
    M2C_GFIELD(D_800922F0, s16, 0x118E) = -1;
    M2C_GFIELD(D_800922F0, s16, 0x1190) = -1;
    M2C_GFIELD(D_800922F0, s16, 0x1192) = -1;
    func_8003C844(0x1000);
    temp_v0 = M2C_GFIELD(D_800922F0, s32, 0xC) + 0x17C;
    M2C_GFIELD(D_800922F0, s32, 0x119C) = temp_v0;
    M2C_GFIELD(D_800922F0, s32, 0x1198) = temp_v0;
    func_8003C894(0x14);
    func_8003C808();
}

void func_80034B80(void) {
    func_8003C850();
}
