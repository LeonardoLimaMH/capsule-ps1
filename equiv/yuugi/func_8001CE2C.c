#include "common.h"

extern u8 D_8008ED68[], D_80063674[], D_8006368C[], D_80085428[];
extern s32 func_8001B1A8(), func_8001CB94(), func_8001C36C(), func_8001C5D4(), func_8001BFF4();

#define ST (*(u16 *)(s + 0x95E))
#define CNT (s[0x95C])
#define TRY (*(u32 *)(s + 0x960))
#define RES (*(s32 *)(s + 0x964))

s32 func_8001CE2C(s32 port, s32 a1, s32 a2, s32 a3) {
    u8 *s = D_8008ED68;
    s32 m;

    switch (ST) {
    case 0:
        if ((u8)func_8001B1A8(a1, a2, a3) != 0) {
            RES = 10;
            return RES;
        }
        TRY = 0;
        CNT = 0;
        RES = 0;
        ST = 1;
        return RES;
    case 1:
        if (++CNT < 0x1F) {
            goto zero;
        }
        switch (func_8001CB94(port)) {
        case 0:
            TRY = 0;
            CNT = 0;
            ST = 2;
            goto zero;
        case 1:
            if (++TRY < 3) {
                goto retry;
            }
            goto fail;
        case 2:
            if (++TRY < 3) {
                goto retry;
            }
            ST = 5;
            RES = 3;
            return RES;
        case 3:
            if (++TRY < 3) {
                goto retry;
            }
            ST = 5;
            RES = 4;
            return RES;
        default:
            goto retry;
        }
    case 2:
        switch (func_8001C36C(D_80063674, port, 2)) {
        case -1:
        case 0:
            TRY = 0;
            ST = 3;
            goto zero;
        case 1:
            if (++TRY < 3) {
                goto zero;
            }
            goto fail;
        case 2:
            if (++TRY < 3) {
                goto zero;
            }
            ST = 5;
            RES = 3;
            return RES;
        case 3:
            if (++TRY < 3) {
                goto zero;
            }
            ST = 5;
            RES = 4;
            return RES;
        case 5:
            switch (func_8001C5D4(D_80063674, port, 2)) {
            case 0:
                TRY = 0;
                ST = 2;
                goto zero;
            case 1:
                goto fail;
            case 2:
                ST = 5;
                RES = 3;
                return RES;
            case 5:
                ST = 5;
                RES = 5;
                return RES;
            case 11:
                ST = 5;
                RES = 11;
                return RES;
            }
            goto zero;
        }
        goto zero;
    case 3:
        m = 7;
        if (D_80085428[a1 + 0x34] != 0 && a2 != 0) {
            m = 5;
        }
        switch (func_8001BFF4(D_8006368C, m, D_80063674, port, a1)) {
        case 0:
            ST = 5;
            RES = 1;
            return RES;
        case 1:
            if (++TRY < 3) {
                goto zero;
            }
            goto fail;
        case 2:
            if (++TRY < 3) {
                goto zero;
            }
            ST = 5;
            RES = 3;
            return RES;
        case 3:
            if (++TRY < 3) {
                goto zero;
            }
            ST = 5;
            RES = 4;
            return RES;
        case 5:
            if (++TRY < 3) {
                goto zero;
            }
            goto fail;
        }
        goto fail;
    case 5:
        return RES;
    }
fail:
    ST = 5;
    RES = 2;
    return RES;
retry:
    CNT = 0;
zero:
    RES = 0;
    return RES;
}
