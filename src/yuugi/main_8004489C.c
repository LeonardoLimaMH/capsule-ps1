#include "common.h"
#include "yuugi.h"

extern volatile s32 D_80094C10[];
extern s32 D_80094C0C[];
extern s32 D_80094C08[];
extern s32 D_80073084[];
extern s32 D_80073088[];
extern s32 D_800730A8[];
extern s32 D_80072F24[];
#define D_80094C10 (*D_80094C10)
#define D_80094C0C (*D_80094C0C)
#define D_80094C08 (*D_80094C08)
#define D_80073084 (*D_80073084)
#define D_80073088 (*D_80073088)
#define D_800730A8 (*D_800730A8)
#define D_80072F24 (*D_80072F24)
extern void CD_init(void);
extern void CD_initvol(void);
extern void func_80044934(void);
extern void func_8004795C(s32);
extern void func_8004506C(void);
extern void func_80045680(void);
extern void func_80044D2C(void);
extern void VSyncCallbacks(s32, void *);
void func_8004489C(void) {
    CD_init();
    CD_initvol();
    D_80094C10 = 0;
    D_80094C0C = *(volatile s32 *)&D_80094C10;
    D_80094C08 = 0;
    func_80044934();
    func_8004795C(0);
    D_80073084 = (s32)func_8004506C;
    D_80073088 = (s32)func_80045680;
    VSyncCallbacks(0, func_80044D2C);
    D_800730A8 = 1;
    D_80072F24 = 1;
}
