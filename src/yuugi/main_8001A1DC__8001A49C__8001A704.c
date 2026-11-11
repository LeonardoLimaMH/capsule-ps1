#include "common.h"
#include "ghidra.h"
#include "yuugi.h"

void func_8001A704(s32 arg0, s32 ***arg1, s32 arg2) {
    register s32 i asm("t1");
    register s32 *q asm("t0");
    register u32 j asm("a3");
    register s32 *p asm("v1");
    register s32 end asm("t2");

    if (*arg1 != 0) {
        i = 0;
        end = -1;
        arg0 -= arg2;
        while (1) {
            q = (*arg1)[i];
            j = 0;
            if ((s32)q == end) break;
            q[1] += arg0;
            if (q[2] != 0) {
                p = q;
                do {
                    j++;
                    p[3] += arg0;
                    p++;
                } while (j < (u32)q[2]);
            }
            i++;
        }
    }
}
