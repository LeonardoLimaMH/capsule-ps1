#include "common.h"

extern u8 D_8007891D[];
extern char D_80011244[];
extern void (*D_80078918)();
extern u8 *D_80078914;

s32 SetGraphQueue(s32 mode) {
    u8 old = D_8007891D[0];

    if (D_8007891D[1] >= 2) {
        D_80078918(D_80011244, mode);
    }
    if (mode != D_8007891D[0]) {
        (*(void (**)())(D_80078914 + 0x34))(1);
        D_8007891D[0] = mode;
        DMACallback(2, 0);
    }
    return old;
}
