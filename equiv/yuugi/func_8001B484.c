#include "common.h"

extern u8 D_80085428[], D_80063940[];
extern s32 D_8008ED84;
extern s32 func_8001BAD8();
extern void func_8001AA70(), func_800278C8(), func_800267F0(), func_80026930();

s32 func_8001B484(s32 slot, s32 mode, s32 sel) {
    u8 chk[8];
    u8 *buf = (u8 *)0x801CC000;
    u8 *G = D_80085428;
    u8 *A = buf + slot * 0x668 + 0x40;
    u8 *B = buf + slot * 0xBC8 + 0x1378;
    u8 *s0, *s3;
    u32 *w;
    s32 ok, i;

    __asm__("" : : "r"(&sel));
    s3 = G + sel * 4;
    ok = 0;
    i = 0;
    s0 = buf;
    for (;;) {
        if ((u8)func_8001BAD8(buf + 4, 0x1C, chk) != 0) {
            ok = 1;
            if (mode == 2) {
                *(s32 *)(s3 + 0x2C) = chk[0];
            }
            break;
        }
        i++;
        s0 += 0x20;
        if (i >= 2) {
            break;
        }
        func_8001AA70(buf + 4, s0 + 4, 0x18);
        *(s32 *)(buf + 0x1C) = *(s32 *)(s0 + 0x1C);
    }
    if (!ok) {
        return 0;
    }
    ok = 0;
    i = 0;
    s0 = A;
    for (;;) {
        if (mode == 0 || mode == 3) {
            ok = 1;
            break;
        }
        if ((u8)func_8001BAD8(A, 0x334, chk) != 0) {
            ok = 1;
            break;
        }
        i++;
        s0 += 0x334;
        if (i >= 2) {
            break;
        }
        func_8001AA70(A, s0, 0x334);
    }
    if (!ok) {
        return 0;
    }
    ok = 0;
    i = 0;
    s0 = B;
    for (;;) {
        if (mode != 1) {
            ok = 1;
            break;
        }
        if ((u8)func_8001BAD8(B, 0x5E4, chk) != 0) {
            ok = 1;
            break;
        }
        i++;
        s0 += 0x5E4;
        if (i >= 2) {
            break;
        }
        func_8001AA70(B, s0, 0x5E4);
    }
    if (!ok) {
        return 0;
    }
    if (mode == 2) {
        s0 = G + sel;
        s0[2] = buf[slot * 8 + 4];
        s0[4] = buf[slot * 8 + 5];
        func_8001AA70(G + sel * 0x2BC + 0x50, A, 0x2BC);
        s0[0x5D6] = A[0x32D];
        s0[0x5D4] = A[0x32F];
        s0[6] = A[0x32E];
        for (i = 0; i < 0x67; i++) {
            w = (u32 *)(D_80063940 + i * 0x3C + 0x14);
            if (sel == 0) {
                *w = (*w & ~0x20) | ((A[0x2BC + i] & 1) << 5);
            } else {
                *w = (*w & ~0x40) | ((A[0x2BC + i] & 1) << 6);
            }
        }
        func_800278C8(slot, sel);
        return 1;
    }
    if (mode == 1) {
        func_800267F0();
        G[2] = buf[slot * 8 + 4];
        G[4] = buf[slot * 8 + 5];
        func_8001AA70(G + 0x50, A, 0x2BC);
        s0 = G + sel;
        s0[0x5D6] = A[0x32D];
        s0[0x5D4] = A[0x32F];
        s0[6] = A[0x32E];
        for (i = 0; i < 0x67; i++) {
            w = (u32 *)(D_80063940 + i * 0x3C + 0x14);
            if (sel == 0) {
                *w = (*w & ~0x20) | ((A[0x2BC + i] & 1) << 5);
            } else {
                *w = (*w & ~0x40) | ((A[0x2BC + i] & 1) << 6);
            }
        }
        D_8008ED84 = *(s32 *)(buf + slot * 8 + 8);
        func_8001AA70(G + 0x5C8, B, 6);
        func_800278C8(slot, sel);
        func_80026930(slot);
        G[0x5D0] = B[6];
        *(u16 *)(G + 0x5D2) = *(u16 *)(B + 8);
        G[0x5D8] = B[0xA];
        return 1;
    }
    for (i = 0; i < 3; i++) {
        G[0x34 + i] = buf[i];
        G[0x38 + i * 8] = buf[i * 8 + 4];
        G[0x39 + i * 8] = buf[i * 8 + 5];
        *(s32 *)(G + 0x3C + i * 8) = *(s32 *)(buf + i * 8 + 8);
    }
    return 1;
}
