#include "common.h"

s32 func_8004B038(s32 arg0, s32 arg1) {
    return ((arg1 & 0x7FF) << 0xB) | ((arg0 & 0x7FF) | 0xE5000000);
}
