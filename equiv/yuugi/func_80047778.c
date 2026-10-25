#include "common.h"

extern s32 D_800733A0[];
extern void (*D_800733C0)();
extern s32 VSync();

void func_80047778(void) {
    s32 *s = D_800733A0;

    s[0] += s[-1] * 4;
    s[1]--;
    if (s[5] + 0x4B0 < VSync(-1)) {
        s[1] = -1;
    }
    if (s[1] != 0 && !(s[5] + 0x4B0 < VSync(-1))) {
        return;
    }
    func_800478D0();
    if (D_800733C0 != 0) {
        D_800733C0(s[1] < 0 ? 5 : 2, s[3]);
    }
}
