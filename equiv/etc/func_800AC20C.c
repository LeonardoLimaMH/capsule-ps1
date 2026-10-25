/* args: small */
/* rand-mem: 0x800B3D18 8 6 */
/* rand-mem: 0x8008542A 2 7 */
/* rand-mem: 0x800B3D48 2 3 */
#include "common.h"

extern u8 D_80085428[], D_800B3D18[], D_800B3D48[];

void func_800AC20C(u8 side) {
    u8 *o = D_800B3D18 + side * 4;
    u8 done = 0, x, y;
    s32 dst, src, k, i;
    u8 *base;
    do {
        x = o[0]; y = o[1];
        if (y < x) { o[0] = y; o[1] = x; }
        x = o[2]; y = o[3];
        if (y < x) { o[2] = y; o[3] = x; }
        x = o[1]; y = o[2];
        if (y < x) { o[1] = y; o[2] = x; }
        else done = 1;
    } while (!done);
    base = D_80085428 + side * 0x2BC;
    dst = D_800B3D18[side * 4];
    src = dst + 1;
    k = 1;
    while (src < D_80085428[side + 2]) {
        if (D_800B3D18[side * 4 + k] == src) {
            src++;
            k++;
            continue;
        }
        base[dst * 14 + 0x50] = base[src * 14 + 0x50];
        for (i = 0; i < 8; i++) base[dst * 14 + 0x51 + i] = base[src * 14 + 0x51 + i];
        for (i = 0; i < 5; i++) base[dst * 14 + 0x59 + i] = base[src * 14 + 0x59 + i];
        dst++;
        src++;
    }
    if (D_800B3D48[side])
        for (i = 0; i < D_800B3D48[side]; i++) base[(dst + i) * 14 + 0x50] = 0;
    D_80085428[side + 2] -= D_800B3D48[side];
}
