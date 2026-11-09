#include "common.h"
#include "yuugi.h"

typedef struct {
    u8 pad[0x10];
    u16 f10;
    u8 pad2[0x8A - 0x12];
    u16 f8A;
    u8 pad3[0x1A8 - 0x8C];
} S_1A8;

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800241E8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_8002453C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800246E4);

s32 func_8002475C(void *arg0, s32 arg1) {
    extern u16 D_8006AF80[];
    extern s16 D_80078C20[];
    extern s16 D_80078C24;
    extern s16 D_80078C28;
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern u8 D_80091618[];
    extern s32 D_800EEB70[];
    if (*D_80085428 == 0) {
        if (arg1 != 0) {
            if (arg1 == 1) {
                if ((D_80078C24 != arg1) || (D_80078C28 != 0)) {
                    if (M2C_FIELD(arg0, u16 *, 0x4E) != 0) {
                        if (M2C_GFIELD(D_80091618 + *D_8006AF80 * 0x1A8, u16, 0x8A) == 0xFFFF) {
                            if (M2C_FIELD(arg0, s16 *, 0x4C) != *D_80078C20) {
                                goto block_17;
                            }
                            goto block_15;
                        }
                        goto block_15;
                    }
                    goto block_15;
                }
                goto block_17;
            }
            goto block_15;
        }
        if ((D_80078C24 != 1) || (D_80078C28 != 0)) {
            if (M2C_GFIELD(D_80091618 + *D_8006AF80 * 0x1A8, u16, 0x8A) == 0xFFFF) {
                if ((*D_800EEB70 != 2) && (*D_800EEB70 != 0)) {
                    goto block_15;
                }
                goto block_17;
            }
block_15:
            if (*D_8008EE44 >= 0x41U) {
                goto block_17;
            }
            return 0;
        }
block_17:
        func_80013920(arg0);
        return 1;
    }
    return 0;
}

#include "ghidra.h"
void func_800248C8(undefined4 param_1)

{
  func_8002475C(param_1,0);
  return;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800248E8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80024990);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80024A7C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025000);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025050);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025448);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800254A0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025514);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800255FC);
