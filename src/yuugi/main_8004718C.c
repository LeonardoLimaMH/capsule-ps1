#include "common.h"
#include "yuugi.h"

void DsDataSync(void) {
    CD_datasync();
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004718C", DsIntToPos);

s32 DsPosToInt(void *arg0) {
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0);
    temp_a2 = M2C_FIELD(arg0, u8 *, 1);
    temp_a1 = M2C_FIELD(arg0, u8 *, 2);
    return (((((((temp_v1 >> 4) * 0xA) + (temp_v1 & 0xF)) * 0x3C) + (((temp_a2 >> 4) * 0xA) + (temp_a2 & 0xF))) * 0x4B) + (((temp_a1 >> 4) * 0xA) + (temp_a1 & 0xF))) - 0x96;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004718C", DsSetDebug);
