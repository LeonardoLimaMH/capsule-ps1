#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D0F10", func_800D0F10);

#include "common.h"
typedef struct { u8 pad[0x388]; u16 value; u8 tail[0x79C - 0x38A]; } RaiseRecord;
extern RaiseRecord D_80100F38[];
s32 func_800D0FE0(s32 unused, u32 player, u16 value) {
 D_80100F38[player & 0xFFFF].value = value;
 return 0;
}
