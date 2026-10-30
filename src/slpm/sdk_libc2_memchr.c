#include "common.h"

#include "common.h"
/* compiler: 2.7.2-psx */
void *slpm_memchr(u8 *p, s32 c, s32 n) {
    if (p == 0 || n <= 0) {
        return 0;
    }
    for (n--; n >= 0; n--) {
        if (*p++ == (c & 0xFF)) {
            return p - 1;
        }
    }
    return 0;
}
