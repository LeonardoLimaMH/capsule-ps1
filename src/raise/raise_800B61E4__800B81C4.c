#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B81C4", func_800B81C4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B81C4", func_800B821C);

typedef struct {
    u8 pad[0x124];
    u16 values[0x42];
} MonsterValueRecord;
u16 func_800B847C(u32 player, s32 index) {
    extern MonsterValueRecord D_80091618[];
    u32 base = (u32)D_80091618;
    u32 offset = (player & 0xFFFF) * 0x1A8;
    MonsterValueRecord *record = (MonsterValueRecord *)(base + offset);
    return record->values[index];
}
