#include "common.h"
#include "yuugi.h"

extern volatile s32 D_80094C10;
extern s32 D_80094C0C;
extern s32 D_80094C08;
extern s32 D_80073084[];
extern s32 D_80073088[];
extern s32 D_800730A8[];
extern s32 D_80072F24[];
void CD_init(void);
void CD_initvol(void);
void func_80044934(void);
void func_8004795C(s32);
void func_8004506C(void);
void func_80045680(void);
void func_80044D2C(void);
void VSyncCallbacks(s32, void (*)(void));
void func_8004489C(void) {
    CD_init();
    CD_initvol();
    D_80094C10 = 0;
    D_80094C0C = D_80094C10;
    D_80094C08 = 0;
    func_80044934();
    func_8004795C(0);
    D_80073084[0] = (s32)func_8004506C;
    D_80073088[0] = (s32)func_80045680;
    VSyncCallbacks(0, func_80044D2C);
    D_800730A8[0] = 1;
    D_80072F24[0] = 1;
}
