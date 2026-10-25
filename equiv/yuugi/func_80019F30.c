#include "common.h"

extern u8 D_800700E4[], D_8006DDE4[];
extern s32 func_8001A1DC(), func_8001A284(), func_8001A2AC(), func_8001A2D4(), func_8001A2FC();
extern s32 func_8001A324(), func_8001A34C(), func_8001A374(), func_8001A39C(), func_8001A25C();
extern s32 func_8001A270(), func_8001A3A4(), func_8001A3B0(), func_8001A3D8(), func_8001A400();

s32 func_80019F30(u32 id, s32 a1) {
    u32 k = id & 0xFF0000;
    u8 *e;
    s32 p0, p1;

    if (k == 0x110000 || k == 0x120000) {
        e = D_800700E4 + (id & 0xFFFF) * 8;
    } else {
        e = D_8006DDE4 + (id & 0xFFFF) * 8;
    }
    p1 = *(s32 *)(e + 4);
    p0 = *(s32 *)e;
    switch (k) {
    case 0x000000:
    case 0x110000:
    case 0x120000:
        return func_8001A1DC(p1, a1, p0, k);
    case 0x010000:
        return func_8001A284(p1, a1, p0, k);
    case 0x020000:
        return func_8001A2AC(p1, a1, p0, k);
    case 0x050000:
        return func_8001A2D4(p1, a1, p0, k);
    case 0x060000:
        return func_8001A2FC(p1, a1, p0, k);
    case 0x070000:
        return func_8001A324(p1, a1, p0, k);
    case 0x080000:
        return func_8001A34C(p1, a1, p0, k);
    case 0x090000:
        return func_8001A374(p1, a1, p0, k);
    case 0x0A0000:
        return func_8001A39C(p1, a1, p0, k);
    case 0x0B0000:
        return func_8001A25C(p1, a1, p0, k);
    case 0x0C0000:
        return func_8001A270(p1, a1, p0, k);
    case 0x0D0000:
        return func_8001A3A4(p1, a1, p0, k);
    case 0x0E0000:
        return func_8001A3B0(p1, a1, p0, k);
    case 0x0F0000:
        return func_8001A3D8(p1, a1, p0, k);
    case 0x100000:
        return func_8001A400(p1, a1, p0, k);
    }
    return 0;
}
