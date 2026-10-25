#include "common.h"

extern u8 D_80085428[], D_80063940[];
extern s32 D_8008ED84;
extern void func_8001A998(), func_80012074(), func_8001AA70(), func_800279D4(), func_800270D4();
extern void func_8001BAA0();

s32 func_8001B1A8(s32 slot, s32 flag, s32 sel) {
    s32 chk[2];
    u8 *buf = (u8 *)0x801CC000;
    u8 *g = D_80085428;
    u8 *A = buf + slot * 0x668 + 0x40;
    u8 *B = buf + slot * 0xBC8 + 0x1378;
    u8 *s0;
    s32 i;

    if (flag == 0) {
        sel = 0;
    }
    func_8001A998(A, 0x668);
    func_8001A998(B, 0xBC8);
    func_80012074(g, slot);
    s0 = g + sel;
    buf[slot * 8 + 4] = s0[2];
    buf[slot * 8 + 5] = s0[4];
    func_8001AA70(A, g + sel * 0x2BC + 0x50, 0x2BC);
    A[0x32D] = s0[0x5D6];
    A[0x32F] = s0[0x5D4];
    A[0x32E] = s0[6];
    for (i = 0; i < 0x67; i++) {
        if (sel == 0) {
            A[0x2BC + i] = (*(u32 *)(D_80063940 + i * 0x3C + 0x14) >> 5) & 1;
        } else {
            A[0x2BC + i] = (*(u32 *)(D_80063940 + i * 0x3C + 0x14) >> 6) & 1;
        }
    }
    func_800279D4(slot, sel);
    if (flag == 0) {
        *(s32 *)(buf + slot * 8 + 8) = D_8008ED84;
        func_8001AA70(B, g + 0x5C8, 6);
        func_800270D4(slot);
        B[6] = g[0x5D0];
        *(u16 *)(B + 8) = *(u16 *)(g + 0x5D2);
        B[0xA] = g[0x5D8];
    }
    func_8001BAA0(buf + 4, 0x1C, chk);
    func_8001BAA0(A, 0x334, chk);
    func_8001BAA0(B, 0x5E4, chk);
    for (i = 1; i < 2; i++) {
        func_8001AA70(buf + 0x20 * i + 4, buf + 4, 0x18);
        *(s32 *)(buf + 0x20 * i + 0x1C) = *(s32 *)(buf + 0x1C);
        func_8001AA70(A + 0x334 * i, A, 0x334);
        if (flag == 0) {
            func_8001AA70(B + 0x5E4 * i, B, 0x5E4);
        }
    }
    return 0;
}
