#include "common.h"
#include "yuugi.h"

void StopPAD(void) {
    extern s32 D_80078B5C[];
    DisablePAD();
    func_8005074C();
    func_80050648();
    (*D_80078B5C) = 0;
}
