#include "ghidra.h"
#include "common.h"

s32 func_800DD230(u8 *arg0) {
    extern s16 D_80069BBE[];
    return (arg0[0x25] + (*D_80069BBE + 256) / 512 + 8) % 8;
}

