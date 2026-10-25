#include "common.h"

extern u8 *D_80078914;
extern s32 D_800789BC[];
extern volatile u32 *D_80078A30, *D_80078A24;
extern s32 D_80078A58, D_80078A5C;
extern u8 D_800112F0[];
extern void func_80049BC0();
extern s32 func_8004C19C();
extern void func_8004C798();
extern s32 DMACallback();
extern s32 VSync();

s32 MoveImage2(s16 *rect, s32 x, s32 y) {
    func_80049BC0(D_800112F0, rect);
    D_80078A58 = VSync(-1) + 0xF0;
    D_80078A5C = 0;
    while ((*D_80078A30 & 0x1000000) || !(*D_80078A24 & 0x4000000)) {
        if (func_8004C19C() != 0) {
            return -1;
        }
    }
    DMACallback(2, func_8004C798);
    if (rect[2] == 0) {
        return -1;
    }
    if (rect[3] == 0) {
        return -1;
    }
    D_800789BC[1] = (y << 16) | (x & 0xFFFF);
    D_800789BC[0] = *(s32 *)rect;
    D_800789BC[2] = *(s32 *)(rect + 2);
    (*(void (**)())(D_80078914 + 0x18))(D_800789BC - 2);
    return 0;
}
