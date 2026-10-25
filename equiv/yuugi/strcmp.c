#include "common.h"

s32 strcmp(s8 *a, s8 *b) {
    if (a == 0 || b == 0) {
        if (a == b) {
            return 0;
        }
        if (a == 0) {
            return -1;
        }
        return 1;
    }
    while (*a == *b) {
        if (*a == 0) {
            return 0;
        }
        a++;
        b++;
    }
    return *a - *b;
}
