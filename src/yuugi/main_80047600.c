#include "common.h"
#include "yuugi.h"

typedef struct {
    s32 unk_0;
    s32 unk_4;
    s32 unk_8;
    s32 unk_C;
    s32 unk_10;
    s32 unk_14;
} Estado_800733A0;
extern Estado_800733A0 D_800733A0;
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
    s32 *s = &D_800733A0;
    s32 v;
    s[0] += s[-1] * 4;
    s[1]--;
    v = VSync(-1);
    if (s[5] + 0x4B0 < v) {
        s[1] = -1;
    }
    if (s[1] != 0) {
        v = VSync(-1);
        if (!(s[5] + 0x4B0 < v)) return;
    }
    func_800478D0();
    if (D_800733C0 != 0) {
        ((void (*)())D_800733C0)(s[1] < 0 ? 5 : 2, s[3]);
    }
}

s32 func_8004784C(s32 arg0) {
    s32 r;
    s32 v;
    s32 *p;

    v = VSync(-1);
    p = D_800733B4;
    if (p[0] + 0x4B0 < v) {
        func_800478D0(p);
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
    }
    D_800733BC = 0;
}
