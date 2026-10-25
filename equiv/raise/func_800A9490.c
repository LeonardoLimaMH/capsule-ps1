#include "common.h"

/* stub-ret: mixed */
/* rand-ptr: 0x800917A4 3 */
/* rand-ptr: 0x8009194C 3 */
/* rand-ptr: 0x80091AF4 3 */
/* rand-ptr: 0x80091C9C 3 */
extern s32 D_80069AD4[];
extern u8 D_80091618[];
extern s32 func_800B1260(s32);
extern void func_800A9A74(void), func_80023F68(void);

s32 func_800A9490(void) {
    s32 i, j, n;
    if (D_80069AD4[0x15] != 0) {
        func_800A9A74();
        func_80023F68();
        if (D_80069AD4[0x15] != 0) return 0;
    }
    for (i = 1; i >= 0; i--) {
        u16 k = func_800B1260(i);
        u16 v;
        u8 *e;
        if (k == 0xFFFF) continue;
        v = *(u16 *)(D_80091618 + k * 0x1A8 + 0x10);
        n = (v == 1 || v == 5 || v == 3) ? 3 : 2;
        e = D_80091618 + k * 0x1A8;
        for (j = 0; j < n; j++, e += 4) *(s32 *)(*(u8 **)(e + 0x18C) + 0x50) |= 1;
    }
    return -1;
}
