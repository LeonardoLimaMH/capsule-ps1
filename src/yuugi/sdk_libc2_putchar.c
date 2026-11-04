#include "common.h"
#include "yuugi.h"

int _putchar(int c) {
    extern s32 D_80078B0C[];
    extern s32 D_80078B10[];
    extern s8 D_80078A7D[];
    extern u8 D_80096610[];
    extern void func_8004FF2C(s32, void *);
    s32 r;

    if ((s8)c == '\t') {
        do {
            _putchar(0x20);
            r = 0;
        } while ((D_80078B0C[0] & 7) != 0);
    } else {
        if ((s8)c == '\n') {
            _putchar(0xD);
            D_80078B0C[0] = 0;
        } else if ((D_80078A7D[c & 0xFF] & 0x97) != 0) {
            D_80078B0C[0] = D_80078B0C[0] + 1;
        }
        if (D_80078B10[0] >= 0x20) {
            func_8004FF2C(1, D_80096610);
            D_80078B10[0] = 0;
        }
        D_80096610[D_80078B10[0]] = c;
        r = D_80078B10[0] + 1;
        D_80078B10[0] = r;
    }
    return r;
}
