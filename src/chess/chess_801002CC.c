#include "common.h"

#include "common.h"

void func_801002CC(void) {
    extern u16 D_8008EE44[];
    extern u8 D_80102870[];
    (*(void (**)())(((*D_8008EE44) * 4) + D_80102870))();
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_801002CC", func_8010030C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_801002CC", func_8010040C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_801002CC", func_8010053C);

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
