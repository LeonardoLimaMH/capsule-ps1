#include "common.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8__800C28A8__800C31E8", func_800C31E8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8__800C28A8__800C31E8", func_800C349C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8__800C28A8__800C31E8", func_800C372C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8__800C28A8__800C31E8", func_800C3944);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8__800C28A8__800C31E8", func_800C3B54);

void func_800C3D9C(arg0)
u8 *arg0;
{
    extern u16 D_8008EE50[];
    extern int func_800CA69C();
    extern int func_800A11C0();
    extern int func_8001264C();
    extern int func_800220B8();
    extern int func_80012628();
    extern int func_800220D4();
    extern int func_800125D8();

    switch (*D_8008EE50) {
    case 0:
        if (func_800A11C0(arg0, func_800CA69C(arg0), 0) != 0) {
            goto label_220b8;
        }
        func_8001264C(2);
        return;
    case 1:
        if (func_800220D4(arg0, 1, func_800CA69C(arg0), 0) != 0) {
            func_80012628();
        }
        return;
    case 2:
        if (func_800A11C0(arg0, 1 - func_800CA69C(arg0), 1) != 0) {
label_220b8:
            func_800220B8(arg0);
            func_80012628();
            return;
        }
        func_8001264C(4);
        return;
    case 3:
        if (func_800220D4(arg0, 1, 1 - func_800CA69C(arg0), 0) != 0) {
            func_80012628();
        }
        return;
    case 4:
        func_800125D8();
        return;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C23A8__800C28A8__800C31E8", func_800C3EC4);
