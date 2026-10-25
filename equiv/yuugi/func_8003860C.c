/* stub-ret: mixed */
#include "common.h"

extern u8 D_800944B8[];
extern u8 D_80093D68[];
extern u8 D_800937D0[];
extern u32 D_8007142C[];
extern s32 D_80078C78;
extern s16 D_80078C7C;
extern void func_80038A60(s32);
extern void SpuSetKey(s32, u32);
extern s32 SpuGetKeyStatus(u32);

void func_8003860C(s32 a0) {
    u8 *p, *e;
    u32 *k;
    u32 mask = 0, key;
    s32 i, st;

    D_80078C7C = 0x7F;
    p = D_800944B8 + a0 * 0x2AC;
    for (i = 0; i < 16; i++, p += 0x28) {
        p[0x20] = 1;
        p[0x24] = 0xFF;
        *(u32 *)(p + 0) = 0;
        *(u32 *)(p + 4) = 0;
        p[0x22] = 0;
        *(u16 *)(p + 0x1C) = 0;
        *(u32 *)(p + 8) = 0;
        *(u32 *)(p + 0xC) = 0;
        *(u16 *)(p + 0x14) = 0x72;
        *(u16 *)(p + 0x16) = 0x72;
        *(u32 *)(p + 0x10) = 0;
        *(u16 *)(p + 0x18) = 0;
        p[0x23] = 0;
        p[0x25] = 0;
        p[0x27] = a0 << 4;
    }
    e = D_80093D68;
    k = D_8007142C;
    for (i = 0; i < D_80078C78; i++, k++, e += 0x4E) {
        if ((e[3] >> 4) != a0) continue;
        e[0] = i;
        *(u16 *)(e + 0x16) = 0;
        *(u16 *)(e + 0x14) = 0x40;
        e[0x1B] = 0;
        e[0x23] = 0; e[0x22] = 0; e[0x28] = 0;
        *(u16 *)(e + 0x24) = 0;
        *(u16 *)(e + 0x26) = 0;
        *(u16 *)(e + 0x2E) = 0;
        e[0x33] = 0; e[0x32] = 0; e[0x38] = 0;
        *(u16 *)(e + 0x34) = 0;
        *(u16 *)(e + 0x36) = 0;
        *(u16 *)(e + 0x3E) = 0;
        *(u16 *)(e + 0x48) = 0x40;
        *(u16 *)(e + 0x4A) = 0x40;
        key = *k;
        mask |= key;
        func_80038A60(i);
        do {
            SpuSetKey(0, key);
            st = SpuGetKeyStatus(key);
        } while (st != 2 && st != 0);
    }
    for (i = 0; i < 16; i++) {
        u8 *c = D_800937D0 + ((a0 << 4) + i) * 0x54;
        c[3] = 0x7F;
        c[0x13] = 0x3C;
        c[1] = 0x40;
        c[6] = 0;
        c[7] = 0x40;
        c[5] = 0x7F;
        *(u32 *)(c + 8) = 0x7F;
        *(u32 *)(c + 0xC) = 0x7F;
        c[2] = 0;
        *(u16 *)(c + 0x1E) = 0;
        *(u16 *)(c + 0x18) = 0;
        *(u16 *)(c + 0x20) = 0;
        c[0x1A] = 0;
        *(u16 *)(c + 0x30) = 0;
        c[0x22] = 0;
        c[0x35] = 0; c[0x34] = 0; c[0x36] = 0;
        *(u16 *)(c + 0x3A) = 0;
        *(u16 *)(c + 0x3C) = 0;
        c[0x45] = 0; c[0x44] = 0; c[0x4E] = 0;
        *(u16 *)(c + 0x46) = 0;
        *(u16 *)(c + 0x48) = 0;
        c[0x10] = 0;
        c[0x11] = 0;
        *(u16 *)(c + 0x26) = 0;
        c[0x12] = 0;
    }
    SpuSetKey(0, mask);
}
