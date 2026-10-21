#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libds_dsready", DsStartReadySystem);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libds_dsready", DsEndReadySystem);

s32 DsReadySystemMode(s32 arg0) {
    extern s32 D_800733E8[];
    s32 temp_v0;

    temp_v0 = (*D_800733E8);
    (*D_800733E8) = arg0;
    return temp_v0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libds_dsready", func_80047A78);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libds_dsready", func_80047D54);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libds_dsready", func_80047E0C);
