#include "common.h"

/* stub-ret: mixed */
/* rand-u16: 0x80091628 1 0,1,2,3 */
/* rand-u16: 0x800917D0 1 0,1,2,3 */
/* rand-u16: 0x80091978 1 0,1,2,3 */
/* rand-u16: 0x80091B20 1 0,1,2,3 */
extern s32 D_80069B28;
extern u8 D_80091618[], D_800EF524[], D_800900C0[];
extern s32 func_800B1260(s32);
extern void func_800D8A20(void);

s32 func_800D865C(void) {
    s32 i, j;
    if (D_80069B28 != 0) {
        func_800D8A20();
        return 0;
    }
    for (i = 1; i >= 0; i--) {
        u16 k = func_800B1260(i);
        u8 *q;
        if (k == 0xFFFF) continue;
        q = D_800EF524 + *(u16 *)(D_80091618 + k * 0x1A8 + 0x10) * 0x9C;
        for (j = 0; j < 3; j++) {
            if (*(s32 *)(q + j * 0x34) != -1) {
                if (i == 1) *(s32 *)(D_800900C0 + j * 0xBC) = -1;
                else *(s32 *)(D_800900C0 + 0x234 + j * 0xBC) = -1;
            }
        }
    }
    return 1;
}
