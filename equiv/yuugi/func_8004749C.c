#include "common.h"

extern s32 D_800733BC;
extern s32 D_80073390[], D_800733A0;
#define D_8007339C D_80073390[3]
#define D_800733A4 (&D_800733A0)[1]
extern s32 D_800733B4, D_800733A8[];
#define D_800733B0 D_800733A8[2]
extern void func_800475CC();
extern void func_80047778();
extern s32 ER_active();
extern u8 *DsLastPos();
extern s32 DsPacket();
extern s32 VSync();
extern s32 DsDataCallback();

s32 func_8004749C(u8 *pos, s32 a1, s32 a2, s32 mode) {
    u8 loc[8];
    u8 *src;
    s32 r, i;

    if (D_800733BC == 1 || ER_active() != 0) {
        return 0;
    }
    D_8007339C = 0x200;
    D_800733A0 = a2;
    D_800733A4 = a1;
    src = pos != 0 ? pos : DsLastPos(0);
    for (i = 0; i < 4; i++) {
        loc[i] = src[i];
    }
    mode |= 0x20;
    r = DsPacket(mode & 0xFF, loc, 6, func_800475CC, -1);
    if (r == 0) {
        return 0;
    }
    D_800733B4 = VSync(-1);
    if (D_800733A8[0] & 1) {
        D_800733B0 = DsDataCallback(func_80047778);
    }
    D_800733BC = 1;
    return r;
}
