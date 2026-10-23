#include "common.h"

void slpm_InitPAD(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    extern s32 D_801208B4[];
    slpm__remove_ChgclrPAD();
    func_80112014();
    slpm__patch_pad();
    func_80112024();
    func_80111B54(0);
    func_80111E78();
    func_80111FD4(arg0, arg1, arg2, arg3);
    (*D_801208B4) = 1;
}
