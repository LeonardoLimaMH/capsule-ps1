#include "common.h"

extern s32 D_80094C10;
extern s32 D_80094C0C;
extern s32 D_80094C08;
extern void *D_80073084;
extern void *D_80073088;
extern s32 D_800730A8;
extern s32 D_80072F24;
extern void func_8004506C();
extern void func_80045680();
extern void func_80044D2C();

void func_8004489C(void) {
    CD_init();
    CD_initvol();
    D_80094C10 = 0;
    D_80094C0C = D_80094C10;
    D_80094C08 = 0;
    func_80044934();
    func_8004795C(0);
    D_80073084 = (void *)func_8004506C;
    D_80073088 = (void *)func_80045680;
    VSyncCallbacks(0, func_80044D2C);
    D_800730A8 = 1;
    D_80072F24 = 1;
}
