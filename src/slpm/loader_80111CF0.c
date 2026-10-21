#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80111CF0", slpm_PAD_init);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80111CF0", slpm_InitPAD);

s32 slpm_StartPAD(void) {
    func_80111FE4();
    func_80111B54(0);
    slpm_EnablePAD();
    return 1;
}
