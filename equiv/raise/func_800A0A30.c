#include "common.h"

extern void func_800A0D88(s32, s32);
extern s32 func_800A0BB4(void);

s32 func_800A0A30(void) {
    func_800A0D88(0, 0);
    return func_800A0BB4();
}
