#include "common.h"
#include "yuugi.h"

extern s32 D_800733A0[];
extern s32 D_800733B4[];
extern s32 D_800733BC;
extern s32 D_800733C0;
extern s32 VSync();
extern void func_800478D0();
extern void DsFlush();
extern void ER_clear();
extern s32 DsDataCallback();
extern void func_80044BC4();
extern s32 DsCommand();
extern u8 DsReady();

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80047600", func_80047600);

void func_80047778(void) {
    register s32 *s asm("s0") = D_800733A0;
    s32 a = s[-1];
    s32 b = s[0];
    s32 c = s[1];

    s[0] = b + a * 4;
    s[1] = c - 1;
    if (s[5] + 0x4B0 < VSync(-1)) {
        s[1] = -1;
    }
    if (s[1] != 0 && !(s[5] + 0x4B0 < VSync(-1))) {
        return;
    }
    func_800478D0();
    if (D_800733C0 != 0) {
        ((void (*)())D_800733C0)(s[1] < 0 ? 5 : 2, s[3]);
    }
}

s32 func_8004784C(s32 arg0) {
    s32 r;
    s32 v;
    register s32 *p asm("a0");

    v = VSync(-1);
    p = D_800733B4;
    if (p[0] + 0x4B0 < v) {
        func_800478D0();
        r = -1;
    } else {
        r = p[-4];
    }
    DsReady(arg0);
    return r;
}

s32 func_800478BC(s32 arg0) {
    extern s32 D_800733C0;
    s32 temp_v0;

    temp_v0 = D_800733C0;
    D_800733C0 = arg0;
    return temp_v0;
}

extern s32 D_800733A0[];
extern s32 D_800733B4[];
extern s32 D_800733BC;
extern s32 D_800733C0;
extern s32 VSync();
extern void func_800478D0(void);
extern void DsFlush();
extern void ER_clear();
extern s32 DsDataCallback();
extern void func_80044BC4();
extern s32 DsCommand();
extern u8 DsReady();

void func_800478D0(void) {
    s32 *d = &D_800733BC;

    if (*d == 1) {
        DsFlush();
        ER_clear();
        if (d[-5] & 1) {
            DsDataCallback(d[-3]);
        }
        func_80044BC4(1, 0);
        DsCommand(9, 0, 0, -1);
        D_800733BC = 0;
    }
}
