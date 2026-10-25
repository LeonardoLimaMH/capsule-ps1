#include "common.h"

/* esmaecimento: soma ou subtrai o passo das três componentes de cor */
void func_8001AFF0(u8 *o) {
    u8 d;

    if (!(*(u32 *)(o + 0x34) & 1)) {
        if (o[0x30] + *(s32 *)(o + 0x38) < 0xFF) {
            d = o[0x38];
            o[0x30] += d;
            o[0x31] += d;
            o[0x32] += d;
        } else {
            o[0x32] = 0xFF;
            o[0x31] = 0xFF;
            o[0x30] = 0xFF;
            (*(u16 *)(o + 0x40))++;
        }
    } else {
        if (o[0x30] - *(s32 *)(o + 0x38) > 0) {
            d = o[0x38];
            o[0x30] -= d;
            o[0x31] -= d;
            o[0x32] -= d;
        } else {
            o[0x32] = 0;
            o[0x31] = 0;
            o[0x30] = 0;
            (*(u16 *)(o + 0x40))++;
        }
    }
}
