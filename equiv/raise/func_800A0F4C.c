/* stub-ret: mixed */
#include "common.h"

extern u8 D_80091618[], D_800F2D30[], D_800F2D98[];
extern s16 D_800F2D9E;
extern s32 func_800AECC8(s32), func_800A8CB4(s32);
extern void func_8001A464(s32, s32), func_80019F30(s32, void *);
extern s32 func_80012508(void);

#define E0(i) (*(u16 *)(D_80091618 + (i) * 0x1A8))

s32 func_800A0F4C(void) {
    s32 last = 0;
    s32 i, j;
    for (i = 5; i >= 0; i--) {
        if (func_800AECC8((u16)i) == -1) continue;
        last = i;
        for (j = 0; j < i; j++)
            if (E0(j) == E0(i)) break;
        if (j == i) break;
    }
    D_800F2D9E = 0;
    for (i = 0; i < 6; i++) {
        u16 c;
        u8 *s;
        s32 g;
        if (func_800AECC8((u16)i) == -1) continue;
        c = E0(i);
        if (i > 0) {
            for (j = 0; j < i; j++)
                if (D_800F2D98[j] == (u8)c) break;
            if (j < i) continue;
        }
        s = D_800F2D30 + c;
        *s = D_800F2D9E;
        D_800F2D98[D_800F2D9E] = c;
        D_800F2D9E += 1;
        g = func_800A8CB4(c);
        if (*s == 0xFF) {
            for (j = 0; j < 6; j++)
                if (D_800F2D98[j] == (u8)c) break;
            if (j == 6) {
                for (j = 0; j < 6; j++)
                    if (D_800F2D98[j] == 0xFF) break;
                if (j == 6) j = 5;
                D_800F2D98[j] = c;
            }
        } else {
            j = *s;
        }
        func_8001A464(g, j * 0x15800 + 0x80146A18);
        func_80019F30(g, i == last ? (void *)func_80012508 : 0);
    }
    return 0;
}
