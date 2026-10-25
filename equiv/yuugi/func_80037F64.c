#include "common.h"

extern s32 D_80078C78;
extern u8 D_80093790[];
extern s32 D_8007142C[];
extern u8 D_80093D68[];
extern u16 D_80078D54;
extern u16 D_80078D56;

void func_80037F64(void) {
    u8 *e = D_80093D68;
    s32 *ids = D_8007142C;
    s32 i;
    s16 t;
    s32 x, y;

    for (i = 0; i < D_80078C78; i++, ids++, e += 0x4E) {
        t = *(s16 *)(e + 0x3E);
        if (*(s16 *)(e + 0x46) == t) {
            continue;
        }
        x = (*(u16 *)(e + 0xC) + t) * D_80078D54;
        y = (*(u16 *)(e + 0xE) + t) * D_80078D56;
        *(s32 *)(D_80093790 + 4) = 0xF;
        *(s16 *)(D_80093790 + 0xC) = 0;
        *(s16 *)(D_80093790 + 0xE) = 0;
        *(s32 *)D_80093790 = *ids;
        *(s16 *)(D_80093790 + 8) = x >> 7;
        *(s16 *)(D_80093790 + 0xA) = y >> 7;
        SpuSetVoiceAttr(D_80093790);
    }
}
