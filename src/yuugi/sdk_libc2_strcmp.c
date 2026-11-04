#include "common.h"
#include "yuugi.h"

#include "common.h"

int strcmp(s8 *s1, s8 *s2) {
    if (s1 == 0 || s2 == 0) {
        if (s1 == s2) {
            return 0;
        }
        if (s1 == 0) {
            return -1;
        }
        return 1;
    }
    while (*s1 == *s2++) {
        if (*s1++ == 0) {
            return 0;
        }
    }
    return *s1 - *--s2;
}
