/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* rand-u16: 0x80078C20 1 0,1 */
#include "common.h"

typedef struct { s16 x, y, z, w; } P4;
extern u8 D_80100F38[], D_80091618[], D_800EF364[], D_80069EC4[], D_800EFF58[], D_800EEB9C[];
extern s32 D_800EE630[];
extern u16 D_8006AF80;
extern s16 D_80078C20;
extern u8 *func_800B6D98(s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32);

void func_800A1B18(void) {
    P4 t;
    u8 *p = D_80100F38 + D_8006AF80 * 0x79C;
    u8 *o;
    u8 b = D_800EF364[*(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x10) * 64 + *(s16 *)(p + 0x332) * 8 + *(s16 *)(p + 0x334) - 9];
    t = *(P4 *)(*(u8 **)(D_80069EC4 + D_80078C20 * 0x2D8 + 0x2C) + b * 8);
    o = func_800B6D98(10, 0, 0, 5, 0, D_800EE630,
                      *(s32 *)(D_800EFF58 + 0x398 + *(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x158) * 4), 0, 1, 0, 0, 1);
    *(s16 *)(o + 0x46) += t.x;
    *(s16 *)(o + 0x4A) += t.y;
    *(s16 *)(o + 0x4E) = t.z - 10;
    *(u8 **)(D_800EEB9C + 0x764) = o;
    o = func_800B6D98(9, 0, 0, 5, 0, D_800EE630, 2, 1, 1, 0, 0, 1);
    *(s16 *)(o + 0x46) += t.x;
    *(s16 *)(o + 0x4A) += t.y;
    *(s16 *)(o + 0x4E) = t.z - 8;
    *(u8 **)(D_800EEB9C + 0x768) = o;
}
