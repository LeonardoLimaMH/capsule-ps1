#include "common.h"

void func_800CC868(void *arg0) {
    extern s16 D_80078C20[];
    extern u16 D_8008EE44[];
    if (((((u32) M2C_FIELD(arg0, u32 *, 0x34) >> 8) & 1) != (*D_80078C20)) || ((*D_8008EE44) == 0x41)) {
        func_80013920();
        return;
    }
    func_800CC5D4();
}
