#include "common.h"

extern char D_80110858[];
extern s32 slpm__putchar();
extern s32 slpm__putchar_flash();

s32 slpm_puts(char *s) {
    if (s == 0) {
        s = D_80110858;
    }
    while (*s != 0) {
        slpm__putchar((s32)(s8)*s++);
    }
    return slpm__putchar_flash();
}
