#include "common.h"

/* rand-u16: 0x8006AF80 1 0,1,2,3,5,9 */
/* rand-mem: 0x800EFF74 4 8 */
extern u8 D_80091618[], D_800EFF58[], D_800EC084[];
extern u16 D_8006AF80;
extern s32 func_800A8CD0(s32, void *);
extern void func_800BAD64(s32);
extern s32 func_800E1B30(void);

s32 func_8009E068(void) {
    s32 v;
    *(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x10) = *(u16 *)(D_800EFF58 + 0x1C);
    v = func_800A8CD0(6, D_800EC084 + *(s32 *)(D_800EFF58 + 0x1C) * 12);
    *(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x92) = v;
    func_800BAD64(2);
    return func_800E1B30();
}
