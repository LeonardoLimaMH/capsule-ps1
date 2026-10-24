#include "common.h"

s32 ReadTIM(s32 arg0) {
    extern s32 D_800965C0;
    s32 temp_v0;

    temp_v0 = func_8004CB48(D_800965C0, arg0);
    if (temp_v0 != -1) {
        D_800965C0 += temp_v0 * 4;
        return arg0;
    }
    return 0;
}
