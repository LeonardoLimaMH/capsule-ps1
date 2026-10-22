#include "common.h"
#include "yuugi.h"

void StartCARD(void) {
    func_8004FEDC();
    func_8004E41C();
    func_8004FF7C(0);
    func_8004FEEC();
}

void StopCARD(void) {
    func_8004E42C();
    _ExitCard();
}
