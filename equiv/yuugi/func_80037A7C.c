#include "common.h"

extern u8 D_800944B8[], D_800947E8[];
extern u8 D_80078CC8;
extern u16 D_80078C7C;

void func_80037A7C(u8 *v, u8 *p) {
    u8 *e = D_800944B8 + (v[3] >> 4) * 0x2AC;
    s16 k = *(s16 *)(e + 0x288);
    s32 pan = 0x40;
    s32 vol, l, r;

    if (D_80078CC8 == 0) {
        pan = D_800947E8[k * 0x1C + 0x1B] + v[0x12] + v[0x13] + p[1] - 0xC0;
    }
    if (pan < 0) {
        pan = 0;
    }
    if (pan >= 0x80) {
        pan = 0x7F;
    }
    *(s16 *)(v + 0x14) = pan;
    vol = (s32)(D_800947E8[k * 0x1C + 0x18] * D_80078C7C * p[5] * p[3]) >> 14;
    vol = (s32)(vol * v[0x10] * v[0x11]) >> 14;
    if (pan < 0x40) {
        l = vol;
        r = (pan * (vol << 1)) >> 7;
    } else if (pan == 0x40) {
        r = vol;
        l = vol;
    } else {
        r = vol;
        l = ((0x40 - (pan & 0x3F)) * (vol << 1)) >> 7;
    }
    e = D_800944B8 + (v[3] >> 4) * 0x2AC;
    l = (l * *(s16 *)(e + 0x28C)) >> 7;
    r = (r * *(s16 *)(e + 0x28E)) >> 7;
    *(s16 *)(v + 0xC) = (l * (v[0x1A] & 0x7F)) >> 7;
    *(s16 *)(v + 0xE) = (r * (v[0x1A] & 0x7F)) >> 7;
    if (p[0x11] >= 0x40) {
        l = *(u16 *)(v + 0xC) * *(u16 *)(v + 0xC);
        r = *(u16 *)(v + 0xE) * *(u16 *)(v + 0xE);
        *(s16 *)(v + 0xC) = l >> 14;
        *(s16 *)(v + 0xE) = r >> 14;
    }
}
