#include "common.h"

#include "common.h"
typedef struct { u8 pad[0x18C]; u8 * field; u8 tail[0x60C]; } Record_800E1594;
extern Record_800E1594 D_80100F38[];
u32 func_800E1594(u32 player) {
    u32 offset = (player & 0xFFFF) * 0x79C;
    u32 base = (u32)D_80100F38;
    Record_800E1594 *record = (Record_800E1594 *)(base + offset);
    return (*(u32 *)(record->field + 0x38) & 1) ^ 1;
}
