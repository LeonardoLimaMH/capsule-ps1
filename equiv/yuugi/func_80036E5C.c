#include "common.h"

extern u8 D_800922F0[], D_8009376C[];
extern s16 D_80093738;
extern u8 D_80078D51, D_80078D50;
extern void SpuGetAllKeysStatus(), SpuSetKey(), func_8003CD70(), func_80035894();
extern void DsSyncCallback(), DsControlF(), func_80035680();
extern s32 func_8003D518();

void func_80036E5C(void) {
    u8 *g = D_800922F0;
    u8 *s0, *d;
    s32 i, mask;
    u8 c, a1;

    SpuGetAllKeysStatus(D_8009376C);
    mask = 0;
    for (i = 0; i < 4; i++) {
        if (D_8009376C[0x14 + i] == 3) {
            mask |= 1 << (i + 0x14);
        }
    }
    if (mask != 0) {
        SpuSetKey(0, mask);
    }
    if (*(u16 *)D_800922F0 & 0x80) {
        if (*(s16 *)(g + 0x1192) != -1 && (s16)func_8003D518(*(s16 *)(g + 0x1192)) != 1) {
            func_8003CD70(*(s16 *)(g + 0x1192));
            *(u16 *)D_800922F0 &= 0xFF7F;
        }
    }
    if (g[0x112] != 0) {
        func_80035894();
        return;
    }
    s0 = g + 0x10;
    if (*(s16 *)(g + 0x110) != 0) {
        c = g[0x10];
        g[0x113] = 0;
        g[0x112] = g[0x10];
        *(u16 *)(g + 0x116) = *(u16 *)(s0 + 2);
        *(s32 *)(g + 0x118) = *(s32 *)(s0 + 4);
        *(s32 *)(g + 0x11C) = *(s32 *)(s0 + 8);
        *(s32 *)(g + 0x120) = *(s32 *)(s0 + 0xC);
        a1 = s0[1];
        g[0x114] = a1;
        switch (c) {
        case 0x44:
        case 0x45:
            if (*(s16 *)(g + 0x1196) == 0) {
                g[9] = a1;
                *(u16 *)(g + 0x1196) = *(u16 *)(s0 + 8);
            }
            break;
        case 0x29:
        case 0x2A:
            if (*(s16 *)(g + 0x146) == 0) {
                g[8] = a1;
                *(u16 *)(g + 0x146) = *(u16 *)(s0 + 8);
            }
            break;
        }
        D_80093738 = 8;
        D_80078D51 = 0;
        D_80078D50 = 0;
        func_80035894();
        s0 += 0x10;
        *(u16 *)(D_800922F0 + 0x110) -= 1;
    }
    for (i = 0; i < *(s16 *)(D_800922F0 + 0x110); i++) {
        d = D_800922F0 + i * 16;
        d[0x10] = s0[0];
        d[0x11] = s0[1];
        *(u16 *)(d + 0x12) = *(u16 *)(s0 + 2);
        *(s32 *)(d + 0x14) = *(s32 *)(s0 + 4);
        *(s32 *)(d + 0x18) = *(s32 *)(s0 + 8);
        *(s32 *)(d + 0x1C) = *(s32 *)(s0 + 0xC);
        s0 += 0x10;
    }
    if (*(u16 *)D_800922F0 & 4) {
        c = D_800922F0[0x124];
        if (c & 2) {
            D_800922F0[0x124] = 0;
            DsSyncCallback(func_80035680);
            DsControlF(0x10, 0);
        } else {
            D_800922F0[0x124] = c + 1;
        }
    }
}
