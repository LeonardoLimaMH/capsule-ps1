#include "common.h"

s32 func_800BEA90(void) {
    extern u16 D_80100D44[];
    extern u16 D_80100D46[];
    extern u16 D_800F061A[];
    extern u16 D_800F0624[];
    extern u8 *D_800EF300[];
    u16 c;
    if (*D_80100D46 == 0) {
        return 1;
    }
    c = *D_80100D44;
    if (c != 0) {
        u16 v = *(u16 *)(*D_800EF300 + 0x4A) + D_800F0624[*D_80100D46];
        *D_80100D44 = c - 1;
        *(u16 *)(*D_800EF300 + 0x4A) = v;
    } else {
        *D_80100D44 = D_800F061A[*D_80100D46];
        *D_80100D46 = *D_80100D46 - 1;
        if (*D_80100D46 == 0) {
            func_80034AB0(0x7F);
        }
    }
    return 0;
}
