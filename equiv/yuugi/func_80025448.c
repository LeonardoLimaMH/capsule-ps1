#include "common.h"

extern u8 D_80069AD4[];
extern u8 D_80069E4C[];

void func_80025448(void) {
    s32 i;

    for (i = 0; i < 0x18; i++) {
        D_80069AD4[0xD8 + i] = D_80069E4C[0x38 + i];
    }
}
