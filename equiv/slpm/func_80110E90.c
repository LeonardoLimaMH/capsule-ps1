#include "common.h"

void func_80110E90(s32 arg0, M2C_UNK arg1) {
    extern void * D_801334A0;
    DecDCTReset(0);
    M2C_FIELD(D_801334A0, s32 *, 0x34) = 0;
    DecDCToutCallback(arg1);
    StSetRing(D_801334A0 + 0x44, 0x20);
    StSetStream(0, 1, 0xA6, 0, 0);
    func_80111538(arg0);
}
