#include "common.h"
#include "ghidra.h"
#include "yuugi.h"

void func_8001A6B8(s32 arg0, s32 **arg1, s32 arg2) {
    s32 *p = *arg1;
    s32 d;

    if (*p != -1) {
        d = arg0 - arg2;
        do {
            *p += d;
            p++;
        } while (*p != -1);
    }
}
