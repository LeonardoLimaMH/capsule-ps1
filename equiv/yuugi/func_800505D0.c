#include "common.h"

extern void *D_80096660[];
extern void func_80050680();
extern void func_800506E8();

s32 func_800505D0(void) {
    func_8004FEDC();
    D_80096660[1] = (void *)func_80050680;
    D_80096660[2] = (void *)func_800506E8;
    D_80096660[0] = 0;
    D_80096660[3] = 0;
    func_8005077C(1, D_80096660);
    func_8005076C(1, D_80096660);
    func_8004FEEC();
    return 1;
}
