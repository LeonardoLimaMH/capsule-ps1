#include "common.h"

extern u32 D_8008ED80;

void func_80015A74(void) {
    if ((D_8008ED80 / 40) & 1) {
        func_80020688(-0x28, -8, 0x50, 0x10, 0x3A0, 0x50, 0x3F0, 0x172, 0x80, 0x80, 0x80, 0, 0, 0);
    }
}
