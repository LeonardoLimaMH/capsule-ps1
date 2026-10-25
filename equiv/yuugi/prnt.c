/* compiler: 2.8.1-psx */
#include "common.h"

extern u8 D_80078A7D[];
extern char D_80011510[], D_80011524[], D_8001152C[];
extern void _putchar(s32);
extern void _putchar_flash(void);
extern void *memchr(const void *, s32, s32);
extern s32 strlen(const char *);

#define ARG(t) (args += 4, *(t *)(args - 4))
#define ISDIG(c) (D_80078A7D[(u8)(c)] & 4)

s32 prnt(s32 unused, u8 *fmt, char *args) {
    char buf[0x28];
    s32 total, prec, prec2, zeros, width, flags, sign, len, field, n, i, base;
    u32 v;
    char *s, *digits, c;

    if (fmt == 0) return 0;
    digits = D_80011510;
    total = 0;
    for (;; fmt++) {
        if (*fmt == 0) {
            _putchar_flash();
            return total;
        }
        if (*fmt != '%') {
            _putchar(*fmt);
            continue;
        }
        flags = 0; prec = -1; sign = 0; prec2 = 0; zeros = 0; width = 0;
    next:
        switch (*++fmt) {
        case ' ': if (!sign) sign = ' '; goto next;
        case '#': flags |= 8; goto next;
        case '*':
            width = ARG(s32);
            if (width >= 0) goto next;
            width = -width;
        case '-': flags |= 0x10; goto next;
        case '+': sign = '+'; goto next;
        case '.':
            fmt++;
            if (*fmt == '*') {
                n = ARG(s32);
                prec = n;
            } else {
                n = 0;
                if (*fmt < 0x80) {
                    while (ISDIG(*fmt)) {
                        u8 d = *fmt++;
                        n = n * 10 - '0' + d;
                        if (*fmt >= 0x80) break;
                    }
                }
                fmt--;
                prec = n;
            }
            if (n < 0) prec = -1;
            goto next;
        case '0': flags |= 0x20; goto next;
        case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
            n = 0;
            do {
                u8 d = *fmt++;
                n = n * 10 - '0' + d;
            } while (*fmt < 0x80 && ISDIG(*fmt));
            width = n;
            fmt--;
            goto next;
        case 'L': flags |= 2; goto next;
        case 'h': flags |= 4; goto next;
        case 'l': flags |= 1; goto next;
        case 'c':
            s = buf;
            buf[0] = ARG(u8);
            len = 1;
            sign = 0;
            goto out;
        case 'D': flags |= 1;
        case 'd': case 'i':
            if (!(flags & 1) && (flags & 4)) v = ARG(s16);
            else v = ARG(s32);
            base = 10;
            if ((s32)v < 0) { v = -v; sign = '-'; }
            goto num;
        case 'n':
            if (!(flags & 1) && (flags & 4)) *ARG(s16 *) = total;
            else *ARG(s32 *) = total;
            continue;
        case 'O': flags |= 1;
        case 'o':
            base = 8;
            if (!(flags & 1) && (flags & 4)) v = ARG(s16);
            else v = ARG(s32);
            sign = 0;
            goto num;
        case 'p':
            v = ARG(s32);
            base = 16;
            sign = 0;
            goto num;
        case 's':
            s = ARG(char *);
            if (s == 0) s = D_80011524;
            if (prec >= 0) {
                char *e = memchr(s, 0, prec);
                if (e) {
                    len = e - s;
                    if (prec < len) len = prec;
                } else len = prec;
            } else {
                len = strlen(s);
            }
            sign = 0;
            goto out;
        case 'U': flags |= 1;
        case 'u':
            base = 10;
            if (!(flags & 1) && (flags & 4)) v = ARG(s16);
            else v = ARG(s32);
            sign = 0;
            goto num;
        case 'X': digits = D_8001152C;
        case 'x':
            base = 16;
            if (!(flags & 1) && (flags & 4)) v = ARG(s16);
            else v = ARG(s32);
            sign = 0;
            if ((flags & 8) && v) flags |= 0x40;
            goto num;
        case 0:
            _putchar_flash();
            return total;
        default:
            total++;
            _putchar((s8)*fmt);
            continue;
        }
    num:
        prec2 = prec;
        if (prec >= 0) flags &= ~0x20;
        s = buf + 0x28;
        if (v != 0 || prec2 != 0) {
            do {
                c = digits[v % base];
                v /= base;
                *--s = c;
            } while (v);
            digits = D_80011510;
            if ((flags & 8) && base == 8 && (s8)c != '0') *--s = '0';
            len = buf + 0x28 - s;
        } else {
            len = 0;
        }
    out:
        n = len + zeros;
        if (sign) n++;
        if (flags & 0x40) n += 2;
        field = prec2;
        if (field < n) field = n;
        if (!(flags & 0x30) && width != 0 && field < width)
            for (i = field; i < width; i++) _putchar(' ');
        if (sign) _putchar(sign);
        if (flags & 0x40) { _putchar('0'); _putchar((s8)*fmt); }
        if ((flags & 0x30) == 0x20)
            for (i = field; i < width; i++) _putchar('0');
        for (i = n; i < prec2; i++) _putchar('0');
        for (i = len - 1; i >= 0; i--) _putchar(*s++);
        while (--zeros >= 0) _putchar('0');
        if (flags & 0x10)
            for (i = field; i < width; i++) _putchar(' ');
        total += width < field ? field : width;
    }
}
