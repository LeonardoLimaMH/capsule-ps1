#include "common.h"

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

INCLUDE_ASM("asm/chess/nonmatchings/chess_801002CC", func_8010030C);

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

INCLUDE_ASM("asm/chess/nonmatchings/chess_801002CC", func_801007D8);

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

INCLUDE_ASM("asm/chess/nonmatchings/chess_801002CC", func_80100AF4);
