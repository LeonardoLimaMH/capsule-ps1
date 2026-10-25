#include "common.h"

extern s32 D_80094C50[];
extern u8 D_80094A78[], D_80094AA8[];
extern s32 D_80094B6C, D_80094B68, D_80094B70, D_80094B78[], D_80094BF8;
extern s32 func_80045848();
extern void func_8004349C(), func_8004489C(), func_80044AD4(), func_80044AE0();
extern void func_80044AEC(), func_80044AC8(), ER_clear(), DsReadySystemMode();
extern void func_8004386C(), func_80044794(), func_80044868(), func_800446F0();

s32 DsInit(void) {
    s32 i;

    if (func_80045848() != 0) {
        return 0;
    }
    D_80094C50[0] = 0;
    D_80094C50[1] = 0;
    D_80094C50[2] = 0;
    *(s32 *)(D_80094A78 + 0x20) = 0;
    *(s32 *)(D_80094A78 + 0x10) = 0;
    *(s32 *)(D_80094A78 + 0x00) = 0;
    D_80094A78[0x24] = 0;
    D_80094A78[0x14] = 0;
    D_80094A78[0x04] = 0;
    for (i = 0; i < 8; i++) {
        D_80094A78[5 + i] = 0;
        D_80094A78[0x15 + i] = 0;
        D_80094A78[0x25 + i] = 0;
    }
    for (i = 0; i < 8; i++) {
        func_8004349C(D_80094AA8 + i * 0x18);
    }
    D_80094B6C = 0;
    D_80094B68 = 0;
    D_80094B70 = 0;
    for (i = 7; i >= 0; i--) {
        D_80094B78[i * 4] = 0;
    }
    D_80094BF8 = 0;
    func_8004489C();
    func_80044AD4(func_8004386C);
    func_80044AE0(func_80044794);
    func_80044AEC(func_80044868);
    func_80044AC8(func_800446F0);
    ER_clear();
    DsReadySystemMode(0);
    return 1;
}
