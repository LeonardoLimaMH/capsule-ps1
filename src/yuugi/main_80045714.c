#include "common.h"
#include "yuugi.h"

extern u8 D_80072F28[];
extern s32 D_80072FF4[];
extern u8 D_80072F58[];
extern void func_800458A0(u8 *, u8 *);

void func_80045714(s32 a, u8 *p) {
    u8 *q;
    s32 k;
    u8 c;

    if ((a & 0xFF) == 5) {
        q = p;
    } else {
        k = D_80072FF4[D_80072F28[0]] - 1;
        if (k < 0) {
            return;
        }
        q = p + k;
    }
    c = q[0];
    D_80072F58[0] = c >> 7;
    D_80072F58[1] = (c >> 6) & 1;
    D_80072F58[2] = (c >> 5) & 1;
    D_80072F58[3] = (c >> 1) & 1;
    D_80072F58[-0x1C] = c;
    func_800458A0(D_80072F58 - 0x24, p);
}
