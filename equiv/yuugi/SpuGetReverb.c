#include "common.h"

s32 SpuGetReverb(void) {
    extern void * D_80071598[];
    return (M2C_FIELD((*D_80071598), u16 *, 0x1AA) & 0x80) != 0;
}
