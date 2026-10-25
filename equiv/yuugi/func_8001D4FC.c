#include "common.h"

extern u8 D_8008ED68[];
extern s32 func_8001CB94(), func_8001C864();

#define ST (*(u16 *)(s + 0x95E))
#define CNT (s[0x95C])
#define TRY (*(u32 *)(s + 0x960))
#define RES (*(s32 *)(s + 0x964))

s32 func_8001D4FC(void) {
    u8 *s = D_8008ED68;

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
        switch (func_8001CB94()) {
        case 0:
            ST = 3;
            RES = 1;
            return RES;
        case 1:
            if (++TRY < 3) {
                goto retry;
            }
            ST = 3;
            RES = 2;
            return RES;
        case 2:
            if (++TRY < 3) {
                goto retry;
            }
            ST = 3;
            RES = 3;
            return RES;
        case 3:
            if (++TRY < 3) {
                goto retry;
            }
            TRY = 0;
            CNT = 0xB4;
            ST = 2;
            goto zero;
        default:
            goto retry;
        }
    case 2:
        if (++CNT < 0xB5) {
            goto zero;
        }
        switch (func_8001C864()) {
        case -1:
            ST = 3;
            RES = 0x3C;
            return RES;
        case 0:
            ST = 3;
            RES = 1;
            return RES;
        case 1:
            if (++TRY < 3) {
                goto retry;
            }
            ST = 3;
            RES = 2;
            return RES;
        case 2:
            if (++TRY < 3) {
                goto retry;
            }
            ST = 3;
            RES = 3;
            return RES;
        case 5:
            if (++TRY < 3) {
                goto retry;
            }
            ST = 3;
            RES = 8;
            return RES;
        default:
            ST = 3;
            RES = 2;
            return RES;
        }
    case 3:
        return RES;
    default:
        ST = 3;
        RES = 2;
        return RES;
    }
retry:
    CNT = 0;
zero:
    RES = 0;
    return RES;
}
