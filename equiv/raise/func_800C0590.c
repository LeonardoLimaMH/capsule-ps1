/* rand-u16: 0x800F1ED2 1 0,1,2,3,5,9 */
#include "common.h"

extern u16 D_800F1ED2;
extern u8 D_80091618[];
extern void func_800D1CC4(s32, s32, s32, s32);
extern s32 func_80034AB0(s32);

s32 func_800C0590(void) {
    u16 i = D_800F1ED2;
    u8 *e = D_80091618 + i * 0x1A8;
    s16 v;
    s32 k;
    func_800D1CC4(i, (u16)(*(u16 *)(e + 6) + 0x1E), 3, 2);
    v = *(s16 *)(e + 6);
    if (v == 1) k = 7;
    else if (v == 0) k = 8;
    else k = 6;
    return func_80034AB0(k);
}
