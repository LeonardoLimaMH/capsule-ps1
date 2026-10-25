#include "common.h"

extern u16 D_8006AF80;
extern u8 D_80091618[];
extern s32 D_800EEB70;
extern u16 D_800EF2D8;

u16 func_800B1350(s32 which) {
    if (D_800EEB70 != 0) {
        return D_800EF2D8;
    }
    if (which == 1) {
        return D_8006AF80;
    }
    return *(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x8A);
}
