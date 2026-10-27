#include "common.h"

/* stub-ret: mixed */
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* rand-ptr: 0x800917A4 32 */
/* rand-ptr: 0x8009194C 32 */
/* rand-ptr: 0x80091AF4 32 */
/* rand-ptr: 0x80091C9C 32 */
extern u8 D_80091618[], D_80069E4C[];
extern s32 D_800ED8DC;
extern u16 D_8006AF80, D_800ED88C;
extern s32 func_800B1260(s32), func_800A8E1C(s32);
extern void func_800AEA0C(void), func_800260C8(s32, s32), func_800B7264(s32), func_800ABF7C(s32);

s32 func_800AA494(void) {
    s32 i, j, n;
    if (D_800ED8DC == 1) {
        func_800AEA0C();
        for (i = 1; i >= 0; i--) {
            u16 k = func_800B1260(i);
            u8 *e;
            u16 v;
            if (k == 0xFFFF) continue;
            e = D_80091618 + k * 0x1A8;
            v = *(u16 *)(e + 0x10);
            n = func_800A8E1C(v == 0xFFFF ? 8 : v);
            for (j = 0; j < n; j++) {
                *(s32 *)(*(u8 **)(e + 0x18C + j * 4) + 0x50) &= ~1;
                *(s32 *)(*(u8 **)(e + 0x18C + j * 4) + 0x50) &= ~8;
            }
        }
    } else {
        func_800260C8(D_80069E4C[0x11], D_80069E4C[0x10]);
        D_800ED88C = 0;
        func_800B7264(1);
    }
    func_800ABF7C(*(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x10) != 0xFFFF);
    return -1;
}
