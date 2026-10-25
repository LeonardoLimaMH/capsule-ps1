/* compiler: 2.8.1-psx */
#include "common.h"
typedef char *va_list;
#define va_arg(ap, t) (*(t *)((ap += 4) - 4))

typedef struct { u32 flags; s32 width; s32 prec; } Spec;
extern Spec D_80078B1C;
extern char D_80011730[], D_80011744[];
extern s32 strlen(const char *);
extern void *memchr(const void *, s32, s32);
extern void *memmove(void *, const void *, s32);

#define SIGN(s) (((s8 *)&(s).flags)[1])

s32 sprintf(char *out, const s8 *fmt, s32 a2, s32 a3) {
    char buf[0x200];
    Spec sp;
    va_list ap;
    s32 cnt = 0, n;
    char *s;
    u32 v;
    char *dig;
    s32 c;
    __asm__("" : : "r"(&fmt), "r"(&a2), "r"(&a3));
    ap = (char *)&fmt + 4;
    __asm__("" : : "r"(&ap));
    for (c = *fmt; c != 0; c = *++fmt) {
        if (c != '%') { out[cnt++] = c; continue; }
        sp = D_80078B1C;
        for (;;) {
            c = *++fmt;
            if (c == '-') sp.flags |= 1;
            else if (c == '+') sp.flags |= 2;
            else if (c == ' ') SIGN(sp) = c;
            else if (c == '#') sp.flags |= 4;
            else if (c == '0') sp.flags |= 8;
            else break;
        }
        if (c == '*') {
            sp.width = va_arg(ap, s32);
            if (sp.width < 0) { sp.width = -sp.width; sp.flags |= 1; }
            c = *++fmt;
        } else {
            while ((u32)(c - '0') < 10) { sp.width = sp.width * 10 - '0' + c; c = *++fmt; }
        }
        if (c == '.') {
            c = *++fmt;
            if (c == '*') { sp.prec = va_arg(ap, s32); c = *++fmt; }
            else while ((u32)(c - '0') < 10) { sp.prec = sp.prec * 10 - '0' + c; c = *++fmt; }
            if (sp.prec >= 0) sp.flags |= 0x10;
        }
        if (sp.flags & 1) sp.flags &= ~8;
        s = buf + 0x200;
        for (;;) {
            if (c == 'h') sp.flags |= 0x20;
            else if (c == 'l') sp.flags |= 0x40;
            else if (c == 'L') sp.flags |= 0x80;
            else break;
            c = *++fmt;
        }
        switch (c) {
        case 'd': case 'i':
            v = va_arg(ap, s32);
            if (sp.flags & 0x20) v = (s16)v;
            if ((s32)v < 0) { v = -v; SIGN(sp) = '-'; }
            else if (sp.flags & 2) SIGN(sp) = '+';
            goto dec;
        case 'u':
            v = va_arg(ap, u32);
            if (sp.flags & 0x20) v &= 0xFFFF;
            SIGN(sp) = 0;
        dec:
            if (!(sp.flags & 0x10)) {
                if (sp.flags & 8) { sp.prec = sp.width; if (SIGN(sp)) sp.prec = sp.width - 1; }
                if (sp.prec <= 0) sp.prec = 1;
            }
            for (n = 0; v; n++) { *--s = v % 10 + '0'; v /= 10; }
            while (n < sp.prec) { *--s = '0'; n++; }
            if (SIGN(sp)) { *--s = SIGN(sp); n++; }
            break;
        case 'o':
            v = va_arg(ap, u32);
            if (sp.flags & 0x20) v &= 0xFFFF;
            if (!(sp.flags & 0x10)) {
                if (sp.flags & 8) sp.prec = sp.width;
                if (sp.prec <= 0) sp.prec = 1;
            }
            for (n = 0; v; n++) { *--s = (v & 7) + '0'; v >>= 3; }
            if ((sp.flags & 4) && n && *s != '0') { *--s = '0'; n++; }
            while (n < sp.prec) { *--s = '0'; n++; }
            break;
        case 'p':
            sp.prec = 8;
            sp.flags |= 0x50;
        case 'X':
            dig = D_80011730;
            goto hex;
        case 'x':
            dig = D_80011744;
        hex:
            v = va_arg(ap, u32);
            if (sp.flags & 0x20) v &= 0xFFFF;
            if (!(sp.flags & 0x10)) {
                if (sp.flags & 8) { sp.prec = sp.width; if (sp.flags & 4) sp.prec = sp.width - 2; }
                if (sp.prec <= 0) sp.prec = 1;
            }
            for (n = 0; v; n++) { *--s = dig[v & 0xF]; v >>= 4; }
            while (n < sp.prec) { *--s = '0'; n++; }
            if (sp.flags & 4) { *--s = c; *--s = '0'; n += 2; }
            break;
        case 'c':
            *--s = va_arg(ap, s32);
            n = 1;
            break;
        case 's':
            s = va_arg(ap, char *);
            if (sp.flags & 4) {
                n = *(u8 *)s++;
                if ((sp.flags & 0x10) && sp.prec < n) n = sp.prec;
            } else if (!(sp.flags & 0x10)) {
                n = strlen(s);
            } else {
                char *e = memchr(s, 0, sp.prec);
                n = e ? e - s : sp.prec;
            }
            break;
        case 'n': {
            void *p = va_arg(ap, void *);
            if (sp.flags & 0x20) *(s16 *)p = cnt;
            else *(s32 *)p = cnt;
            continue;
        }
        default:
            if (c != '%') goto done;
            out[cnt++] = c;
            continue;
        }
        if (n < sp.width && !(sp.flags & 1)) {
            do { out[cnt++] = ' '; } while (n < --sp.width);
        }
        memmove(out + cnt, s, n);
        cnt += n;
        while (n < sp.width) { out[cnt++] = ' '; n++; }
    }
done:
    out[cnt] = 0;
    return cnt;
}
