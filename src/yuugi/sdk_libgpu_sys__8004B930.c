#include "common.h"
#include "yuugi.h"

void func_8004B930(s32 arg0) {
    extern s32 * D_80078A24[];
    extern s32 * D_80078A28[];
    extern s32 * D_80078A2C[];
    extern s32 * D_80078A30[];
    *(*D_80078A24) = 0x04000002;
    *(*D_80078A28) = arg0;
    *(*D_80078A2C) = 0;
    *(*D_80078A30) = 0x01000401;
}

s32 func_8004B978(s32 arg0) {
    extern s32 * D_80078A20[];
    extern s32 * D_80078A24[];
    *(*D_80078A24) = arg0 | 0x10000000;
    return *(*D_80078A20) & 0xFFFFFF;
}
