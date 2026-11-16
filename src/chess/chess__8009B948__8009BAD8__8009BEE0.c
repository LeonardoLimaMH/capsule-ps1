#include "ghidra.h"
#include "matching.h"
#include "common.h"

typedef struct {
    u8 unk_00[0x54];
    s32 unk_54;
    s32 unk_58;
} ChessUnk69E4C;

void func_8009BEE0(int param_1)
{
    u8 value;
    int i;
    int result;
    int j;
    u8 *out;
    u8 *dst;
    u8 *base;
    u32 side;

    side = *(u8 *)(param_1 + 0x5FA);
    result = func_800A8E34(param_1, side, *(u8 *)(param_1 + side + 0x5FB));
    if (result != 0) {
        i = 0;
        do {
            result = func_800A8E34(param_1, side, i);
            if (result == 0) {
                *(u8 *)(param_1 + side + 0x5FB) = i;
                break;
            }
            i++;
        } while (i < 5);
    }
    j = 0;
    base = (u8 *)(side * 2 + param_1 + 0x601);
    do {
        dst = base + j;
        out = (u8 *)(param_1 + j);
        value = *(u8 *)(param_1 + (side * 0x2E8 + *(u8 *)(param_1 + side + 0x5FB) * 0x7C) + j + 0x2D);
        j++;
        out[0x616] = value;
        *dst = value;
    } while (j < 2);
}
