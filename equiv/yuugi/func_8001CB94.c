/* stub-ret: mixed */
#include "common.h"

extern s32 D_80078CDC, D_80078CE0, D_80078CE4, D_80078CE8;
extern s32 D_80078CEC, D_80078CF0, D_80078CF4, D_80078CF8;
extern u8 D_8008ED68[];
extern s32 func_8004FE6C(s32);
extern s32 func_8004E2BC(s32);
extern s32 func_8004E2CC(s32);
extern s32 _card_clear(s32);

#define CLEAR(a, b, c, d) (func_8004FE6C(a), func_8004FE6C(b), func_8004FE6C(c), func_8004FE6C(d))

static s32 wait4(s32 *a, s32 *b, s32 *c, s32 *d) {
    s32 r;
    do {
        if (func_8004FE6C(*a) == 1) r = 1;
        else if (func_8004FE6C(*b) == 1) r = 2;
        else if (func_8004FE6C(*c) == 1) r = 3;
        else if (func_8004FE6C(*d) == 1) r = 4;
        else r = 0;
    } while (r == 0);
    return r - 1;
}

s32 func_8001CB94(s32 port) {
    s32 r;
    CLEAR(D_80078CDC, D_80078CE0, D_80078CE4, D_80078CE8);
    while (func_8004E2BC(port) == 0);
    r = wait4(&D_80078CDC, &D_80078CE0, &D_80078CE4, &D_80078CE8);
    if ((u32)(r - 1) < 2) goto done;
    if (r == 3) {
        CLEAR(D_80078CEC, D_80078CF0, D_80078CF4, D_80078CF8);
        while (_card_clear(port) == 0);
        r = wait4(&D_80078CEC, &D_80078CF0, &D_80078CF4, &D_80078CF8);
        if (r != 0) goto done;
    }
    CLEAR(D_80078CDC, D_80078CE0, D_80078CE4, D_80078CE8);
    while (func_8004E2CC(port) == 0);
    r = wait4(&D_80078CDC, &D_80078CE0, &D_80078CE4, &D_80078CE8);
done:
    *(s32 *)(D_8008ED68 + 0x950) = r;
    return r;
}
