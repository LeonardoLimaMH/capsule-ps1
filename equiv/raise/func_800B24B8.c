/* rand-u16: 0x8010126A 1 2,3,4 */
/* rand-u16: 0x8010126C 1 2,3,4 */
/* rand-u16: 0x8010126E 1 2,3,4 */
/* rand-u16: 0x80101270 1 2,3,4 */
/* rand-u16: 0x800916A8 1 0,1 */
/* rand-u16: 0x80101A06 1 2,3,4 */
/* rand-u16: 0x80101A08 1 2,3,4 */
/* rand-u16: 0x80101A0A 1 2,3,4 */
/* rand-u16: 0x80101A0C 1 2,3,4 */
/* rand-u16: 0x80091850 1 0,1 */
/* rand-u16: 0x801021A2 1 2,3,4 */
/* rand-u16: 0x801021A4 1 2,3,4 */
/* rand-u16: 0x801021A6 1 2,3,4 */
/* rand-u16: 0x801021A8 1 2,3,4 */
/* rand-u16: 0x800919F8 1 0,1 */
/* rand-u16: 0x8010293E 1 2,3,4 */
/* rand-u16: 0x80102940 1 2,3,4 */
/* rand-u16: 0x80102942 1 2,3,4 */
/* rand-u16: 0x80102944 1 2,3,4 */
/* rand-u16: 0x80091BA0 1 0,1 */
/* rand-u16: 0x80103D44 1 0,1 */
/* rand-u16: 0x80103D4A 1 0,1 */
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* rand-u16: 0x800EF2D8 1 0,1,2,3 */
/* rand-u16: 0x800916A2 1 0,1,2,3 */
/* rand-u16: 0x8009184A 1 0,1,2,3 */
/* rand-u16: 0x800919F2 1 0,1,2,3 */
/* rand-u16: 0x80091B9A 1 0,1,2,3 */
/* arg0: small */
/* arg1: small */
#include "common.h"

/* direção (0-8) do movimento da peça entre a posição antiga e a nova */
extern u8 D_80091618[], D_80100F38[];
extern s16 D_80103D38[];
extern s32 D_800EEB70, D_800EE9B8[];
extern u16 D_8006AF80, D_800EF2D8;

static s32 up(s16 d) { return d == 0 ? 2 : d == 1 ? 1 : d == -1 ? 3 : -1; }
static s32 down(s16 d) { return d == 0 ? 6 : d == 1 ? 7 : d == -1 ? 5 : -1; }
static s32 mid(s16 d) { return d == 0 ? 8 : d == 1 ? 0 : d == -1 ? 4 : -1; }

s32 func_800B24B8(s32 a0, s32 a1) {
    u16 k;
    u8 *p;
    s16 dx, dy, s;
    u16 g;
    if (D_800EEB70 == 0) k = a0 == 1 ? D_8006AF80 : *(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x8A);
    else k = a0 == 1 ? D_8006AF80 : D_800EF2D8;
    p = D_80100F38 + k * 0x79C;
    g = *(u16 *)(D_80091618 + k * 0x1A8 + 0x90);
    s = D_80103D38[6 + a1 * 3];
    dx = *(u16 *)(p + 0x336) - *(u16 *)(p + 0x332);
    if (g == 0 && s == 0) {
        if (a0 == 1) {
            D_800EE9B8[0] = -1;
            return up(dx);
        }
        D_800EE9B8[1 - a0] = 1;
        return down(dx);
    }
    if (g != 0 && s != 0) {
        if (a0 == 1) {
            D_800EE9B8[0] = a0;
            return down(dx);
        }
        D_800EE9B8[1 - a0] = -1;
        return up(dx);
    }
    D_800EE9B8[1 - a0] = 0;
    dy = *(u16 *)(p + 0x338) - *(u16 *)(p + 0x334);
    if (dy == 0) return mid(dx);
    if (dy == 1) return down(dx);
    if (dy == -1) return up(dx);
    return -1;
}
