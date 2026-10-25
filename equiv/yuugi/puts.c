#include "common.h"

extern char D_80011810[];
extern s32 _putchar();
extern s32 _putchar_flash();

s32 puts(char *s) {
    if (s == 0) {
        s = D_80011810;
    }
    while (*s != 0) {
        _putchar((s32)(s8)*s++);
    }
    return _putchar_flash();
}
