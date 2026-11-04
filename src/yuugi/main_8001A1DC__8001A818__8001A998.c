#include "common.h"
#include "yuugi.h"

#include "ghidra.h"

void func_8001A998(void *buf, s32 n) {
    u8 *p = buf;
    s32 i;
    u32 *w;
    i = 0;
    if (n < 8) {
        if (n > 0) {
            do {
                p[i] = 0;
                i++;
            } while (i < n);
        }
    } else {
        do {
            p[i] = 0;
            p[i + n - 4] = 0;
            i++;
        } while (i < 4);
        if ((u32)p & 3) {
            w = (u32 *)((((u32)p >> 2) << 2) + 4);
        } else {
            w = (u32 *)p;
        }
        i = ((u32)(p + n) - (u32)w) / 4 - 1;
        if (i >= 0) {
            do {
                w[i] = 0;
                i--;
            } while (i >= 0);
        }
    }
}
