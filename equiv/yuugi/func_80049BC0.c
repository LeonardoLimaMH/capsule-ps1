#include "common.h"

extern u8 D_8007891E[];
extern char D_8001129C[], D_800112BC[], D_800112A8[];
extern void (*D_80078918)();

/* depuração da libgpu: avisa quando o retângulo sai da área de vídeo */
void func_80049BC0(char *name, s16 *r) {
    char *fmt;
    s16 x, y, w, h, mw, mh;

    if (D_8007891E[0] == 1) {
        w = r[2];
        mw = *(s16 *)(D_8007891E + 2);
        if (!(mw < w)) {
            x = r[0];
            if (!(mw < w + x)) {
                y = r[1];
                mh = *(s16 *)(D_8007891E + 4);
                if (!(mh < y)) {
                    h = r[3];
                    if (!(mh < y + h) && w > 0 && x >= 0 && y >= 0 && h > 0) {
                        return;
                    }
                }
            }
        }
        fmt = D_8001129C;
    } else if (D_8007891E[0] == 2) {
        fmt = D_800112BC;
    } else {
        return;
    }
    D_80078918(fmt, name);
    D_80078918(D_800112A8, r[0], r[1], r[2], r[3]);
}
