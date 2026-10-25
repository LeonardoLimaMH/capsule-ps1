/* stub-ret: mixed */
#include "common.h"

extern u8 D_80093D68[];
extern u32 D_8007142C[];
extern u32 D_80093790;
extern s32 D_80078C78;
extern void SpuSetVoiceAttr(void *);
extern void SpuSetKey(s32, u32);
extern s32 SpuGetKeyStatus(u32);

#define ATTR ((u8 *)&D_80093790)

void func_80039724(u8 ch, u8 note) {
    u8 *e = D_80093D68;
    u32 *k = D_8007142C;
    u32 mask = 0;
    s32 i, st;

    for (i = 0; i < D_80078C78; i++, e += 0x4E, k++) {
        if (ch != e[3] || note != *(u16 *)(e + 6)) continue;
        if (e[0x1B] == 0) {
            *(u32 *)(ATTR + 4) = 0x60100;
            D_80093790 = *k;
            *(u16 *)(ATTR + 0x3A) = *(u16 *)(e + 0x40);
            *(u16 *)(ATTR + 0x3C) = *(u16 *)(e + 0x42);
            *(s32 *)(ATTR + 0x24) = *(u16 *)(e + 0x44);
            SpuSetVoiceAttr(ATTR);
            mask |= *k;
            do {
                SpuSetKey(0, *k);
                st = SpuGetKeyStatus(*k);
            } while (st != 2 && st != 0);
            *(u16 *)(e + 0x16) = 0;
        } else {
            e[0x1A] |= 0x80;
        }
    }
    if (mask) {
        do {
            SpuSetKey(0, mask);
            st = SpuGetKeyStatus(mask);
        } while (st != 2 && st != 0);
    }
}
