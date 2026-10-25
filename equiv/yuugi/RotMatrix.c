#include "common.h"

extern s32 D_800740AC[];

s16 *RotMatrix(s16 *r, s16 *m) {
    s32 ax = r[0], ay = r[1], az = r[2];
    s32 t, sx, cx, sy, nsy, cy, sz, cz, a, b;

    if (ax < 0) {
        t = D_800740AC[(-ax) & 0xFFF];
        sx = -(s16)t;
    } else {
        t = D_800740AC[ax & 0xFFF];
        sx = (s16)t;
    }
    cx = t >> 16;
    if (ay < 0) {
        t = D_800740AC[(-ay) & 0xFFF];
        nsy = (s16)t;
        sy = -nsy;
    } else {
        t = D_800740AC[ay & 0xFFF];
        sy = (s16)t;
        nsy = -sy;
    }
    cy = t >> 16;
    m[2] = sy;
    m[5] = (-(cy * sx)) >> 12;
    m[8] = (cy * cx) >> 12;
    if (az < 0) {
        t = D_800740AC[(-az) & 0xFFF];
        sz = -(s16)t;
    } else {
        t = D_800740AC[az & 0xFFF];
        sz = (s16)t;
    }
    cz = t >> 16;
    m[0] = (cz * cy) >> 12;
    m[1] = (-(sz * cy)) >> 12;
    a = (cz * nsy) >> 12;
    m[3] = ((sz * cx) >> 12) - ((a * sx) >> 12);
    m[6] = ((sz * sx) >> 12) + ((a * cx) >> 12);
    b = (sz * nsy) >> 12;
    m[4] = ((cz * cx) >> 12) + ((b * sx) >> 12);
    m[7] = ((cz * sx) >> 12) - ((b * cx) >> 12);
    return m;
}
