#include "common.h"

extern s32 D_80072E8C[];
extern s32 D_80094B70, D_80072F0C, D_80094B6C;
extern u8 D_80094AA8[];
extern u8 *func_800435B8();
extern void func_80045858(), func_800437FC();
extern s32 func_80044AF8();

static s32 enqueue(u8 com, u8 *param, s32 a, s32 b) {
    s32 id, old;
    u8 *q;

    if (D_80094B70 >= 8) {
        return 0;
    }
    old = D_80072F0C;
    id = old + 1;
    D_80072F0C = id;
    if (id == 0) {
        id = old + 2;
        D_80072F0C = id;
    }
    q = func_800435B8();
    *(s32 *)q = id;
    q[4] = com;
    if (param != 0) {
        func_80045858(q + 5, param);
        *(u8 **)(q + 0xC) = param;
    } else {
        *(u8 **)(q + 0xC) = 0;
    }
    *(s32 *)(q + 0x10) = a;
    *(s32 *)(q + 0x14) = b;
    D_80094B70++;
    if (func_80044AF8(0) == 1 && *(s32 *)(D_80094AA8 + D_80094B6C * 0x18) == id) {
        func_800437FC();
    }
    return id;
}

s32 DsCommand(u8 com, u8 *param, s32 cb, s32 count) {
    if (D_80072E8C[com] != 0 && param != 0) {
        if (enqueue(2, param, 0, 0) == 0) {
            return 0;
        }
    }
    return enqueue(com, param, cb, count);
}
