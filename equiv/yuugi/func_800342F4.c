#include "common.h"

extern u8 D_800922F0[];

s32 func_800342F4(s32 ch) {
    s16 env[4];
    s32 mask = 0;
    s32 bit = 1;
    s32 i;

    for (i = 0; i < 4; i++) {
        SpuGetVoiceEnvelope(i + 0x14, env);
        if (((*(u8 **)(D_800922F0 + 0x140))[*(u16 *)(D_800922F0 + 0x12C + i * 2) * 16 + 3] & 0xF) == (ch & 0xFF)
            && env[0] != 0) {
            mask |= bit;
        }
        bit <<= 1;
    }
    if (mask != 0) {
        SpuSetKey(0, mask << 20);
    }
    return mask;
}
