#include "common.h"

extern u8 D_800947E8[], D_800944B8[];
extern s32 D_80078CCC;
extern s32 SpuGetReverb();
extern void SpuSetReverb(), SpuSetReverbModeParam();

#define H10 (*(u16 *)(e + 0x10))
#define H12 (*(u16 *)(e + 0x12))

static u8 *entry(u8 *p, u8 prog, s32 sub) {
    s16 k = *(s16 *)(D_800944B8 + (prog >> 4) * 0x2AC + 0x288);
    return *(u8 **)(D_800947E8 + k * 0x1C + 4) + ((p[0] * 16 + sub) * 32 + 0x820);
}

static void apply(u8 *e, u8 op, u8 *p) {
    switch (op) {
    case 1:
        e[1] = p[0x25];
        break;
    case 2:
        e[6] = p[0x25];
        break;
    case 3:
        e[7] = p[0x25];
        break;
    case 4:
        H10 = e[0x10] | ((0x7F - p[0x25]) << 8);
        break;
    case 5:
        H10 = e[0x10] | ((0x7F - p[0x25]) << 8) | 0x8000;
        break;
    case 6:
        H10 = (H10 & 0xFF0F) | ((p[0x25] << 1) & 0xF0);
        break;
    case 7:
        H10 = (p[0x25] >> 3) | (H10 & 0xFFF0);
        break;
    case 8:
        H12 = (H12 & 0x603F) | ((0x7F - p[0x25]) << 6);
        break;
    case 9:
        H12 = (H12 & 0x603F) | ((0x7F - p[0x25]) << 6) | 0x8000;
        break;
    case 10:
        H12 = (H12 & 0xFFC0) | ((s32)(0x7F - p[0x25]) >> 3);
        break;
    case 11:
        H12 = (H12 & 0xFFC0) | ((s32)(0x7F - p[0x25]) >> 3) | 0x20;
        break;
    case 12:
        if (p[0x25] < 0x41) {
            H12 |= 0x4000;
        } else {
            H12 &= 0xBFFF;
        }
        break;
    case 13:
        H10 = 0x80FF;
        H12 = 0x1FC0;
        break;
    }
}

void func_8003992C(u8 *p, u8 prog) {
    u8 attr[0x18];
    u8 *e;
    s32 i;

    if (p[0x24] == 0x10 && p[0x23] < 0xE) {
        for (i = 0; i < 0x10; i++) {
            apply(entry(p, prog, i & 0xFFFF), p[0x23], p);
        }
        return;
    }
    e = entry(p, prog, p[0x24] & 0xF); /* o original lê a entrada antes de testar o comando */
    switch (p[0x23]) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
        apply(e, p[0x23], p);
        break;
    case 15:
        if (SpuGetReverb() == 1) {
            SpuSetReverb(0);
        }
        if (p[0x25] != 0) {
            *(s32 *)(attr + 0) = 1;
            *(s32 *)(attr + 4) = p[0x25];
            D_80078CCC = p[0x25];
            SpuSetReverbModeParam(attr);
            SpuSetReverb(1);
        }
        break;
    case 16:
        *(s32 *)(attr + 0) = 6;
        *(s16 *)(attr + 8) = p[0x25] << 8;
        *(s16 *)(attr + 0xA) = p[0x25] << 8;
        SpuSetReverbModeParam(attr);
        SpuSetReverb(1);
        break;
    case 17:
        *(s32 *)(attr + 0) = 0x10;
        *(s32 *)(attr + 0x10) = p[0x25];
        SpuSetReverbModeParam(attr);
        break;
    case 18:
    case 19:
        *(s32 *)(attr + 0) = 8;
        *(s32 *)(attr + 0xC) = p[0x25];
        SpuSetReverbModeParam(attr);
        break;
    case 23:
        p[0x13] = p[0x25];
        break;
    }
}
