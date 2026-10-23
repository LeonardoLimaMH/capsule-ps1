#include "common.h"

void func_8009D3D0(void) {
    extern u16 D_8008EE44[];
    switch ((*D_8008EE44)) {
    case 0:
        func_8009D460();
        return;
    case 1:
        func_8009D568();
        return;
    case 2:
        func_8009D570();
        return;
    case 3:
        func_8009D5E8();
        return;
    case 4:
        func_8009D678();
        /* fallthrough */
    default:
        return;
    }
}
