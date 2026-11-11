#include "common.h"

void func_800A3434(void) {
    extern s8 D_800F2CD0[];
    extern s16 D_800F2CD2[];
    (*D_800F2CD0) = 0;
    (*D_800F2CD2) = 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A3434", func_800A3448);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A3434", func_800A366C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A3434", func_800A4320);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A3434", func_800A4984);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A3434", func_800A4BF8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A3434", func_800A510C);

void func_800A52C4(void) {
    extern s32 D_800ED8D8[];
    (*D_800ED8D8) = 0;
    func_800BD57C();
    func_800BD66C(1);
}

s32 func_800A52F0(void) {
    extern struct { u8 _p[0x420]; s32 a; s32 b; } D_800EFF58;
    s32 r = 0;
    register s32 a asm("a0") = D_800EFF58.a;
    if (a != 0) {
        if (a >= 0) {
            register s32 c asm("v0") = a < 3;
            if (c) {
                if (D_800EFF58.b > 0) {
                    D_800EFF58.b--;
                    func_800BD684();
                } else {
                    D_800EFF58.a = 0;
                }
            }
        }
    } else if (D_800EFF58.b == 0) {
        r = -1;
    }
    return r;
}
