#include "ghidra.h"
#include "matching.h"
#include "common.h"

typedef struct {
    u8 unk_00[0x54];
    s32 unk_54;
    s32 unk_58;
} ChessUnk69E4C;




void func_8009CA60(u32 arg0) {
    s32 i;

    switch (arg0) {
    case 0:
        func_80012A20(func_80019F30(0x20013, 0x1F), 1, 0, 0);
        return;
    case 1:
        i = 0;
        do {
            MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x20013, i + 0x20), 1, 0);
            i++;
        } while (i < 4);
        return;
    case 2:
        i = 0;
        do {
            MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x20013, i + 0x24), 1, 0);
            i++;
        } while (i < 2);
        return;
    case 3:
        i = 0;
        do {
            MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x20013, 0x26), 1, 0);
            i++;
        } while (i < 1);
        return;
    case 4:
        func_80012A20(func_80019F30(0x20013, 0x27), 1, 0, 0);
        return;
    case 5:
        i = 0;
        do {
            MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x20013, i + 0x28), 1, 0);
            i++;
        } while (i < 2);
        return;
    }
}

