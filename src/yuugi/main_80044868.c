#include "common.h"
#include "yuugi.h"

void func_80044868(s32 arg0) {
    extern M2C_UNK (*D_80094C58)(s32);
    if (D_80094C58 != NULL) {
        D_80094C58(arg0 & 0xFF);
    }
}
