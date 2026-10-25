#include "common.h"

extern void func_80011AFC();

void func_80011A60(s32 mode) {
    if (mode == 0) {
        func_80033514(0x9858, 0x3138);
    } else {
        func_80033604();
    }
    VSyncCallback(func_80011AFC);
}
