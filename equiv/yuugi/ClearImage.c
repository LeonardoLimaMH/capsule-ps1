#include "common.h"

extern u8 D_800112C0[];
extern u8 *D_80078914;
extern void func_80049BC0();

s32 ClearImage(s32 rect, s32 r, s32 g, s32 b) {
    func_80049BC0(D_800112C0, rect);
    return (*(s32 (**)())(D_80078914 + 8))(*(s32 *)(D_80078914 + 0xC), rect, 8,
                                           ((b & 0xFF) << 16) | ((g & 0xFF) << 8) | (r & 0xFF));
}
