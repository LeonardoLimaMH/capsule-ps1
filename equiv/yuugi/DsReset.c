#include "common.h"

extern s32 D_80094C50[];
extern u8 D_80094A78[];
extern u8 D_80094A7D[], D_80094A8D[], D_80094A9D[];
extern u8 D_80094AA8[];
extern s32 D_80094B6C, D_80094B68, D_80094B70, D_80094BF8;
extern u8 D_80094B78[];

s32 DsReset(void) {
    s32 i;

    func_800457C4();
    D_80094C50[0] = 0;
    D_80094C50[1] = 0;
    D_80094C50[2] = 0;
    *(s32 *)(D_80094A78 + 0x20) = 0;
    *(s32 *)(D_80094A78 + 0x10) = 0;
    *(s32 *)D_80094A78 = 0;
    D_80094A78[0x24] = 0;
    D_80094A78[0x14] = 0;
    D_80094A78[4] = 0;
    for (i = 0; i < 8; i++) {
        D_80094A7D[i] = 0;
        D_80094A8D[i] = 0;
        D_80094A9D[i] = 0;
    }
    for (i = 0; i < 8; i++) {
        func_8004349C(D_80094AA8 + i * 0x18);
    }
    D_80094B6C = 0;
    D_80094B68 = 0;
    D_80094B70 = 0;
    for (i = 7; i >= 0; i--) {
        *(s32 *)(D_80094B78 + i * 16) = 0;
    }
    D_80094BF8 = 0;
    ER_clear();
    DsReadySystemMode(0);
    func_80045838();
    return 1;
}
