#include "common.h"

extern u8 D_8008ED68[], D_8006368C[], D_80063674[];
extern s32 func_8001CB94(), func_8001BCE4(), func_8001B484();

#define ST (*(u16 *)(s + 0x95E))
#define CNT (s[0x95C])
#define TRY (*(u32 *)(s + 0x960))
#define RES (*(s32 *)(s + 0x964))

s32 func_8001D230(s32 port, s32 a1, s32 a2, s32 a3) {
    u8 *s = D_8008ED68;
    s32 m;

    switch (ST) {
    case 0:
        TRY = 0;
        CNT = 0;
        RES = 0;
        ST = 1;
    case 1:
        if (++CNT < 0x1F) {
            goto zero;
        }
        switch (func_8001CB94(port)) {
        case 0:
            CNT = 0xB4;
            TRY = 0;
            ST = 2;
            goto zero;
        case 1:
            if (++TRY < 3) {
                goto retry;
            }
            goto fail2;
        case 2:
            if (++TRY < 3) {
                goto retry;
            }
            ST = 4;
            RES = 3;
            return RES;
        case 3:
            if (++TRY < 3) {
                goto retry;
            }
            ST = 4;
            RES = 4;
            return RES;
        default:
            goto retry;
        }
    case 2:
        if (++CNT < 0xB5) {
            goto zero;
        }
        if (a2 == 0) {
            m = 3;
        } else if (a2 == 1) {
            m = 7;
        } else if (a2 == 2) {
            m = 5;
        } else {
            m = 7;
        }
        switch (func_8001BCE4(D_8006368C, m, D_80063674, port, a1)) {
        case 0:
            ST = 3;
            goto zero;
        case 1:
            if (++TRY < 3) {
                goto retry;
            }
            goto fail2;
        case 2:
            if (++TRY < 3) {
                goto retry;
            }
            ST = 4;
            RES = 3;
            return RES;
        case 3:
            if (++TRY < 3) {
                goto retry;
            }
            ST = 4;
            RES = 4;
            return RES;
        case 5:
            if (++TRY < 3) {
                goto retry;
            }
            ST = 4;
            RES = 6;
            return RES;
        default:
            goto fail2;
        }
    case 3:
        if ((func_8001B484(a1, a2, a3) << 16) == 0) {
            ST = 4;
            RES = 7;
        } else {
            ST = 4;
            RES = 1;
        }
        return RES;
    case 4:
        return RES;
    default:
        goto fail2;
    }
fail2:
    ST = 4;
    RES = 2;
    return RES;
retry:
    CNT = 0;
zero:
    RES = 0;
    return RES;
}
