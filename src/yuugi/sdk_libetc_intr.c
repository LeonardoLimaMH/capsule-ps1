#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libetc_intr", ResetCallback);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libetc_intr", InterruptCallback);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libetc_intr", DMACallback);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libetc_intr", VSyncCallback);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libetc_intr", VSyncCallbacks);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libetc_intr", StopCallback);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libetc_intr", RestartCallback);

u16 CheckCallback(void) {
    extern u16 D_80071D86[];
    return (*D_80071D86);
}

u16 GetIntrMask(void) {
    extern u16 * D_80072E14[];
    return *(*D_80072E14);
}

u16 SetIntrMask(u16 arg0) {
    extern u16 * D_80072E14[];
    u16 temp_v0;

    temp_v0 = *(*D_80072E14);
    *(*D_80072E14) = arg0;
    return temp_v0;
}
