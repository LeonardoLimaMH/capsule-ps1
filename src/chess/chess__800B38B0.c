#include "ghidra.h"
#include "common.h"
#include "ghidra.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B38B0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B3AE4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B3C4C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B3D24);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B3EC4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B40F0);

#include "common.h"

void func_800B4284(void) {
    extern u16 D_8008EE4C[];
    switch ((*D_8008EE4C)) {                           /* irregular */
    case 0:
        func_800B3D24();
        return;
    case 1:
        func_800B3EC4();
        return;
    case 2:
        func_800B40F0();
        return;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B4304);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B4384);

#include "common.h"

void func_800B4400(void *arg0) {
    extern u8 D_8006388C[];
    extern u8 D_80063890[];
    extern u8 D_80100F94[];
    M2C_UNK var_a2;
    M2C_UNK var_a2_2;

    func_80020844(-0x48, -0x28, 0x90, 0x30, 0, 0, 0, 0, 4);
    func_8001F1A8(-0x30, -0x20, 0, 1, 0, D_80100F94, 1, 7, 3);
    var_a2 = 0;
    if (M2C_FIELD(arg0, u8 *, 0xD77) == 0) {
        var_a2 = 3;
    }
    func_8001F1A8(-0x28, -0xC, var_a2, 1, 0, D_8006388C, 0, 2, 3);
    var_a2_2 = 0;
    if (M2C_FIELD(arg0, u8 *, 0xD77) != 0) {
        var_a2_2 = 3;
    }
    func_8001F1A8(0, -0xC, var_a2_2, 1, 0, D_80063890, 0, 3, 3);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B4518);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B48F0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B4CA4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5020);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5184);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B52FC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5438);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5780);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B58EC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5BE0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5C4C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5DA0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5F8C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B61C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B63CC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B65CC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B678C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B698C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B6B70);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B6D2C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B6E24);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B711C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7200);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B74BC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B75C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7630);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7734);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7790);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B780C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7988);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7D64);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7F34);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B80E4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B81E0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8310);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8478);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B862C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8740);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B881C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8A0C);

#include "common.h"

void func_800B8DA0(void *arg0) {
    extern u8 D_8008610F[];
    u16 temp_v1;
    u8 temp_v0;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), s32 *, 0x10) == 0) {
        func_800185F8();
    }
    if (M2C_FIELD(arg0, s32 *, 0x34) & 0x7F) {
        temp_v1 = M2C_FIELD(arg0, u16 *, 0x7A);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if ((*D_8008610F) != 0) {
                M2C_FIELD(arg0, u16 *, 0x7A) = 1U;
                return;
            }
            break;
        case 1:
            M2C_FIELD(arg0, s16 *, 0x4A) = 0x1C;
            M2C_FIELD(arg0, s16 *, 0x4E) = 4;
            M2C_FIELD(arg0, u8 *, 0x5A) = 0U;
            M2C_FIELD(arg0, u8 *, 0x59) = 0U;
            M2C_FIELD(arg0, u8 *, 0x58) = 0U;
            M2C_FIELD(arg0, s16 *, 0x46) = 0;
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
            return;
        case 2:
            temp_v0 = M2C_FIELD(arg0, u8 *, 0x5A) + 2;
            M2C_FIELD(arg0, u8 *, 0x5A) = temp_v0;
            M2C_FIELD(arg0, u8 *, 0x59) = temp_v0;
            M2C_FIELD(arg0, u8 *, 0x58) = temp_v0;
            if ((temp_v0 & 0xFF) == 0x80) {
                M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
            }
            break;
        }
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8EC0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8F38);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B9020);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B90FC);

#include "ghidra.h"
