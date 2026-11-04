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

#include "common.h"

extern s32 D_800733CC;
extern void func_80047E84();
extern s32 func_80044B30();
extern s32 func_80044B20();
extern s32 func_80044B4C();
extern s32 DsPosToInt();

void func_80047E0C(void) {
    s32 a, b;

    DsReadyCallback(0);
    D_800733CC = DsPosToInt(func_80044B30());
    a = func_80044B20() & 0xFF;
    b = func_80044B30();
    DsPacket(a, b, func_80044B4C() & 0xFF, func_80047E84, -1);
}
