#include "common.h"

s32 rsin(s32 arg0) {
    if (arg0 >= 0) {
        return sin_1(arg0 & 0xFFF);
    }
    return -sin_1(-arg0 & 0xFFF);
}
