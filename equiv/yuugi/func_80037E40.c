#include "common.h"

extern s32 D_80078C78;
extern u8 D_800937D0[];
extern u8 D_80093790[];
extern u8 D_80093D68[];
extern s32 D_8007142C[];
extern u16 D_80078D54;
extern u16 D_80078D56;

void func_80037E40(s32 ch) {
    u8 *e = D_80093D68;
    s32 i;
    s32 x, y;

    for (i = 0; i < D_80078C78; i++, e += 0x4E) {
        if ((e[3] >> 4) != ch) {
            continue;
        }
        func_80037A7C(e, D_800937D0 + e[3] * 84);
        x = *(u16 *)(e + 0xC) * D_80078D54;
        y = *(u16 *)(e + 0xE) * D_80078D56;
        *(s32 *)(D_80093790 + 4) = 0xF;
        *(s16 *)(D_80093790 + 0xC) = 0;
        *(s16 *)(D_80093790 + 0xE) = 0;
        *(s32 *)D_80093790 = D_8007142C[i];
        *(s16 *)(D_80093790 + 8) = x >> 7;
        *(s16 *)(D_80093790 + 0xA) = y >> 7;
        SpuSetVoiceAttr(D_80093790);
    }
}
