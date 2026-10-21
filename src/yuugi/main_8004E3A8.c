#include "common.h"
#include "yuugi.h"

void StartCARD(void) {
    func_8004FEDC();
    func_8004E41C();
    func_8004FF7C(0);
    func_8004FEEC();
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004E3A8", StopCARD);
