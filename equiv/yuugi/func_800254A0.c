#include "common.h"

extern u8 D_80069AD4[];
extern u8 D_80069E4C[];

u8 *func_800254A0(void) {
    s32 i;

    for (i = 0; i < 0x18; i++) {
        D_80069E4C[0x38 + i] = D_80069AD4[0xD8 + i];
    }
    *(s32 *)(D_80069E4C + 0x20) = 0;
    *(s32 *)(D_80069E4C + 0x24) = 0;
    *(s32 *)(D_80069E4C + 0x28) = 0;
    *(s16 *)(D_80069E4C + 0x30) = 0;
    *(s16 *)(D_80069E4C + 0x32) = 0;
    *(s16 *)(D_80069E4C + 0x34) = 0;
    return D_80069E4C + 0x20;
}
