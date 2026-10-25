#include "common.h"

extern u8 D_80131B36;
extern s16 D_80131B38, D_80131B3A;
extern s32 (*D_80131B30)(const char *, ...);
extern char D_801104A4[], D_801104B0[], D_801104C4[];

void func_80113C78(const char *name, s16 *r) {
    const char *msg;
    s32 mode = D_80131B36;
    if (mode == 1) {
        if (D_80131B38 < r[2] || D_80131B38 < r[2] + r[0] || D_80131B3A < r[1] ||
            D_80131B3A < r[1] + r[3] || r[2] <= 0 || r[0] < 0 || r[1] < 0 || r[3] <= 0) {
            msg = D_801104A4;
        } else {
            return;
        }
    } else if (mode == 2) {
        msg = D_801104C4;
    } else {
        return;
    }
    D_80131B30(msg, name);
    D_80131B30(D_801104B0, r[0], r[1], r[2], r[3]);
}
