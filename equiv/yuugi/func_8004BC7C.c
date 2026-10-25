#include "common.h"

extern volatile u32 *D_80078A30, *D_80078A24;
extern s32 D_80078A44, D_80078A48, D_80078A50;
extern s32 D_80078924;
extern void (*D_80078928)();
extern u8 D_80094DC0[];
extern s32 SetIntrMask();
extern void DMACallback();

s32 func_8004BC7C(void) {
    volatile u32 *p;
    void (*cb)();

    if (*D_80078A30 & 0x1000000) {
        return 1;
    }
    D_80078A50 = SetIntrMask(0);
    if (D_80078A44 != D_80078A48 && !(*D_80078A30 & 0x1000000)) {
        do {
            if (((D_80078A48 + 1) & 0x3F) == D_80078A44 && D_80078928 == 0) {
                DMACallback(2, 0);
            }
            p = D_80078A24;
            if (!(*p & 0x4000000)) {
                while (!(*p & 0x4000000)) {
                }
            }
            (*(void (**)())(D_80094DC0 + D_80078A48 * 0x60))(*(s32 *)(D_80094DC0 + D_80078A48 * 0x60 + 4),
                                                          *(s32 *)(D_80094DC0 + D_80078A48 * 0x60 + 8));
            D_80078A48 = (D_80078A48 + 1) & 0x3F;
        } while (D_80078A44 != D_80078A48 && !(*D_80078A30 & 0x1000000));
    }
    SetIntrMask(D_80078A50);
    if (D_80078A44 == D_80078A48 && !(*D_80078A30 & 0x1000000) && D_80078924 != 0) {
        cb = D_80078928;
        if (cb != 0) {
            D_80078924 = 0;
            cb();
        }
    }
    return (D_80078A44 - D_80078A48) & 0x3F;
}
