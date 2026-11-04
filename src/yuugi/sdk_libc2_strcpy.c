#include "common.h"
#include "yuugi.h"

#include "common.h"

char *strcpy(char *dst, char *src) {
    char *r = dst;
    char *ret;

    if (dst == 0 || src == 0) {
        return 0;
    }
    ret = r;
    while ((*dst++ = *src++) != 0) {
    }
    return ret;
}
