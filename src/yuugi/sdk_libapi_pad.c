#include "common.h"
#include "yuugi.h"

extern s32 D_80078B5C;

void SetInitPadFlag(s32 arg0) {
    D_80078B5C = arg0;
}

s32 ReadInitPadFlag(void) {
    extern s32 D_80078B5C;
    return D_80078B5C;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libapi_pad", PAD_init);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libapi_pad", InitPAD);

s32 StartPAD(void) {
    func_8005073C();
    func_8004FF7C(0);
    EnablePAD();
    return 1;
}
