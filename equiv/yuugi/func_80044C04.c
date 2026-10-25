#include "common.h"

extern u8 D_80072F28[];
extern s32 D_80072F74[];
extern s32 CD_cw();

s32 func_80044C04(s32 mode, s32 param) {
    u8 *s = D_80072F28;
    u8 m;

    CD_flush();
    s[0] = mode;
    if (param != 0) {
        func_80045858(s + 1, param);
        *(u8 **)(s + 8) = s + 1;
    } else {
        *(s32 *)(s + 8) = 0;
    }
    *(s32 *)(s + 0x40) = D_80072F74[s[0]] ? 0x3C0 : 0x1E;
    m = s[0];
    *(s32 *)(s + 0x44) = 0;
    if (m == 7) {
        if (s[0x33] == 1) {
            s[0] = 1;
            *(s32 *)(s + 8) = 0;
        }
    } else if (m == 8) {
        if (s[0x33] != 1) {
            s[0] = 1;
            *(s32 *)(s + 8) = 0;
        }
    }
    if (CD_cw(s[0], *(s32 *)(s + 8), 0, 1) != 0) {
        *(s32 *)(s + 0x44) = 0;
        *(s32 *)(s + 0x40) = 0;
        return 0;
    }
    s[0x28] = s[0];
    return 1;
}
