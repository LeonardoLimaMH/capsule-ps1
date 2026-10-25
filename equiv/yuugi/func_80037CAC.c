#include "common.h"

extern u8 D_80093790[];
extern s32 D_8007142C[];
extern u16 D_80078D54;
extern u16 D_80078D56;

void func_80037CAC(s32 n, s32 x, s32 y) {
    *(s32 *)(D_80093790 + 4) = 0xF;
    *(s16 *)(D_80093790 + 0xC) = 0;
    *(s16 *)(D_80093790 + 0xE) = 0;
    *(s32 *)D_80093790 = D_8007142C[n];
    *(s16 *)(D_80093790 + 8) = (x * D_80078D54) >> 7;
    *(s16 *)(D_80093790 + 0xA) = (y * D_80078D56) >> 7;
    SpuSetVoiceAttr(D_80093790);
}
