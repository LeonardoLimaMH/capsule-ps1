/* rand-u16: 0x8006AF80 1 0,1,2,3,5,9 */
#include "common.h"

extern s32 D_800EE5F0[];
extern u8 D_800EFF58[], D_80091618[];
extern u16 D_8006AF80;
extern s32 func_80019F30(s32, s32);

s32 func_800A0424(void) {
    u8 *p = D_800EFF58;
    s32 n = D_800EE5F0[3] + *(s32 *)(p + 0x318) + 3;
    s32 v = func_80019F30(D_800EE5F0[0] | 0x60000, n - *(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x12));
    *(s32 *)(*(u8 **)(p + 0x314) + 0x18) = v;
    return v;
}
