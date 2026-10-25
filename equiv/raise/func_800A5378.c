#include "common.h"

extern void func_800A5CF8(s32, s32);
extern s32 func_800A5954(void);

s32 func_800A5378(void) {
    func_800A5CF8(0, 0);
    return func_800A5954();
}
