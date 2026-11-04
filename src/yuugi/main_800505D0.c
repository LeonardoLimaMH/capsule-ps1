#include "common.h"
#include "yuugi.h"

extern void *D_80096664[];
extern s32 D_80096660[];
extern s32 D_8009666C[];
extern s32 func_80050680(void);
extern s32 func_800506E8(void);

s32 func_800505D0(void) {
    void **p;
    func_8004FEDC();
    D_80096664[0] = (void *)func_80050680;
    D_80096664[1] = (void *)func_800506E8;
    p = D_80096664 - 1;
    ((s32 *)&D_80096660)[0] = 0;
    ((s32 *)&D_8009666C)[0] = 0;
    func_8005077C(1, p);
    func_8005076C(1, p);
    func_8004FEEC();
    return 1;
}
