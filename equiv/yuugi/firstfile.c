#include "common.h"

extern char D_80096638[];
extern s32 D_80096630;
extern void func_800502A8();
extern void *func_8005041C();
extern int strcmp();

void *firstfile(char *name, void *de) {
    char *s = name;
    char *d = D_80096638;
    u8 *p, *end;
    s32 found;

    while (*(s8 *)s > 0x3A) {
        *d++ = *s++;
    }
    *d = 0;
    p = *(u8 **)0x150;
    end = p + (*(u32 *)0x154 / 80) * 80;
    for (; p < end; p += 0x50) {
        if (*(char **)p != 0 && strcmp(*(char **)p, D_80096638) == 0) {
            D_80096630 = *(s32 *)(p + 0x34);
            found = 1;
            goto next;
        }
    }
    found = 0;
next:
    if (!found) {
        return 0;
    }
    p = *(u8 **)0x150;
    end = p + (*(u32 *)0x154 / 80) * 80;
    for (; p < end; p += 0x50) {
        if (*(char **)p != 0 && strcmp(*(char **)p, D_80096638) == 0) {
            *(void **)(p + 0x34) = func_800502A8;
            break;
        }
    }
    return func_8005041C(name, de);
}
