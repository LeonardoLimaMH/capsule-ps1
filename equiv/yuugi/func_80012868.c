#include "common.h"

extern u8 D_8008ED68[], D_80086228[], D_800922F0[], D_80010000[];
extern void func_80012A14(), PutDispEnv(), PutDrawEnv(), DrawOTag(), func_800131C0(), func_800134BC();
extern void ClearOTagR(), func_80012150(), func_80013A68(), func_8001DB8C(), func_8001DB68();
extern void func_8001E414(), func_800196A0(), func_80012A98(), func_80013350(), GsClearVcount();
extern s32 func_800337EC();
extern s32 VSync();

void func_80012868(void) {
    u8 *s1 = D_8008ED68;
    u8 *buf, *old, *nb, *p;
    s32 n, r;

    if (*(s32 *)(s1 + 0xF4) == 1) {
        func_80012A14();
    }
    PutDispEnv(*(u8 **)D_8008ED68 + 0x5C);
    PutDrawEnv(*(u8 **)D_8008ED68);
    DrawOTag(*(u8 **)D_8008ED68 + 0x108C);
    func_800131C0();
    func_800134BC();
    if (s1[0x103] < 2) {
        n = *(s32 *)(s1 + 0x18) + 1;
    } else {
        n = *(s32 *)(s1 + 0x18) + s1[0x103];
    }
    buf = D_80086228;
    old = *(u8 **)s1;
    *(s32 *)(s1 + 0x18) = n;
    nb = buf;
    if (old == buf) {
        nb = buf + 0x4594;
    }
    *(u8 **)s1 = nb;
    *(u16 *)(s1 + 0xF2) = nb != buf;
    ClearOTagR(nb + 0x70, 0x408);
    p = *(u8 **)s1;
    *(u8 **)(p + 0x1090) = p + 0x1094;
    func_80012150();
    func_80013A68();
    r = func_800337EC();
    func_8001DB8C(D_80010000, (s16)r, D_800922F0[0x112], D_800922F0[0x113]);
    func_8001DB68();
    func_8001E414();
    func_800196A0();
    func_80012A98();
    DrawSync(0);
    func_80013350();
    VSync(s1[0x103]);
    GsClearVcount();
    s1[0x103] = s1[0x102];
}
