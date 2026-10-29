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

#include "common.h"

void PAD_init(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    extern s32 D_80078B5C;
    _remove_ChgclrPAD();
    func_8004FEDC();
    _patch_pad();
    func_8004FEEC();
    func_8004FF7C(0);
    func_800505D0();
    func_8005075C(arg0, arg1, arg2, arg3);
    D_80078B5C = 1;
}

#include "common.h"

void InitPAD(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    extern s32 D_80078B5C;
    _remove_ChgclrPAD();
    func_8004FEDC();
    _patch_pad();
    func_8004FEEC();
    func_8004FF7C(0);
    func_800505D0();
    func_8005072C(arg0, arg1, arg2, arg3);
    D_80078B5C = 1;
}

s32 StartPAD(void) {
    func_8005073C();
    func_8004FF7C(0);
    EnablePAD();
    return 1;
}
