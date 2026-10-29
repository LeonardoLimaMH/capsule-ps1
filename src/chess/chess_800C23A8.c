#include "common.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C23A8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C2524);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C26DC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C28A8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C2AEC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C2EFC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C3108);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C31E8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C349C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C372C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C3944);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C3B54);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C3D9C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C3EC4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C416C);

#include "common.h"

void func_800C41E8(void) {
    extern u16 D_8008EE4C[];
    extern s8 D_8008EE6A[];
    switch ((*D_8008EE4C)) {
    case 0:
        func_800C3944();
        func_800125D8();
        return;
    case 1:
        func_800C3B54();
        return;
    case 2:
        func_800C3D9C();
        return;
    case 3:
        func_800C3EC4();
        return;
    case 4:
        func_80033974(0x8000);
        (*D_8008EE6A) = 0;
        func_80013668();
        func_8001611C(0x1000);
        func_8001E310();
        func_80012508();
        /* fallthrough */
    default:
        return;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C42A4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C44BC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C4600);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C471C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C47B8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C48DC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C4B40);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C4C18);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8", func_800C4D88);
