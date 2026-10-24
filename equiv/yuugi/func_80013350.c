#include "common.h"

void func_80013350(void) {
    extern M2C_UNK D_8008ED68[];
    if (((M2C_FIELD(D_8008ED68, s32 *, 0x34) == 0) | (M2C_FIELD(D_8008ED68, s32 *, 0x88) == 0x800)) != 0) {
        M2C_FIELD(D_8008ED68, s32 *, 0xC4) = GetRCnt(0xF2000001);
    }
}
