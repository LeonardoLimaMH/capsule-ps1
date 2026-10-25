#include "common.h"

extern volatile s32 *D_800715A8;

volatile s32 *_spu_FsetPCR(s32 on) {
    volatile s32 *p;

    *D_800715A8 &= 0xFFF8FFFF;
    p = D_800715A8;
    if (on) {
        *p |= 0x30000;
    } else {
        *p |= 0x50000;
    }
    return p;
}
