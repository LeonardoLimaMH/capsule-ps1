#include "common.h"
#include "yuugi.h"

typedef struct {
    s32 id;
    u8 pad[12];
} Entry78;

typedef struct {
    u8 f4;
    u8 pad[15];
} Entry7C;

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004386C", func_8004386C);

extern Entry78 D_80094B78[];
extern Entry7C D_80094B7C[];
extern s32 D_80094BF8[];
void func_800458A0(u8 *, s32);

extern s32 D_80094C50[];
extern u8 D_80094A78[];
extern u8 D_80094A7D[], D_80094A8D[], D_80094A9D[];
extern u8 D_80094AA8[];
extern s32 D_80094B6C, D_80094B68, D_80094B70;
void func_800457C4(void);
void func_8004349C(u8 *);
void ER_clear(void);
void DsReadySystemMode(s32);
void func_80045838(void);

void func_80043A90(s32 a0, s32 a1, s32 a2) {
    s32 *p = D_80094BF8;

    D_80094B78[*p].id = a0;
    D_80094B7C[*p].f4 = a1;
    func_800458A0((u8 *)p - 0x7B + (*p << 4), a2);
    if (++(*p) >= 8) {
        *p = 0;
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004386C", DsInit);

extern s32 D_80094C50[];
extern u8 D_80094A78[];
extern u8 D_80094A7D[], D_80094A8D[], D_80094A9D[];
extern u8 D_80094AA8[];
extern s32 D_80094B6C, D_80094B68, D_80094B70;
void func_800457C4(void);
void func_8004349C(u8 *);
void ER_clear(void);
void DsReadySystemMode(s32);
void func_80045838(void);
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
    *(&D_80094B6C + 0) = 0;
    *(&D_80094B68 + 0) = 0;
    *(&D_80094B70 + 0) = 0;
    for (i = 7; i >= 0; i--) {
        D_80094B78[i].id = 0;
    }
    D_80094BF8[0] = 0;
    ER_clear();
    DsReadySystemMode(0);
    func_80045838();
    return 1;
}
