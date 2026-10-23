#include "common.h"

void func_800122A4(void) {
    extern u16 D_8008EE4C[];
    extern int func_80012578();
    switch ((*D_8008EE4C)) {                           /* irregular */
    case 0:
        func_800125D8();
        return;
    case 1:
        if (func_80019654() != 0) {
            func_8001A480(4, 0x80097800);
            func_80019F30(0x110004, func_80012578);
            func_80012578();
        }
        return;
    }
}
