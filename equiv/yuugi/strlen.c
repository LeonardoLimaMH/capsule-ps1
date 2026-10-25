#include "common.h"

s32 strlen(const s8 *s) {
    s32 n = 0;

    if (s == 0) {
        return 0;
    }
    while (*s++ != 0) {
        n++;
    }
    return n;
}
