#include "common.h"
#include "yuugi.h"

void SpuQuit(void) {
    extern s32 D_80071520;
    extern s32 D_80071588;
    extern s32 D_800715D0;
    extern s32 D_800715D4;
    if (D_80071588 == 1) {
        D_80071588 = 0;
        func_8004FEDC();
        D_800715D0 = 0;
        D_800715D4 = 0;
        _SpuDataCallback(0);
        func_8004FE4C(D_80071520);
        func_8004FE8C(D_80071520);
        func_8004FEEC();
    }
}
