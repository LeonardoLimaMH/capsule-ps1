#include "common.h"
#include "yuugi.h"

void InitCARD(s32 arg0) {
    s32 var_s0;

    var_s0 = arg0;
    func_8004FF7C(0);
    func_8004FEDC();
    if (ReadInitPadFlag() == 0) {
        var_s0 = 0;
    }
    func_8004E40C(var_s0);
    _copy_memcard_patch();
    _patch_card();
    _patch_card2();
    func_8004FEEC();
}
