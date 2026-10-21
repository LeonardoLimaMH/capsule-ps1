#include "common.h"
#include "yuugi.h"

s32 PadRead(void) {
    extern s32 D_80094A50[];
    func_8004FE9C();
    return ~(*D_80094A50);
}
