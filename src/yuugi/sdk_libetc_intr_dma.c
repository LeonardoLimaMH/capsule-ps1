#include "common.h"
#include "yuugi.h"

#include "common.h"

extern s32 *D_80072E5C;
extern u8 D_80072E60[];
extern void func_80043248();
extern void func_800433C8();

void *startIntrDMA(void) {
    func_80043474(D_80072E60, 8);
    *D_80072E5C = 0;
    InterruptCallback(3, func_80043248);
    return func_800433C8;
}
