#include "ghidra.h"
#include "matching.h"
#include "common.h"

s32 func_800A0850(u8 *arg0, u32 arg1) {
    extern s32 D_80065310[];
    u8 *p = arg0 + arg1;
    u32 t;
    s32 off;
    s32 val;

    if (p[0x5E4] != 0xFF) {
        if (arg1 == arg0[0xBCA]) {
            t = p[0x5E4];
            if (t >= 8U) {
                off = 0;
            } else {
                off = arg1 * 0x980 - 0x5580;
            }
            val = *(s32 *)(D_80065310[t] + off + 0xAC) + off;
        } else {
            t = p[0x5E4];
            if (t >= 8U) {
                off = 0;
            } else {
                off = arg1 * 0x980 - 0x5580;
            }
            val = *(s32 *)(D_80065310[t] + off + 0xB0) + off;
        }
        *(s32 *)(arg0 + 0x14) = val;
        return 1;
    }
    return 0;
}
