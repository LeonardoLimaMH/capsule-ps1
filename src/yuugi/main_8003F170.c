#include "common.h"
#include "yuugi.h"

void SpuStart(void) {
    extern s32 D_80071520[], D_80071588[];
    extern void _spu_FiDMA(void);
    s32 temp_v0;

    if (*D_80071588 == 0) {
        *D_80071588 = 1;
        func_8004FEDC();
        _SpuDataCallback(_spu_FiDMA);
        temp_v0 = func_8004FE3C(0xF0000009, 0x20, 0x2000, 0);
        *D_80071520 = temp_v0;
        func_8004FE7C(temp_v0);
        func_8004FEEC();
    }
}
