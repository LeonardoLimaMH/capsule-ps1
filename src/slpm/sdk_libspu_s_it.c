#include "common.h"

#include "common.h"

void _spu_setInTransfer(s32 arg0) {
    extern s32 D_80133408;
    if (arg0 == 1) {
        D_80133408 = 0;
        return;
    }
    D_80133408 = 1;
}

s32 _spu_getInTransfer(void) {
    extern s32 D_80133408[];
    return (*D_80133408) != 1;
}
