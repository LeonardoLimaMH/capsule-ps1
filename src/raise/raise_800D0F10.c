#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D0F10", func_800D0F10);

#include "common.h"
typedef struct { s16 a, b, c; } RaiseLogEnt;
typedef struct { u8 pad0[4]; s16 idx; u16 count; RaiseLogEnt ent[1]; } RaiseLog;
extern RaiseLog D_80103D38[];
typedef struct { u8 pad[0x388]; u16 value; u8 tail[0x79C - 0x38A]; } RaiseRecord;
extern RaiseRecord D_80100F38[];
s32 func_800D0FE0(s32 unused, u32 player, u16 value) {
 D_80100F38[player & 0xFFFF].value = value;
 return 0;
}
