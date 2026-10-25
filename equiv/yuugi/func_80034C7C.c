#include "common.h"

extern u8 D_800922F0[];

s32 func_80034C7C(s32 a) {
    s32 m1[4];
    s32 m2[4];
    s32 m3[4];
    volatile s32 pad[2]; /* mesmo tamanho de quadro do original */
    u16 f;

    if ((s16)a == *(s16 *)(D_800922F0 + 0x1190)) {
        ((u8 *)m1)[0] = 0x46;
        ((s16 *)m1)[1] = a;
        m1[3] = 0x801F6800;
        func_80036DB0(m1);
        return 0;
    }
    f = *(u16 *)D_800922F0 | 2;
    *(u16 *)D_800922F0 = f;
    if (f & 0x80) {
        ((u8 *)m3)[0] = 0x45;
        m3[2] = -0x80;
        ((u8 *)m3)[1] = 0;
        func_80036DB0(m3);
        ((u8 *)m2)[0] = 0x49;
        func_80036DB0(m2);
    }
    ((u8 *)m2)[0] = 0x47;
    func_80036DB0(m2);
    ((u8 *)m1)[0] = 0x2C;
    ((s16 *)m1)[1] = a;
    func_80036DB0(m1);
    ((u8 *)m1)[0] = 0x4A;
    ((s16 *)m1)[1] = a;
    func_80036DB0(m1);
    ((u8 *)m1)[0] = 0x11;
    func_80036DB0(m1);
    return 0;
}
