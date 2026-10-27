/* rand-u16: 0x8006AF80 1 0,1,2,3 */
#include "common.h"

extern u8 D_80091618[], D_800F2D30[], D_800F2D98[], D_80100F38[];
extern u16 D_8006AF80;
extern u16 D_800F2CF8[];
extern s32 D_800ED890, D_800ED894;
extern void func_8001A49C(s32), func_800E334C(s32, void *, void *), func_800E3260(s32, s32, s32);
extern void func_800A1B18(void), func_800D1CC4(s32, s32, s32, s32);

void func_800A18EC(void) {
    u16 c = *(u16 *)(D_80091618 + D_8006AF80 * 0x1A8);
    s32 i;
    u8 *p;
    if (D_800F2D30[c] == 0xFF) {
        for (i = 0; i < 6; i++)
            if (D_800F2D98[i] == (u8)c) break;
        if (i == 6) {
            for (i = 0; i < 6; i++)
                if (D_800F2D98[i] == 0xFF) break;
            if (i == 6) i = 5;
            D_800F2D98[i] = c;
        }
        func_8001A49C(i * 0x15800 + 0x80146A18);
    }
    for (i = 0; i < 12; i++) {
        *(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x15A + i * 2) = 0;
        D_800F2CF8[i] = 0;
    }
    D_800ED890 = 0;
    D_800ED894 = 0;
    p = D_80100F38 + D_8006AF80 * 0x79C;
    func_800E334C(1, p + 0x332, p + 0x334);
    p = D_80100F38 + D_8006AF80 * 0x79C;
    func_800E3260(1, *(s16 *)(p + 0x332), *(s16 *)(p + 0x334));
    func_800A1B18();
    func_800D1CC4(D_8006AF80, 0, 0, 0);
}
