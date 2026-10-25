#include "common.h"

extern u8 D_8007891E;
extern char D_8001132C[];
extern void (*D_80078918)();
extern volatile u32 *D_80078A30;
extern volatile u32 *D_80078A24;
extern s32 D_80078A58;
extern s32 D_80078A5C;
extern u8 *D_80078914;
extern s32 func_8004C19C();
extern void func_8004C798();
extern s32 VSync();

s32 DrawOTag2(u32 *ot) {
    if (D_8007891E >= 2) {
        D_80078918(D_8001132C, ot);
    }
    D_80078A58 = VSync(-1) + 0xF0;
    D_80078A5C = 0;
    for (;;) {
        if (!(*D_80078A30 & 0x1000000) && (*D_80078A24 & 0x4000000)) {
            break;
        }
        if (func_8004C19C() != 0) {
            return -1;
        }
    }
    DMACallback(2, func_8004C798);
    (*(void (**)())(D_80078914 + 0x18))(ot);
    return 0;
}
