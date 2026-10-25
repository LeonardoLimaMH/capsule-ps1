#include "common.h"

u8 *DsLastPos(u8 *dst) {
    u8 *src;

    if (dst == 0) {
        return (u8 *)func_80044B30();
    }
    src = (u8 *)func_80044B30();
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    return dst;
}
