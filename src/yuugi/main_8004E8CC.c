#include "common.h"
#include "yuugi.h"

#include "common.h"

char *memset(char *s, int c, int n) {
    char *r;

    if (s == 0) {
        return 0;
    }
    r = s;
    if (n <= 0) {
        return 0;
    }
    do {
        *s++ = c;
    } while (--n > 0);
    return r;
}
