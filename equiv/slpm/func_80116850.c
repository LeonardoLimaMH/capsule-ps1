#include "common.h"

void func_80116850(void) {
    extern int func_80115D34();
    slpm_DMACallback(2, &func_80115D34);
}
