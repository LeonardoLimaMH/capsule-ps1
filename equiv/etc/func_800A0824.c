#include "common.h"

extern char D_8006B1FC[];
extern s16 D_800B3B3C;
extern s16 D_800B3B70[];
extern void func_80020844(s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_800A225C(u8 *, s32);
extern s32 func_800A150C(void *, s32, s32, s32, s32);

s32 func_800A0824(u8 *p) {
    func_80020844(-0x90, p[0x5D0] == 2 ? -0x58 : -0x38, 0x120, 0x38, 0, 0, 0, 0, 5);
    func_800A225C(p, 0);
    if (p[0x5D0] == 2) {
        func_80020844(-0x90, 0x28, 0x120, 0x38, 0, 0, 0, 0, 5);
        return func_800A225C(p, 1);
    }
    if (p[0x5DC] == 0) return func_800A150C(D_8006B1FC, 0, D_800B3B3C, -0x40, 0x20);
    return func_800A150C(p + 0x50, 0, D_800B3B70[D_800B3B3C], -0x40, 0x20);
}
