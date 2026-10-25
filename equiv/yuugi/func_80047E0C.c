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
