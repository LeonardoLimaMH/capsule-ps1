#include "common.h"
#include "yuugi.h"

void func_80042984(s32 arg0, s32 arg1) {
    extern volatile s32 D_80072E4C;
    extern char D_80010CE0[];
    volatile s32 count;
    count = arg1 << 15;
    while (D_80072E4C < arg0) {
        count = count - 1;
        if (count == -1) {
            puts(D_80010CE0);
            func_8004FF7C(0);
            func_8004FF8C(3, 0);
            return;
        }
    }
}
