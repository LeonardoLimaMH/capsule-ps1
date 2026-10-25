#include "common.h"

s32 strncmp(const s8 *a, const s8 *b, s32 n) {
    s8 c;
    if (a == 0 || b == 0) {
        if (a == b) return 0;
        return a == 0 ? -1 : 1;
    }
    if (--n < 0) return 0;
    do {
        c = *a;
        if (c != *b++) {
            if (n < 0) return 0;
            return *a - b[-1];
        }
        a++;
        if (c == 0) return 0;
    } while (--n >= 0);
    return 0;
}
