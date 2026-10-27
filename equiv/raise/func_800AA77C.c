#include "common.h"

/* stub-ret: mixed */
extern s32 func_800B1260(s32), func_800E1594(s32), func_800E1388(s32), func_800E1140(s32);
extern s32 func_800E16AC(s32), func_800E14C4(s32);

s32 func_800AA77C(u32 a0) {
    s32 r = 0;
    s32 i;
    for (i = 1; i >= 0; i--) {
        u16 k = func_800B1260(i);
        if (k == 0xFFFF || a0 >= 5) continue;
        switch (a0) {
        case 0:
        case 1:
            if (func_800E1594(k) == 1) return 0;
            if (func_800E1388(k) != 1) return 0;
            if (func_800E1140(k) == 0) return 0;
            if (func_800E16AC(k) == 1) break;
            if (func_800E14C4(k) != 1) r |= 1;
            break;
        case 2:
            r = 1;
            break;
        case 3:
            if (func_800E1594(k) == 1) return 0;
            if (func_800E1388(k) != 1) return 0;
            if (func_800E16AC(k) != 1) r |= 1;
            break;
        case 4:
            if (func_800E1594(k) == 1) return 0;
            break;
        }
    }
    return r;
}
