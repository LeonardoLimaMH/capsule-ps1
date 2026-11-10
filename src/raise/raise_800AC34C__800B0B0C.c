#include "common.h"

/* slot de 0x1A8 bytes em D_80091618 */
typedef struct {
    u16 unk_0;
    u8 _pad2[0xE];
    u16 unk_10;
    u8 _pad12[0x1A8 - 0x12];
} Slot_B1088;

extern Slot_B1088 D_80091618[];

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800B0B0C", func_800B0B0C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800B0B0C", func_800B0DE4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800B0B0C", func_800B1088);
