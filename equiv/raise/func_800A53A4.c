#include "common.h"

/* rand-u16: 0x8006AF80 1 0,1,2,3,5,9 */
/* rand-mem: 0x800F0378 4 4 */
extern u8 D_800EFF58[], D_80091618[];
extern s32 D_800ED8D8;
extern u16 D_8006AF80;
extern void func_800A5CF8(s32, s32), func_800BD684(s32);

s32 func_800A53A4(void) {
    u8 *f;
    u8 *e;
    u16 i;
    func_800A5CF8(2, 0);
    f = D_800EFF58;
    if (*(s32 *)(f + 0x420) == 2) {
        if (D_800ED8D8 != 0) {
            D_800ED8D8--;
            return 0;
        }
        if (*(s32 *)(f + 0x424) > 0) {
            *(s32 *)(f + 0x424) -= 1;
            func_800BD684(2);
            return 0;
        }
        *(s32 *)(f + 0x420) = 0;
        return 0;
    }
    e = D_80091618 + D_8006AF80 * 0x1A8;
    for (i = 0; i < 8; i++) e[8 + i] = f[0x434 + i];
    return -1;
}
