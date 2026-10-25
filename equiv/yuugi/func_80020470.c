#include "common.h"

extern s32 rcos();
extern s32 rsin();

/* gira (x, y) por ang graus; resultado em ponto fixo 4.12 dividido de volta */
s16 *func_80020470(s32 x, s32 y, s32 ang, s16 *ox, s16 *oy) {
    s32 t = ((s16)ang << 12) / 360;
    s32 c, s;

    c = rcos(t);
    s = rsin(t);
    *ox = ((s16)x * c - (s16)y * s) / 4096;
    s = rsin(t);
    c = rcos(t);
    *oy = ((s16)x * s + (s16)y * c) / 4096;
    return oy;
}
