#include "common.h"

void func_8009D5E8(void) {
    extern s32 D_8008EDF0[];
    extern s32 D_800EBDE4[];
    extern s32 D_800EBFF0[];
    extern s32 D_800EBFF4[];
    if ((*D_8008EDF0) & 0x100) {
        func_80012508();
    }
    func_8001DB8C("TestOpdIndex=%d\n", (*D_800EBDE4));
    func_8001DB8C("Rright:         set    anim \n");
    func_8001DB8C("Lup & Ldown:    select anim \n");
    func_8001DB8C("Lleft&Lright:select pattern \n");
    func_8001DB8C("anim index = %d \n", (*D_800EBFF0));
    func_8001DB8C("patt index = %d \n", (*D_800EBFF4));
}
