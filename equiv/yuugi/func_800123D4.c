#include "common.h"

extern u16 D_8008EE4C;
extern void func_80011ED4();

void func_800123D4(void) {
    if (D_8008EE4C == 0) {
        func_800125D8();
    } else if (D_8008EE4C == 1) {
        func_80019F30(1, func_80011ED4);
        func_80012578();
    }
}
