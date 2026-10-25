#include "common.h"

extern volatile s32 *D_801333E4;

volatile s32 *slpm__spu_FsetPCR(s32 on) {
    volatile s32 *p;

    *D_801333E4 &= 0xFFF8FFFF;
    p = D_801333E4;
    if (on) {
        *p |= 0x30000;
    } else {
        *p |= 0x50000;
    }
    return p;
}
