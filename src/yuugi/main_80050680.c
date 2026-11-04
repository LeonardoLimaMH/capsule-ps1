#include "common.h"
#include "yuugi.h"

s32 func_80050680(void) {
    typedef struct {
        u8 _p[0xA];
        s16 unkA;
    } S_80078B60;
    extern S_80078B60 *D_80078B60[];
    volatile s32 i[4];

    D_80078B60[0]->unkA = 0;
    i[0] = 10;
    while (--i[0] != -1) {
    }
    return 0;
}

s32 func_800506E8(void) {
    typedef struct {
        s32 field0;
        s32 field4;
    } S_80078B64;
    extern S_80078B64 *D_80078B64;
    s32 var_v0;

    var_v0 = 0;
    if (D_80078B64->field4 & 1) {
        var_v0 = 1;
        if (!(D_80078B64->field0 & 1)) {
            var_v0 = 0;
        }
    }
    return var_v0;
}
