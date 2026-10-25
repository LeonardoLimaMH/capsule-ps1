#include "common.h"

extern u8 D_800937D0[], D_80093790[];
extern s32 D_8007142C[];
extern u16 func_800375C0();
extern void SpuSetVoiceAttr();
extern s32 SpuGetKeyStatus();

void func_800380C8(u8 *v, s32 force) {
    u8 *t = D_800937D0 + v[3] * 0x54;
    u8 *s0;
    u32 k;
    s32 a3, d, a1;

    if (*(u16 *)(v + 0x26) != 0 || t[2] != 0 || *(s16 *)(t + 0x26) != 0 || t[7] != *(u16 *)(v + 0x48)
        || force != 0) {
        *(u16 *)(v + 0x48) = t[7];
        a3 = *(u16 *)(v + 0x2E) + (*(u16 *)(t + 0x1E) + *(u16 *)(t + 0x28));
        k = t[7];
        if (k < 0x40) {
            if (v[0x1D] != 0) {
                d = -(v[0x1D] * 2 * (0x40 - k));
            } else {
                d = 0;
            }
        } else if (k == 0x40) {
            d = 0;
        } else if (v[0x1C] != 0) {
            d = v[0x1C] * 2 * (k - 0x3F);
        } else {
            d = 0;
        }
        s0 = D_80093790;
        *(s32 *)(s0 + 4) = 0x10;
        a1 = a3 + ((*(u16 *)(v + 8) << 7) + d);
        *(s32 *)D_80093790 = D_8007142C[v[0]];
        *(s16 *)(s0 + 0x14) = func_800375C0((s16)a1 >> 7, a1 & 0x7F, v[0x1E], v[0x1F]);
        SpuSetVoiceAttr(s0);
    }
    if (*(u16 *)(v + 0x26) != 0 && SpuGetKeyStatus(D_8007142C[v[0]]) == 0) {
        *(u16 *)(v + 0x26) = 0;
        *(u16 *)(v + 0x2E) = 0;
    }
}
