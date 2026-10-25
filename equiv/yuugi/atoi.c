#include "common.h"

extern u8 D_80078A7D[];
extern u32 todigit();

/* aceita espaços, sinais '-' repetidos e prefixos 0x/0b/0 (hexa, binário, octal) */
s32 atoi(s8 *s) {
    s32 sign = 1;
    u32 base = 10;
    s32 n = 0;
    u32 d;
    s8 c;

    if (s == 0) {
        return 0;
    }
    while (D_80078A7D[*(u8 *)s] & 8) {
        s++;
    }
    if (*s == '-') {
        do {
            s++;
            sign = -sign;
        } while (*s == '-');
    }
    if (*s == '0') {
        s++;
        c = *s;
        base = 8;
        if (c == 'X' || c == 'x') {
            s++;
            base = 16;
        } else if (c == 'B' || c == 'b') {
            s++;
            base = 2;
        }
    }
    for (;;) {
        d = todigit(*s++);
        if (d >= base) {
            break;
        }
        n = n * base + d;
    }
    return n * sign;
}
