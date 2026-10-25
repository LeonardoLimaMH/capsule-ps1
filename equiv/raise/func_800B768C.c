#include "common.h"

/* rand-u16: 0x8006AF80 1 0,1,2,3,5 */
extern u8 D_800EEB9C[], D_80091618[], D_800EFF58[];
extern u16 D_8006AF80;
extern void func_8001F35C(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_800B768C(void) {
    s32 i, c;
    for (i = 0; i < 6; i++) {
        u8 *o;
        if (i == *(s32 *)(D_800EEB9C + 0x73C)) c = 1;
        else if (i == D_8006AF80) c = 3;
        else c = (*(u16 *)(D_80091618 + i * 0x1A8 + 0x10) != 0xFFFF) * 2;
        o = *(u8 **)(D_800EFF58 + 0x14);
        func_8001F35C((s16)(*(u16 *)(o + 0x46) + i * 13 + 0x32), (s16)(*(u16 *)(o + 0x4A) + 8), c, 0, 0, i + 1, 1, 5);
    }
    return 0;
}
