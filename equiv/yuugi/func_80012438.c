#include "common.h"

void func_80012438(void) {
    extern u16 D_8008EE4C[];
    switch ((*D_8008EE4C)) {                           /* irregular */
    case 0:
        func_8002009C(0);
        func_800125D8();
        return;
    case 1:
        if (func_80019654() != 0) {
            func_80012578();
        }
        return;
    }
}
