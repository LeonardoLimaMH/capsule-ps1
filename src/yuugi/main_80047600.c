#include "common.h"
#include "yuugi.h"

extern s32 D_800733A0[];
extern s32 D_800733B4[];
extern s32 D_800733BC;
extern s32 D_800733C0;
extern s32 VSync();
extern void func_800478D0(void);
extern void DsFlush();
extern void ER_clear();
extern s32 DsDataCallback();
extern void func_80044BC4();
extern s32 DsCommand();
extern u8 DsReady();

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80047600", func_80047600);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80047600", func_80047778);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80047600", func_8004784C);

s32 func_800478BC(s32 arg0) {
    extern s32 D_800733C0;
    s32 temp_v0;

    temp_v0 = D_800733C0;
    D_800733C0 = arg0;
    return temp_v0;
}

extern s32 D_800733A0[];
extern s32 D_800733B4[];
extern s32 D_800733BC;
extern s32 D_800733C0;
extern s32 VSync();
extern void func_800478D0(void);
extern void DsFlush();
extern void ER_clear();
extern s32 DsDataCallback();
extern void func_80044BC4();
extern s32 DsCommand();
extern u8 DsReady();

void func_800478D0(void) {
    s32 *d = &D_800733BC;

    if (D_800733BC == 1) {
        DsFlush();
        ER_clear();
        if (d[-5] & 1) {
            DsDataCallback(d[-3]);
        }
        func_80044BC4(1, 0);
        DsCommand(9, 0, 0, -1);
        D_800733BC = 0;
    }
}
