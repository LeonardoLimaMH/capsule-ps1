#include "common.h"

#include "common.h"

/* objeto de peça usado por func_80100AF4 */
typedef struct {
    u8 _p0[0x18];
    s32 f18;
    u8 _p1[0x1C];
    s32 f38;
    u8 _p2[0x1C];
    u8 f58;
    u8 f59;
    u8 f5A;
} S80100AF4;

extern void func_80012578();

void func_801002CC(void) {
    extern u16 D_8008EE44[];
    extern u8 D_80102870[];
    (*(void (**)())(((*D_8008EE44) * 4) + D_80102870))();
}

void func_8010030C(void) {
    extern u16 D_8008EE48[];
    extern u8 D_80085428[];
    u8 *p = D_80085428;
    switch ((s32)D_8008EE48[0]) {
    case 1:
        break;
    case 0:
        p[0x5D9] = 10;
        func_8001A464(10, 0x80120000);
        func_8001A464(func_800CA474(p), 0x8012AC9C);
        func_8001A464(func_800CA480(p), 0x8012EA88);
        func_8001A480(0x1B, 0x80120000);
        func_80019F30(0x12001B, func_80012578);
        func_80012578();
        break;
    case 2:
        func_8001A49C(0x80120000);
        func_8001A49C(0x8012AC9C);
        func_8001A49C(0x8012EA88);
        func_80012508();
        break;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_801002CC", func_8010040C);

void func_8010053C(void) {
    extern u16 D_8008EE48[];
    extern u8 D_800859F0[];
    extern s32 D_80119768[];
    switch ((s32)D_8008EE48[0]) {
    case 0:
        D_80119768[0] = 0;
        if (D_800859F0[0] & 4) func_80012578();
        else func_80012508();
        break;
    case 1:
        if (func_80019654()) func_80012578();
        break;
    case 2:
        func_800338DC(0x701F);
        func_80012578();
        break;
    case 3:
        if (D_800859F0[0] & 4) {
            if (func_800337EC() & 0x80) func_80012508();
        } else func_80012508();
        break;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_801002CC", func_80100618);

void func_801007D8(void) {
    extern u16 D_8008EE48[];
    extern u8 D_80085428[];
    extern u8 D_80069AD4[];
    u8 *p = D_80085428;
    switch ((s32)D_8008EE48[0]) {
    case 0: break;
    case 1:
        if (func_800220D4(p, 1, 1, 4) != 0) func_80012578();
        break;
    case 2:
        p = D_80069AD4;
        if (M2C_FIELD(p, s32 *, 0xDC) > 0) {
            M2C_FIELD(p, s32 *, 0xDC) -= 2;
        } else {
            M2C_FIELD(p, u16 *, 0xEA) += 8;
            if (M2C_FIELD(p, s16 *, 0xE8) < 0x140) M2C_FIELD(p, u16 *, 0xE8) += 1;
            if (M2C_FIELD(p, s32 *, 0xE0) < 0xC80) M2C_FIELD(p, s32 *, 0xE0) += 6;
        }
        func_8002CC74();
        if (M2C_GFIELD(D_80069AD4, s32, 0xE0) >= 0xC80 && M2C_GFIELD(D_80069AD4, s16, 0xE8) >= 0x140) {
            func_8001AD74(2);
            func_80034BD8(-3, 0);
            func_80033974(0x701F);
            func_80012508();
        }
        break;
    }
}

#include "common.h"

void func_80100900(void) {
    extern M2C_UNK D_8002E4D0[];
    extern M2C_UNK D_80069AD4[];
    extern M2C_UNK D_8008ED68[];
    M2C_GFIELD(D_80069AD4, u16, 0xEA) = (u16) (M2C_GFIELD(D_80069AD4, u16, 0xEA) + 8);
    func_8002CC74();
    if (M2C_GFIELD(D_8008ED68, s32, 0xA68) == 0) {
        M2C_GFIELD(D_8008ED68, s32, 0xA18) = 3;
        M2C_GFIELD(D_8008ED68, s32, 0xA1C) = 0;
        M2C_GFIELD(D_8008ED68, s32, 0xA24) = 1;
        func_80012200(D_8002E4D0);
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_801002CC", func_80100968);

void func_80100AF4(S80100AF4 *p) {
    extern M2C_UNK D_8008ED68[];
    s32 v;
    s32 a;
    u8 t;
    p->f38 |= 1;
    if (M2C_GFIELD(D_8008ED68, u16, 0xDC) == 4) {
        if (M2C_GFIELD(D_8008ED68, u16, 0xE0) == 0) {
            p->f38 &= ~1;
            if (p->f58 < 0x80) {
                t = p->f58 + 1;
                p->f58 = t;
                p->f5A = t;
                p->f59 = t;
            }
        } else if (M2C_GFIELD(D_8008ED68, u16, 0xE0) == 1) {
            p->f38 &= ~1;
            v = func_800372B4();
            if (v >= 0xFB) a = 0x29;
            else if (v >= 0x7E) a = 0x2A;
            else a = 0x2B;
            p->f18 = func_80019F30(0x6000A, a);
        }
    }
}
