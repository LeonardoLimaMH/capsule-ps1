#include "common.h"

extern u16 D_8008EE54;
extern u8 D_8006AF90[];
extern s32 func_8001F8B0();
extern s32 func_800212AC();

s32 func_800231C4(u8 *o, s32 a1, s32 idx) {
    s16 *cnt = (s16 *)(D_8006AF90 + idx * 30);
    s32 r;

    switch (D_8008EE54) {
    case 1:
        func_800220B8(o);
        *(s32 *)(o + 0x14) = func_8001F8B0(0x1B, 0);
        func_80012668();
        return 0;
    case 0:
        if (*cnt >= 4) {
            func_80012668();
            o[0xBE0] = 0;
            return 0;
        }
        return 1;
    case 2:
        r = func_800212AC(o, a1, 2, 1);
        if (r == 2) {
            (*(u16 *)cnt)--;
        }
        return r;
    }
    return 0;
}
