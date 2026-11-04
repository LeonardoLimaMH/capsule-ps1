#include "common.h"
#include "yuugi.h"

void PadInit(s32 arg0) {
    extern s32 D_80094A60;
    extern s32 D_80094A50;
    D_80094A60 = arg0;
    D_80094A50 = -1;
    ResetCallback();
    PAD_init(0x20000001, &D_80094A50);
    func_8004FF7C(0);
}
