#include "ghidra.h"
#include "matching.h"
#include "common.h"

typedef struct {
    u8 unk_00[0x54];
    s32 unk_54;
    s32 unk_58;
} ChessUnk69E4C;



void func_8009BFD4(s32 arg0, s32 arg1) {
    s32 i;
    u32 uVar1;
    s32 uVar2;

    switch (arg1) {
    case 0:
        i = 0;
        do {
            MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x20014, i + 0xd), 1, 0);
            i++;
        } while (i < 5);
        return;
    case 1:
        i = 0;
        do {
            MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x20014, i + 0x12), 1, 0);
            i++;
        } while (i < 5);
        return;
    case 2:
        uVar1 = 0x50014;
        uVar2 = 4;
        break;
    case 3:
        uVar1 = 0x20014;
        uVar2 = 0x17;
        break;
    default:
        return;
    }
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(uVar1, uVar2), 1, 0);
}


