#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C59F4", func_800C59F4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C59F4", func_800C5B30);

#include "common.h"

extern u8 D_800EE5D0[];
extern u8 D_800EEB9C[];
typedef struct { u8 pad[0x6E0]; s32 arr[1]; } S_800EEB9C;

s32 func_800C5C30(s32 unused, s32 i) {
    return func_800B6D98(4, 0, 0, 4, 0, D_800EE5D0, ((S_800EEB9C *)D_800EEB9C)->arr[i], 1, 1, 0, 2, 0);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C59F4", func_800C5CA0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C59F4", func_800C5EFC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C59F4", func_800C60E0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C59F4", func_800C62A4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C59F4", func_800C6424);
