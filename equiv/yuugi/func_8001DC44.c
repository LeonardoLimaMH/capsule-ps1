#include "common.h"

extern u8 D_8008ED68[];
extern u8 *func_8001DF7C(), *func_8001E044();

s32 func_8001DC44(s32 x, s32 y, s32 line, s32 attr, u8 *fmt, s32 *args, s32 flag) {
    u8 *D = D_8008ED68;
    u8 *font = *(u8 **)(D + (s16)line * 4 + 0x518);
    u16 *o;
    u8 *out, *str;
    s32 hi, v, w, pad;
    u8 c, c2;

    if (font == 0) {
        return (s32)(D + (s16)line * 4);
    }
    o = *(u16 **)(D + 0x938);
    hi = attr & ~0xFF;
    o[0] = line;
    o[1] = x;
    o[2] = y;
    o[3] = hi + ((attr & 0xFF) << 4);
    out = (u8 *)(o + 4);
    while ((c = *fmt) != 0) {
        if (c == '%') {
            fmt++;
            c2 = *fmt;
            switch (c2) {
            case 's':
                str = (u8 *)*args;
                while (*str != 0) {
                    *out++ = *str++;
                }
                args++;
                break;
            case 'd':
                out = func_8001E044(*args++, out, 0);
                break;
            case 'e':
                v = *args;
                if (v < 0) {
                    v = -v;
                    *out++ = '-';
                }
                out = func_8001E044(v, out, 0);
                args++;
                break;
            case 'x':
                out = func_8001DF7C(*args++, out, 0);
                break;
            case 'y':
                v = *args;
                if (v < 0) {
                    v = -v;
                    *out++ = '-';
                }
                out = func_8001DF7C(v, out, 0);
                args++;
                break;
            case '.':
                fmt++;
                w = *fmt & 0xF;
                fmt++;
                if (*fmt == 'd') {
                    out = func_8001E044(*args++, out, w);
                } else if (*fmt == 'x') {
                    out = func_8001DF7C(*args++, out, w);
                }
                break;
            default:
                fmt++;
                continue;
            }
        } else if (c == '\n') {
            if (flag == 1) {
                (*(s32 *)(D + 0x93C))++;
            }
            if (fmt[1] == 0) {
                break;
            }
            *out++ = 0xFF;
            for (pad = 4 - ((u32)out & 3); pad != 0; pad--) {
                *out++ = 0xFF;
            }
            *(u16 *)out = line;
            *(u16 *)(out + 2) = x;
            y += *(u16 *)(font + 0x26);
            *(u16 *)(out + 6) = hi + ((attr & 0xFF) << 4);
            *(u16 *)(out + 4) = y;
            out += 8;
        } else {
            *out++ = c;
        }
        fmt++;
    }
    *out++ = 0xFF;
    for (pad = 4 - ((u32)out & 3); pad != 0; pad--) {
        *out++ = 0xFF;
    }
    *(u8 **)(D + 0x938) = out;
    return 0;
}
