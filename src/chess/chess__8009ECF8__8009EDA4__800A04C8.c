#include "ghidra.h"
#include "matching.h"
#include "common.h"


s32 func_800A04C8(u8 *arg0, s32 arg1) {
    extern s32 D_80065310[];
    register u8 *p asm("a2") = arg0 + arg1;
    u32 t = p[0x5E4];
    u32 u;
    s32 off;
    if (t != 0xFF) {
        u = t;
        if (u >= 8U) {
            off = 0;
        } else {
            off = arg1 * 0x980 - 0x5580;
        }
        *(s32 *) (arg0 + 0x14) = *(s32 *) (D_80065310[u] + off + 4) + off;
        return 1;
    }
    return 0;
}







