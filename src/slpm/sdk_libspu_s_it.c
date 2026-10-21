#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libspu_s_it", _spu_setInTransfer);

s32 _spu_getInTransfer(void) {
    extern s32 D_80133408[];
    return (*D_80133408) != 1;
}
