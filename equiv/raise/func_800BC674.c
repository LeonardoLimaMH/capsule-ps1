/* rand-u16: 0x8006AF80 1 0,1,2,3,5,9 */
#include "common.h"

extern u8 D_800EE5F0[], D_800EFF58[], D_80091618[];
extern u16 D_8006AF80;
extern s32 func_800BC8FC(s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32, s32);

s32 func_800BC674(void) {
    u8 *p = D_800EFF58;
    return *(s32 *)(p + 0x314) = func_800BC8FC(0x19, -0xD4, 0x1A, 4, 0, D_800EE5F0,
        *(s32 *)(p + 0x318) + 3 - *(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x12), 1, 0, 0, 2, 0, 0);
}
