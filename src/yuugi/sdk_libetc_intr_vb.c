#include "common.h"
#include "yuugi.h"

#include "common.h"

extern s32 *D_80072E50;
extern s32 D_80072E4C;
extern u8 D_80072E2C[];
extern void func_80043134();
extern void func_800431A0();
extern void func_800431CC();

void *startIntrVSync(void) {
    *D_80072E50 = 0x107;
    D_80072E4C = 0;
    func_800431CC(D_80072E2C, 8);
    InterruptCallback(0, func_80043134);
    return (void *)func_800431A0;
}
