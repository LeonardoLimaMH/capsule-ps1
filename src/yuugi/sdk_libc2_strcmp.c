#include "common.h"
#include "yuugi.h"

int strcmp(char *s1, char *s2) {
    if (s1 == 0 || s2 == 0) {
        if (s1 == s2)
            return 0;
        if (s1 == 0)
            return -1;
        return 1;
    }
    while (*s1 == *s2++) {
        if (*s1++ == '\0')
            return 0;
    }
    return *s1 - *--s2;
}
