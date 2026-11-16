#include "ghidra.h"
#include "matching.h"
#include "common.h"

typedef struct {
    u8 unk_00[0x54];
    s32 unk_54;
    s32 unk_58;
} ChessUnk69E4C;

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009B948__8009BAD8__8009BEE0__8009C5C4", func_8009C5C4);

void func_8009C6F8(void) {
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x20014, 3), 1, 0);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 1), 1, 0);
}

void func_8009C758(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x20014, var_s0 + 6), 1, 0);
        var_s0 += 1;
    } while (var_s0 < 7);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 3), 1, 0);
}

void func_8009C7D4(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x20014, var_s0 + 4), 1, 0);
        var_s0 += 1;
    } while (var_s0 < 2);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 2), 1, 0);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 7), 1, 0);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 6), 1, 0);
}

void func_8009C898(void) {
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x20013, 0x1E), 1, 0);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 8), 1, 0);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 9), 1, 0);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x20014, 0x20), 1, 0);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 0xA), 1, 0);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009B948__8009BAD8__8009BEE0__8009C5C4", func_8009C964);
