#include "common.h"
#include "yuugi.h"

#include "common.h"

s32 SpuReserveReverbWorkArea(s32 arg0) {
    extern s32 D_80071530[];
    extern s32 D_80071534[];
    if ((arg0 != 0) && (_SpuIsInAllocateArea_((*D_80071534)) == 0)) {
        (*D_80071530) = 1;
        return 1;
    }
    (*D_80071530) = 0;
    return 0;
}
