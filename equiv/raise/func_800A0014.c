#include "common.h"

/* rand-u16: 0x8006AF80 1 0,1,2,3 */
extern u8 D_800EFF58[], D_80091618[];
extern u16 D_8006AF80;
extern void func_800A0540(s32), func_800A04F4(void), func_800A0780(s32);
extern s32 func_800A0618(s32);

s32 func_800A0014(s32 a0, s32 a1, s32 a2) {
    u8 *f = D_800EFF58;
    s32 n = *(s32 *)(f + 0x114);
    s32 m, k;
    if (a2 != 0) {
        m = *(s32 *)(f + 0x32C);
        if (n < m) k = 0;
        else if (*(s32 *)(f + 0x330) < n) k = 1;
        else {
            if (*(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x10) != 0) goto done;
            if (m != 1) goto done;
            k = -1;
        }
        func_800A0540(k);
    }
    func_800A04F4();
done:
    func_800A0780(a0);
    return func_800A0618(a0);
}
