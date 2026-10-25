#include "common.h"

extern u8 D_800112D8[];
extern u8 *D_80078914;
extern void func_80049BC0();

s32 LoadImage(s32 rect, s32 p) {
    func_80049BC0(D_800112D8, rect);
    return (*(s32 (**)())(D_80078914 + 8))(*(s32 *)(D_80078914 + 0x20), rect, 8, p);
}
