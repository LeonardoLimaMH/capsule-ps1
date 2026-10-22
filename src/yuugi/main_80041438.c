#include "common.h"
#include "yuugi.h"

extern s32 D_80071528;
extern s32 D_800715B4;

void SpuSetTransferMode(s32 mode) {
    s32 m;

    switch (mode) {
    case 0:
        m = 0;
        break;
    case 1:
        m = 1;
        break;
    default:
        m = 0;
        break;
    }
    D_80071528 = mode;
    D_800715B4 = m;
}
