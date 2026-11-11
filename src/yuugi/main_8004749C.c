#include "common.h"
#include "yuugi.h"

extern s32 D_800733BC[];
extern s32 D_800733B4[];
extern void func_800475CC();
extern void func_80047778();
extern s32 ER_active();
extern void *DsLastPos(s32);
extern s32 DsPacket(s32, void *, s32, void (*)(), s32);
extern s32 VSync(s32);
extern s32 DsDataCallback(void (*)());

s32 func_8004749C(void *pos, s32 a1, s32 a2, s32 mode) {
    struct loc_s { u8 b[4]; } loc;
    s32 r;

    if (D_800733BC[0] == 1 || ER_active() != 0) {
        return 0;
    }
    D_800733BC[-8] = 0x200;
    D_800733BC[-7] = a2;
    D_800733BC[-6] = a1;
    if (pos == 0) {
        loc = *(struct loc_s *)DsLastPos(0);
    } else {
        loc = *(struct loc_s *)pos;
    }
    mode |= 0x20;
    r = DsPacket(mode & 0xFF, &loc, 6, func_800475CC, -1);
    if (r == 0) {
        return 0;
    }
    D_800733B4[0] = VSync(-1);
    if (D_800733B4[-3] & 1) {
        D_800733B4[-1] = DsDataCallback(func_80047778);
    }
    D_800733B4[2] = 1;
    return r;
}
