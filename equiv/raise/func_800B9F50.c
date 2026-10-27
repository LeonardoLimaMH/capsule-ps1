/* max-insns: 50000 */
/* rand-u16: 0x8009162A 1 0,1,2,3 */
/* rand-u16: 0x800917D2 1 0,1,2,3 */
/* rand-u16: 0x8009197A 1 0,1,2,3 */
/* rand-u16: 0x80091B22 1 0,1,2,3 */
/* stub-ret: mixed */
#include "common.h"

extern u8 D_80091618[], D_800EFFEC[], D_800EFF58[];
extern s16 D_80069AB4[];
extern s32 func_800B1260(s32), func_800A9658(s32);
extern void func_8001A998(void *, s32);

void func_800B9F50(s32 a0) {
    s32 s5 = (u16)a0 != 1;
    u16 k = func_800B1260((u16)a0);
    u8 *e;
    u16 i, j;
    func_8001A998(D_800EFFEC + s5 * 64, 0x40);
    e = D_80091618 + k * 0x1A8;
    for (i = 0; i < *(u16 *)(e + 0x12); i++) {
        u16 n = *(u16 *)(e + 0x14 + i * 2);
        u16 cnt = func_800A9658((s16)(D_80069AB4[n] - 1));
        for (j = 0; j < cnt; j++) {
            s16 d = D_80069AB4[n];
            s16 x = *(u16 *)(e + 0x1C + i * 12) - (j / d + 1);
            s16 y = *(u16 *)(e + 0x20 + i * 12) - (j % d + 1);
            D_800EFF58[s5 * 64 + 0x94 + x * 8 + y] = 1;
        }
    }
}
