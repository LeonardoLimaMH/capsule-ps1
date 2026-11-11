#include "common.h"
#include "ghidra.h"
#include "yuugi.h"

void func_8001A784(s32 arg0, s32 ***arg1, s32 arg2) {
    s32 i = 0;
    s32 *q;
    register u32 j asm("t1");
    register s32 d;
    register s32 off asm("t0");
    register s32 *x;
    register s32 *end asm("t3");
    if (*arg1 != 0) {
        end = (s32 *)-1;
        d = arg0 - arg2;
        while (1) {
            q = (*arg1)[i];
            j = 0;
            if (q == end) break;
            q[2] += d;
            if ((u32)q[0] != 0) {
                off = j;
                do {
                    x = (s32 *)(q[2] + off);
                    j++;
                    x[1] += d;
                    x[2] += d;
                    off += 0x24;
                } while (j < (u32)q[0]);
            }
            i++;
        }
    }
}
