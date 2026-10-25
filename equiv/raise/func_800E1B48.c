#include "common.h"

/* rand-u16: 0x8006AF80 1 0,1 */
/* rand-u16: 0x800916A2 1 0,1,2 */
/* rand-u16: 0x8009184A 1 0,1,2 */
extern u8 D_80091618[], D_800F2D30[];
extern u16 D_8006AF80;
extern s32 func_800A8CB4(s32), func_800A0E6C(s32);
extern void func_8001A464(s32, s32), func_80019F30(s32, void *);
extern s32 func_80012508(void);

s32 func_800E1B48(void) {
    u16 j = *(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x8A);
    u16 c = *(u16 *)(D_80091618 + j * 0x1A8);
    s32 a, b;
    if (D_800F2D30[c] != 0xFF) return 1;
    a = func_800A8CB4(c);
    b = func_800A0E6C(c);
    func_8001A464(a, b);
    func_80019F30(a, func_80012508);
    return 0;
}
