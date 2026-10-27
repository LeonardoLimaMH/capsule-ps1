#include "common.h"

/* args: small */
/* stub-ret: mixed */
extern u8 D_800EEA00[], D_800EEB9C[], D_800EE9C0[];
extern s32 func_800AC328(s32);
extern void func_80034AB0(s32);

s32 func_800AC1A4(s32 a0, s32 a1, s32 a2) {
    s32 s = a0;
    s32 n = a1;
    s16 c = a2;
    s32 tries = 9;
    if ((s16)a1 != 0) {
        for (;;) {
            tries--;
            if ((s16)s == 5 && D_800EEA00[4] == 0) {
                if (c == 2) s = 2;
                else if (c == 3) s = 6;
            } else {
                s = D_800EE9C0[*(s32 *)(D_800EEB9C + 0x7BC) * 28 + (s16)s * 4 + c];
                if (s == 4 && D_800EEA00[4] == 0) s = 5;
            }
            if (func_800AC328((s16)s) == 1) break;
            n--;
            if (tries == 0) {
                s = a0;
                break;
            }
            if ((s16)n == 0) break;
        }
    }
    if ((s16)s != (s16)a0 && (s16)n != 0) func_80034AB0(0x84);
    return (s16)s;
}
