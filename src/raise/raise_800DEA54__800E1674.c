#include "common.h"

#include "common.h"
typedef struct { u8 pad[0x388]; u16 field; u8 tail[0x412]; } Record_800E1674;
extern Record_800E1674 D_80100F38[];
s32 func_800E1674(u32 player) {
    u32 offset = (player & 0xFFFF) * 0x79C;
    u32 base = (u32)D_80100F38;
    Record_800E1674 *record = (Record_800E1674 *)(base + offset);
    return record->field & 1;
}
