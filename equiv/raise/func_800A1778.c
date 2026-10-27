#include "common.h"

/* rand-u16: 0x8006AF80 1 0,1,2,3 */
extern u8 D_80091618[], D_800F2D30[], D_800F2D98[];
extern u16 D_8006AF80;
extern s32 func_800A8CB4(s32);
extern void func_8001A464(s32, s32), func_80019F30(s32, void *);
extern s32 func_80012508(void);

s32 func_800A1778(void) {
    u16 c = *(u16 *)(D_80091618 + D_8006AF80 * 0x1A8);
    u8 *s = D_800F2D30 + c;
    u8 b = *s;
    s32 g, i;
    if (b != 0xFF) return 1;
    g = func_800A8CB4(c);
    if (*s == b) {
        for (i = 0; i < 6; i++)
            if (D_800F2D98[i] == (u8)c) break;
        if (i == 6) {
            for (i = 0; i < 6; i++)
                if (D_800F2D98[i] == 0xFF) break;
            if (i == 6) i = 5;
            D_800F2D98[i] = c;
        }
    } else {
        i = *s;
    }
    func_8001A464(g, i * 0x15800 + 0x80146A18);
    func_80019F30(g, func_80012508);
    return 0;
}
