#include "ghidra.h"
#include "matching.h"
#include "common.h"

s32 func_800A070C(u8 *arg0) {
    extern s32 D_80065310[];
    s32 ret;
    u8 bca;
    u8 a1;
    s32 off;
    s32 val;

    if (*(arg0 + arg0[0xBCA] + 0x5E4) != 0xFF) {
        if (func_800202A4(5) == 0) {
            ret = func_800CB10C(arg0, arg0 + 0x5D0, arg0[0xBCA]);
            if (ret == 2) {
                bca = arg0[0xBCA];
                a1 = *(arg0 + bca + 0x5E4);
                if (a1 >= 8U) {
                    off = 0;
                } else {
                    off = bca * 0x980 - 0x5580;
                }
                val = *(s32 *)(D_80065310[a1] + off + 0x2C);
                *(s32 *)(arg0 + 0x14) = val + off;
                return 1;
            }
            if (ret == 0) {
                bca = arg0[0xBCA];
                a1 = *(arg0 + bca + 0x5E4);
                if (a1 >= 8U) {
                    off = 0;
                } else {
                    off = bca * 0x980 - 0x5580;
                }
                val = *(s32 *)(D_80065310[a1] + off + 0x30);
                *(s32 *)(arg0 + 0x14) = val + off;
                return 1;
            }
        }
    }
    return 0;
}
