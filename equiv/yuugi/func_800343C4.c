#include "common.h"

extern u8 *D_80092430;
extern u8 D_80093490[], D_800934D0[], D_800922F0[];
extern s32 D_80078C84, D_80078D40, D_80078D44, D_80078D48;
extern s16 D_80078D3C;
extern u16 D_80078D4C;
extern u8 D_80078D4E;
extern s32 SpuSetKeyOnWithAttr(), SpuWrite();
extern void SpuSetKey(), SpuSetTransferStartAddr(), SpuWrite0();
extern void SpuSetTransferCallback(), func_80034AD4();
extern s32 SpuIsTransferCompleted();

s32 func_800343C4(u16 id, u8 ch, s32 pan) {
    u8 *A = D_80093490;
    u8 *t = D_80092430 + id * 16;
    u8 *g = D_800922F0;
    u8 *e;
    s32 vl, v, i;
    s16 sp = pan;

    vl = ((*(u32 *)(t + 4) & 0xFF000000) >> 17) | 0xFF;
    *(s16 *)(A + 8) = vl;
    *(s16 *)(A + 0xA) = ((*(u32 *)(t + 8) & 0xFF000000) >> 17) | 0xFF;
    if (sp != 0) {
        if ((u16)(pan - 1) < 0x80) {
            *(s16 *)(A + 8) = (vl * (0x80 - sp)) / 128;
        }
        if ((u16)(pan + 0x80) < 0x80) {
            *(s16 *)(A + 0xA) = (*(s16 *)(A + 0xA) * ((s16)pan + 0x80)) / 128;
        }
    }
    e = *(u8 **)(g + 0x140) + id * 16;
    *(s32 *)A = 1 << (ch + 0x14);
    *(u16 *)(A + 0x16) = *(u16 *)e;
    *(s32 *)(A + 0x1C) = *(s32 *)(e + 0xC);
    SpuSetKey(0, 1 << (ch + 0x14));
    g[0x125] |= 1 << ch;
    e = *(u8 **)(g + 0x140) + id * 16;
    g[0x127 + ch] = e[2];
    *(u16 *)(g + ch * 2 + 0x12C) = id;
    v = *(s32 *)(A + 0x1C);
    if (v == 0) {
        return 0;
    }
    if (v > 0) {
        return SpuSetKeyOnWithAttr(A);
    }
    D_80078C84 = 1;
    if (D_80078D3C != 0) {
        return D_80078D3C;
    }
    for (i = 0; i < 0x40; i += 16) {
        *(s32 *)(D_800934D0 + i) = *(s32 *)(A + i);
        *(s32 *)(D_800934D0 + i + 4) = *(s32 *)(A + i + 4);
        *(s32 *)(D_800934D0 + i + 8) = *(s32 *)(A + i + 8);
        *(s32 *)(D_800934D0 + i + 0xC) = *(s32 *)(A + i + 0xC);
    }
    D_80078D3C = 1;
    D_80078D4C = ch;
    v = *(s32 *)(D_800934D0 + 0x1C);
    D_80078D4E = 0;
    D_80078D44 = v;
    *(s32 *)(D_800934D0 + 0x1C) = (D_80078D4C << 12) + 0x1010;
    D_80078D48 = *(u32 *)(D_80092430 + id * 16 + 8) & 0xFFFFFF;
    for (i = 0; SpuIsTransferCompleted(0) == 0;) {
        i++;
        if (0xFFFF < i) {
            break;
        }
    }
    if (i == 0x10000) {
        return 0x10000;
    }
    if (D_80078D40 < i) {
        D_80078D40 = i;
    }
    SpuSetTransferStartAddr((D_80078D4C << 12) + 0x1010);
    SpuWrite0(0x1000);
    for (i = 0; SpuIsTransferCompleted(0) == 0;) {
        i++;
        if (0xFFFF < i) {
            break;
        }
    }
    if (i == 0x10000) {
        return 0x10000;
    }
    if (D_80078D40 < i) {
        D_80078D40 = i;
    }
    SpuSetTransferStartAddr((D_80078D4C << 12) + 0x1010);
    SpuSetTransferCallback(func_80034AD4);
    return SpuWrite(D_80078D44, D_80078D48);
}
