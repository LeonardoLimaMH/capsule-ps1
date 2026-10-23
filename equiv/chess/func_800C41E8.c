#include "common.h"

void func_800C41E8(void) {
    extern u16 D_8008EE4C[];
    extern s8 D_8008EE6A[];
    switch ((*D_8008EE4C)) {
    case 0:
        func_800C3944();
        func_800125D8();
        return;
    case 1:
        func_800C3B54();
        return;
    case 2:
        func_800C3D9C();
        return;
    case 3:
        func_800C3EC4();
        return;
    case 4:
        func_80033974(0x8000);
        (*D_8008EE6A) = 0;
        func_80013668();
        func_8001611C(0x1000);
        func_8001E310();
        func_80012508();
        /* fallthrough */
    default:
        return;
    }
}
